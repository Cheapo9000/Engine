// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroundTruthDataFactory.h"

#ifdef FUNCTIONALTESTINGEDITOR_GroundTruthDataFactory_generated_h
#error "GroundTruthDataFactory.generated.h already included, missing '#pragma once' in GroundTruthDataFactory.h"
#endif
#define FUNCTIONALTESTINGEDITOR_GroundTruthDataFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGroundTruthDataFactory **************************************************
struct Z_Construct_UClass_UGroundTruthDataFactory_Statics;
FUNCTIONALTESTINGEDITOR_API UClass* Z_Construct_UClass_UGroundTruthDataFactory_NoRegister();

#define FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGroundTruthDataFactory(); \
	friend struct ::Z_Construct_UClass_UGroundTruthDataFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTINGEDITOR_API UClass* ::Z_Construct_UClass_UGroundTruthDataFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroundTruthDataFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTestingEditor"), Z_Construct_UClass_UGroundTruthDataFactory_NoRegister) \
	DECLARE_SERIALIZER(UGroundTruthDataFactory)


#define FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroundTruthDataFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroundTruthDataFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroundTruthDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroundTruthDataFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroundTruthDataFactory(UGroundTruthDataFactory&&) = delete; \
	UGroundTruthDataFactory(const UGroundTruthDataFactory&) = delete; \
	NO_API virtual ~UGroundTruthDataFactory();


#define FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_8_PROLOG
#define FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_11_INCLASS \
	FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroundTruthDataFactory;

// ********** End Class UGroundTruthDataFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Private_GroundTruthDataFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
