// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGroomCacheFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeGroomCacheFactoryNode_generated_h
#error "InterchangeGroomCacheFactoryNode.generated.h already included, missing '#pragma once' in InterchangeGroomCacheFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeGroomCacheFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeGroomCacheAttributes : uint8;
enum class EInterchangeGroomCacheImportType : uint8;
struct FSoftObjectPath;

// ********** Begin Class UInterchangeGroomCacheFactoryNode ****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomCacheFactoryNode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomGroomAssetPath); \
	DECLARE_FUNCTION(execGetCustomGroomAssetPath); \
	DECLARE_FUNCTION(execSetCustomGroomCacheImportType); \
	DECLARE_FUNCTION(execGetCustomGroomCacheImportType); \
	DECLARE_FUNCTION(execSetCustomGroomCacheAttributes); \
	DECLARE_FUNCTION(execGetCustomGroomCacheAttributes); \
	DECLARE_FUNCTION(execSetCustomFrameRate); \
	DECLARE_FUNCTION(execGetCustomFrameRate); \
	DECLARE_FUNCTION(execSetCustomNumFrames); \
	DECLARE_FUNCTION(execGetCustomNumFrames); \
	DECLARE_FUNCTION(execSetCustomEndFrame); \
	DECLARE_FUNCTION(execGetCustomEndFrame); \
	DECLARE_FUNCTION(execSetCustomStartFrame); \
	DECLARE_FUNCTION(execGetCustomStartFrame);


struct Z_Construct_UClass_UInterchangeGroomCacheFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeGroomCacheFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomCacheFactoryNode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGroomCacheFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeGroomCacheFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeGroomCacheFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGroomCacheFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeGroomCacheFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGroomCacheFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomCacheFactoryNode_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeGroomCacheFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGroomCacheFactoryNode(UInterchangeGroomCacheFactoryNode&&) = delete; \
	UInterchangeGroomCacheFactoryNode(const UInterchangeGroomCacheFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeGroomCacheFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGroomCacheFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGroomCacheFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeGroomCacheFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomCacheFactoryNode_h_20_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomCacheFactoryNode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomCacheFactoryNode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomCacheFactoryNode_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomCacheFactoryNode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGroomCacheFactoryNode;

// ********** End Class UInterchangeGroomCacheFactoryNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomCacheFactoryNode_h

// ********** Begin Enum EInterchangeGroomCacheImportType ******************************************
#define FOREACH_ENUM_EINTERCHANGEGROOMCACHEIMPORTTYPE(op) \
	op(EInterchangeGroomCacheImportType::None) \
	op(EInterchangeGroomCacheImportType::Strands) \
	op(EInterchangeGroomCacheImportType::Guides) \
	op(EInterchangeGroomCacheImportType::All) 

enum class EInterchangeGroomCacheImportType : uint8;
template<> struct TIsUEnumClass<EInterchangeGroomCacheImportType> { enum { Value = true }; };
template<> INTERCHANGEFACTORYNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeGroomCacheImportType>();
// ********** End Enum EInterchangeGroomCacheImportType ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
