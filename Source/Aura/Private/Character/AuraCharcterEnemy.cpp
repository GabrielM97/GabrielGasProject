// Gabriel GAS Project


#include "Character/AuraCharcterEnemy.h"


// Sets default values
AAuraCharcterEnemy::AAuraCharcterEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAuraCharcterEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuraCharcterEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAuraCharcterEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

