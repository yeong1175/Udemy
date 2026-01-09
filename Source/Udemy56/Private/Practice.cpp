// Fill out your copyright notice in the Description page of Project Settings.


#include "Practice.h"

// Sets default values
APractice::APractice()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

}

// Called when the game starts or when spawned
void APractice::BeginPlay()
{
	Super::BeginPlay();
	Start = GetActorLocation();
	Current = Start;
	
}

// Called every frame
void APractice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 
	Current = Current+ speed * DeltaTime;
	SetActorLocation(Current);
	//moveamount = FVector::Dist(Start, Current);
	if (returnning()) {
		speed = -speed;
	}
	RotatePlate(DeltaTime);
}
bool APractice::returnning() {
	return Getdistance() > moveddistance;
	
}
float APractice::Getdistance()const
{
	return FVector::Dist(Start, Current);
	
}
void APractice::RotatePlate(float DeltaTime) {
	
	AddActorLocalRotation(RotationSpeed * DeltaTime);
}





 