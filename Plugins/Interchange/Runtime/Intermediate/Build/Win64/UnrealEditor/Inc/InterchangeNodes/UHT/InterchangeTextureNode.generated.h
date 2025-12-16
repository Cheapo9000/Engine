// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTextureNode.h"

#ifdef INTERCHANGENODES_InterchangeTextureNode_generated_h
#error "InterchangeTextureNode.generated.h already included, missing '#pragma once' in InterchangeTextureNode.h"
#endif
#define INTERCHANGENODES_InterchangeTextureNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeTextureColorSpace : uint8;
enum class EInterchangeTextureFilterMode : uint8;

// ********** Begin Class UInterchangeTextureNode **************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomColorSpace); \
	DECLARE_FUNCTION(execGetCustomColorSpace); \
	DECLARE_FUNCTION(execSetCustomFilter); \
	DECLARE_FUNCTION(execGetCustomFilter); \
	DECLARE_FUNCTION(execSetCustombFlipGreenChannel); \
	DECLARE_FUNCTION(execGetCustombFlipGreenChannel); \
	DECLARE_FUNCTION(execSetCustomSRGB); \
	DECLARE_FUNCTION(execGetCustomSRGB); \
	DECLARE_FUNCTION(execSetPayLoadKey);


struct Z_Construct_UClass_UInterchangeTextureNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTextureNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTextureNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeTextureNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTextureNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeTextureNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTextureNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeTextureNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTextureNode(UInterchangeTextureNode&&) = delete; \
	UInterchangeTextureNode(const UInterchangeTextureNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeTextureNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTextureNode) \
	INTERCHANGENODES_API virtual ~UInterchangeTextureNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_65_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTextureNode;

// ********** End Class UInterchangeTextureNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h

// ********** Begin Enum EInterchangeTextureWrapMode ***********************************************
#define FOREACH_ENUM_EINTERCHANGETEXTUREWRAPMODE(op) \
	op(EInterchangeTextureWrapMode::Wrap) \
	op(EInterchangeTextureWrapMode::Clamp) \
	op(EInterchangeTextureWrapMode::Mirror) 

enum class EInterchangeTextureWrapMode : uint8;
template<> struct TIsUEnumClass<EInterchangeTextureWrapMode> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeTextureWrapMode>();
// ********** End Enum EInterchangeTextureWrapMode *************************************************

// ********** Begin Enum EInterchangeTextureFilterMode *********************************************
#define FOREACH_ENUM_EINTERCHANGETEXTUREFILTERMODE(op) \
	op(EInterchangeTextureFilterMode::Nearest) \
	op(EInterchangeTextureFilterMode::Bilinear) \
	op(EInterchangeTextureFilterMode::Trilinear) \
	op(EInterchangeTextureFilterMode::Default) 

enum class EInterchangeTextureFilterMode : uint8;
template<> struct TIsUEnumClass<EInterchangeTextureFilterMode> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeTextureFilterMode>();
// ********** End Enum EInterchangeTextureFilterMode ***********************************************

// ********** Begin Enum EInterchangeTextureColorSpace *********************************************
#define FOREACH_ENUM_EINTERCHANGETEXTURECOLORSPACE(op) \
	op(EInterchangeTextureColorSpace::TCS_None) \
	op(EInterchangeTextureColorSpace::TCS_sRGB) \
	op(EInterchangeTextureColorSpace::TCS_Rec2020) \
	op(EInterchangeTextureColorSpace::TCS_ACESAP0) \
	op(EInterchangeTextureColorSpace::TCS_ACESAP1) \
	op(EInterchangeTextureColorSpace::TCS_P3DCI) \
	op(EInterchangeTextureColorSpace::TCS_P3D65) \
	op(EInterchangeTextureColorSpace::TCS_REDWideGamut) \
	op(EInterchangeTextureColorSpace::TCS_SonySGamut3) \
	op(EInterchangeTextureColorSpace::TCS_SonySGamut3Cine) \
	op(EInterchangeTextureColorSpace::TCS_AlexaWideGamut) \
	op(EInterchangeTextureColorSpace::TCS_CanonCinemaGamut) \
	op(EInterchangeTextureColorSpace::TCS_GoProProtuneNative) \
	op(EInterchangeTextureColorSpace::TCS_PanasonicVGamut) \
	op(EInterchangeTextureColorSpace::TCS_Custom) 

enum class EInterchangeTextureColorSpace : uint8;
template<> struct TIsUEnumClass<EInterchangeTextureColorSpace> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeTextureColorSpace>();
// ********** End Enum EInterchangeTextureColorSpace ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
