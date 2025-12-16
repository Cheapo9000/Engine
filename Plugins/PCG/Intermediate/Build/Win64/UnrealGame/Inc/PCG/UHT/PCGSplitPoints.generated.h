// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSplitPoints.h"

#ifdef PCG_PCGSplitPoints_generated_h
#error "PCGSplitPoints.generated.h already included, missing '#pragma once' in PCGSplitPoints.h"
#endif
#define PCG_PCGSplitPoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSplitPointsSettings **************************************************
struct Z_Construct_UClass_UPCGSplitPointsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSplitPointsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSplitPointsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSplitPointsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSplitPointsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSplitPointsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSplitPointsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSplitPointsSettings(UPCGSplitPointsSettings&&) = delete; \
	UPCGSplitPointsSettings(const UPCGSplitPointsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSplitPointsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSplitPointsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSplitPointsSettings) \
	NO_API virtual ~UPCGSplitPointsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSplitPointsSettings;

// ********** End Class UPCGSplitPointsSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplitPoints_h

// ********** Begin Enum EPCGSplitAxis *************************************************************
#define FOREACH_ENUM_EPCGSPLITAXIS(op) \
	op(EPCGSplitAxis::X) \
	op(EPCGSplitAxis::Y) \
	op(EPCGSplitAxis::Z) 

enum class EPCGSplitAxis;
template<> struct TIsUEnumClass<EPCGSplitAxis> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSplitAxis>();
// ********** End Enum EPCGSplitAxis ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
