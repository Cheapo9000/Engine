// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SCS_Node.h"

#ifdef ENGINE_SCS_Node_generated_h
#error "SCS_Node.generated.h already included, missing '#pragma once' in SCS_Node.h"
#endif
#define ENGINE_SCS_Node_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USCS_Node ****************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USCS_Node, ENGINE_API)


struct Z_Construct_UClass_USCS_Node_Statics;
ENGINE_API UClass* Z_Construct_UClass_USCS_Node_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSCS_Node(); \
	friend struct ::Z_Construct_UClass_USCS_Node_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USCS_Node_NoRegister(); \
public: \
	DECLARE_CLASS2(USCS_Node, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USCS_Node_NoRegister) \
	DECLARE_SERIALIZER(USCS_Node) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_22_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USCS_Node(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USCS_Node) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USCS_Node); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCS_Node); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USCS_Node(USCS_Node&&) = delete; \
	USCS_Node(const USCS_Node&) = delete; \
	ENGINE_API virtual ~USCS_Node();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USCS_Node;

// ********** End Class USCS_Node ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
