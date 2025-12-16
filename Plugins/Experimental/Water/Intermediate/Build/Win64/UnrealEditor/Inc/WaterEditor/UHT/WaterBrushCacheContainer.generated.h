// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBrushCacheContainer.h"

#ifdef WATEREDITOR_WaterBrushCacheContainer_generated_h
#error "WaterBrushCacheContainer.generated.h already included, missing '#pragma once' in WaterBrushCacheContainer.h"
#endif
#define WATEREDITOR_WaterBrushCacheContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWaterBodyBrushCache **********************************************
struct Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWaterBodyBrushCache_Statics; \
	WATEREDITOR_API static class UScriptStruct* StaticStruct();


struct FWaterBodyBrushCache;
// ********** End ScriptStruct FWaterBodyBrushCache ************************************************

// ********** Begin Class UWaterBodyBrushCacheContainer ********************************************
struct Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyBrushCacheContainer_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterBodyBrushCacheContainer(); \
	friend struct ::Z_Construct_UClass_UWaterBodyBrushCacheContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterBodyBrushCacheContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyBrushCacheContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterBodyBrushCacheContainer_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyBrushCacheContainer)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyBrushCacheContainer(UWaterBodyBrushCacheContainer&&) = delete; \
	UWaterBodyBrushCacheContainer(const UWaterBodyBrushCacheContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterBodyBrushCacheContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyBrushCacheContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyBrushCacheContainer) \
	NO_API virtual ~UWaterBodyBrushCacheContainer();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyBrushCacheContainer;

// ********** End Class UWaterBodyBrushCacheContainer **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushCacheContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
