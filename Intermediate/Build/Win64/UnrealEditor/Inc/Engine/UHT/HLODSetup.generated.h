// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HLOD/HLODSetup.h"

#ifdef ENGINE_HLODSetup_generated_h
#error "HLODSetup.generated.h already included, missing '#pragma once' in HLODSetup.h"
#endif
#define ENGINE_HLODSetup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHierarchicalSimplification ***************************************
struct Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FHierarchicalSimplification;
// ********** End ScriptStruct FHierarchicalSimplification *****************************************

// ********** Begin Class UHierarchicalLODSetup ****************************************************
struct Z_Construct_UClass_UHierarchicalLODSetup_Statics;
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalLODSetup_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHierarchicalLODSetup(); \
	friend struct ::Z_Construct_UClass_UHierarchicalLODSetup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UHierarchicalLODSetup_NoRegister(); \
public: \
	DECLARE_CLASS2(UHierarchicalLODSetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UHierarchicalLODSetup_NoRegister) \
	DECLARE_SERIALIZER(UHierarchicalLODSetup)


#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHierarchicalLODSetup(UHierarchicalLODSetup&&) = delete; \
	UHierarchicalLODSetup(const UHierarchicalLODSetup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHierarchicalLODSetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalLODSetup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHierarchicalLODSetup) \
	ENGINE_API virtual ~UHierarchicalLODSetup();


#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_104_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHierarchicalLODSetup;

// ********** End Class UHierarchicalLODSetup ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODSetup_h

// ********** Begin Enum EHierarchicalSimplificationMethod *****************************************
#define FOREACH_ENUM_EHIERARCHICALSIMPLIFICATIONMETHOD(op) \
	op(EHierarchicalSimplificationMethod::None) \
	op(EHierarchicalSimplificationMethod::Merge) \
	op(EHierarchicalSimplificationMethod::Simplify) \
	op(EHierarchicalSimplificationMethod::Approximate) 

enum class EHierarchicalSimplificationMethod : uint8;
template<> struct TIsUEnumClass<EHierarchicalSimplificationMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHierarchicalSimplificationMethod>();
// ********** End Enum EHierarchicalSimplificationMethod *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
