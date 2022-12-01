// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PerlinGenerator.generated.h"

UCLASS()
class BLOOM_CSPROJECT_API APerlinGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APerlinGenerator();
	vector2 randomGradient();
	float dotGridGradient();
	float interpolate();
	UFUNCTION(BlueprintCallable)
	bool parameters(
		float& nodeHeight,
		int x = 0,
		int y = 0
	);
	float perlin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
