// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/FloorQueryUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef MOVER_FloorQueryUtils_generated_h
#error "FloorQueryUtils.generated.h already included, missing '#pragma once' in FloorQueryUtils.h"
#endif
#define MOVER_FloorQueryUtils_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloorCheckResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FFloorCheckResult>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsHitSurfaceWalkable);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloorQueryUtils(); \
	friend struct Z_Construct_UClass_UFloorQueryUtils_Statics; \
public: \
	DECLARE_CLASS(UFloorQueryUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UFloorQueryUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloorQueryUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFloorQueryUtils(UFloorQueryUtils&&); \
	UFloorQueryUtils(const UFloorQueryUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloorQueryUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloorQueryUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloorQueryUtils) \
	NO_API virtual ~UFloorQueryUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_105_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UFloorQueryUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
