// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/ConstrainedMoveUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlanarConstraint;
#ifdef MOVER_ConstrainedMoveUtils_generated_h
#error "ConstrainedMoveUtils.generated.h already included, missing '#pragma once' in ConstrainedMoveUtils.h"
#endif
#define MOVER_ConstrainedMoveUtils_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlanarConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FPlanarConstraint>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConstrainNormalToPlane); \
	DECLARE_FUNCTION(execConstrainLocationToPlane); \
	DECLARE_FUNCTION(execConstrainDirectionToPlane); \
	DECLARE_FUNCTION(execSetPlaneConstraintOrigin); \
	DECLARE_FUNCTION(execSetPlanarConstraintNormal); \
	DECLARE_FUNCTION(execSetPlanarConstraintEnabled);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlanarConstraintUtils(); \
	friend struct Z_Construct_UClass_UPlanarConstraintUtils_Statics; \
public: \
	DECLARE_CLASS(UPlanarConstraintUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UPlanarConstraintUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlanarConstraintUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlanarConstraintUtils(UPlanarConstraintUtils&&); \
	UPlanarConstraintUtils(const UPlanarConstraintUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlanarConstraintUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlanarConstraintUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlanarConstraintUtils) \
	NO_API virtual ~UPlanarConstraintUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UPlanarConstraintUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
