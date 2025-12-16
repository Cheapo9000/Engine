// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/OpenColorIOConfigurationFactoryNew.h"

#ifdef OPENCOLORIOEDITOR_OpenColorIOConfigurationFactoryNew_generated_h
#error "OpenColorIOConfigurationFactoryNew.generated.h already included, missing '#pragma once' in OpenColorIOConfigurationFactoryNew.h"
#endif
#define OPENCOLORIOEDITOR_OpenColorIOConfigurationFactoryNew_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOpenColorIOConfigurationFactoryNew **************************************
struct Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics;
OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_NoRegister();

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOpenColorIOConfigurationFactoryNew(); \
	friend struct ::Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENCOLORIOEDITOR_API UClass* ::Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenColorIOConfigurationFactoryNew, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenColorIOEditor"), Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_NoRegister) \
	DECLARE_SERIALIZER(UOpenColorIOConfigurationFactoryNew)


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenColorIOConfigurationFactoryNew(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenColorIOConfigurationFactoryNew) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenColorIOConfigurationFactoryNew); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenColorIOConfigurationFactoryNew); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenColorIOConfigurationFactoryNew(UOpenColorIOConfigurationFactoryNew&&) = delete; \
	UOpenColorIOConfigurationFactoryNew(const UOpenColorIOConfigurationFactoryNew&) = delete; \
	NO_API virtual ~UOpenColorIOConfigurationFactoryNew();


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_13_PROLOG
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_16_INCLASS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenColorIOConfigurationFactoryNew;

// ********** End Class UOpenColorIOConfigurationFactoryNew ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
