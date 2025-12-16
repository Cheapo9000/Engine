// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSelfPruning.h"

#ifdef PCG_PCGSelfPruning_generated_h
#error "PCGSelfPruning.generated.h already included, missing '#pragma once' in PCGSelfPruning.h"
#endif
#define PCG_PCGSelfPruning_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGSelfPruningParameters *****************************************
struct Z_Construct_UScriptStruct_FPCGSelfPruningParameters_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSelfPruningParameters_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSelfPruningParameters;
// ********** End ScriptStruct FPCGSelfPruningParameters *******************************************

// ********** Begin Class UPCGSelfPruningSettings **************************************************
struct Z_Construct_UClass_UPCGSelfPruningSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSelfPruningSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSelfPruningSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSelfPruningSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSelfPruningSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSelfPruningSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSelfPruningSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSelfPruningSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_129_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSelfPruningSettings(UPCGSelfPruningSettings&&) = delete; \
	UPCGSelfPruningSettings(const UPCGSelfPruningSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSelfPruningSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSelfPruningSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSelfPruningSettings) \
	PCG_API virtual ~UPCGSelfPruningSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_126_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSelfPruningSettings;

// ********** End Class UPCGSelfPruningSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h

// ********** Begin Enum EPCGSelfPruningType *******************************************************
#define FOREACH_ENUM_EPCGSELFPRUNINGTYPE(op) \
	op(EPCGSelfPruningType::LargeToSmall) \
	op(EPCGSelfPruningType::SmallToLarge) \
	op(EPCGSelfPruningType::AllEqual) \
	op(EPCGSelfPruningType::None) \
	op(EPCGSelfPruningType::RemoveDuplicates) 

enum class EPCGSelfPruningType : uint8;
template<> struct TIsUEnumClass<EPCGSelfPruningType> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSelfPruningType>();
// ********** End Enum EPCGSelfPruningType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
