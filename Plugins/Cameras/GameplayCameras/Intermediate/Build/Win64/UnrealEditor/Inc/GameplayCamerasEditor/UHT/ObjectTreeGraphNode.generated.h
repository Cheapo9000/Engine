// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/ObjectTreeGraphNode.h"

#ifdef GAMEPLAYCAMERASEDITOR_ObjectTreeGraphNode_generated_h
#error "ObjectTreeGraphNode.generated.h already included, missing '#pragma once' in ObjectTreeGraphNode.h"
#endif
#define GAMEPLAYCAMERASEDITOR_ObjectTreeGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectTreeGraphNode *****************************************************
struct Z_Construct_UClass_UObjectTreeGraphNode_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UObjectTreeGraphNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphNode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectTreeGraphNode(); \
	friend struct ::Z_Construct_UClass_UObjectTreeGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UObjectTreeGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectTreeGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UObjectTreeGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UObjectTreeGraphNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphNode_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectTreeGraphNode(UObjectTreeGraphNode&&) = delete; \
	UObjectTreeGraphNode(const UObjectTreeGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectTreeGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTreeGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTreeGraphNode) \
	NO_API virtual ~UObjectTreeGraphNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphNode_h_20_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphNode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphNode_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphNode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectTreeGraphNode;

// ********** End Class UObjectTreeGraphNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
