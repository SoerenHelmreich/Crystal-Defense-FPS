// Fill out your copyright notice in the Description page of Project Settings.

#include "VRCharacter.h"
#include "Camera/CameraComponent.h"
#include "TimerManager.h"
#include "Components/CapsuleComponent.h"
#include "InputCoreTypes.h"
#include "NavigationSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"

// Sets default values
AVRCharacter::AVRCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	VRRoot->SetupAttachment(GetRootComponent());
	

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRRoot);

	LeftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftController"));
	LeftController->SetupAttachment(VRRoot);
	//LeftController->Hand_DEPRECATED = EControllerHand::Left;
	LeftController->SetTrackingSource(EControllerHand::Left);
	
	RightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightController"));
	RightController->SetupAttachment(VRRoot);
	//RightController->Hand_DEPRECATED = EControllerHand::Left;
	RightController->SetTrackingSource(EControllerHand::Right);
	//RightController->SetVisibility(false);
	
	
	/*TeleportPath = CreateDefaultSubobject<USplineComponent>(TEXT("TeleportPath"));
	TeleportPath->SetupAttachment(LeftController);*/
	
	InteractionComponent = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("InteractionComponent"));
	InteractionComponent->InteractionSource = EWidgetInteractionSource::World;
	InteractionComponent->SetupAttachment(RightController);
	InteractionComponent->bShowDebug = true;
	

}

// Called when the game starts or when spawned
void AVRCharacter::BeginPlay()
{
	Super::BeginPlay();
	VRRoot->AddLocalOffset(FVector(0, 0, -85));
}


// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Offset between Camera and Character 
	FVector NewCameraOffset = Camera->GetComponentLocation() - GetActorLocation();
	/*InteractionComponent->SetCustomHitResult(FHitResult(RightController->GetComponentLocation(),
		(RightController->GetForwardVector() * 100) +
		RightController->GetComponentLocation()));
	*/
	//Die Z Achse wird auf 0 gesetzt, um den Vertikalen Offset zu ignorieren
	NewCameraOffset.Z = 0;

	AddActorWorldOffset(NewCameraOffset);
	VRRoot->AddWorldOffset(-NewCameraOffset);

	//UpdateDestinationMarker();
}

// Called to bind functionality to input
void AVRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &AVRCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Right"), this, &AVRCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AVRCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AVRCharacter::AddControllerPitchInput);
	//PlayerInputComponent->BindAction(TEXT("Teleport"), IE_Released, this, &AVRCharacter::BeginTeleport);
	//PlayerInputComponent->BindAction(TEXT("ToggleBuildMode"), IE_Released, this, &AVRCharacter::ToggleBuildMode);
	//PlayerInputComponent->BindAction(TEXT("WidgetInteraction"), IE_Pressed, this, &AVRCharacter::WidgetInteractionPress);
	//PlayerInputComponent->BindAction(TEXT("WidgetInteraction"), IE_Released, this, &AVRCharacter::WidgetInteractionRelease);
}

//bool AVRCharacter::FindTeleportDestination(TArray<FVector>& OutPath, FVector& OutLocation) {
//	FVector Start = LeftController->GetComponentLocation();
//	FVector Look = LeftController->GetForwardVector();
//
//	FPredictProjectilePathParams Params
//		(TeleportProjectileRadius, 
//		Start,
//		Look * TeleportProjectileSpeed, 
//		TeleportSimulationTime,
//		ECollisionChannel::ECC_Visibility, 
//		this
//	);
//	//Params.DrawDebugType(EDrawDebugTrace::Persistent);
//
//	Params.bTraceComplex = true;
//
//	FPredictProjectilePathResult Result;
//	bool bHit = UGameplayStatics::PredictProjectilePath(this, Params, Result);
//
//	if (!bHit && BuildModeActive) return false;
//
//
//	for (FPredictProjectilePathPointData PointData : Result.PathData)
//	{
//		OutPath.Add(PointData.Location);
//	}
//
//
//	FNavLocation NavLocation;
//	bool bOnNavMesh = UNavigationSystemV1::GetCurrent(GetWorld())->ProjectPointToNavigation(Result.HitResult.Location, NavLocation, TeleportProjectionExtend);
//
//	if (!bOnNavMesh) return false;
//
//
//	OutLocation = NavLocation.Location;
//	return true;
//}

