// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tool.generated.h"

UCLASS()
class STUDYPROJECT_API ATool : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATool();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	void EquipInitialize();

public:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<class UStaticMeshComponent> Mesh;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<class UBoxComponent> Collider;
};
