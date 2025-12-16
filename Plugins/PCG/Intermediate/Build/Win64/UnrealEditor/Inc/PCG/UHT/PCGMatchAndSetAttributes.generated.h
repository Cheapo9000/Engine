// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGMatchAndSetAttributes.h"

#ifdef PCG_PCGMatchAndSetAttributes_generated_h
#error "PCGMatchAndSetAttributes.generated.h already included, missing '#pragma once' in PCGMatchAndSetAttributes.h"
#endif
#define PCG_PCGMatchAndSetAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMatchAndSetAttributesSettings ****************************************
struct Z_Construct_UClass_UPCGMatchAndSetAttributesSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMatchAndSetAttributesSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMatchAndSetAttributes_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMatchAndSetAttributesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMatchAndSetAttributesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMatchAndSetAttributesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMatchAndSetAttributesSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMatchAndSetAttributesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMatchAndSetAttributesSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMatchAndSetAttributes_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMatchAndSetAttributesSettings(UPCGMatchAndSetAttributesSettings&&) = delete; \
	UPCGMatchAndSetAttributesSettings(const UPCGMatchAndSetAttributesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMatchAndSetAttributesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMatchAndSetAttributesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGMatchAndSetAttributesSettings) \
	PCG_API virtual ~UPCGMatchAndSetAttributesSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMatchAndSetAttributes_h_47_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMatchAndSetAttributes_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMatchAndSetAttributes_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMatchAndSetAttributes_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMatchAndSetAttributesSettings;

// ********** End Class UPCGMatchAndSetAttributesSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMatchAndSetAttributes_h

// ********** Begin Enum EPCGMatchMaxDistanceMode **************************************************
#define FOREACH_ENUM_EPCGMATCHMAXDISTANCEMODE(op) \
	op(EPCGMatchMaxDistanceMode::NoMaxDistance) \
	op(EPCGMatchMaxDistanceMode::UseConstantMaxDistance) \
	op(EPCGMatchMaxDistanceMode::AttributeMaxDistance) 

enum class EPCGMatchMaxDistanceMode;
template<> struct TIsUEnumClass<EPCGMatchMaxDistanceMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMatchMaxDistanceMode>();
// ********** End Enum EPCGMatchMaxDistanceMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