/*
void AVRCharacter::WidgetInteractionPress()
{
	InteractionComponent->PressPointerKey(EKeys::LeftMouseButton);
}

void AVRCharacter::WidgetInteractionRelease()
{
	InteractionComponent->ReleasePointerKey(EKeys::LeftMouseButton);
}
*/


//void AVRCharacter::UpdateDestinationMarker()
//{
//	TArray<FVector> Path;
//	FVector Location;
//	bool bHasDestination = FindTeleportDestination(Path, Location);
//
//
//	if (bHasDestination) {
//		DestinationMarker->SetWorldLocation(Location);
//		DestinationMarker->SetVisibility(true);
//
//		DrawTeleportPath(Path);
//	}
//	else {
//		DestinationMarker->SetVisibility(false);
//
//		TArray<FVector> EmptyPath;
//		DrawTeleportPath(EmptyPath);
//	}
//}
//
//
//void AVRCharacter::UpdateSpline(const TArray<FVector>& Path)
//{
//	TeleportPath->ClearSplinePoints(false);
//	for (int32 i = 0; i < Path.Num(); ++i)
//	{
//		FVector LocalPosition = TeleportPath->GetComponentTransform().InverseTransformPosition(Path[i]);
//		FSplinePoint Point(i, LocalPosition, ESplinePointType::Curve);
//		TeleportPath->AddPoint(Point, false);
//	}
//	TeleportPath->UpdateSpline();
//}
//
//void AVRCharacter::DrawTeleportPath(const TArray<FVector>& Path)
//{
//	UpdateSpline(Path);
//
//	for (USplineMeshComponent* SplineMesh : TeleportPathMeshPool)
//	{
//		SplineMesh->SetVisibility(false);
//	}
//
//
//	int32 SegmentNum = Path.Num() - 1;
//	for (int32 i = 0; i < SegmentNum; ++i)
//	{
//		if (TeleportPathMeshPool.Num() <= i)
//		{
//			USplineMeshComponent* SplineMesh = NewObject<USplineMeshComponent>(this);
//			SplineMesh->SetMobility(EComponentMobility::Movable);
//			SplineMesh->AttachToComponent(VRRoot, FAttachmentTransformRules::KeepRelativeTransform);
//			SplineMesh->SetStaticMesh(TeleportArchMesh);
//			SplineMesh->SetMaterial(0, TeleportArchMaterial);
//			SplineMesh->RegisterComponent();
//
//			TeleportPathMeshPool.Add(SplineMesh);
//		}
//
//		USplineMeshComponent* SplineMesh = TeleportPathMeshPool[i];
//		SplineMesh->SetVisibility(true);
//
//
//		FVector StartPos, StartTangent, EndPos, EndTangent;
//		TeleportPath->GetLocalLocationAndTangentAtSplinePoint(i, StartPos, StartTangent);
//		TeleportPath->GetLocalLocationAndTangentAtSplinePoint(i+1, EndPos, EndTangent);
//		SplineMesh->SetStartAndEnd(StartPos, StartTangent, EndPos, EndTangent);
//	}
//
//}



void AVRCharacter::MoveForward(float throttle)
{
	AddMovementInput(throttle * Camera->GetForwardVector());
}

void AVRCharacter::MoveRight(float throttle)
{
	AddMovementInput(throttle * Camera->GetRightVector());

}


//void AVRCharacter::BeginTeleport()
//{
//	if (!BuildModeActive) {
//		StartFade(0, 1);
//
//		FTimerHandle Handle;
//
//		GetWorldTimerManager().SetTimer(Handle, this, &AVRCharacter::FinishTeleport, TeleportFadeTime);
//	}
//
//}
//
//void AVRCharacter::FinishTeleport() {
//	FVector Destination = DestinationMarker->GetComponentLocation();
//	Destination += GetCapsuleComponent()->GetScaledCapsuleHalfHeight() * GetActorUpVector();
//	SetActorLocation(Destination);
//
//	StartFade(1, 0);
//
//}
//
//void AVRCharacter::StartFade(float FromAlpha, float toAlpha) {
//	APlayerController* PC = Cast<APlayerController>(GetController());
//	if (PC != nullptr)
//	{
//		PC->PlayerCameraManager->StartCameraFade(FromAlpha, toAlpha, TeleportFadeTime, FLinearColor::Black);
//	}
//}
//
//void AVRCharacter::ToggleBuildMode() {
//	if (BuildModeActive) {
//		BuildModeActive = false;
//	}
//	else
//	{
//		BuildModeActive = true;
//	}
//}