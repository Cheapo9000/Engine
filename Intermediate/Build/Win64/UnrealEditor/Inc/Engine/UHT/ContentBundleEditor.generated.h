// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/ContentBundle/ContentBundleEditor.h"

#ifdef ENGINE_ContentBundleEditor_generated_h
#error "ContentBundleEditor.generated.h already included, missing '#pragma once' in ContentBundleEditor.h"
#endif
#define ENGINE_ContentBundleEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UContentBundleUnsavedActorMonitor ****************************************
struct Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics;
ENGINE_API UClass* Z_Construct_UClass_UContentBundleUnsavedActorMonitor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBundleUnsavedActorMonitor(); \
	friend struct ::Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UContentBundleUnsavedActorMonitor_NoRegister(); \
public: \
	DECLARE_CLASS2(UContentBundleUnsavedActorMonitor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UContentBundleUnsavedActorMonitor_NoRegister) \
	DECLARE_SERIALIZER(UContentBundleUnsavedActorMonitor)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBundleUnsavedActorMonitor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContentBundleUnsavedActorMonitor(UContentBundleUnsavedActorMonitor&&) = delete; \
	UContentBundleUnsavedActorMonitor(const UContentBundleUnsavedActorMonitor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBundleUnsavedActorMonitor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBundleUnsavedActorMonitor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBundleUnsavedActorMonitor)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_119_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContentBundleUnsavedActorMonitor;

// ********** End Class UContentBundleUnsavedActorMonitor ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
