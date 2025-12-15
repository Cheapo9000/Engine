// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DemoPendingNetGame.h"

#ifdef ENGINE_DemoPendingNetGame_generated_h
#error "DemoPendingNetGame.generated.h already included, missing '#pragma once' in DemoPendingNetGame.h"
#endif
#define ENGINE_DemoPendingNetGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDemoPendingNetGame ******************************************************
struct Z_Construct_UClass_UDemoPendingNetGame_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDemoPendingNetGame_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDemoPendingNetGame(); \
	friend struct ::Z_Construct_UClass_UDemoPendingNetGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDemoPendingNetGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UDemoPendingNetGame, UPendingNetGame, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDemoPendingNetGame_NoRegister) \
	DECLARE_SERIALIZER(UDemoPendingNetGame) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemoPendingNetGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoPendingNetGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemoPendingNetGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoPendingNetGame); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDemoPendingNetGame(UDemoPendingNetGame&&) = delete; \
	UDemoPendingNetGame(const UDemoPendingNetGame&) = delete; \
	NO_API virtual ~UDemoPendingNetGame();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDemoPendingNetGame;

// ********** End Class UDemoPendingNetGame ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
