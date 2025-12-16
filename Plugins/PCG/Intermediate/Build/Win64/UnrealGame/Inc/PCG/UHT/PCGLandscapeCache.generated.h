// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grid/PCGLandscapeCache.h"

#ifdef PCG_PCGLandscapeCache_generated_h
#error "PCGLandscapeCache.generated.h already included, missing '#pragma once' in PCGLandscapeCache.h"
#endif
#define PCG_PCGLandscapeCache_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGLandscapeLayerWeight ******************************************
struct Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGLandscapeLayerWeight;
// ********** End ScriptStruct FPCGLandscapeLayerWeight ********************************************

// ********** Begin Class UPCGLandscapeCache *******************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execPrimeCache);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_122_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGLandscapeCache, NO_API)


struct Z_Construct_UClass_UPCGLandscapeCache_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGLandscapeCache_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLandscapeCache(); \
	friend struct ::Z_Construct_UClass_UPCGLandscapeCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGLandscapeCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLandscapeCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGLandscapeCache_NoRegister) \
	DECLARE_SERIALIZER(UPCGLandscapeCache) \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_122_ARCHIVESERIALIZER


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGLandscapeCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLandscapeCache(UPCGLandscapeCache&&) = delete; \
	UPCGLandscapeCache(const UPCGLandscapeCache&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGLandscapeCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLandscapeCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLandscapeCache) \
	NO_API virtual ~UPCGLandscapeCache();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_119_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLandscapeCache;

// ********** End Class UPCGLandscapeCache *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h

// ********** Begin Enum EPCGLandscapeCacheSerializationMode ***************************************
#define FOREACH_ENUM_EPCGLANDSCAPECACHESERIALIZATIONMODE(op) \
	op(EPCGLandscapeCacheSerializationMode::SerializeOnlyAtCook) \
	op(EPCGLandscapeCacheSerializationMode::NeverSerialize) \
	op(EPCGLandscapeCacheSerializationMode::AlwaysSerialize) 

enum class EPCGLandscapeCacheSerializationMode : uint8;
template<> struct TIsUEnumClass<EPCGLandscapeCacheSerializationMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGLandscapeCacheSerializationMode>();
// ********** End Enum EPCGLandscapeCacheSerializationMode *****************************************

// ********** Begin Enum EPCGLandscapeCacheSerializationContents ***********************************
#define FOREACH_ENUM_EPCGLANDSCAPECACHESERIALIZATIONCONTENTS(op) \
	op(EPCGLandscapeCacheSerializationContents::SerializeOnlyPositionsAndNormals) \
	op(EPCGLandscapeCacheSerializationContents::SerializeOnlyLayerData) \
	op(EPCGLandscapeCacheSerializationContents::SerializeAll) 

enum class EPCGLandscapeCacheSerializationContents : uint8;
template<> struct TIsUEnumClass<EPCGLandscapeCacheSerializationContents> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGLandscapeCacheSerializationContents>();
// ********** End Enum EPCGLandscapeCacheSerializationContents *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
