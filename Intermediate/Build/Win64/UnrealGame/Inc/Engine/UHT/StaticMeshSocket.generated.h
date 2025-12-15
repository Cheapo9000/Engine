// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/StaticMeshSocket.h"

#ifdef ENGINE_StaticMeshSocket_generated_h
#error "StaticMeshSocket.generated.h already included, missing '#pragma once' in StaticMeshSocket.h"
#endif
#define ENGINE_StaticMeshSocket_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStaticMeshSocket ********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMeshSocket, ENGINE_API)


struct Z_Construct_UClass_UStaticMeshSocket_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshSocket(); \
	friend struct ::Z_Construct_UClass_UStaticMeshSocket_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStaticMeshSocket_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMeshSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStaticMeshSocket_NoRegister) \
	DECLARE_SERIALIZER(UStaticMeshSocket) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStaticMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMeshSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshSocket); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMeshSocket(UStaticMeshSocket&&) = delete; \
	UStaticMeshSocket(const UStaticMeshSocket&) = delete; \
	ENGINE_API virtual ~UStaticMeshSocket();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMeshSocket;

// ********** End Class UStaticMeshSocket **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
