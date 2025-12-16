// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataOpElementBase.h"

#ifdef PCG_PCGMetadataOpElementBase_generated_h
#error "PCGMetadataOpElementBase.generated.h already included, missing '#pragma once' in PCGMetadataOpElementBase.h"
#endif
#define PCG_PCGMetadataOpElementBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataSettingsBase *************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOutputDataFromPinOptions);


struct Z_Construct_UClass_UPCGMetadataSettingsBase_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataSettingsBase(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataSettingsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataSettingsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataSettingsBase, UPCGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataSettingsBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataSettingsBase) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGMetadataSettingsBase*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataSettingsBase(UPCGMetadataSettingsBase&&) = delete; \
	UPCGMetadataSettingsBase(const UPCGMetadataSettingsBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataSettingsBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataSettingsBase) \
	PCG_API virtual ~UPCGMetadataSettingsBase();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_88_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataSettingsBase;

// ********** End Class UPCGMetadataSettingsBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataOpElementBase_h

// ********** Begin Enum EPCGMetadataSettingsBaseMode **********************************************
#define FOREACH_ENUM_EPCGMETADATASETTINGSBASEMODE(op) \
	op(EPCGMetadataSettingsBaseMode::Inferred) \
	op(EPCGMetadataSettingsBaseMode::NoBroadcast) \
	op(EPCGMetadataSettingsBaseMode::Broadcast) 

enum class EPCGMetadataSettingsBaseMode;
template<> struct TIsUEnumClass<EPCGMetadataSettingsBaseMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataSettingsBaseMode>();
// ********** End Enum EPCGMetadataSettingsBaseMode ************************************************

// ********** Begin Enum EPCGMetadataSettingsBaseTypes *********************************************
#define FOREACH_ENUM_EPCGMETADATASETTINGSBASETYPES(op) \
	op(EPCGMetadataSettingsBaseTypes::AutoUpcastTypes) \
	op(EPCGMetadataSettingsBaseTypes::StrictTypes) 

enum class EPCGMetadataSettingsBaseTypes;
template<> struct TIsUEnumClass<EPCGMetadataSettingsBaseTypes> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataSettingsBaseTypes>();
// ********** End Enum EPCGMetadataSettingsBaseTypes ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
