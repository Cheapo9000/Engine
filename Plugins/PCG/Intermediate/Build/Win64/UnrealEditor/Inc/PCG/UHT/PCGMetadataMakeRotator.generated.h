// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataMakeRotator.h"

#ifdef PCG_PCGMetadataMakeRotator_generated_h
#error "PCGMetadataMakeRotator.generated.h already included, missing '#pragma once' in PCGMetadataMakeRotator.h"
#endif
#define PCG_PCGMetadataMakeRotator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataMakeRotatorSettings ******************************************
struct Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataMakeRotatorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataMakeRotatorSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataMakeRotatorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataMakeRotatorSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataMakeRotatorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataMakeRotatorSettings(UPCGMetadataMakeRotatorSettings&&) = delete; \
	UPCGMetadataMakeRotatorSettings(const UPCGMetadataMakeRotatorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataMakeRotatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataMakeRotatorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataMakeRotatorSettings) \
	PCG_API virtual ~UPCGMetadataMakeRotatorSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_39_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataMakeRotatorSettings;

// ********** End Class UPCGMetadataMakeRotatorSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeRotator_h

// ********** Begin Enum EPCGMetadataMakeRotatorOp *************************************************
#define FOREACH_ENUM_EPCGMETADATAMAKEROTATOROP(op) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromX) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromY) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromZ) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromXY) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromYX) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromXZ) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromZX) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromYZ) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromZY) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromAxes) \
	op(EPCGMetadataMakeRotatorOp::MakeRotFromAngles) 

enum class EPCGMetadataMakeRotatorOp : uint8;
template<> struct TIsUEnumClass<EPCGMetadataMakeRotatorOp> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataMakeRotatorOp>();
// ********** End Enum EPCGMetadataMakeRotatorOp ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
