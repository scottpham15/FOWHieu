// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyWall.generated.h"

UCLASS()
class FOGOFWARHIEU_API AMyWall : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyWall();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MyMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
