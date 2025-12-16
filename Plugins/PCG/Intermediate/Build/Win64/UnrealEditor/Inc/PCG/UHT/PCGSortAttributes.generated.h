// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSortAttributes.h"

#ifdef PCG_PCGSortAttributes_generated_h
#error "PCGSortAttributes.generated.h already included, missing '#pragma once' in PCGSortAttributes.h"
#endif
#define PCG_PCGSortAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSortAttributesSettings ***********************************************
struct Z_Construct_UClass_UPCGSortAttributesSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSortAttributesSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortAttributes_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSortAttributesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSortAttributesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSortAttributesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSortAttributesSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSortAttributesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSortAttributesSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortAttributes_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSortAttributesSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSortAttributesSettings(UPCGSortAttributesSettings&&) = delete; \
	UPCGSortAttributesSettings(const UPCGSortAttributesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSortAttributesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSortAttributesSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSortAttributesSettings) \
	NO_API virtual ~UPCGSortAttributesSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortAttributes_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortAttributes_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortAttributes_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortAttributes_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSortAttributesSettings;

// ********** End Class UPCGSortAttributesSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSortAttributes_h

// ********** Begin Enum EPCGSortMethod ************************************************************
#define FOREACH_ENUM_EPCGSORTMETHOD(op) \
	op(EPCGSortMethod::Ascending) \
	op(EPCGSortMethod::Descending) 

enum class EPCGSortMethod : uint8;
template<> struct TIsUEnumClass<EPCGSortMethod> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSortMethod>();
// ********** End Enum EPCGSortMethod **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
