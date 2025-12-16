// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartitionSmartObjectCollectionBuilder.h"

#ifdef SMARTOBJECTSEDITORMODULE_WorldPartitionSmartObjectCollectionBuilder_generated_h
#error "WorldPartitionSmartObjectCollectionBuilder.generated.h already included, missing '#pragma once' in WorldPartitionSmartObjectCollectionBuilder.h"
#endif
#define SMARTOBJECTSEDITORMODULE_WorldPartitionSmartObjectCollectionBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionSmartObjectCollectionBuilder ******************************
struct Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics;
SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionSmartObjectCollectionBuilder(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSEDITORMODULE_API UClass* ::Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionSmartObjectCollectionBuilder, UWorldPartitionBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SmartObjectsEditorModule"), Z_Construct_UClass_UWorldPartitionSmartObjectCollectionBuilder_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionSmartObjectCollectionBuilder)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMARTOBJECTSEDITORMODULE_API UWorldPartitionSmartObjectCollectionBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionSmartObjectCollectionBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSEDITORMODULE_API, UWorldPartitionSmartObjectCollectionBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionSmartObjectCollectionBuilder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionSmartObjectCollectionBuilder(UWorldPartitionSmartObjectCollectionBuilder&&) = delete; \
	UWorldPartitionSmartObjectCollectionBuilder(const UWorldPartitionSmartObjectCollectionBuilder&) = delete; \
	SMARTOBJECTSEDITORMODULE_API virtual ~UWorldPartitionSmartObjectCollectionBuilder();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionSmartObjectCollectionBuilder;

// ********** End Class UWorldPartitionSmartObjectCollectionBuilder ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Public_WorldPartitionSmartObjectCollectionBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
