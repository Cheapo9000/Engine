// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CloudStorageBase.h"

#ifdef ENGINE_CloudStorageBase_generated_h
#error "CloudStorageBase.generated.h already included, missing '#pragma once' in CloudStorageBase.h"
#endif
#define ENGINE_CloudStorageBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCloudStorageBase ********************************************************
struct Z_Construct_UClass_UCloudStorageBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCloudStorageBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUCloudStorageBase(); \
	friend struct ::Z_Construct_UClass_UCloudStorageBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCloudStorageBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCloudStorageBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCloudStorageBase_NoRegister) \
	DECLARE_SERIALIZER(UCloudStorageBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCloudStorageBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCloudStorageBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCloudStorageBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloudStorageBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCloudStorageBase(UCloudStorageBase&&) = delete; \
	UCloudStorageBase(const UCloudStorageBase&) = delete; \
	NO_API virtual ~UCloudStorageBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_33_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCloudStorageBase;

// ********** End Class UCloudStorageBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h

// ********** Begin Enum ECloudStorageDelegate *****************************************************
#define FOREACH_ENUM_ECLOUDSTORAGEDELEGATE(op) \
	op(CSD_KeyValueReadComplete) \
	op(CSD_KeyValueWriteComplete) \
	op(CSD_ValueChanged) \
	op(CSD_DocumentQueryComplete) \
	op(CSD_DocumentReadComplete) \
	op(CSD_DocumentWriteComplete) \
	op(CSD_DocumentConflictDetected) 

enum ECloudStorageDelegate : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECloudStorageDelegate>();
// ********** End Enum ECloudStorageDelegate *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
