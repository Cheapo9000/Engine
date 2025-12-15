// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/UserDefinedEnum.h"

#ifdef ENGINE_UserDefinedEnum_generated_h
#error "UserDefinedEnum.generated.h already included, missing '#pragma once' in UserDefinedEnum.h"
#endif
#define ENGINE_UserDefinedEnum_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUserDefinedEnum *********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUserDefinedEnum, ENGINE_API)


struct Z_Construct_UClass_UUserDefinedEnum_Statics;
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUUserDefinedEnum(); \
	friend struct ::Z_Construct_UClass_UUserDefinedEnum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UUserDefinedEnum_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserDefinedEnum, UEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UUserDefinedEnum_NoRegister) \
	DECLARE_SERIALIZER(UUserDefinedEnum) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UUserDefinedEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedEnum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UUserDefinedEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedEnum); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserDefinedEnum(UUserDefinedEnum&&) = delete; \
	UUserDefinedEnum(const UUserDefinedEnum&) = delete; \
	ENGINE_API virtual ~UUserDefinedEnum();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserDefinedEnum;

// ********** End Class UUserDefinedEnum ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
