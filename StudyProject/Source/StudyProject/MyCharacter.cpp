// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFrameWork/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetRelativeRotation(FRotator(0.f,-90.f, 0.f));
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 400.f;
	SpringArm->SetRelativeRotation(FRotator(-20.f, 0.f, 0.f));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* UIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (UIC)
	{
		UIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
		UIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
	}
}

void AMyCharacter::Look(const FInputActionValue& Value)
{
	FVector2D Data = Value.Get<FVector2D>();

	AddControllerYawInput(Data.X);
	AddControllerPitchInput(Data.Y);
}

void AMyCharacter::Move(const FInputActionValue& Value)
{
	FVector2D Data = Value.Get<FVector2D>();

	const FRotator Rotation = GetControlRotation();
	const FRotator ForwardRotation = FRotator(0.f, Rotation.Yaw, 0.f);

	const FVector ForwardVector = UKismetMathLibrary::GetForwardVector(ForwardRotation);
	const FVector RightVector = UKismetMathLibrary::GetRightVector(ForwardRotation);

	MeshRotationDegree = FMath::RadiansToDegrees(FMath::Atan2(-Data.Y, Data.X));
	FRotator CharacterRotation(0, GetMesh()->GetRelativeRotation().Yaw, 0);
	FRotator MeshRotation = FMath::RInterpTo(CharacterRotation, FRotator(0, MeshRotationDegree, 0), GetWorld()->GetDeltaSeconds(), 30);
	GetMesh()->SetRelativeRotation(MeshRotation);

	AddMovementInput(ForwardVector, Data.Y);
	AddMovementInput(RightVector, Data.X);
}

