// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGroomNode.h"

#ifdef INTERCHANGENODES_InterchangeGroomNode_generated_h
#error "InterchangeGroomNode.generated.h already included, missing '#pragma once' in InterchangeGroomNode.h"
#endif
#define INTERCHANGENODES_InterchangeGroomNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeGroomCacheAttributes : uint8;
enum class EInterchangeGroomPayLoadType : uint8;

// ********** Begin ScriptStruct FInterchangeGroomPayloadKey ***************************************
struct Z_Construct_UScriptStruct_FInterchangeGroomPayloadKey_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeGroomPayloadKey_Statics; \
	INTERCHANGENODES_API static class UScriptStruct* StaticStruct();


struct FInterchangeGroomPayloadKey;
// ********** End ScriptStruct FInterchangeGroomPayloadKey *****************************************

// ********** Begin Class UInterchangeGroomNode ****************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomGroomCacheAttributes); \
	DECLARE_FUNCTION(execGetCustomGroomCacheAttributes); \
	DECLARE_FUNCTION(execSetCustomFrameRate); \
	DECLARE_FUNCTION(execGetCustomFrameRate); \
	DECLARE_FUNCTION(execSetCustomNumFrames); \
	DECLARE_FUNCTION(execGetCustomNumFrames); \
	DECLARE_FUNCTION(execSetCustomEndFrame); \
	DECLARE_FUNCTION(execGetCustomEndFrame); \
	DECLARE_FUNCTION(execSetCustomStartFrame); \
	DECLARE_FUNCTION(execGetCustomStartFrame); \
	DECLARE_FUNCTION(execSetPayloadKey);


struct Z_Construct_UClass_UInterchangeGroomNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeGroomNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGroomNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeGroomNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeGroomNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGroomNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeGroomNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGroomNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeGroomNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGroomNode(UInterchangeGroomNode&&) = delete; \
	UInterchangeGroomNode(const UInterchangeGroomNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeGroomNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGroomNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGroomNode) \
	INTERCHANGENODES_API virtual ~UInterchangeGroomNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h_84_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGroomNode;

// ********** End Class UInterchangeGroomNode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeGroomNode_h

// ********** Begin Enum EInterchangeGroomPayLoadType **********************************************
#define FOREACH_ENUM_EINTERCHANGEGROOMPAYLOADTYPE(op) \
	op(EInterchangeGroomPayLoadType::STATIC) \
	op(EInterchangeGroomPayLoadType::ANIMATED) 

enum class EInterchangeGroomPayLoadType : uint8;
template<> struct TIsUEnumClass<EInterchangeGroomPayLoadType> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeGroomPayLoadType>();
// ********** End Enum EInterchangeGroomPayLoadType ************************************************

// ********** Begin Enum EInterchangeGroomCacheAttributes ******************************************
#define FOREACH_ENUM_EINTERCHANGEGROOMCACHEATTRIBUTES(op) \
	op(EInterchangeGroomCacheAttributes::None) \
	op(EInterchangeGroomCacheAttributes::Position) \
	op(EInterchangeGroomCacheAttributes::Width) \
	op(EInterchangeGroomCacheAttributes::Color) \
	op(EInterchangeGroomCacheAttributes::PositionWidth) \
	op(EInterchangeGroomCacheAttributes::PositionColor) \
	op(EInterchangeGroomCacheAttributes::WidthColor) \
	op(EInterchangeGroomCacheAttributes::PositionWidthColor) 

enum class EInterchangeGroomCacheAttributes : uint8;
template<> struct TIsUEnumClass<EInterchangeGroomCacheAttributes> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeGroomCacheAttributes>();
// ********** End Enum EInterchangeGroomCacheAttributes ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
