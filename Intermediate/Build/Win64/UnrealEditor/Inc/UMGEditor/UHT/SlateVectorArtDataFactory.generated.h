// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlateVectorArtDataFactory.h"

#ifdef UMGEDITOR_SlateVectorArtDataFactory_generated_h
#error "SlateVectorArtDataFactory.generated.h already included, missing '#pragma once' in SlateVectorArtDataFactory.h"
#endif
#define UMGEDITOR_SlateVectorArtDataFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USlateVectorArtDataFactory ***********************************************
struct Z_Construct_UClass_USlateVectorArtDataFactory_Statics;
UMGEDITOR_API UClass* Z_Construct_UClass_USlateVectorArtDataFactory_NoRegister();

#define FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSlateVectorArtDataFactory(); \
	friend struct ::Z_Construct_UClass_USlateVectorArtDataFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGEDITOR_API UClass* ::Z_Construct_UClass_USlateVectorArtDataFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateVectorArtDataFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGEditor"), Z_Construct_UClass_USlateVectorArtDataFactory_NoRegister) \
	DECLARE_SERIALIZER(USlateVectorArtDataFactory)


#define FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMGEDITOR_API USlateVectorArtDataFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateVectorArtDataFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, USlateVectorArtDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateVectorArtDataFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateVectorArtDataFactory(USlateVectorArtDataFactory&&) = delete; \
	USlateVectorArtDataFactory(const USlateVectorArtDataFactory&) = delete; \
	UMGEDITOR_API virtual ~USlateVectorArtDataFactory();


#define FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateVectorArtDataFactory;

// ********** End Class USlateVectorArtDataFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
