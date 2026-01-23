// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Practice.generated.h"

UCLASS()
class UDEMY56_API APractice : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APractice();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override; // 부모 클래스에 있는 가상함수와 이함수가 같은지 컴파일러에게 강제로 대조시킨다.

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
UPROPERTY(EditAnywhere)  
FVector Current=  FVector(0,0,0);  // 크기와 방향을 가진 벡터인데 x로 0 ,y로 0,z로 0 의 크기를가짐
UPROPERTY(EditAnywhere)
FVector speed = FVector(0, 0,100); // 크기와 방향을 가진 벡터인데 x로,0,y로 0 ,z 로 100의 크기를 가짐 


UPROPERTY(EditAnywhere)
float moveddistance = 200; //200 단위 만큼 이동시키기 위해 선언한 플로트형 변수
UPROPERTY(EditAnywhere)
FVector Start; // 시작지점을 저장하기 위한 벡터 변수  0,0,0으로 초기화
UPROPERTY(EditAnywhere)
float moveamount;

//void moveplate(float DeltaTime);
bool returnning();
//float Getdistance();
float Getdistance()const;
void  RotatePlate(float DeltaTime);
UPROPERTY(EditAnywhere, Category = "Rotation");
FRotator RotationSpeed;

};
