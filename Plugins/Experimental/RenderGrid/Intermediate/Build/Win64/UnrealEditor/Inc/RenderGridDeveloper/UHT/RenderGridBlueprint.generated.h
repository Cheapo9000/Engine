// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/RenderGridBlueprint.h"

#ifdef RENDERGRIDDEVELOPER_RenderGridBlueprint_generated_h
#error "RenderGridBlueprint.generated.h already included, missing '#pragma once' in RenderGridBlueprint.h"
#endif
#define RENDERGRIDDEVELOPER_RenderGridBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URenderGrid;

// ********** Begin Class URenderGridBlueprint *****************************************************
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRenderGridClassDefaultObject); \
	DECLARE_FUNCTION(execGetRenderGridWithBlueprintGraph); \
	DECLARE_FUNCTION(execGetRenderGrid);


struct Z_Construct_UClass_URenderGridBlueprint_Statics;
RENDERGRIDDEVELOPER_API UClass* Z_Construct_UClass_URenderGridBlueprint_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridBlueprint(); \
	friend struct ::Z_Construct_UClass_URenderGridBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRIDDEVELOPER_API UClass* ::Z_Construct_UClass_URenderGridBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGridBlueprint, UEditorUtilityBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RenderGridDeveloper"), Z_Construct_UClass_URenderGridBlueprint_NoRegister) \
	DECLARE_SERIALIZER(URenderGridBlueprint)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGridBlueprint(URenderGridBlueprint&&) = delete; \
	URenderGridBlueprint(const URenderGridBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridBlueprint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGridBlueprint) \
	NO_API virtual ~URenderGridBlueprint();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGridBlueprint;

// ********** End Class URenderGridBlueprint *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_Blueprints_RenderGridBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
