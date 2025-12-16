// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAppendMeshesFromPoints.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGAppendMeshesFromPoints_generated_h
#error "PCGAppendMeshesFromPoints.generated.h already included, missing '#pragma once' in PCGAppendMeshesFromPoints.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGAppendMeshesFromPoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAppendMeshesFromPointsSettings ***************************************
struct Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAppendMeshesFromPointsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAppendMeshesFromPointsSettings, UPCGDynamicMeshBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGAppendMeshesFromPointsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAppendMeshesFromPointsSettings)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGGEOMETRYSCRIPTINTEROP_API UPCGAppendMeshesFromPointsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAppendMeshesFromPointsSettings(UPCGAppendMeshesFromPointsSettings&&) = delete; \
	UPCGAppendMeshesFromPointsSettings(const UPCGAppendMeshesFromPointsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGAppendMeshesFromPointsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAppendMeshesFromPointsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAppendMeshesFromPointsSettings) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGAppendMeshesFromPointsSettings();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h_24_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAppendMeshesFromPointsSettings;

// ********** End Class UPCGAppendMeshesFromPointsSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGAppendMeshesFromPoints_h

// ********** Begin Enum EPCGAppendMeshesFromPointsMode ********************************************
#define FOREACH_ENUM_EPCGAPPENDMESHESFROMPOINTSMODE(op) \
	op(EPCGAppendMeshesFromPointsMode::SingleStaticMesh) \
	op(EPCGAppendMeshesFromPointsMode::StaticMeshFromAttribute) \
	op(EPCGAppendMeshesFromPointsMode::DynamicMesh) 

enum class EPCGAppendMeshesFromPointsMode : uint8;
template<> struct TIsUEnumClass<EPCGAppendMeshesFromPointsMode> { enum { Value = true }; };
template<> PCGGEOMETRYSCRIPTINTEROP_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAppendMeshesFromPointsMode>();
// ********** End Enum EPCGAppendMeshesFromPointsMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
