// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGPointData.h"

#ifdef PCG_PCGPointData_generated_h
#error "PCGPointData.generated.h already included, missing '#pragma once' in PCGPointData.h"
#endif
#define PCG_PCGPointData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPCGPoint;

// ********** Begin Class UPCGPointData ************************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPoints); \
	DECLARE_FUNCTION(execGetPoint); \
	DECLARE_FUNCTION(execGetPointsCopy); \
	DECLARE_FUNCTION(execGetPoints);


struct Z_Construct_UClass_UPCGPointData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPointData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPointData(); \
	friend struct ::Z_Construct_UClass_UPCGPointData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPointData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPointData, UPCGBasePointData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPointData_NoRegister) \
	DECLARE_SERIALIZER(UPCGPointData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGPointData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPointData(UPCGPointData&&) = delete; \
	UPCGPointData(const UPCGPointData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPointData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPointData) \
	PCG_API virtual ~UPCGPointData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_70_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPointData;

// ********** End Class UPCGPointData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
