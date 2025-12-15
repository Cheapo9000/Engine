// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetRenderUtils.h"

#ifdef PERSONA_PhysicsAssetRenderUtils_generated_h
#error "PhysicsAssetRenderUtils.generated.h already included, missing '#pragma once' in PhysicsAssetRenderUtils.h"
#endif
#define PERSONA_PhysicsAssetRenderUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPhysicsAssetRenderSettings ***************************************
struct Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics;
#define FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics; \
	PERSONA_API static class UScriptStruct* StaticStruct();


struct FPhysicsAssetRenderSettings;
// ********** End ScriptStruct FPhysicsAssetRenderSettings *****************************************

// ********** Begin Class UPhysicsAssetRenderUtilities *********************************************
struct Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics;
PERSONA_API UClass* Z_Construct_UClass_UPhysicsAssetRenderUtilities_NoRegister();

#define FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsAssetRenderUtilities(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UPhysicsAssetRenderUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetRenderUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UPhysicsAssetRenderUtilities_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetRenderUtilities) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_174_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetRenderUtilities(UPhysicsAssetRenderUtilities&&) = delete; \
	UPhysicsAssetRenderUtilities(const UPhysicsAssetRenderUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, UPhysicsAssetRenderUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetRenderUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsAssetRenderUtilities)


#define FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_171_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_174_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetRenderUtilities;

// ********** End Class UPhysicsAssetRenderUtilities ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
