// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OrbitingMovementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COMPONENTES_API UOrbitingMovementComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOrbitingMovementComponent();

	//En que direccion se movera la rotacion del componente (Acercandose o alejandose del origen de la orbita)
	UPROPERTY()
	bool RotateToFaceOutwards;
	
	// Es el numero de grados que gira el componente en cada Segundo( con cada Tick)
	UPROPERTY()
	float RotationSpeed;

	//Indaca la distacia en que deben moverse del origen 
	UPROPERTY()
	float OrbitDistance;


	// Es la pocision de rotacion actual en grados
	float CurrentValue;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
