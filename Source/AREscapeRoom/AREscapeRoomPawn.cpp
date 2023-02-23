// Fill out your copyright notice in the Description page of Project Settings.


#include "AREscapeRoomPawn.h"
#include "Camera/CameraComponent.h"


// Sets default values
AAREscapeRoomPawn::AAREscapeRoomPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AAREscapeRoomPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAREscapeRoomPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAREscapeRoomPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

