// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannel_Islands.h"

#ifdef NIAGARA_NiagaraDataChannel_Islands_generated_h
#error "NiagaraDataChannel_Islands.generated.h already included, missing '#pragma once' in NiagaraDataChannel_Islands.h"
#endif
#define NIAGARA_NiagaraDataChannel_Islands_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNDCIsland ********************************************************
struct Z_Construct_UScriptStruct_FNDCIsland_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDCIsland_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDCIsland;
// ********** End ScriptStruct FNDCIsland **********************************************************

// ********** Begin ScriptStruct FNDCIslandDebugDrawSettings ***************************************
struct Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNDCIslandDebugDrawSettings;
// ********** End ScriptStruct FNDCIslandDebugDrawSettings *****************************************

// ********** Begin Class UNiagaraDataChannel_Islands **********************************************
struct Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Islands_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannel_Islands(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannel_Islands_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannel_Islands, UNiagaraDataChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannel_Islands_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannel_Islands)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannel_Islands(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannel_Islands(UNiagaraDataChannel_Islands&&) = delete; \
	UNiagaraDataChannel_Islands(const UNiagaraDataChannel_Islands&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannel_Islands); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannel_Islands); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannel_Islands) \
	NIAGARA_API virtual ~UNiagaraDataChannel_Islands();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_111_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannel_Islands;

// ********** End Class UNiagaraDataChannel_Islands ************************************************

// ********** Begin Class UNiagaraDataChannelHandler_Islands ***************************************
struct Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_192_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelHandler_Islands(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataChannelHandler_Islands, UNiagaraDataChannelHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataChannelHandler_Islands)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_192_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataChannelHandler_Islands(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelHandler_Islands) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataChannelHandler_Islands); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelHandler_Islands); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataChannelHandler_Islands(UNiagaraDataChannelHandler_Islands&&) = delete; \
	UNiagaraDataChannelHandler_Islands(const UNiagaraDataChannelHandler_Islands&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataChannelHandler_Islands();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_189_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_192_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_192_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_192_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataChannelHandler_Islands;

// ********** End Class UNiagaraDataChannelHandler_Islands *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h

// ********** Begin Enum ENiagraDataChannel_IslandMode *********************************************
#define FOREACH_ENUM_ENIAGRADATACHANNEL_ISLANDMODE(op) \
	op(ENiagraDataChannel_IslandMode::AlignedStatic) \
	op(ENiagraDataChannel_IslandMode::Dynamic) 

enum class ENiagraDataChannel_IslandMode : uint8;
template<> struct TIsUEnumClass<ENiagraDataChannel_IslandMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagraDataChannel_IslandMode>();
// ********** End Enum ENiagraDataChannel_IslandMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
