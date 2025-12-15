// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/MeshMergeCullingVolume.h"

#ifdef ENGINE_MeshMergeCullingVolume_generated_h
#error "MeshMergeCullingVolume.generated.h already included, missing '#pragma once' in MeshMergeCullingVolume.h"
#endif
#define ENGINE_MeshMergeCullingVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMeshMergeCullingVolume **************************************************
struct Z_Construct_UClass_AMeshMergeCullingVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMeshMergeCullingVolume(); \
	friend struct ::Z_Construct_UClass_AMeshMergeCullingVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AMeshMergeCullingVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AMeshMergeCullingVolume_NoRegister) \
	DECLARE_SERIALIZER(AMeshMergeCullingVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AMeshMergeCullingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeshMergeCullingVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AMeshMergeCullingVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeshMergeCullingVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMeshMergeCullingVolume(AMeshMergeCullingVolume&&) = delete; \
	AMeshMergeCullingVolume(const AMeshMergeCullingVolume&) = delete; \
	ENGINE_API virtual ~AMeshMergeCullingVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMeshMergeCullingVolume;

// ********** End Class AMeshMergeCullingVolume ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
