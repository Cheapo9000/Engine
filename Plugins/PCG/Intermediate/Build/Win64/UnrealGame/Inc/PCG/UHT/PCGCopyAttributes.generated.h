// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCopyAttributes.h"

#ifdef PCG_PCGCopyAttributes_generated_h
#error "PCGCopyAttributes.generated.h already included, missing '#pragma once' in PCGCopyAttributes.h"
#endif
#define PCG_PCGCopyAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCopyAttributesSettings ***********************************************
struct Z_Construct_UClass_UPCGCopyAttributesSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCopyAttributesSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyAttributes_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCopyAttributesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCopyAttributesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCopyAttributesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCopyAttributesSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCopyAttributesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCopyAttributesSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyAttributes_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCopyAttributesSettings(UPCGCopyAttributesSettings&&) = delete; \
	UPCGCopyAttributesSettings(const UPCGCopyAttributesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCopyAttributesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCopyAttributesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCopyAttributesSettings) \
	PCG_API virtual ~UPCGCopyAttributesSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyAttributes_h_35_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyAttributes_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyAttributes_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyAttributes_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCopyAttributesSettings;

// ********** End Class UPCGCopyAttributesSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyAttributes_h

// ********** Begin Enum EPCGCopyAttributesOperation ***********************************************
#define FOREACH_ENUM_EPCGCOPYATTRIBUTESOPERATION(op) \
	op(EPCGCopyAttributesOperation::CopyEachSourceToEachTargetRespectively) \
	op(EPCGCopyAttributesOperation::MergeSourcesAndCopyToAllTargets) \
	op(EPCGCopyAttributesOperation::CopyEachSourceOnEveryTarget) 

enum class EPCGCopyAttributesOperation;
template<> struct TIsUEnumClass<EPCGCopyAttributesOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCopyAttributesOperation>();
// ********** End Enum EPCGCopyAttributesOperation *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
