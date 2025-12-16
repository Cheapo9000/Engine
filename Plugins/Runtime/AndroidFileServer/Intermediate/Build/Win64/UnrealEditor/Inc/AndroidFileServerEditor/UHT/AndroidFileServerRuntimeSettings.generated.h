// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidFileServerRuntimeSettings.h"

#ifdef ANDROIDFILESERVEREDITOR_AndroidFileServerRuntimeSettings_generated_h
#error "AndroidFileServerRuntimeSettings.generated.h already included, missing '#pragma once' in AndroidFileServerRuntimeSettings.h"
#endif
#define ANDROIDFILESERVEREDITOR_AndroidFileServerRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAndroidFileServerRuntimeSettings ****************************************
struct Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics;
ANDROIDFILESERVEREDITOR_API UClass* Z_Construct_UClass_UAndroidFileServerRuntimeSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidFileServerRuntimeSettings(); \
	friend struct ::Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDFILESERVEREDITOR_API UClass* ::Z_Construct_UClass_UAndroidFileServerRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidFileServerRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidFileServerEditor"), Z_Construct_UClass_UAndroidFileServerRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UAndroidFileServerRuntimeSettings)


#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidFileServerRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidFileServerRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidFileServerRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidFileServerRuntimeSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidFileServerRuntimeSettings(UAndroidFileServerRuntimeSettings&&) = delete; \
	UAndroidFileServerRuntimeSettings(const UAndroidFileServerRuntimeSettings&) = delete; \
	NO_API virtual ~UAndroidFileServerRuntimeSettings();


#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_26_INCLASS \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidFileServerRuntimeSettings;

// ********** End Class UAndroidFileServerRuntimeSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h

// ********** Begin Enum EAFSConnectionType ********************************************************
#define FOREACH_ENUM_EAFSCONNECTIONTYPE(op) \
	op(EAFSConnectionType::USBOnly) \
	op(EAFSConnectionType::NetworkOnly) \
	op(EAFSConnectionType::Combined) 

namespace EAFSConnectionType { enum Type : int; }
template<> ANDROIDFILESERVEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAFSConnectionType::Type>();
// ********** End Enum EAFSConnectionType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
