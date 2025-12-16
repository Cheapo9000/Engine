// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "3D/ProceduralMeshActor.h"

#ifdef TEXTUREGRAPHENGINE_ProceduralMeshActor_generated_h
#error "ProceduralMeshActor.generated.h already included, missing '#pragma once' in ProceduralMeshActor.h"
#endif
#define TEXTUREGRAPHENGINE_ProceduralMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProceduralMeshActor *****************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_ProceduralMeshActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMeshName); \
	DECLARE_FUNCTION(execGetMeshName); \
	DECLARE_FUNCTION(execToggleDebug);


struct Z_Construct_UClass_AProceduralMeshActor_Statics;
TEXTUREGRAPHENGINE_API UClass* Z_Construct_UClass_AProceduralMeshActor_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_ProceduralMeshActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralMeshActor(); \
	friend struct ::Z_Construct_UClass_AProceduralMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHENGINE_API UClass* ::Z_Construct_UClass_AProceduralMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AProceduralMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureGraphEngine"), Z_Construct_UClass_AProceduralMeshActor_NoRegister) \
	DECLARE_SERIALIZER(AProceduralMeshActor)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_ProceduralMeshActor_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProceduralMeshActor(AProceduralMeshActor&&) = delete; \
	AProceduralMeshActor(const AProceduralMeshActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPHENGINE_API, AProceduralMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceduralMeshActor)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_ProceduralMeshActor_h_27_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_ProceduralMeshActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_ProceduralMeshActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_ProceduralMeshActor_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_ProceduralMeshActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProceduralMeshActor;

// ********** End Class AProceduralMeshActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_3D_ProceduralMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
