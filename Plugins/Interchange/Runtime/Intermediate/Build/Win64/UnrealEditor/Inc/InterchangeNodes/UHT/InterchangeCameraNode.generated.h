// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeCameraNode.h"

#ifdef INTERCHANGENODES_InterchangeCameraNode_generated_h
#error "InterchangeCameraNode.generated.h already included, missing '#pragma once' in InterchangeCameraNode.h"
#endif
#define INTERCHANGENODES_InterchangeCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeCameraProjectionType : uint8;

// ********** Begin Class UInterchangePhysicalCameraNode *******************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomEnableDepthOfField); \
	DECLARE_FUNCTION(execGetCustomEnableDepthOfField); \
	DECLARE_FUNCTION(execSetCustomSensorHeight); \
	DECLARE_FUNCTION(execGetCustomSensorHeight); \
	DECLARE_FUNCTION(execSetCustomSensorWidth); \
	DECLARE_FUNCTION(execGetCustomSensorWidth); \
	DECLARE_FUNCTION(execSetCustomFocalLength); \
	DECLARE_FUNCTION(execGetCustomFocalLength);


struct Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangePhysicalCameraNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePhysicalCameraNode(); \
	friend struct ::Z_Construct_UClass_UInterchangePhysicalCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangePhysicalCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePhysicalCameraNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangePhysicalCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePhysicalCameraNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangePhysicalCameraNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePhysicalCameraNode(UInterchangePhysicalCameraNode&&) = delete; \
	UInterchangePhysicalCameraNode(const UInterchangePhysicalCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangePhysicalCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePhysicalCameraNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangePhysicalCameraNode) \
	INTERCHANGENODES_API virtual ~UInterchangePhysicalCameraNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_10_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePhysicalCameraNode;

// ********** End Class UInterchangePhysicalCameraNode *********************************************

// ********** Begin Class UInterchangeStandardCameraNode *******************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
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


struct Z_Construct_UClass_UInterchangeStandardCameraNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeStandardCameraNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeStandardCameraNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeStandardCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeStandardCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeStandardCameraNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeStandardCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeStandardCameraNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeStandardCameraNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeStandardCameraNode(UInterchangeStandardCameraNode&&) = delete; \
	UInterchangeStandardCameraNode(const UInterchangeStandardCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeStandardCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStandardCameraNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeStandardCameraNode) \
	INTERCHANGENODES_API virtual ~UInterchangeStandardCameraNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_93_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeStandardCameraNode;

// ********** End Class UInterchangeStandardCameraNode *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h

// ********** Begin Enum EInterchangeCameraProjectionType ******************************************
#define FOREACH_ENUM_EINTERCHANGECAMERAPROJECTIONTYPE(op) \
	op(EInterchangeCameraProjectionType::Perspective) \
	op(EInterchangeCameraProjectionType::Orthographic) 

enum class EInterchangeCameraProjectionType : uint8;
template<> struct TIsUEnumClass<EInterchangeCameraProjectionType> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeCameraProjectionType>();
// ********** End Enum EInterchangeCameraProjectionType ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
