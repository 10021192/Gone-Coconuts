// Copyright Epic Games, Inc. All Rights Reserved.

#include "GoneCoconutsGameMode.h"
#include "GoneCoconutsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGoneCoconutsGameMode::AGoneCoconutsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/ThirdPerson/Blueprints/Player_BP"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
