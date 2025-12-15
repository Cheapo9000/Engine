// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimStreamable.h"

#ifdef ENGINE_AnimStreamable_generated_h
#error "AnimStreamable.generated.h already included, missing '#pragma once' in AnimStreamable.h"
#endif
#define ENGINE_AnimStreamable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimStreamable **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStreamable, ENGINE_API)


struct Z_Construct_UClass_UAnimStreamable_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimStreamable_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStreamable(); \
	friend struct ::Z_Construct_UClass_UAnimStreamable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimStreamable_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimStreamable, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimStreamable_NoRegister) \
	DECLARE_SERIALIZER(UAnimStreamable) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimStreamable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStreamable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimStreamable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStreamable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimStreamable(UAnimStreamable&&) = delete; \
	UAnimStreamable(const UAnimStreamable&) = delete; \
	ENGINE_API virtual ~UAnimStreamable();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_89_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimStreamable;

// ********** End Class UAnimStreamable ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
