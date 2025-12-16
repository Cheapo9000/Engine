// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomActorFactory.h"

#ifdef HAIRSTRANDSEDITOR_GroomActorFactory_generated_h
#error "GroomActorFactory.generated.h already included, missing '#pragma once' in GroomActorFactory.h"
#endif
#define HAIRSTRANDSEDITOR_GroomActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGroomActorFactory *******************************************************
struct Z_Construct_UClass_UGroomActorFactory_Statics;
HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UGroomActorFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGroomActorFactory(); \
	friend struct ::Z_Construct_UClass_UGroomActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSEDITOR_API UClass* ::Z_Construct_UClass_UGroomActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroomActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HairStrandsEditor"), Z_Construct_UClass_UGroomActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UGroomActorFactory)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSEDITOR_API UGroomActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSEDITOR_API, UGroomActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroomActorFactory(UGroomActorFactory&&) = delete; \
	UGroomActorFactory(const UGroomActorFactory&) = delete; \
	HAIRSTRANDSEDITOR_API virtual ~UGroomActorFactory();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroomActorFactory;

// ********** End Class UGroomActorFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
