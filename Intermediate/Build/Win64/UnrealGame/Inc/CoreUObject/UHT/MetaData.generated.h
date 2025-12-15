// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/MetaData.h"

#ifdef COREUOBJECT_MetaData_generated_h
#error "MetaData.generated.h already included, missing '#pragma once' in MetaData.h"
#endif
#define COREUOBJECT_MetaData_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_MetaData *****************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h_35_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDEPRECATED_MetaData, COREUOBJECT_API)


struct Z_Construct_UClass_UDEPRECATED_MetaData_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UDEPRECATED_MetaData_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_MetaData(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_MetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UDEPRECATED_MetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_MetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UDEPRECATED_MetaData_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_MetaData) \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h_35_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UDEPRECATED_MetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_MetaData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UDEPRECATED_MetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_MetaData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_MetaData(UDEPRECATED_MetaData&&) = delete; \
	UDEPRECATED_MetaData(const UDEPRECATED_MetaData&) = delete; \
	COREUOBJECT_API virtual ~UDEPRECATED_MetaData();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h_32_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h_35_INCLASS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_MetaData;

// ********** End Class UDEPRECATED_MetaData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
