// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floater.generated.h"

UCLASS()
class UDEMY_BASICS_API AFloater : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFloater();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Actor Mesh Comp")
	UStaticMeshComponent* staticmesh;

	UPROPERTY(EditInstanceOnly,BlueprintReadWrite, Category = "Floater Vars")
	FVector initialLocation;

	UPROPERTY(VisibleInstanceOnly,BlueprintReadWrite, Category = "Floater Vars")
	FVector placedLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Floater Vars")
	bool binitable;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Floater Vars")
	FVector WorldOrigin;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Floater Vars")
	bool bshouldfloat;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Floater Vars")
	FVector InitialDirection;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Floater Vars")
	FRotator Rotate;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Floater Vars")
	FVector InitialForce;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Floater Vars")
	FVector InitialTorque;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};