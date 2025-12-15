// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/TouchInterface.h"

#ifdef ENGINE_TouchInterface_generated_h
#error "TouchInterface.generated.h already included, missing '#pragma once' in TouchInterface.h"
#endif
#define ENGINE_TouchInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTouchInputControl ************************************************
struct Z_Construct_UScriptStruct_FTouchInputControl_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTouchInputControl_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTouchInputControl;
// ********** End ScriptStruct FTouchInputControl **************************************************

// ********** Begin Class UTouchInterface **********************************************************
struct Z_Construct_UClass_UTouchInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTouchInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUTouchInterface(); \
	friend struct ::Z_Construct_UClass_UTouchInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTouchInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UTouchInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTouchInterface_NoRegister) \
	DECLARE_SERIALIZER(UTouchInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTouchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTouchInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTouchInterface(UTouchInterface&&) = delete; \
	UTouchInterface(const UTouchInterface&) = delete; \
	ENGINE_API virtual ~UTouchInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTouchInterface;

// ********** End Class UTouchInterface ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
