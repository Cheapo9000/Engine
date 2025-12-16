// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectHashGrid.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectHashGrid_generated_h
#error "SmartObjectHashGrid.generated.h already included, missing '#pragma once' in SmartObjectHashGrid.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectHashGrid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartObjectHashGridEntryData *************************************
struct Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FSmartObjectSpatialEntryData Super;


struct FSmartObjectHashGridEntryData;
// ********** End ScriptStruct FSmartObjectHashGridEntryData ***************************************

// ********** Begin Class USmartObjectHashGrid *****************************************************
struct Z_Construct_UClass_USmartObjectHashGrid_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectHashGrid_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectHashGrid(); \
	friend struct ::Z_Construct_UClass_USmartObjectHashGrid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectHashGrid_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectHashGrid, USmartObjectSpacePartition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectHashGrid_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectHashGrid)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMARTOBJECTSMODULE_API USmartObjectHashGrid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectHashGrid(USmartObjectHashGrid&&) = delete; \
	USmartObjectHashGrid(const USmartObjectHashGrid&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectHashGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectHashGrid); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectHashGrid) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectHashGrid();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectHashGrid;

// ********** End Class USmartObjectHashGrid *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
