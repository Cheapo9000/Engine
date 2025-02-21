// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/ObjectTreeGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCAMERASEDITOR_ObjectTreeGraphSchema_generated_h
#error "ObjectTreeGraphSchema.generated.h already included, missing '#pragma once' in ObjectTreeGraphSchema.h"
#endif
#define GAMEPLAYCAMERASEDITOR_ObjectTreeGraphSchema_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectTreeGraphSchema(); \
	friend struct Z_Construct_UClass_UObjectTreeGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UObjectTreeGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), NO_API) \
	DECLARE_SERIALIZER(UObjectTreeGraphSchema)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectTreeGraphSchema(UObjectTreeGraphSchema&&); \
	UObjectTreeGraphSchema(const UObjectTreeGraphSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectTreeGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTreeGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTreeGraphSchema) \
	NO_API virtual ~UObjectTreeGraphSchema();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_20_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERASEDITOR_API UClass* StaticClass<class UObjectTreeGraphSchema>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectGraphSchemaAction_NewNode_Statics; \
	GAMEPLAYCAMERASEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> GAMEPLAYCAMERASEDITOR_API UScriptStruct* StaticStruct<struct FObjectGraphSchemaAction_NewNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
