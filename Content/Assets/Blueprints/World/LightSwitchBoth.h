// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

    #pragma once

    #include "GameFramework/Actor.h"
    #include "LightSwitchCodeOnly.generated.h"

    /**
     * 
     */
    UCLASS()
    class [PROJECTNAME]_API ALightSwitchCodeOnly : public AActor
    {
        GENERATED_BODY()
        public:
        /** point light component */
        UPROPERTY(VisibleAnywhere, Category = "Switch Components")
        class UPointLightComponent* PointLight1;

        /** sphere component */
        UPROPERTY(VisibleAnywhere, Category = "Switch Components")
        class USphereComponent* Sphere1;

        ALightSwitchCodeOnly();

        /** called when something enters the sphere component */
        UFUNCTION()
        void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

        /** called when something leaves the sphere component */
        UFUNCTION()
        void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

        /** Toggles the light component's visibility*/
        UFUNCTION()
        void ToggleLight();

        /** the desired intensity for the light */
        UPROPERTY(VisibleAnywhere, Category = "Switch Variables")
        float DesiredIntensity;

    };