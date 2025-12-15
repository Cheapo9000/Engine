// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionBlueprintLibrary.h"

#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionBlueprintLibrary_generated_h
#error "GeometryCollectionBlueprintLibrary.generated.h already included, missing '#pragma once' in GeometryCollectionBlueprintLibrary.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCollectionComponent;

// ********** Begin Class UGeometryCollectionBlueprintLibrary **************************************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetISMPoolCustomInstanceData); \
	DECLARE_FUNCTION(execSetCustomInstanceDataByName); \
	DECLARE_FUNCTION(execSetCustomInstanceDataByIndex);


struct Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics;
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCollectionBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCOLLECTIONENGINE_API UClass* ::Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCollectionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCollectionBlueprintLibrary)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCollectionBlueprintLibrary(UGeometryCollectionBlueprintLibrary&&) = delete; \
	UGeometryCollectionBlueprintLibrary(const UGeometryCollectionBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONENGINE_API, UGeometryCollectionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionBlueprintLibrary) \
	GEOMETRYCOLLECTIONENGINE_API virtual ~UGeometryCollectionBlueprintLibrary();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_12_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCollectionBlueprintLibrary;

// ********** End Class UGeometryCollectionBlueprintLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
