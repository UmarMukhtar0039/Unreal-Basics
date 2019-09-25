// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "ColliderMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class BASICS_API UColliderMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()
	
public:

void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

//Can't do this
//UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "MovementSpeed")
//float movespeed;

};
