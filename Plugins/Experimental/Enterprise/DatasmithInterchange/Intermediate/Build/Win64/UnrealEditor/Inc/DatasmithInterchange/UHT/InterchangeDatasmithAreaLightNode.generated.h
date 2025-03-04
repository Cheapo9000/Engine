// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDatasmithAreaLightNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDatasmithAreaLightActorShape : uint8;
enum class EDatasmithAreaLightActorType : uint8;
struct FLinearColor;
#ifdef DATASMITHINTERCHANGE_InterchangeDatasmithAreaLightNode_generated_h
#error "InterchangeDatasmithAreaLightNode.generated.h already included, missing '#pragma once' in InterchangeDatasmithAreaLightNode.h"
#endif
#define DATASMITHINTERCHANGE_InterchangeDatasmithAreaLightNode_generated_h

#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomSpotlightOuterAngle); \
	DECLARE_FUNCTION(execGetCustomSpotlightOuterAngle); \
	DECLARE_FUNCTION(execSetCustomSpotlightInnerAngle); \
	DECLARE_FUNCTION(execGetCustomSpotlightInnerAngle); \
	DECLARE_FUNCTION(execSetCustomSourceLength); \
	DECLARE_FUNCTION(execGetCustomSourceLength); \
	DECLARE_FUNCTION(execSetCustomSourceRadius); \
	DECLARE_FUNCTION(execGetCustomSourceRadius); \
	DECLARE_FUNCTION(execSetCustomColor); \
	DECLARE_FUNCTION(execGetCustomColor); \
	DECLARE_FUNCTION(execSetCustomDimensions); \
	DECLARE_FUNCTION(execGetCustomDimensions); \
	DECLARE_FUNCTION(execSetCustomLightShape); \
	DECLARE_FUNCTION(execGetCustomLightShape); \
	DECLARE_FUNCTION(execSetCustomLightType); \
	DECLARE_FUNCTION(execGetCustomLightType);


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDatasmithAreaLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeDatasmithAreaLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDatasmithAreaLightNode, UInterchangeLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithInterchange"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDatasmithAreaLightNode)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDatasmithAreaLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeDatasmithAreaLightNode(UInterchangeDatasmithAreaLightNode&&); \
	UInterchangeDatasmithAreaLightNode(const UInterchangeDatasmithAreaLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDatasmithAreaLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDatasmithAreaLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDatasmithAreaLightNode) \
	NO_API virtual ~UInterchangeDatasmithAreaLightNode();


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHINTERCHANGE_API UClass* StaticClass<class UInterchangeDatasmithAreaLightNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
