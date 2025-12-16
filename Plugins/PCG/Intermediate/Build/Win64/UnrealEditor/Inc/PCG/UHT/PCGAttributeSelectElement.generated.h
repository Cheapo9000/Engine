// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAttributeSelectElement.h"

#ifdef PCG_PCGAttributeSelectElement_generated_h
#error "PCGAttributeSelectElement.generated.h already included, missing '#pragma once' in PCGAttributeSelectElement.h"
#endif
#define PCG_PCGAttributeSelectElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAttributeSelectSettings **********************************************
struct Z_Construct_UClass_UPCGAttributeSelectSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeSelectSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeSelectSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeSelectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeSelectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeSelectSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeSelectSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeSelectSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGAttributeSelectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeSelectSettings(UPCGAttributeSelectSettings&&) = delete; \
	UPCGAttributeSelectSettings(const UPCGAttributeSelectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeSelectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeSelectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAttributeSelectSettings) \
	PCG_API virtual ~UPCGAttributeSelectSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_48_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeSelectSettings;

// ********** End Class UPCGAttributeSelectSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeSelectElement_h

// ********** Begin Enum EPCGAttributeSelectOperation **********************************************
#define FOREACH_ENUM_EPCGATTRIBUTESELECTOPERATION(op) \
	op(EPCGAttributeSelectOperation::Min) \
	op(EPCGAttributeSelectOperation::Max) \
	op(EPCGAttributeSelectOperation::Median) 

enum class EPCGAttributeSelectOperation;
template<> struct TIsUEnumClass<EPCGAttributeSelectOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttributeSelectOperation>();
// ********** End Enum EPCGAttributeSelectOperation ************************************************

// ********** Begin Enum EPCGAttributeSelectAxis ***************************************************
#define FOREACH_ENUM_EPCGATTRIBUTESELECTAXIS(op) \
	op(EPCGAttributeSelectAxis::X) \
	op(EPCGAttributeSelectAxis::Y) \
	op(EPCGAttributeSelectAxis::Z) \
	op(EPCGAttributeSelectAxis::W) \
	op(EPCGAttributeSelectAxis::CustomAxis) 

enum class EPCGAttributeSelectAxis;
template<> struct TIsUEnumClass<EPCGAttributeSelectAxis> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttributeSelectAxis>();
// ********** End Enum EPCGAttributeSelectAxis *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
