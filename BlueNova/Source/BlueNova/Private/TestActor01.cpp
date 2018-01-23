// Fill out your copyright notice in the Description page of Project Settings.

#include "TestActor01.h"
#include <iostream>
#include <string>

using namespace std;

// Sets default values for this component's properties
UTestActor01::UTestActor01()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	// ...
}

// Called when the game starts
void UTestActor01::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UTestActor01::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//    string ss = to_string(DeltaTime);
//    FString fs = "hahahahaha";
    std::string TestString = "Happy";
    FString HappyString(TestString.c_str());
    //int32 ii = 19;
    //bool bb = false;
    //UE_LOG(LogTemp,Log,TEXT("MyCharacter's Health is %f"), DeltaTime);
    //UE_LOG(LogTemp,Log,TEXT("MyCharacter's Health is %s"), bb);
    //"bCanEverTick"
    UE_LOG(LogTemp,Log,TEXT("MyCharacter's Health is %s"), *HappyString);
    //int32 MyShinyNewInt = FCString::Atoi(const CharType *String)
    // ...
}
