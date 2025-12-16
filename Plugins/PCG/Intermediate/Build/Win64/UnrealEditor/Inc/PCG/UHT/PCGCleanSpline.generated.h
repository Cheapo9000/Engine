// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCleanSpline.h"

#ifdef PCG_PCGCleanSpline_generated_h
#error "PCGCleanSpline.generated.h already included, missing '#pragma once' in PCGCleanSpline.h"
#endif
#define PCG_PCGCleanSpline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCleanSplineSettings **************************************************
struct Z_Construct_UClass_UPCGCleanSplineSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCleanSplineSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCleanSpline_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCleanSplineSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCleanSplineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCleanSplineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCleanSplineSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCleanSplineSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCleanSplineSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCleanSpline_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGCleanSplineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCleanSplineSettings(UPCGCleanSplineSettings&&) = delete; \
	UPCGCleanSplineSettings(const UPCGCleanSplineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCleanSplineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCleanSplineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCleanSplineSettings) \
	PCG_API virtual ~UPCGCleanSplineSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCleanSpline_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCleanSpline_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCleanSpline_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCleanSpline_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCleanSplineSettings;

// ********** End Class UPCGCleanSplineSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCleanSpline_h

// ********** Begin Enum EPCGControlPointFuseMode **************************************************
#define FOREACH_ENUM_EPCGCONTROLPOINTFUSEMODE(op) \
	op(EPCGControlPointFuseMode::KeepFirst) \
	op(EPCGControlPointFuseMode::KeepSecond) \
	op(EPCGControlPointFuseMode::Merge) \
	op(EPCGControlPointFuseMode::Auto) 

enum class EPCGControlPointFuseMode;
template<> struct TIsUEnumClass<EPCGControlPointFuseMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGControlPointFuseMode>();
// ********** End Enum EPCGControlPointFuseMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
