// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/OpenColorIOConfigurationFactory.h"

#ifdef OPENCOLORIOEDITOR_OpenColorIOConfigurationFactory_generated_h
#error "OpenColorIOConfigurationFactory.generated.h already included, missing '#pragma once' in OpenColorIOConfigurationFactory.h"
#endif
#define OPENCOLORIOEDITOR_OpenColorIOConfigurationFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOpenColorIOConfigurationFactory *****************************************
struct Z_Construct_UClass_UOpenColorIOConfigurationFactory_Statics;
OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UOpenColorIOConfigurationFactory_NoRegister();

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOpenColorIOConfigurationFactory(); \
	friend struct ::Z_Construct_UClass_UOpenColorIOConfigurationFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENCOLORIOEDITOR_API UClass* ::Z_Construct_UClass_UOpenColorIOConfigurationFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenColorIOConfigurationFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenColorIOEditor"), Z_Construct_UClass_UOpenColorIOConfigurationFactory_NoRegister) \
	DECLARE_SERIALIZER(UOpenColorIOConfigurationFactory)


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenColorIOConfigurationFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenColorIOConfigurationFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenColorIOConfigurationFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenColorIOConfigurationFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenColorIOConfigurationFactory(UOpenColorIOConfigurationFactory&&) = delete; \
	UOpenColorIOConfigurationFactory(const UOpenColorIOConfigurationFactory&) = delete; \
	NO_API virtual ~UOpenColorIOConfigurationFactory();


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactory_h_13_PROLOG
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactory_h_16_INCLASS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenColorIOConfigurationFactory;

// ********** End Class UOpenColorIOConfigurationFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
