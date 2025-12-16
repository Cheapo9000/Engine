// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectOctree.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectOctree_generated_h
#error "SmartObjectOctree.generated.h already included, missing '#pragma once' in SmartObjectOctree.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectOctree_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartObjectOctreeEntryData ***************************************
struct Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FSmartObjectSpatialEntryData Super;


struct FSmartObjectOctreeEntryData;
// ********** End ScriptStruct FSmartObjectOctreeEntryData *****************************************

// ********** Begin Class USmartObjectOctree *******************************************************
struct Z_Construct_UClass_USmartObjectOctree_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectOctree_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectOctree(); \
	friend struct ::Z_Construct_UClass_USmartObjectOctree_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectOctree_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectOctree, USmartObjectSpacePartition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectOctree_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectOctree)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMARTOBJECTSMODULE_API USmartObjectOctree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectOctree(USmartObjectOctree&&) = delete; \
	USmartObjectOctree(const USmartObjectOctree&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectOctree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectOctree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectOctree) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectOctree();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_79_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectOctree;

// ********** End Class USmartObjectOctree *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
