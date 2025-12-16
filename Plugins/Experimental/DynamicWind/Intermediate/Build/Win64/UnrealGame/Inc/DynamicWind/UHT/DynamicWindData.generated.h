// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicWindData.h"

#ifdef DYNAMICWIND_DynamicWindData_generated_h
#error "DynamicWindData.generated.h already included, missing '#pragma once' in DynamicWindData.h"
#endif
#define DYNAMICWIND_DynamicWindData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDynamicWindData *********************************************************
struct Z_Construct_UClass_UDynamicWindData_Statics;
DYNAMICWIND_API UClass* Z_Construct_UClass_UDynamicWindData_NoRegister();

#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicWindData(); \
	friend struct ::Z_Construct_UClass_UDynamicWindData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICWIND_API UClass* ::Z_Construct_UClass_UDynamicWindData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicWindData, UTransformProviderData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicWind"), Z_Construct_UClass_UDynamicWindData_NoRegister) \
	DECLARE_SERIALIZER(UDynamicWindData)


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICWIND_API UDynamicWindData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicWindData(UDynamicWindData&&) = delete; \
	UDynamicWindData(const UDynamicWindData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICWIND_API, UDynamicWindData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicWindData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicWindData) \
	DYNAMICWIND_API virtual ~UDynamicWindData();


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicWindData;

// ********** End Class UDynamicWindData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
