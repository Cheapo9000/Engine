// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Processors/RevisionControlProcessors.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDSREVISIONCONTROL_RevisionControlProcessors_generated_h
#error "RevisionControlProcessors.generated.h already included, missing '#pragma once' in RevisionControlProcessors.h"
#endif
#define TEDSREVISIONCONTROL_RevisionControlProcessors_generated_h

#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevisionControlDataStorageFactory(); \
	friend struct Z_Construct_UClass_URevisionControlDataStorageFactory_Statics; \
public: \
	DECLARE_CLASS(URevisionControlDataStorageFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TedsRevisionControl"), NO_API) \
	DECLARE_SERIALIZER(URevisionControlDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URevisionControlDataStorageFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URevisionControlDataStorageFactory(URevisionControlDataStorageFactory&&); \
	URevisionControlDataStorageFactory(const URevisionControlDataStorageFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevisionControlDataStorageFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevisionControlDataStorageFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URevisionControlDataStorageFactory)


#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDSREVISIONCONTROL_API UClass* StaticClass<class URevisionControlDataStorageFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorageFeatures_Source_TedsRevisionControl_Private_Processors_RevisionControlProcessors_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
