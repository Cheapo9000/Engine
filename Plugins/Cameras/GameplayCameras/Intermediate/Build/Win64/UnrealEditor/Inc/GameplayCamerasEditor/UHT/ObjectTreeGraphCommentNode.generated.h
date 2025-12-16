// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/ObjectTreeGraphCommentNode.h"

#ifdef GAMEPLAYCAMERASEDITOR_ObjectTreeGraphCommentNode_generated_h
#error "ObjectTreeGraphCommentNode.generated.h already included, missing '#pragma once' in ObjectTreeGraphCommentNode.h"
#endif
#define GAMEPLAYCAMERASEDITOR_ObjectTreeGraphCommentNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectTreeGraphCommentNode **********************************************
struct Z_Construct_UClass_UObjectTreeGraphCommentNode_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UObjectTreeGraphCommentNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphCommentNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectTreeGraphCommentNode(); \
	friend struct ::Z_Construct_UClass_UObjectTreeGraphCommentNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UObjectTreeGraphCommentNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectTreeGraphCommentNode, UEdGraphNode_Comment, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UObjectTreeGraphCommentNode_NoRegister) \
	DECLARE_SERIALIZER(UObjectTreeGraphCommentNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphCommentNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERASEDITOR_API UObjectTreeGraphCommentNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectTreeGraphCommentNode(UObjectTreeGraphCommentNode&&) = delete; \
	UObjectTreeGraphCommentNode(const UObjectTreeGraphCommentNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERASEDITOR_API, UObjectTreeGraphCommentNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTreeGraphCommentNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTreeGraphCommentNode) \
	GAMEPLAYCAMERASEDITOR_API virtual ~UObjectTreeGraphCommentNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphCommentNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphCommentNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphCommentNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphCommentNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectTreeGraphCommentNode;

// ********** End Class UObjectTreeGraphCommentNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphCommentNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
