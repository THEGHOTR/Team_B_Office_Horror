// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "EndPipeActor.generated.h"

UCLASS()
class TEAM_B_OFFICE_HORROR_API AEndPipeActor : public AActor
{
	GENERATED_BODY()

		
	
public:	
	// Sets default values for this actor's properties
	AEndPipeActor();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Endgame")
		UStaticMeshComponent* MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PipeMesh"));
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Endgame")
		//UStaticMeshComponent* MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterPlane"));
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Endgame")
		UParticleSystem* ParticleSystemComponent = CreateDefaultSubobject<UParticleSystem>(TEXT("WaterfallEffect"));

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
