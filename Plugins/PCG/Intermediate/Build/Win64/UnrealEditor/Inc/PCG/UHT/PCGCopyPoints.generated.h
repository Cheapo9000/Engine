// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCopyPoints.h"

#ifdef PCG_PCGCopyPoints_generated_h
#error "PCGCopyPoints.generated.h already included, missing '#pragma once' in PCGCopyPoints.h"
#endif
#define PCG_PCGCopyPoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCopyPointsSettings ***************************************************
struct Z_Construct_UClass_UPCGCopyPointsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCopyPointsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCopyPointsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCopyPointsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCopyPointsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCopyPointsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCopyPointsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCopyPointsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGCopyPointsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCopyPointsSettings(UPCGCopyPointsSettings&&) = delete; \
	UPCGCopyPointsSettings(const UPCGCopyPointsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCopyPointsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCopyPointsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCopyPointsSettings) \
	PCG_API virtual ~UPCGCopyPointsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_43_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCopyPointsSettings;

// ********** End Class UPCGCopyPointsSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCopyPoints_h

// ********** Begin Enum EPCGCopyPointsInheritanceMode *********************************************
#define FOREACH_ENUM_EPCGCOPYPOINTSINHERITANCEMODE(op) \
	op(EPCGCopyPointsInheritanceMode::Relative) \
	op(EPCGCopyPointsInheritanceMode::Source) \
	op(EPCGCopyPointsInheritanceMode::Target) 

enum class EPCGCopyPointsInheritanceMode : uint8;
template<> struct TIsUEnumClass<EPCGCopyPointsInheritanceMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCopyPointsInheritanceMode>();
// ********** End Enum EPCGCopyPointsInheritanceMode ***********************************************

// ********** Begin Enum EPCGCopyPointsTagInheritanceMode ******************************************
#define FOREACH_ENUM_EPCGCOPYPOINTSTAGINHERITANCEMODE(op) \
	op(EPCGCopyPointsTagInheritanceMode::Both) \
	op(EPCGCopyPointsTagInheritanceMode::Source) \
	op(EPCGCopyPointsTagInheritanceMode::Target) 

enum class EPCGCopyPointsTagInheritanceMode : uint8;
template<> struct TIsUEnumClass<EPCGCopyPointsTagInheritanceMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCopyPointsTagInheritanceMode>();
// ********** End Enum EPCGCopyPointsTagInheritanceMode ********************************************

// ********** Begin Enum EPCGCopyPointsMetadataInheritanceMode *************************************
#define FOREACH_ENUM_EPCGCOPYPOINTSMETADATAINHERITANCEMODE(op) \
	op(EPCGCopyPointsMetadataInheritanceMode::SourceFirst) \
	op(EPCGCopyPointsMetadataInheritanceMode::TargetFirst) \
	op(EPCGCopyPointsMetadataInheritanceMode::SourceOnly) \
	op(EPCGCopyPointsMetadataInheritanceMode::TargetOnly) \
	op(EPCGCopyPointsMetadataInheritanceMode::None) 

enum class EPCGCopyPointsMetadataInheritanceMode : uint8;
template<> struct TIsUEnumClass<EPCGCopyPointsMetadataInheritanceMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGCopyPointsMetadataInheritanceMode>();
// ********** End Enum EPCGCopyPointsMetadataInheritanceMode ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
