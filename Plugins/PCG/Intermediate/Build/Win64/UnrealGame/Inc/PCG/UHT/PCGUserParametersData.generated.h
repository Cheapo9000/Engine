// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGUserParametersData.h"

#ifdef PCG_PCGUserParametersData_generated_h
#error "PCGUserParametersData.generated.h already included, missing '#pragma once' in PCGUserParametersData.h"
#endif
#define PCG_PCGUserParametersData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGUserParametersData ***************************************************
struct Z_Construct_UClass_UPCGUserParametersData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGUserParametersData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGUserParametersData(); \
	friend struct ::Z_Construct_UClass_UPCGUserParametersData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGUserParametersData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGUserParametersData, UPCGData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGUserParametersData_NoRegister) \
	DECLARE_SERIALIZER(UPCGUserParametersData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGUserParametersData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGUserParametersData(UPCGUserParametersData&&) = delete; \
	UPCGUserParametersData(const UPCGUserParametersData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGUserParametersData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGUserParametersData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGUserParametersData) \
	NO_API virtual ~UPCGUserParametersData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGUserParametersData;

// ********** End Class UPCGUserParametersData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGUserParametersData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
