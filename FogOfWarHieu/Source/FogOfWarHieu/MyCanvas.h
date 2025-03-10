// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCanvas.generated.h"

UCLASS()
class FOGOFWARHIEU_API AMyCanvas : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyCanvas();
	UPROPERTY()
	UTextureRenderTarget2D* RenderTarget;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMaterial* Canvas_Material;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMaterial* Brush_Material;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(BlueprintReadWrite)
	UMaterialInstanceDynamic* BrushMaterial;

	UFUNCTION()
	void DrawBrush(UTexture2D* BrushTexture, float BrushSize, FVector2D BrushLocation);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
