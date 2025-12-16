// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGLoadAlembicElement.h"

#ifdef PCGEXTERNALDATAINTEROP_PCGLoadAlembicElement_generated_h
#error "PCGLoadAlembicElement.generated.h already included, missing '#pragma once' in PCGLoadAlembicElement.h"
#endif
#define PCGEXTERNALDATAINTEROP_PCGLoadAlembicElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPCGLoadAlembicStandardSetup : uint8;

// ********** Begin Class UPCGLoadAlembicSettings **************************************************
#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupFromStandard);


struct Z_Construct_UClass_UPCGLoadAlembicSettings_Statics;
PCGEXTERNALDATAINTEROP_API UClass* Z_Construct_UClass_UPCGLoadAlembicSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLoadAlembicSettings(); \
	friend struct ::Z_Construct_UClass_UPCGLoadAlembicSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTERNALDATAINTEROP_API UClass* ::Z_Construct_UClass_UPCGLoadAlembicSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLoadAlembicSettings, UPCGExternalDataSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExternalDataInterop"), Z_Construct_UClass_UPCGLoadAlembicSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGLoadAlembicSettings)


#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTERNALDATAINTEROP_API UPCGLoadAlembicSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLoadAlembicSettings(UPCGLoadAlembicSettings&&) = delete; \
	UPCGLoadAlembicSettings(const UPCGLoadAlembicSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTERNALDATAINTEROP_API, UPCGLoadAlembicSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLoadAlembicSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLoadAlembicSettings) \
	PCGEXTERNALDATAINTEROP_API virtual ~UPCGLoadAlembicSettings();


#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_18_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLoadAlembicSettings;

// ********** End Class UPCGLoadAlembicSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGExternalDataInterop_Source_PCGExternalDataInterop_Public_Elements_PCGLoadAlembicElement_h

// ********** Begin Enum EPCGLoadAlembicStandardSetup **********************************************
#define FOREACH_ENUM_EPCGLOADALEMBICSTANDARDSETUP(op) \
	op(EPCGLoadAlembicStandardSetup::None) \
	op(EPCGLoadAlembicStandardSetup::CitySample) 

enum class EPCGLoadAlembicStandardSetup : uint8;
template<> struct TIsUEnumClass<EPCGLoadAlembicStandardSetup> { enum { Value = true }; };
template<> PCGEXTERNALDATAINTEROP_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGLoadAlembicStandardSetup>();
// ********** End Enum EPCGLoadAlembicStandardSetup ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
