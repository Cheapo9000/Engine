// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/ObjectTreeGraph.h"

#ifdef GAMEPLAYCAMERASEDITOR_ObjectTreeGraph_generated_h
#error "ObjectTreeGraph.generated.h already included, missing '#pragma once' in ObjectTreeGraph.h"
#endif
#define GAMEPLAYCAMERASEDITOR_ObjectTreeGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectTreeGraph *********************************************************
struct Z_Construct_UClass_UObjectTreeGraph_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UObjectTreeGraph_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraph_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectTreeGraph(); \
	friend struct ::Z_Construct_UClass_UObjectTreeGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UObjectTreeGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectTreeGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UObjectTreeGraph_NoRegister) \
	DECLARE_SERIALIZER(UObjectTreeGraph)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraph_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectTreeGraph(UObjectTreeGraph&&) = delete; \
	UObjectTreeGraph(const UObjectTreeGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectTreeGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTreeGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTreeGraph) \
	NO_API virtual ~UObjectTreeGraph();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraph_h_21_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraph_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraph_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraph_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectTreeGraph;

// ********** End Class UObjectTreeGraph ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Public_Editors_ObjectTreeGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
