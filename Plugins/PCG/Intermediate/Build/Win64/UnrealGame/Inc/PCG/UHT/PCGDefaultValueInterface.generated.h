// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGDefaultValueInterface.h"

#ifdef PCG_PCGDefaultValueInterface_generated_h
#error "PCGDefaultValueInterface.generated.h already included, missing '#pragma once' in PCGDefaultValueInterface.h"
#endif
#define PCG_PCGDefaultValueInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPCGSettingsDefaultValueProvider *************************************
struct Z_Construct_UClass_UPCGSettingsDefaultValueProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSettingsDefaultValueProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSettingsDefaultValueProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSettingsDefaultValueProvider(UPCGSettingsDefaultValueProvider&&) = delete; \
	UPCGSettingsDefaultValueProvider(const UPCGSettingsDefaultValueProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSettingsDefaultValueProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSettingsDefaultValueProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSettingsDefaultValueProvider) \
	virtual ~UPCGSettingsDefaultValueProvider() = default;


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPCGSettingsDefaultValueProvider(); \
	friend struct ::Z_Construct_UClass_UPCGSettingsDefaultValueProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSettingsDefaultValueProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSettingsDefaultValueProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSettingsDefaultValueProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGSettingsDefaultValueProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h_25_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h_25_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h_25_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPCGSettingsDefaultValueProvider() {} \
public: \
	typedef UPCGSettingsDefaultValueProvider UClassType; \
	typedef IPCGSettingsDefaultValueProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h_22_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSettingsDefaultValueProvider;

// ********** End Interface UPCGSettingsDefaultValueProvider ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Metadata_PCGDefaultValueInterface_h

// ********** Begin Enum EPCGSettingDefaultValueExtraFlags *****************************************
#define FOREACH_ENUM_EPCGSETTINGDEFAULTVALUEEXTRAFLAGS(op) \
	op(EPCGSettingDefaultValueExtraFlags::None) \
	op(EPCGSettingDefaultValueExtraFlags::WideText) \
	op(EPCGSettingDefaultValueExtraFlags::MultiLineText) 

enum class EPCGSettingDefaultValueExtraFlags : uint64;
template<> struct TIsUEnumClass<EPCGSettingDefaultValueExtraFlags> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSettingDefaultValueExtraFlags>();
// ********** End Enum EPCGSettingDefaultValueExtraFlags *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
