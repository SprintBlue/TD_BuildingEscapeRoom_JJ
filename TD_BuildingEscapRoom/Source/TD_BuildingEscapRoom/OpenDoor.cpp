// Fill out your copyright notice in the Description page of Project Settings.

#include "TD_BuildingEscapRoom.h"
#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor(){
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay(){
	Super::BeginPlay();

	// ...
	AActor* owner = GetOwner();
	//FRotator NewRotator = FRotator(0.0f, 130.0f, 0.0f);
	FRotator Rotation(0.0f, 130.0f, 0.0f);
	owner->SetActorRotation(Rotation);
	FString ObjectRotation = GetOwner()->GetTransform().GetRotation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("New rotation : %s"), *ObjectRotation);
}


// Called every frame
void UOpenDoor::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ){
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

