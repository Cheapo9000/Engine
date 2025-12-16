// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGCollisionWrapperData.h"

#ifdef PCG_PCGCollisionWrapperData_generated_h
#error "PCGCollisionWrapperData.generated.h already included, missing '#pragma once' in PCGCollisionWrapperData.h"
#endif
#define PCG_PCGCollisionWrapperData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCollisionWrapperData *************************************************
struct Z_Construct_UClass_UPCGCollisionWrapperData_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCollisionWrapperData_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCollisionWrapperData(); \
	friend struct ::Z_Construct_UClass_UPCGCollisionWrapperData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCollisionWrapperData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCollisionWrapperData, UPCGSpatialData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCollisionWrapperData_NoRegister) \
	DECLARE_SERIALIZER(UPCGCollisionWrapperData)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGCollisionWrapperData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCollisionWrapperData(UPCGCollisionWrapperData&&) = delete; \
	UPCGCollisionWrapperData(const UPCGCollisionWrapperData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCollisionWrapperData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCollisionWrapperData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCollisionWrapperData) \
	PCG_API virtual ~UPCGCollisionWrapperData();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h_59_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCollisionWrapperData;

// ********** End Class UPCGCollisionWrapperData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionWrapperData_h

// ********** Begin Enum EPCGCollisionQueryFlag ****************************************************
#define FOREACH_ENUM_EPCGCOLLISIONQUERYFLAG(op) \
	op(EPCGCollisionQueryFlag::Simple) \
	op(EPCGCollisionQueryFlag::Complex) \
	op(EPCGCollisionQueryFlag::SimpleFirst) \
	op(EPCGCollisionQueryFlag::ComplexFirst) 

enum class EPCGCollisionQueryFlag : uint8;
template<> struct TIsUEnumClass<EPCGCollisionQueryFlag> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCollisionQueryFlag>();
// ********** End Enum EPCGCollisionQueryFlag ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
