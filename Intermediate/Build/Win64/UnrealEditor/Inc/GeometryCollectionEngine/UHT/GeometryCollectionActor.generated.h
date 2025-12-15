// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionActor.h"

#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionActor_generated_h
#error "GeometryCollectionActor.generated.h already included, missing '#pragma once' in GeometryCollectionActor.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;

// ********** Begin Class AGeometryCollectionActor *************************************************
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRaycastSingle);


struct Z_Construct_UClass_AGeometryCollectionActor_Statics;
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAGeometryCollectionActor(); \
	friend struct ::Z_Construct_UClass_AGeometryCollectionActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCOLLECTIONENGINE_API UClass* ::Z_Construct_UClass_AGeometryCollectionActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGeometryCollectionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), Z_Construct_UClass_AGeometryCollectionActor_NoRegister) \
	DECLARE_SERIALIZER(AGeometryCollectionActor)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCollectionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONENGINE_API, AGeometryCollectionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCollectionActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGeometryCollectionActor(AGeometryCollectionActor&&) = delete; \
	AGeometryCollectionActor(const AGeometryCollectionActor&) = delete; \
	GEOMETRYCOLLECTIONENGINE_API virtual ~AGeometryCollectionActor();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_18_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_INCLASS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGeometryCollectionActor;

// ********** End Class AGeometryCollectionActor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
