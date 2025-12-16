// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NaniteDisplacedMeshComponent.h"

#ifdef NANITEDISPLACEDMESH_NaniteDisplacedMeshComponent_generated_h
#error "NaniteDisplacedMeshComponent.generated.h already included, missing '#pragma once' in NaniteDisplacedMeshComponent.h"
#endif
#define NANITEDISPLACEDMESH_NaniteDisplacedMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNaniteDisplacedMeshComponent ********************************************
struct Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics;
NANITEDISPLACEDMESH_API UClass* Z_Construct_UClass_UNaniteDisplacedMeshComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNaniteDisplacedMeshComponent(); \
	friend struct ::Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NANITEDISPLACEDMESH_API UClass* ::Z_Construct_UClass_UNaniteDisplacedMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNaniteDisplacedMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaniteDisplacedMesh"), Z_Construct_UClass_UNaniteDisplacedMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UNaniteDisplacedMeshComponent)


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NANITEDISPLACEDMESH_API UNaniteDisplacedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNaniteDisplacedMeshComponent(UNaniteDisplacedMeshComponent&&) = delete; \
	UNaniteDisplacedMeshComponent(const UNaniteDisplacedMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NANITEDISPLACEDMESH_API, UNaniteDisplacedMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaniteDisplacedMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaniteDisplacedMeshComponent) \
	NANITEDISPLACEDMESH_API virtual ~UNaniteDisplacedMeshComponent();


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNaniteDisplacedMeshComponent;

// ********** End Class UNaniteDisplacedMeshComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
