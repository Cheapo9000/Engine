// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeCameraFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeCameraFactoryNode_generated_h
#error "InterchangeCameraFactoryNode.generated.h already included, missing '#pragma once' in InterchangeCameraFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeCameraFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECameraFocusMethod : uint8;

// ********** Begin Class UInterchangePhysicalCameraFactoryNode ************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomFocusMethod); \
	DECLARE_FUNCTION(execGetCustomFocusMethod); \
	DECLARE_FUNCTION(execSetCustomSensorHeight); \
	DECLARE_FUNCTION(execGetCustomSensorHeight); \
	DECLARE_FUNCTION(execSetCustomSensorWidth); \
	DECLARE_FUNCTION(execGetCustomSensorWidth); \
	DECLARE_FUNCTION(execSetCustomFocalLength); \
	DECLARE_FUNCTION(execGetCustomFocalLength);


struct Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePhysicalCameraFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePhysicalCameraFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePhysicalCameraFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangePhysicalCameraFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePhysicalCameraFactoryNode(UInterchangePhysicalCameraFactoryNode&&) = delete; \
	UInterchangePhysicalCameraFactoryNode(const UInterchangePhysicalCameraFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangePhysicalCameraFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePhysicalCameraFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangePhysicalCameraFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangePhysicalCameraFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePhysicalCameraFactoryNode;

// ********** End Class UInterchangePhysicalCameraFactoryNode **************************************

// ********** Begin Class UInterchangeStandardCameraFactoryNode ************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomFieldOfView); \
	DECLARE_FUNCTION(execGetCustomFieldOfView); \
	DECLARE_FUNCTION(execSetCustomAspectRatio); \
	DECLARE_FUNCTION(execGetCustomAspectRatio); \
	DECLARE_FUNCTION(execSetCustomFarClipPlane); \
	DECLARE_FUNCTION(execGetCustomFarClipPlane); \
	DECLARE_FUNCTION(execSetCustomNearClipPlane); \
	DECLARE_FUNCTION(execGetCustomNearClipPlane); \
	DECLARE_FUNCTION(execSetCustomWidth); \
	DECLARE_FUNCTION(execGetCustomWidth); \
	DECLARE_FUNCTION(execSetCustomProjectionMode); \
	DECLARE_FUNCTION(execGetCustomProjectionMode);


struct Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeStandardCameraFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeStandardCameraFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeStandardCameraFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeStandardCameraFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeStandardCameraFactoryNode(UInterchangeStandardCameraFactoryNode&&) = delete; \
	UInterchangeStandardCameraFactoryNode(const UInterchangeStandardCameraFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeStandardCameraFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStandardCameraFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeStandardCameraFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeStandardCameraFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_98_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeStandardCameraFactoryNode;

// ********** End Class UInterchangeStandardCameraFactoryNode **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
