// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGCollisionShapeData.h"

#ifdef PCG_PCGCollisionShapeData_generated_h
#error "PCGCollisionShapeData.generated.h already included, missing '#pragma once' in PCGCollisionShapeData.h"
#endif
#define PCG_PCGCollisionShapeData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCollisionShapeData ***************************************************
struct Z_Construct_UClass_UPCGCollisionShapeData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCollisionShapeData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCollisionShapeData(); \
	friend struct ::Z_Construct_UClass_UPCGCollisionShapeData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCollisionShapeData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCollisionShapeData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCollisionShapeData_NoRegister) \
	DECLARE_SERIALIZER(UPCGCollisionShapeData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGCollisionShapeData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCollisionShapeData(UPCGCollisionShapeData&&) = delete; \
	UPCGCollisionShapeData(const UPCGCollisionShapeData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCollisionShapeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCollisionShapeData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCollisionShapeData) \
	PCG_API virtual ~UPCGCollisionShapeData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCollisionShapeData;

// ********** End Class UPCGCollisionShapeData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
