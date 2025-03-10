// Copyright Epic Games, Inc. All Rights Reserved.

#include "FogOfWarHieuPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "FogOfWarHieuCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "MyWall.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AFogOfWarHieuPlayerController::AFogOfWarHieuPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
}

void AFogOfWarHieuPlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	for (int i = 0; i < Max; i++)
		for (int j = 0; j < Max; j++)
		{
			FoW[i][j] = true;
			Change[i][j] = false;
		}

	MyCanvass = Cast<AMyCanvas>(UGameplayStatics::GetActorOfClass(GetWorld(), AMyCanvas::StaticClass()));
}

void AFogOfWarHieuPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (IsValid(GetPawn()))
	{
		OldPosition = NewPosition;
		NewPosition = GetPawn()->GetActorLocation();
	
		if ((NewPosition - OldPosition).Length() > 1.0f)
		{
			int Min_x = 1000000, Min_y = 1000000;
			int Max_x = -100000, Max_y = -1000000;
		
			int h = NewPosition.X;
			int delta = 4;
			h /= 100;
			if (h - delta < Min_x)
				Min_x = h - delta;
			if (h + delta > Max_x)
				Max_x = h + delta;
			int k = NewPosition.Y;
			k /= 100;
			if (k - delta < Min_y)
				Min_y = k - delta;
			if (k + delta > Max_y)
				Max_y = k + delta;

			h = OldPosition.X;
			h /= 100;
			if (h - delta < Min_x)
				Min_x = h - delta;
			if (h + delta > Max_x)
				Max_x = h + delta;
			k = OldPosition.Y;
			k /= 100;
			if (k - delta < Min_y)
				Min_y = k - delta;
			if (k + delta > Max_y)
				Max_y = k + delta;

			Min_x = (Min_x < 1) ? 1 : Min_x;
			Max_x = (Max_x >= Max) ? Max - 1 : Max_x;

			Min_y = (Min_y < 1) ? 1 : Min_y;
			Max_y = (Max_y >= Max) ? Max - 1 : Max_y;
		
			TArray<FHitResult> HitResults;
			GetWorld()->SweepMultiByChannel(HitResults, NewPosition, NewPosition, FQuat::Identity,
				ECC_Visibility, FCollisionShape::MakeSphere(400.f));
			TArray<FMiniEle> MyEles;
			for (auto Hit : HitResults)
			{
				AMyWall* Object = Cast<AMyWall>(Hit.GetActor());
				if (IsValid(Object))
				{
					float Center_X = Object->GetActorLocation().X;
					float Center_Y = Object->GetActorLocation().Y;
					float x1 = NewPosition.X;
					float y1 = NewPosition.Y;
		
					FVector ObstacleScale = Object->GetActorScale();
					FVector ObstacleLocation = Object->GetActorLocation();
					
					float ObstacleWidth = ObstacleScale.Y * 50.f;
					float ObstacleLength = ObstacleScale.X * 50.f;
		
					FVector EndPoint1 = Object->GetActorTransform().TransformPosition({50.f,50.f,0});
					FVector EndPoint2 = Object->GetActorTransform().TransformPosition({-50.f,50.f,0});
					FVector EndPoint3 = Object->GetActorTransform().TransformPosition({50.f,-50.f,0});
					FVector EndPoint4 = Object->GetActorTransform().TransformPosition({-50.f,-50.f,0});
					
					FVector PO = Object->GetActorLocation() - NewPosition; PO.Normalize();
					FVector PA = EndPoint1 - NewPosition; PA.Normalize();
					FVector PB = EndPoint2 - NewPosition; PB.Normalize();
					FVector PC = EndPoint3 - NewPosition; PC.Normalize();
					FVector PD = EndPoint4 - NewPosition; PD.Normalize();
					FVector MaxAngleVector = PA, Point1 = EndPoint1, Point2 = EndPoint1;
					float d2, d3, d4, MaxAngle = FVector::DotProduct(PO, PA);
					d2 = FVector::DotProduct(PO, PB);
					if (d2 < MaxAngle)
					{
						MaxAngle = d2;
						MaxAngleVector = PB;
						Point1 = EndPoint2;
					}
					d3 = FVector::DotProduct(PO, PC);
					if (d3 < MaxAngle)
					{
						MaxAngle = d3;
						MaxAngleVector = PC;
						Point1 = EndPoint3;
					}
					d4 = FVector::DotProduct(PO, PD);
					if (d4 < MaxAngle)
					{
						MaxAngle = d4;
						MaxAngleVector = PD;
						Point1 = EndPoint4;
					}
					
					MaxAngle = FVector::DotProduct(MaxAngleVector, PA);
					d2 = FVector::DotProduct(MaxAngleVector, PB);
					if (d2 < MaxAngle)
					{
						MaxAngle = d2;
						Point2 = EndPoint2;
					}
					d3 = FVector::DotProduct(MaxAngleVector, PC);
					if (d3 < MaxAngle)
					{
						MaxAngle = d3;
						Point2 = EndPoint3;
					}
					d4 = FVector::DotProduct(MaxAngleVector, PD);
					if (d4 < MaxAngle)
					{
						MaxAngle = d4;
						Point2 = EndPoint4;
					}
					DrawDebugLine(GetWorld(), NewPosition, Point1, FColor::Blue, false, 1.0f);
					DrawDebugLine(GetWorld(), NewPosition, Point2, FColor::Blue, false, 1.0f);
					
					float A1, B1, C1;
					A1 = y1 - Point1.Y;
					B1 = Point1.X - x1;
					C1 = - (y1 - Point1.Y) * x1 - (Point1.X - x1) * y1;
			
					float A2, B2, C2;
					A2 = y1 - Point2.Y;
					B2 = Point2.X - x1;
					C2 = - (y1 - Point2.Y) * x1 - (Point2.X - x1) * y1;

					float A3, B3, C3;
					A3 = Point2.Y - Point1.Y;
					B3 = Point1.X - Point2.X;
					C3 = - (Point2.Y - Point1.Y) * Point2.X - (Point1.X - Point2.X) * Point1.Y;
					
					float I1, I2, I3;
					int SignOfCenter = 0, SignOfChar = 0;
					I1 = A1*Center_X + B1*Center_Y + C1;
					I2 = A2*Center_X + B2*Center_Y + C2;
					I3 = A3*NewPosition.X + B3*NewPosition.Y + C3;
					if (I3 > 0)
						SignOfChar = 1;
					else
						SignOfChar = 2;
					
					if (I1 > 0)
					{
						if (I2 > 0)
							SignOfCenter = 1;
						else
							SignOfCenter = 2;
					}
					else
					{
						if (I2 > 0)
							SignOfCenter = 3;
						else
							SignOfCenter = 4;
					}
					MyEles.Add(FMiniEle(Center_X, Center_Y, A1, B1, C1, A2, B2, C2, A3, B3, C3,SignOfCenter,SignOfChar));
				}
			}
			
			float x = -50.f + Min_x * 100.f, y;
			for (int i = Min_x; i <= Max_x; i++)
			{
				x += 100.f;
				y = -50.f + Min_y * 100.f;
				for (int j = Min_y; j <= Max_y; j++)
				{
					y += 100.f;
					float Distance = (x - NewPosition.X) * (x - NewPosition.X) + (y - NewPosition.Y) * (y - NewPosition.Y);
					
					if (Distance < 160000.f)
					{
						if (FoW[i][j])
						{
							Change[i][j] = true;
							FoW[i][j] = false;
						}
						else
						{
							Change[i][j] = false;
						}
					}
					else
					{
						if (!FoW[i][j])
						{
							Change[i][j] = true;
							FoW[i][j] = true;
						}
						else
						{
							Change[i][j] = false;
						}
					}

					for (auto Ele : MyEles)
					{
						float Z1, Z2, Z3;
						int SignOfXY = 0, SignOfZ = 0;
						Z1 = Ele.A1 * x + Ele.B1 * y + Ele.C1;
						Z2 = Ele.A2 * x + Ele.B2 * y + Ele.C2;
						Z3 = Ele.A3 * x + Ele.B3 * y + Ele.C3;
						if (Z3 > 0)
							SignOfZ = 1;
						else
							SignOfZ = 2;
						if (Z1 > 0)
						{
							if (Z2 > 0)
								SignOfXY = 1;
							else
								SignOfXY = 2;
						}
						else
						{
							if (Z2 > 0)
								SignOfXY = 3;
							else
								SignOfXY = 4;
						}
						if (Ele.Sign1 == SignOfXY && Ele.Sign2 != SignOfZ)
						{
							if (!FoW[i][j])
							{
								Change[i][j] = true;
								FoW[i][j] = true;
								break;
							}
							
						}
					}
				
					float brushlocationX = i/100.f + 0.005f;
					float brushlocationY = j/100.f + 0.005f;
				
					if (IsValid(MyCanvass) && Change[i][j])
					{
						if (!FoW[i][j])
							MyCanvass->DrawBrush(BlackTexture, FixedSize, {brushlocationX, brushlocationY});
						else
							MyCanvass->DrawBrush(WhiteTexture, FixedSize, {brushlocationX, brushlocationY});
					
					}
				}
			}
		}
	}
}

void AFogOfWarHieuPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &AFogOfWarHieuPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &AFogOfWarHieuPlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &AFogOfWarHieuPlayerController::OnSetDestinationReleased);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Canceled, this, &AFogOfWarHieuPlayerController::OnSetDestinationReleased);

		// Setup touch input events
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Started, this, &AFogOfWarHieuPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Triggered, this, &AFogOfWarHieuPlayerController::OnTouchTriggered);
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Completed, this, &AFogOfWarHieuPlayerController::OnTouchReleased);
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Canceled, this, &AFogOfWarHieuPlayerController::OnTouchReleased);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AFogOfWarHieuPlayerController::OnInputStarted()
{
	StopMovement();
}

// Triggered every frame when the input is held down
void AFogOfWarHieuPlayerController::OnSetDestinationTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}
	
	// Move towards mouse pointer or touch
	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn != nullptr)
	{
		FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	}
}

void AFogOfWarHieuPlayerController::OnSetDestinationReleased()
{
	// If it was a short press
	if (FollowTime <= ShortPressThreshold)
	{
		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}

	FollowTime = 0.f;
}

// Triggered every frame when the input is held down
void AFogOfWarHieuPlayerController::OnTouchTriggered()
{
	bIsTouch = true;
	OnSetDestinationTriggered();
}

void AFogOfWarHieuPlayerController::OnTouchReleased()
{
	bIsTouch = false;
	OnSetDestinationReleased();
}
