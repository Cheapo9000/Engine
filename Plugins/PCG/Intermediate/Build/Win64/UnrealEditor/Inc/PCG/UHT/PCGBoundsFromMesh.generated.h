// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGBoundsFromMesh.h"

#ifdef PCG_PCGBoundsFromMesh_generated_h
#error "PCGBoundsFromMesh.generated.h already included, missing '#pragma once' in PCGBoundsFromMesh.h"
#endif
#define PCG_PCGBoundsFromMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGBoundsFromMeshSettings ***********************************************
struct Z_Construct_UClass_UPCGBoundsFromMeshSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBoundsFromMeshSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsFromMesh_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBoundsFromMeshSettings(); \
	friend struct ::Z_Construct_UClass_UPCGBoundsFromMeshSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBoundsFromMeshSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBoundsFromMeshSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBoundsFromMeshSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGBoundsFromMeshSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsFromMesh_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBoundsFromMeshSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBoundsFromMeshSettings(UPCGBoundsFromMeshSettings&&) = delete; \
	UPCGBoundsFromMeshSettings(const UPCGBoundsFromMeshSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBoundsFromMeshSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBoundsFromMeshSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBoundsFromMeshSettings) \
	PCG_API virtual ~UPCGBoundsFromMeshSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsFromMesh_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsFromMesh_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsFromMesh_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsFromMesh_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBoundsFromMeshSettings;

// ********** End Class UPCGBoundsFromMeshSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBoundsFromMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
