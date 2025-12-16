// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGIndirectionElement.h"

#ifdef PCG_PCGIndirectionElement_generated_h
#error "PCGIndirectionElement.generated.h already included, missing '#pragma once' in PCGIndirectionElement.h"
#endif
#define PCG_PCGIndirectionElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGIndirectionSettings **************************************************
struct Z_Construct_UClass_UPCGIndirectionSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGIndirectionSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGIndirectionElement_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGIndirectionSettings(); \
	friend struct ::Z_Construct_UClass_UPCGIndirectionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGIndirectionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGIndirectionSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGIndirectionSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGIndirectionSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGIndirectionElement_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGIndirectionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGIndirectionSettings(UPCGIndirectionSettings&&) = delete; \
	UPCGIndirectionSettings(const UPCGIndirectionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGIndirectionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGIndirectionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGIndirectionSettings) \
	PCG_API virtual ~UPCGIndirectionSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGIndirectionElement_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGIndirectionElement_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGIndirectionElement_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGIndirectionElement_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGIndirectionSettings;

// ********** End Class UPCGIndirectionSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGIndirectionElement_h

// ********** Begin Enum EPCGProxyInterfaceMode ****************************************************
#define FOREACH_ENUM_EPCGPROXYINTERFACEMODE(op) \
	op(EPCGProxyInterfaceMode::ByNativeElement) \
	op(EPCGProxyInterfaceMode::ByBlueprintElement) \
	op(EPCGProxyInterfaceMode::BySettings) 

enum class EPCGProxyInterfaceMode : uint8;
template<> struct TIsUEnumClass<EPCGProxyInterfaceMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGProxyInterfaceMode>();
// ********** End Enum EPCGProxyInterfaceMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
