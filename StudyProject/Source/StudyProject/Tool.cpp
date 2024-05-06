// Fill out your copyright notice in the Description page of Project Settings.


#include "Tool.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ATool::ATool()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	RootComponent = Collider;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collider);
}

// Called when the game starts or when spawned
void ATool::BeginPlay()
{
	Super::BeginPlay();
}

void ATool::EquipInitialize()
{
	Collider->SetMobility(EComponentMobility::Movable);
	Collider->SetCollisionProfileName(TEXT("NoCollision"));
	Mesh->SetRelativeLocation(FVector(0, 0, 0));
}

