// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DisplayClusterPreviewShareComponent.h"

#ifdef DISPLAYCLUSTER_DisplayClusterPreviewShareComponent_generated_h
#error "DisplayClusterPreviewShareComponent.generated.h already included, missing '#pragma once' in DisplayClusterPreviewShareComponent.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterPreviewShareComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDisplayClusterPreviewShareMode : int32;

// ********** Begin Class UDisplayClusterPreviewShareComponent *************************************
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUniqueName); \
	DECLARE_FUNCTION(execSetMode);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_ACCESSORS \
static void SetMode_WrapperImpl(void* Object, const void* InValue); \
static void SetUniqueName_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDisplayClusterPreviewShareComponent, NO_API)


struct Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterPreviewShareComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterPreviewShareComponent(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterPreviewShareComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterPreviewShareComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterPreviewShareComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterPreviewShareComponent_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterPreviewShareComponent) \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterPreviewShareComponent(UDisplayClusterPreviewShareComponent&&) = delete; \
	UDisplayClusterPreviewShareComponent(const UDisplayClusterPreviewShareComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterPreviewShareComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterPreviewShareComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterPreviewShareComponent) \
	NO_API virtual ~UDisplayClusterPreviewShareComponent();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_67_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterPreviewShareComponent;

// ********** End Class UDisplayClusterPreviewShareComponent ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterPreviewShareComponent_h

// ********** Begin Enum EDisplayClusterPreviewShareMode *******************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERPREVIEWSHAREMODE(op) \
	op(EDisplayClusterPreviewShareMode::None) \
	op(EDisplayClusterPreviewShareMode::PullActor) \
	op(EDisplayClusterPreviewShareMode::Send) \
	op(EDisplayClusterPreviewShareMode::Receive) 

enum class EDisplayClusterPreviewShareMode;
template<> struct TIsUEnumClass<EDisplayClusterPreviewShareMode> { enum { Value = true }; };
template<> DISPLAYCLUSTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterPreviewShareMode>();
// ********** End Enum EDisplayClusterPreviewShareMode *********************************************

// ********** Begin Enum EDisplayClusterPreviewShareIcvfxSync **************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERPREVIEWSHAREICVFXSYNC(op) \
	op(EDisplayClusterPreviewShareIcvfxSync::None) \
	op(EDisplayClusterPreviewShareIcvfxSync::PullActor) \
	op(EDisplayClusterPreviewShareIcvfxSync::PushActor) 

enum class EDisplayClusterPreviewShareIcvfxSync;
template<> struct TIsUEnumClass<EDisplayClusterPreviewShareIcvfxSync> { enum { Value = true }; };
template<> DISPLAYCLUSTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterPreviewShareIcvfxSync>();
// ********** End Enum EDisplayClusterPreviewShareIcvfxSync ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
