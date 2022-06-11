// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objective.h"
#include "GameFramework/Actor.h"
#include "Quest.generated.h"

	
DECLARE_MULTICAST_DELEGATE_OneParam(FOnQuestStatusUpdated, class AQuest*);

UCLASS()
class QUESTSYSTEMSMODULE_API AQuest : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AQuest();
	UPROPERTY(EditAnywhere)
	FText Name;

	UPROPERTY(EditAnywhere)
	FText Descrition;

	UPROPERTY(EditAnywhere)
	TArray<UObjective*> Objectives;

	UPROPERTY(EditAnywhere)
	bool bIsStoryQuest = true;

	UPROPERTY(EditAnywhere)
	bool bKeepObjectivesOrder = true;

	UPROPERTY(EditAnywhere)
	AQuest* PrerquisedQuest;
	
	UPROPERTY(VisibleAnywhere)
	bool bIsTaken;

	UFUNCTION(BlueprintCallable, CallInEditor)
	void UpdateLocation();
	
	UFUNCTION()
	void TakeQuest(AActor * Character);
	
	void OnObjectiveCompleted(UObjective* Objective);

	FOnQuestStatusUpdated OnQuestStatusUpdated;
	
#if WITH_EDITOR
	
	UFUNCTION(BlueprintCallable, CallInEditor)
    void AddLocationObjective();
	
    UFUNCTION(BlueprintCallable, CallInEditor)
    void AddInteractObjective();
	
#endif
	
};
