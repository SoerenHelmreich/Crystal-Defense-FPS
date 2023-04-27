// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetInteractionComponent.h"
#include "GameFramework/Character.h"
#include "MotionControllerComponent.h"


#include "VRCharacter.generated.h"

UCLASS()
class GELABVR_UE4_API AVRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVRCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


//Storing all functions
private:

	void UpdateDestinationMarker();
	void UpdateSpline(const TArray<FVector>& Path);
	void DrawTeleportPath(const TArray<FVector>& Path);
	bool FindTeleportDestination(TArray<FVector>&OutPath, FVector& OutLocation);
	
	
	void WidgetInteractionPress();
	void WidgetInteractionRelease();

	void MoveForward(float throttle);
	void MoveRight(float throttle);
	/*void ToggleBuildMode();

	void BeginTeleport();
	void FinishTeleport();

	void StartFade(float FromAlpha, float toAlpha);*/

	



//Storing all components
protected:

	UPROPERTY(BlueprintReadWrite)
		class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
		class USceneComponent* VRRoot;

	UPROPERTY(BlueprintReadWrite)
		class UMotionControllerComponent* LeftController;

	UPROPERTY(BlueprintReadWrite)
		class UMotionControllerComponent* RightController;

	//UPROPERTY(VisibleAnywhere)
	//	class UStaticMeshComponent* DestinationMarker;

	/*UPROPERTY(VisibleAnywhere)
		class USplineComponent* TeleportPath;*/

	/*UPROPERTY()
		 TArray<class USplineMeshComponent*> TeleportPathMeshPool;*/

	//For the interaction for the hand mounted UI
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite) 
		UWidgetInteractionComponent* InteractionComponent;
		



//Storing all variables
private:

	/*UPROPERTY(EditAnywhere)
		float TeleportProjectileRadius = 10;

	UPROPERTY(EditAnywhere)
		float TeleportProjectileSpeed = 800;

	UPROPERTY(EditAnywhere)
		float TeleportSimulationTime = 2;

	UPROPERTY(EditAnywhere)
		float TeleportFadeTime = 0.25;

	UPROPERTY(EditAnywhere)
		FVector TeleportProjectionExtend = FVector(100, 100, 100);

	UPROPERTY(EditDefaultsOnly)
		class UStaticMesh* TeleportArchMesh;

	UPROPERTY(EditDefaultsOnly)
		class UMaterialInterface* TeleportArchMaterial;*/

	//UPROPERTY(EditDefaultsOnly)
	//	bool BuildModeActive = false;
};
