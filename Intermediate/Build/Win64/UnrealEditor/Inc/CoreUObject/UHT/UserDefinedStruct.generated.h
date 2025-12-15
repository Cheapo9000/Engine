// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructUtils/UserDefinedStruct.h"

#ifdef COREUOBJECT_UserDefinedStruct_generated_h
#error "UserDefinedStruct.generated.h already included, missing '#pragma once' in UserDefinedStruct.h"
#endif
#define COREUOBJECT_UserDefinedStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUserDefinedStruct *******************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_62_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UUserDefinedStruct, COREUOBJECT_API)


struct Z_Construct_UClass_UUserDefinedStruct_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUUserDefinedStruct(); \
	friend struct ::Z_Construct_UClass_UUserDefinedStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UUserDefinedStruct_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserDefinedStruct, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UUserDefinedStruct_NoRegister) \
	DECLARE_SERIALIZER(UUserDefinedStruct) \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_62_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UUserDefinedStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedStruct) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UUserDefinedStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedStruct); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserDefinedStruct(UUserDefinedStruct&&) = delete; \
	UUserDefinedStruct(const UUserDefinedStruct&) = delete; \
	COREUOBJECT_API virtual ~UUserDefinedStruct();


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_59_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_62_INCLASS \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserDefinedStruct;

// ********** End Class UUserDefinedStruct *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_UserDefinedStruct_h

// ********** Begin Enum EUserDefinedStructureStatus ***********************************************
#define FOREACH_ENUM_EUSERDEFINEDSTRUCTURESTATUS(op) \
	op(UDSS_UpToDate) \
	op(UDSS_Dirty) \
	op(UDSS_Error) \
	op(UDSS_Duplicate) 

enum EUserDefinedStructureStatus : int;
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EUserDefinedStructureStatus>();
// ********** End Enum EUserDefinedStructureStatus *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
