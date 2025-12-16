// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDeleteAttributesElement.h"

#ifdef PCG_PCGDeleteAttributesElement_generated_h
#error "PCGDeleteAttributesElement.generated.h already included, missing '#pragma once' in PCGDeleteAttributesElement.h"
#endif
#define PCG_PCGDeleteAttributesElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDeleteAttributesSettings *********************************************
struct Z_Construct_UClass_UPCGDeleteAttributesSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDeleteAttributesSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteAttributesElement_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDeleteAttributesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDeleteAttributesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDeleteAttributesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDeleteAttributesSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDeleteAttributesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDeleteAttributesSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteAttributesElement_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDeleteAttributesSettings(UPCGDeleteAttributesSettings&&) = delete; \
	UPCGDeleteAttributesSettings(const UPCGDeleteAttributesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDeleteAttributesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDeleteAttributesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGDeleteAttributesSettings) \
	PCG_API virtual ~UPCGDeleteAttributesSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteAttributesElement_h_22_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteAttributesElement_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteAttributesElement_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteAttributesElement_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDeleteAttributesSettings;

// ********** End Class UPCGDeleteAttributesSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDeleteAttributesElement_h

// ********** Begin Enum EPCGAttributeFilterOperation **********************************************
#define FOREACH_ENUM_EPCGATTRIBUTEFILTEROPERATION(op) \
	op(EPCGAttributeFilterOperation::KeepSelectedAttributes) \
	op(EPCGAttributeFilterOperation::DeleteSelectedAttributes) 

enum class EPCGAttributeFilterOperation;
template<> struct TIsUEnumClass<EPCGAttributeFilterOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttributeFilterOperation>();
// ********** End Enum EPCGAttributeFilterOperation ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
