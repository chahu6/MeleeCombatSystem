// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/BaseEquippable.h"

ABaseEquippable::ABaseEquippable()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");

	ItemStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("ItemStaticMesh");
	ItemStaticMesh->SetupAttachment(RootComponent);

	ItemSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("ItemSkeletalMesh");
	ItemSkeletalMesh->SetupAttachment(RootComponent);
}

void ABaseEquippable::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseEquippable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

