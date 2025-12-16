// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAttributeReduceElement.h"

#ifdef PCG_PCGAttributeReduceElement_generated_h
#error "PCGAttributeReduceElement.generated.h already included, missing '#pragma once' in PCGAttributeReduceElement.h"
#endif
#define PCG_PCGAttributeReduceElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAttributeReduceSettings **********************************************
struct Z_Construct_UClass_UPCGAttributeReduceSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeReduceSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeReduceSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeReduceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeReduceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeReduceSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeReduceSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeReduceSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGAttributeReduceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeReduceSettings(UPCGAttributeReduceSettings&&) = delete; \
	UPCGAttributeReduceSettings(const UPCGAttributeReduceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeReduceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeReduceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAttributeReduceSettings) \
	PCG_API virtual ~UPCGAttributeReduceSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_28_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeReduceSettings;

// ********** End Class UPCGAttributeReduceSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeReduceElement_h

// ********** Begin Enum EPCGAttributeReduceOperation **********************************************
#define FOREACH_ENUM_EPCGATTRIBUTEREDUCEOPERATION(op) \
	op(EPCGAttributeReduceOperation::Average) \
	op(EPCGAttributeReduceOperation::Max) \
	op(EPCGAttributeReduceOperation::Min) \
	op(EPCGAttributeReduceOperation::Sum) \
	op(EPCGAttributeReduceOperation::Join) 

enum class EPCGAttributeReduceOperation;
template<> struct TIsUEnumClass<EPCGAttributeReduceOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttributeReduceOperation>();
// ********** End Enum EPCGAttributeReduceOperation ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
