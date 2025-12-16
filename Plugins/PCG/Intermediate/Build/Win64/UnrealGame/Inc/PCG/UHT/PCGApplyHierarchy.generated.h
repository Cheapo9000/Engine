// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGApplyHierarchy.h"

#ifdef PCG_PCGApplyHierarchy_generated_h
#error "PCGApplyHierarchy.generated.h already included, missing '#pragma once' in PCGApplyHierarchy.h"
#endif
#define PCG_PCGApplyHierarchy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGApplyHierarchySettings ***********************************************
struct Z_Construct_UClass_UPCGApplyHierarchySettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGApplyHierarchySettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyHierarchy_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGApplyHierarchySettings(); \
	friend struct ::Z_Construct_UClass_UPCGApplyHierarchySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGApplyHierarchySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGApplyHierarchySettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGApplyHierarchySettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGApplyHierarchySettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyHierarchy_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGApplyHierarchySettings(UPCGApplyHierarchySettings&&) = delete; \
	UPCGApplyHierarchySettings(const UPCGApplyHierarchySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGApplyHierarchySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGApplyHierarchySettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGApplyHierarchySettings) \
	PCG_API virtual ~UPCGApplyHierarchySettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyHierarchy_h_24_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyHierarchy_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyHierarchy_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyHierarchy_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGApplyHierarchySettings;

// ********** End Class UPCGApplyHierarchySettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyHierarchy_h

// ********** Begin Enum EPCGApplyHierarchyOption **************************************************
#define FOREACH_ENUM_EPCGAPPLYHIERARCHYOPTION(op) \
	op(EPCGApplyHierarchyOption::Always) \
	op(EPCGApplyHierarchyOption::Never) \
	op(EPCGApplyHierarchyOption::OptInByAttribute) \
	op(EPCGApplyHierarchyOption::OptOutByAttribute) 

enum class EPCGApplyHierarchyOption : uint8;
template<> struct TIsUEnumClass<EPCGApplyHierarchyOption> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGApplyHierarchyOption>();
// ********** End Enum EPCGApplyHierarchyOption ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
