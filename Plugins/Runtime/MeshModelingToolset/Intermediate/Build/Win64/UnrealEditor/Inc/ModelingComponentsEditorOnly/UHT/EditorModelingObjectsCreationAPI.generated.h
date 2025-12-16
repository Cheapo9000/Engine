// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorModelingObjectsCreationAPI.h"

#ifdef MODELINGCOMPONENTSEDITORONLY_EditorModelingObjectsCreationAPI_generated_h
#error "EditorModelingObjectsCreationAPI.generated.h already included, missing '#pragma once' in EditorModelingObjectsCreationAPI.h"
#endif
#define MODELINGCOMPONENTSEDITORONLY_EditorModelingObjectsCreationAPI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorModelingObjectsCreationAPI ****************************************
struct Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics;
MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UEditorModelingObjectsCreationAPI_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorModelingObjectsCreationAPI(); \
	friend struct ::Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTSEDITORONLY_API UClass* ::Z_Construct_UClass_UEditorModelingObjectsCreationAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorModelingObjectsCreationAPI, UModelingObjectsCreationAPI, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponentsEditorOnly"), Z_Construct_UClass_UEditorModelingObjectsCreationAPI_NoRegister) \
	DECLARE_SERIALIZER(UEditorModelingObjectsCreationAPI)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTSEDITORONLY_API UEditorModelingObjectsCreationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorModelingObjectsCreationAPI(UEditorModelingObjectsCreationAPI&&) = delete; \
	UEditorModelingObjectsCreationAPI(const UEditorModelingObjectsCreationAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTSEDITORONLY_API, UEditorModelingObjectsCreationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorModelingObjectsCreationAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorModelingObjectsCreationAPI) \
	MODELINGCOMPONENTSEDITORONLY_API virtual ~UEditorModelingObjectsCreationAPI();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorModelingObjectsCreationAPI;

// ********** End Class UEditorModelingObjectsCreationAPI ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
