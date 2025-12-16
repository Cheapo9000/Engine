// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/RenderGridBlueprintFactory.h"

#ifdef RENDERGRIDEDITOR_RenderGridBlueprintFactory_generated_h
#error "RenderGridBlueprintFactory.generated.h already included, missing '#pragma once' in RenderGridBlueprintFactory.h"
#endif
#define RENDERGRIDEDITOR_RenderGridBlueprintFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URenderGridBlueprintFactory **********************************************
struct Z_Construct_UClass_URenderGridBlueprintFactory_Statics;
RENDERGRIDEDITOR_API UClass* Z_Construct_UClass_URenderGridBlueprintFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridBlueprintFactory_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridBlueprintFactory(); \
	friend struct ::Z_Construct_UClass_URenderGridBlueprintFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRIDEDITOR_API UClass* ::Z_Construct_UClass_URenderGridBlueprintFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGridBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGridEditor"), Z_Construct_UClass_URenderGridBlueprintFactory_NoRegister) \
	DECLARE_SERIALIZER(URenderGridBlueprintFactory)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridBlueprintFactory_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGridBlueprintFactory(URenderGridBlueprintFactory&&) = delete; \
	URenderGridBlueprintFactory(const URenderGridBlueprintFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RENDERGRIDEDITOR_API, URenderGridBlueprintFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridBlueprintFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGridBlueprintFactory) \
	RENDERGRIDEDITOR_API virtual ~URenderGridBlueprintFactory();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridBlueprintFactory_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridBlueprintFactory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridBlueprintFactory_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridBlueprintFactory_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGridBlueprintFactory;

// ********** End Class URenderGridBlueprintFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridBlueprintFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
