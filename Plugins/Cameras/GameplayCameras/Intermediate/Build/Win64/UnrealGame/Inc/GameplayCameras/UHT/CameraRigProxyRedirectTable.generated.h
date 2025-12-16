// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraRigProxyRedirectTable.h"

#ifdef GAMEPLAYCAMERAS_CameraRigProxyRedirectTable_generated_h
#error "CameraRigProxyRedirectTable.generated.h already included, missing '#pragma once' in CameraRigProxyRedirectTable.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigProxyRedirectTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCameraRigProxyRedirectTableEntry *********************************
struct Z_Construct_UScriptStruct_FCameraRigProxyRedirectTableEntry_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraRigProxyRedirectTableEntry_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraRigProxyRedirectTableEntry;
// ********** End ScriptStruct FCameraRigProxyRedirectTableEntry ***********************************

// ********** Begin ScriptStruct FCameraRigProxyRedirectTable **************************************
struct Z_Construct_UScriptStruct_FCameraRigProxyRedirectTable_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraRigProxyRedirectTable_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraRigProxyRedirectTable;
// ********** End ScriptStruct FCameraRigProxyRedirectTable ****************************************

// ********** Begin Class UCameraRigProxyTable *****************************************************
struct Z_Construct_UClass_UCameraRigProxyTable_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigProxyTable_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigProxyTable(); \
	friend struct ::Z_Construct_UClass_UCameraRigProxyTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraRigProxyTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigProxyTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraRigProxyTable_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigProxyTable)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraRigProxyTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigProxyTable(UCameraRigProxyTable&&) = delete; \
	UCameraRigProxyTable(const UCameraRigProxyTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraRigProxyTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigProxyTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigProxyTable) \
	NO_API virtual ~UCameraRigProxyTable();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h_68_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigProxyTable;

// ********** End Class UCameraRigProxyTable *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
