// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeGroupControl.h"

#ifdef ENGINE_SoundNodeGroupControl_generated_h
#error "SoundNodeGroupControl.generated.h already included, missing '#pragma once' in SoundNodeGroupControl.h"
#endif
#define ENGINE_SoundNodeGroupControl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeGroupControl ***************************************************
struct Z_Construct_UClass_USoundNodeGroupControl_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeGroupControl_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeGroupControl(); \
	friend struct ::Z_Construct_UClass_USoundNodeGroupControl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeGroupControl_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeGroupControl, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeGroupControl_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeGroupControl)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeGroupControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeGroupControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeGroupControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeGroupControl); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeGroupControl(USoundNodeGroupControl&&) = delete; \
	USoundNodeGroupControl(const USoundNodeGroupControl&) = delete; \
	ENGINE_API virtual ~USoundNodeGroupControl();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeGroupControl;

// ********** End Class USoundNodeGroupControl *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeGroupControl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
