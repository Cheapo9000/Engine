// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverDataModelTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterDefaultInputs;
struct FMoverDefaultSyncState;
#ifdef MOVER_MoverDataModelTypes_generated_h
#error "MoverDataModelTypes.generated.h already included, missing '#pragma once' in MoverDataModelTypes.h"
#endif
#define MOVER_MoverDataModelTypes_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FCharacterDefaultInputs>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverDefaultSyncState>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOrientationFromSyncState); \
	DECLARE_FUNCTION(execGetVelocityFromSyncState); \
	DECLARE_FUNCTION(execGetMoveDirectionIntentFromSyncState); \
	DECLARE_FUNCTION(execGetLocationFromSyncState); \
	DECLARE_FUNCTION(execGetMoveDirectionIntentFromInputs); \
	DECLARE_FUNCTION(execSetMoveIntent);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverDataModelBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMoverDataModelBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMoverDataModelBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverDataModelBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_238_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoverDataModelBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverDataModelBlueprintLibrary(UMoverDataModelBlueprintLibrary&&); \
	UMoverDataModelBlueprintLibrary(const UMoverDataModelBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverDataModelBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverDataModelBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverDataModelBlueprintLibrary) \
	NO_API virtual ~UMoverDataModelBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_235_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_238_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverDataModelBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h


#define FOREACH_ENUM_EMOVEINPUTTYPE(op) \
	op(EMoveInputType::Invalid) \
	op(EMoveInputType::DirectionalIntent) \
	op(EMoveInputType::Velocity) 

enum class EMoveInputType : uint8;
template<> struct TIsUEnumClass<EMoveInputType> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EMoveInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
