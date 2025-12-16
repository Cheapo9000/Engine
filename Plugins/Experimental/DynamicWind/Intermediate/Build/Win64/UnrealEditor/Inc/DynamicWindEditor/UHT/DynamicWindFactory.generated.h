// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicWindFactory.h"

#ifdef DYNAMICWINDEDITOR_DynamicWindFactory_generated_h
#error "DynamicWindFactory.generated.h already included, missing '#pragma once' in DynamicWindFactory.h"
#endif
#define DYNAMICWINDEDITOR_DynamicWindFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDynamicWindDataFactory **************************************************
struct Z_Construct_UClass_UDynamicWindDataFactory_Statics;
DYNAMICWINDEDITOR_API UClass* Z_Construct_UClass_UDynamicWindDataFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Public_DynamicWindFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicWindDataFactory(); \
	friend struct ::Z_Construct_UClass_UDynamicWindDataFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICWINDEDITOR_API UClass* ::Z_Construct_UClass_UDynamicWindDataFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicWindDataFactory, UTransformProviderDataFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicWindEditor"), Z_Construct_UClass_UDynamicWindDataFactory_NoRegister) \
	DECLARE_SERIALIZER(UDynamicWindDataFactory)


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Public_DynamicWindFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICWINDEDITOR_API UDynamicWindDataFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicWindDataFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICWINDEDITOR_API, UDynamicWindDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicWindDataFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicWindDataFactory(UDynamicWindDataFactory&&) = delete; \
	UDynamicWindDataFactory(const UDynamicWindDataFactory&) = delete; \
	DYNAMICWINDEDITOR_API virtual ~UDynamicWindDataFactory();


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Public_DynamicWindFactory_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Public_DynamicWindFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Public_DynamicWindFactory_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Public_DynamicWindFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicWindDataFactory;

// ********** End Class UDynamicWindDataFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWindEditor_Public_DynamicWindFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
