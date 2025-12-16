// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Processors/RevisionControlProcessors.h"

#ifdef TEDSREVISIONCONTROL_RevisionControlProcessors_generated_h
#error "RevisionControlProcessors.generated.h already included, missing '#pragma once' in RevisionControlProcessors.h"
#endif
#define TEDSREVISIONCONTROL_RevisionControlProcessors_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URevisionControlDataStorageFactory ***************************************
struct Z_Construct_UClass_URevisionControlDataStorageFactory_Statics;
TEDSREVISIONCONTROL_API UClass* Z_Construct_UClass_URevisionControlDataStorageFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevisionControlDataStorageFactory(); \
	friend struct ::Z_Construct_UClass_URevisionControlDataStorageFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSREVISIONCONTROL_API UClass* ::Z_Construct_UClass_URevisionControlDataStorageFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(URevisionControlDataStorageFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsRevisionControl"), Z_Construct_UClass_URevisionControlDataStorageFactory_NoRegister) \
	DECLARE_SERIALIZER(URevisionControlDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URevisionControlDataStorageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URevisionControlDataStorageFactory(URevisionControlDataStorageFactory&&) = delete; \
	URevisionControlDataStorageFactory(const URevisionControlDataStorageFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevisionControlDataStorageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevisionControlDataStorageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URevisionControlDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URevisionControlDataStorageFactory;

// ********** End Class URevisionControlDataStorageFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
