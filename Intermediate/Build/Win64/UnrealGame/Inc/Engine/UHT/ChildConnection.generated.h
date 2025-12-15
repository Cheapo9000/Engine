// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ChildConnection.h"

#ifdef ENGINE_ChildConnection_generated_h
#error "ChildConnection.generated.h already included, missing '#pragma once' in ChildConnection.h"
#endif
#define ENGINE_ChildConnection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChildConnection *********************************************************
struct Z_Construct_UClass_UChildConnection_Statics;
ENGINE_API UClass* Z_Construct_UClass_UChildConnection_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUChildConnection(); \
	friend struct ::Z_Construct_UClass_UChildConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UChildConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UChildConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UChildConnection_NoRegister) \
	DECLARE_SERIALIZER(UChildConnection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UChildConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChildConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UChildConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChildConnection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChildConnection(UChildConnection&&) = delete; \
	UChildConnection(const UChildConnection&) = delete; \
	ENGINE_API virtual ~UChildConnection();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChildConnection;

// ********** End Class UChildConnection ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
