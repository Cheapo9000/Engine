// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGPointArrayData.h"

#ifdef PCG_PCGPointArrayData_generated_h
#error "PCGPointArrayData.generated.h already included, missing '#pragma once' in PCGPointArrayData.h"
#endif
#define PCG_PCGPointArrayData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGPointArrayData *******************************************************
struct Z_Construct_UClass_UPCGPointArrayData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPointArrayData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPointArrayData(); \
	friend struct ::Z_Construct_UClass_UPCGPointArrayData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPointArrayData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPointArrayData, UPCGBasePointData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPointArrayData_NoRegister) \
	DECLARE_SERIALIZER(UPCGPointArrayData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGPointArrayData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPointArrayData(UPCGPointArrayData&&) = delete; \
	UPCGPointArrayData(const UPCGPointArrayData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPointArrayData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointArrayData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPointArrayData) \
	PCG_API virtual ~UPCGPointArrayData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPointArrayData;

// ********** End Class UPCGPointArrayData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointArrayData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
