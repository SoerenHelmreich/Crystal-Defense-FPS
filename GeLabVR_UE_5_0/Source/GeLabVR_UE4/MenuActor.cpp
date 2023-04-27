// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuActor.h"

// Sets default values
AMenuActor::AMenuActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	interactiveMenu = CreateDefaultSubobject<UWidgetComponent>(TEXT("interactiveMenu"));
	interactiveMenu->SetDrawSize(FVector2D(600, 200));
}

// Called when the game starts or when spawned
void AMenuActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMenuActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

