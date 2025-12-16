// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGBooleanOperation.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGBooleanOperation_generated_h
#error "PCGBooleanOperation.generated.h already included, missing '#pragma once' in PCGBooleanOperation.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGBooleanOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGBooleanOperationSettings *********************************************
struct Z_Construct_UClass_UPCGBooleanOperationSettings_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGBooleanOperationSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBooleanOperationSettings(); \
	friend struct ::Z_Construct_UClass_UPCGBooleanOperationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGBooleanOperationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBooleanOperationSettings, UPCGDynamicMeshBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGBooleanOperationSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGBooleanOperationSettings)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGGEOMETRYSCRIPTINTEROP_API UPCGBooleanOperationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBooleanOperationSettings(UPCGBooleanOperationSettings&&) = delete; \
	UPCGBooleanOperationSettings(const UPCGBooleanOperationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGBooleanOperationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBooleanOperationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBooleanOperationSettings) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGBooleanOperationSettings();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h_30_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBooleanOperationSettings;

// ********** End Class UPCGBooleanOperationSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGBooleanOperation_h

// ********** Begin Enum EPCGBooleanOperationTagInheritanceMode ************************************
#define FOREACH_ENUM_EPCGBOOLEANOPERATIONTAGINHERITANCEMODE(op) \
	op(EPCGBooleanOperationTagInheritanceMode::Both) \
	op(EPCGBooleanOperationTagInheritanceMode::A) \
	op(EPCGBooleanOperationTagInheritanceMode::B) 

enum class EPCGBooleanOperationTagInheritanceMode : uint8;
template<> struct TIsUEnumClass<EPCGBooleanOperationTagInheritanceMode> { enum { Value = true }; };
template<> PCGGEOMETRYSCRIPTINTEROP_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGBooleanOperationTagInheritanceMode>();
// ********** End Enum EPCGBooleanOperationTagInheritanceMode **************************************

// ********** Begin Enum EPCGBooleanOperationMode **************************************************
#define FOREACH_ENUM_EPCGBOOLEANOPERATIONMODE(op) \
	op(EPCGBooleanOperationMode::EachAWithEachB) \
	op(EPCGBooleanOperationMode::EachAWithEachBSequentially) \
	op(EPCGBooleanOperationMode::EachAWithEveryB) 

enum class EPCGBooleanOperationMode : uint8;
template<> struct TIsUEnumClass<EPCGBooleanOperationMode> { enum { Value = true }; };
template<> PCGGEOMETRYSCRIPTINTEROP_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGBooleanOperationMode>();
// ********** End Enum EPCGBooleanOperationMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
