// Fill out your copyright notice in the Description page of Project Settings.


#include "EndPipeActor.h"

// Sets default values
AEndPipeActor::AEndPipeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEndPipeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEndPipeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

