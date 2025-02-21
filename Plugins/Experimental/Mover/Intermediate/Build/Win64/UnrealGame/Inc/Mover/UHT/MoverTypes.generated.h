// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMoverDataCollection;
#ifdef MOVER_MoverTypes_generated_h
#error "MoverTypes.generated.h already included, missing '#pragma once' in MoverTypes.h"
#endif
#define MOVER_MoverTypes_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverOnImpactParams>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverTimeStep_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverTimeStep>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverPredictTrajectoryParams>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDataStructBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverDataStructBase>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDataCollection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverDataCollection>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_307_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDataPersistence_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverDataPersistence>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_331_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearDataFromCollection);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_331_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverDataCollectionLibrary(); \
	friend struct Z_Construct_UClass_UMoverDataCollectionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMoverDataCollectionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverDataCollectionLibrary)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_331_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoverDataCollectionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverDataCollectionLibrary(UMoverDataCollectionLibrary&&); \
	UMoverDataCollectionLibrary(const UMoverDataCollectionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverDataCollectionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverDataCollectionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverDataCollectionLibrary) \
	NO_API virtual ~UMoverDataCollectionLibrary();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_328_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_331_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_331_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_331_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_331_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverDataCollectionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h


#define FOREACH_ENUM_EMOVERSMOOTHINGMODE(op) \
	op(EMoverSmoothingMode::None) \
	op(EMoverSmoothingMode::VisualComponentOffset) 

enum class EMoverSmoothingMode : uint8;
template<> struct TIsUEnumClass<EMoverSmoothingMode> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EMoverSmoothingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
