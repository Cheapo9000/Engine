// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/ObjectTreeGraphSchema.h"

#ifdef GAMEPLAYCAMERASEDITOR_ObjectTreeGraphSchema_generated_h
#error "ObjectTreeGraphSchema.generated.h already included, missing '#pragma once' in ObjectTreeGraphSchema.h"
#endif
#define GAMEPLAYCAMERASEDITOR_ObjectTreeGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectTreeGraphSchema ***************************************************
struct Z_Construct_UClass_UObjectTreeGraphSchema_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UObjectTreeGraphSchema_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectTreeGraphSchema(); \
	friend struct ::Z_Construct_UClass_UObjectTreeGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UObjectTreeGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectTreeGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UObjectTreeGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UObjectTreeGraphSchema)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectTreeGraphSchema(UObjectTreeGraphSchema&&) = delete; \
	UObjectTreeGraphSchema(const UObjectTreeGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectTreeGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTreeGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTreeGraphSchema) \
	NO_API virtual ~UObjectTreeGraphSchema();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_27_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectTreeGraphSchema;

// ********** End Class UObjectTreeGraphSchema *****************************************************

// ********** Begin ScriptStruct FObjectTreeGraphSchemaAction_NewNode ******************************
struct Z_Construct_UScriptStruct_FObjectTreeGraphSchemaAction_NewNode_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectTreeGraphSchemaAction_NewNode_Statics; \
	GAMEPLAYCAMERASEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FObjectTreeGraphSchemaAction_NewNode;
// ********** End ScriptStruct FObjectTreeGraphSchemaAction_NewNode ********************************

// ********** Begin ScriptStruct FObjectTreeGraphSchemaAction_NewComment ***************************
struct Z_Construct_UScriptStruct_FObjectTreeGraphSchemaAction_NewComment_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h_185_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectTreeGraphSchemaAction_NewComment_Statics; \
	GAMEPLAYCAMERASEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FObjectTreeGraphSchemaAction_NewComment;
// ********** End ScriptStruct FObjectTreeGraphSchemaAction_NewComment *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
