// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/RectLight.h"

#ifdef ENGINE_RectLight_generated_h
#error "RectLight.generated.h already included, missing '#pragma once' in RectLight.h"
#endif
#define ENGINE_RectLight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARectLight ***************************************************************
struct Z_Construct_UClass_ARectLight_Statics;
ENGINE_API UClass* Z_Construct_UClass_ARectLight_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARectLight(); \
	friend struct ::Z_Construct_UClass_ARectLight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ARectLight_NoRegister(); \
public: \
	DECLARE_CLASS2(ARectLight, ALight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ARectLight_NoRegister) \
	DECLARE_SERIALIZER(ARectLight)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ARectLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARectLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ARectLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARectLight); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARectLight(ARectLight&&) = delete; \
	ARectLight(const ARectLight&) = delete; \
	ENGINE_API virtual ~ARectLight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARectLight;

// ********** End Class ARectLight *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_RectLight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
