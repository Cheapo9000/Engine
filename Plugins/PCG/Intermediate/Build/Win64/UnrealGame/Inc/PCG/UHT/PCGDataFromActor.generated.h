// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDataFromActor.h"

#ifdef PCG_PCGDataFromActor_generated_h
#error "PCGDataFromActor.generated.h already included, missing '#pragma once' in PCGDataFromActor.h"
#endif
#define PCG_PCGDataFromActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataFromActorSettings ************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_32_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execDisplayModeSettings);
#else // WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_32_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGDataFromActorSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataFromActorSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataFromActorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDataFromActorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataFromActorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataFromActorSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataFromActorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataFromActorSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDataFromActorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataFromActorSettings(UPCGDataFromActorSettings&&) = delete; \
	UPCGDataFromActorSettings(const UPCGDataFromActorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDataFromActorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataFromActorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataFromActorSettings) \
	PCG_API virtual ~UPCGDataFromActorSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_29_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_32_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataFromActorSettings;

// ********** End Class UPCGDataFromActorSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h

// ********** Begin Enum EPCGGetDataFromActorMode **************************************************
#define FOREACH_ENUM_EPCGGETDATAFROMACTORMODE(op) \
	op(EPCGGetDataFromActorMode::ParseActorComponents) \
	op(EPCGGetDataFromActorMode::GetSinglePoint) \
	op(EPCGGetDataFromActorMode::GetDataFromProperty) \
	op(EPCGGetDataFromActorMode::GetDataFromPCGComponent) \
	op(EPCGGetDataFromActorMode::GetDataFromPCGComponentOrParseComponents) \
	op(EPCGGetDataFromActorMode::GetActorReference) \
	op(EPCGGetDataFromActorMode::GetComponentsReference) 

enum class EPCGGetDataFromActorMode : uint8;
template<> struct TIsUEnumClass<EPCGGetDataFromActorMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGGetDataFromActorMode>();
// ********** End Enum EPCGGetDataFromActorMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
