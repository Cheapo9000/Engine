// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkeletalMeshSocket.h"

#ifdef ENGINE_SkeletalMeshSocket_generated_h
#error "SkeletalMeshSocket.generated.h already included, missing '#pragma once' in SkeletalMeshSocket.h"
#endif
#define ENGINE_SkeletalMeshSocket_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
class USkeletalMeshComponent;

// ********** Begin Class USkeletalMeshSocket ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSocketLocalTransform); \
	DECLARE_FUNCTION(execInitializeSocketFromLocation); \
	DECLARE_FUNCTION(execGetSocketLocation);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetSocketLocalTransform); \
	DECLARE_FUNCTION(execSetSocketParent);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshSocket, ENGINE_API)


struct Z_Construct_UClass_USkeletalMeshSocket_Statics;
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshSocket(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshSocket_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USkeletalMeshSocket_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USkeletalMeshSocket_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshSocket) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshSocket(USkeletalMeshSocket&&) = delete; \
	USkeletalMeshSocket(const USkeletalMeshSocket&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshSocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshSocket) \
	ENGINE_API virtual ~USkeletalMeshSocket();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshSocket;

// ********** End Class USkeletalMeshSocket ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
