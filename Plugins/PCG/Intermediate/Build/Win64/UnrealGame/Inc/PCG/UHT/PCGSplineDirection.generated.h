// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSplineDirection.h"

#ifdef PCG_PCGSplineDirection_generated_h
#error "PCGSplineDirection.generated.h already included, missing '#pragma once' in PCGSplineDirection.h"
#endif
#define PCG_PCGSplineDirection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGReverseSplineSettings ************************************************
struct Z_Construct_UClass_UPCGReverseSplineSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGReverseSplineSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGReverseSplineSettings(); \
	friend struct ::Z_Construct_UClass_UPCGReverseSplineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGReverseSplineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGReverseSplineSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGReverseSplineSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGReverseSplineSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGReverseSplineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGReverseSplineSettings(UPCGReverseSplineSettings&&) = delete; \
	UPCGReverseSplineSettings(const UPCGReverseSplineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGReverseSplineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGReverseSplineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGReverseSplineSettings) \
	PCG_API virtual ~UPCGReverseSplineSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h_39_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGReverseSplineSettings;

// ********** End Class UPCGReverseSplineSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSplineDirection_h

// ********** Begin Enum EPCGReverseSplineOperation ************************************************
#define FOREACH_ENUM_EPCGREVERSESPLINEOPERATION(op) \
	op(EPCGReverseSplineOperation::Reverse) \
	op(EPCGReverseSplineOperation::ForceClockwise) \
	op(EPCGReverseSplineOperation::ForceCounterClockwise) 

enum class EPCGReverseSplineOperation;
template<> struct TIsUEnumClass<EPCGReverseSplineOperation> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGReverseSplineOperation>();
// ********** End Enum EPCGReverseSplineOperation **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
