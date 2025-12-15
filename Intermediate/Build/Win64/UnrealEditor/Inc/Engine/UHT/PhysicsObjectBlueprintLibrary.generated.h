// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsObjectBlueprintLibrary.h"

#ifdef ENGINE_PhysicsObjectBlueprintLibrary_generated_h
#error "PhysicsObjectBlueprintLibrary.generated.h already included, missing '#pragma once' in PhysicsObjectBlueprintLibrary.h"
#endif
#define ENGINE_PhysicsObjectBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FClosestPhysicsObjectResult;

// ********** Begin Class UPhysicsObjectBlueprintLibrary *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyRadialImpulse); \
	DECLARE_FUNCTION(execGetPhysicsObjectWorldTransform); \
	DECLARE_FUNCTION(execExtractClosestPhysicsObjectResults); \
	DECLARE_FUNCTION(execGetClosestPhysicsObjectFromWorldLocation);


struct Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsObjectBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsObjectBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsObjectBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsObjectBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsObjectBlueprintLibrary(UPhysicsObjectBlueprintLibrary&&) = delete; \
	UPhysicsObjectBlueprintLibrary(const UPhysicsObjectBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsObjectBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsObjectBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsObjectBlueprintLibrary) \
	NO_API virtual ~UPhysicsObjectBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsObjectBlueprintLibrary;

// ********** End Class UPhysicsObjectBlueprintLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
