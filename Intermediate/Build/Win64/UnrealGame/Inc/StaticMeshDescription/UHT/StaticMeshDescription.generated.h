// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticMeshDescription.h"

#ifdef STATICMESHDESCRIPTION_StaticMeshDescription_generated_h
#error "StaticMeshDescription.generated.h already included, missing '#pragma once' in StaticMeshDescription.h"
#endif
#define STATICMESHDESCRIPTION_StaticMeshDescription_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPolygonGroupID;
struct FPolygonID;
struct FVertexInstanceID;

// ********** Begin Class UStaticMeshDescription ***************************************************
#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPolygonGroupMaterialSlotName); \
	DECLARE_FUNCTION(execCreateCube); \
	DECLARE_FUNCTION(execSetVertexInstanceUV); \
	DECLARE_FUNCTION(execGetVertexInstanceUV);


struct Z_Construct_UClass_UStaticMeshDescription_Statics;
STATICMESHDESCRIPTION_API UClass* Z_Construct_UClass_UStaticMeshDescription_NoRegister();

#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshDescription(); \
	friend struct ::Z_Construct_UClass_UStaticMeshDescription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATICMESHDESCRIPTION_API UClass* ::Z_Construct_UClass_UStaticMeshDescription_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshDescription, UMeshDescriptionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StaticMeshDescription"), Z_Construct_UClass_UStaticMeshDescription_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshDescription)


#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATICMESHDESCRIPTION_API UStaticMeshDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshDescription(UStaticMeshDescription&&) = delete; \
	UStaticMeshDescription(const UStaticMeshDescription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATICMESHDESCRIPTION_API, UStaticMeshDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshDescription) \
	STATICMESHDESCRIPTION_API virtual ~UStaticMeshDescription();


#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_26_PROLOG
#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_30_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshDescription;

// ********** End Class UStaticMeshDescription *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
