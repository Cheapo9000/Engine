// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGMetadataMakeVector.h"

#ifdef PCG_PCGMetadataMakeVector_generated_h
#error "PCGMetadataMakeVector.generated.h already included, missing '#pragma once' in PCGMetadataMakeVector.h"
#endif
#define PCG_PCGMetadataMakeVector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMetadataMakeVectorSettings *******************************************
struct Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMetadataMakeVectorSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataMakeVectorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMetadataMakeVectorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMetadataMakeVectorSettings, UPCGMetadataSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMetadataMakeVectorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMetadataMakeVectorSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMetadataMakeVectorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMetadataMakeVectorSettings(UPCGMetadataMakeVectorSettings&&) = delete; \
	UPCGMetadataMakeVectorSettings(const UPCGMetadataMakeVectorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMetadataMakeVectorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataMakeVectorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataMakeVectorSettings) \
	PCG_API virtual ~UPCGMetadataMakeVectorSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_39_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMetadataMakeVectorSettings;

// ********** End Class UPCGMetadataMakeVectorSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h

// ********** Begin Enum EPCGMetadataMakeVector3 ***************************************************
#define FOREACH_ENUM_EPCGMETADATAMAKEVECTOR3(op) \
	op(EPCGMetadataMakeVector3::ThreeValues) \
	op(EPCGMetadataMakeVector3::Vector2AndValue) 

enum class EPCGMetadataMakeVector3 : uint8;
template<> struct TIsUEnumClass<EPCGMetadataMakeVector3> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataMakeVector3>();
// ********** End Enum EPCGMetadataMakeVector3 *****************************************************

// ********** Begin Enum EPCGMetadataMakeVector4 ***************************************************
#define FOREACH_ENUM_EPCGMETADATAMAKEVECTOR4(op) \
	op(EPCGMetadataMakeVector4::FourValues) \
	op(EPCGMetadataMakeVector4::Vector2AndTwoValues) \
	op(EPCGMetadataMakeVector4::TwoVector2) \
	op(EPCGMetadataMakeVector4::Vector3AndValue) 

enum class EPCGMetadataMakeVector4 : uint8;
template<> struct TIsUEnumClass<EPCGMetadataMakeVector4> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGMetadataMakeVector4>();
// ********** End Enum EPCGMetadataMakeVector4 *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
