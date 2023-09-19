// Fill out your copyright notice in the Description page of Project Settings.


#include "OrbitingMovementComponent.h"

// Sets default values for this component's properties
UOrbitingMovementComponent::UOrbitingMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	RotateToFaceOutwards = true;
	RotationSpeed = 5;
	OrbitDistance = 100;
	CurrentValue = 0;

}


// Called when the game starts
void UOrbitingMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UOrbitingMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	float CurrentValueInRadians = FMath::DegreesToRadians<float>(CurrentValue);
	// CurrentValue -> con cada tick va ir almacenado el valor que vamos ir trazando la orbita en grds

	SetRelativeLocation(FVector(OrbitDistance * FMath::Cos(CurrentValueInRadians), OrbitDistance * FMath::Sin(CurrentValueInRadians), GetRelativeLocation().Z));


	//
	if (RotateToFaceOutwards)
	{
		// Desplazamiento de la posicion actual del componente
		FVector LookDir=(GetRelativeLocation()).GetSafeNormal();
		FRotator LookAcRot = LookDir.Rotation();
		SetRelativeRotation(LookAcRot);
		// Ira llevando la rotacion del componente a la posicion de la orbita
	}
	// Actualiza el valor de la rotacion
	CurrentValue=FMath::Fmod(CurrentValue+(RotationSpeed*DeltaTime),360.0f);
}

