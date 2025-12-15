// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/WindDirectionalSource.h"

#ifdef ENGINE_WindDirectionalSource_generated_h
#error "WindDirectionalSource.generated.h already included, missing '#pragma once' in WindDirectionalSource.h"
#endif
#define ENGINE_WindDirectionalSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AWindDirectionalSource ***************************************************
struct Z_Construct_UClass_AWindDirectionalSource_Statics;
ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWindDirectionalSource(); \
	friend struct ::Z_Construct_UClass_AWindDirectionalSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AWindDirectionalSource_NoRegister(); \
public: \
	DECLARE_CLASS2(AWindDirectionalSource, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AWindDirectionalSource_NoRegister) \
	DECLARE_SERIALIZER(AWindDirectionalSource)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AWindDirectionalSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWindDirectionalSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWindDirectionalSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindDirectionalSource); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWindDirectionalSource(AWindDirectionalSource&&) = delete; \
	AWindDirectionalSource(const AWindDirectionalSource&) = delete; \
	ENGINE_API virtual ~AWindDirectionalSource();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWindDirectionalSource;

// ********** End Class AWindDirectionalSource *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
