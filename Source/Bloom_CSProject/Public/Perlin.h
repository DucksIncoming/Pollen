// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Perlin.generated.h"

UCLASS()
class BLOOM_CSPROJECT_API APerlin : public AActor
{
	GENERATED_BODY()
	
public:	
	APerlin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
