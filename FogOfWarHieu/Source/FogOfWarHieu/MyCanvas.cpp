// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCanvas.h"
#include "Engine/Canvas.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Kismet/KismetRenderingLibrary.h"


// Sets default values
AMyCanvas::AMyCanvas()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
}

void AMyCanvas::DrawBrush(UTexture2D* BrushTexture, float BrushSize, FVector2D BrushLocation)
{
	BrushMaterial->SetTextureParameterValue("BrushTexture", BrushTexture);
	UCanvas* Canvas;
	FVector2D Size;
	FDrawToRenderTargetContext Context;
	UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), RenderTarget, Canvas, Size, Context);
	FVector2D Center = Size * BrushLocation - BrushSize/2.f;
	Canvas->K2_DrawMaterial(BrushMaterial, Center, {BrushSize, BrushSize}, {0.f,0.f}, {1.f, 1.f}, 0.f, {0.5f, 0.5f});
	UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
}

// Called when the game starts or when spawned
void AMyCanvas::BeginPlay()
{
	Super::BeginPlay();
	RenderTarget = UKismetRenderingLibrary::CreateRenderTarget2D(this, 1024, 1024, RTF_RGBA16f, FColor::White, false, false);
	UKismetRenderingLibrary::ClearRenderTarget2D(this, RenderTarget, FColor::White);

	UMaterialInstanceDynamic* Dynamic = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(), Canvas_Material, "none", EMIDCreationFlags::None);
	Dynamic->SetTextureParameterValue("RenderTarget", RenderTarget);
	Mesh->SetMaterial(0, Dynamic);
	
	BrushMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, Brush_Material);
}

// Called every frame
void AMyCanvas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

