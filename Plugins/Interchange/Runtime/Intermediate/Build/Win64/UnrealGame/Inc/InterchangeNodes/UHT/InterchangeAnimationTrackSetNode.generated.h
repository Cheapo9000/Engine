// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAnimationTrackSetNode.h"

#ifdef INTERCHANGENODES_InterchangeAnimationTrackSetNode_generated_h
#error "InterchangeAnimationTrackSetNode.generated.h already included, missing '#pragma once' in InterchangeAnimationTrackSetNode.h"
#endif
#define INTERCHANGENODES_InterchangeAnimationTrackSetNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeAnimationPayLoadType : uint8;
enum class EInterchangePropertyTracks : int32;
struct FInterchangeAnimationPayLoadKey;

// ********** Begin ScriptStruct FInterchangeAnimationPayLoadKey ***********************************
struct Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics; \
	INTERCHANGENODES_API static class UScriptStruct* StaticStruct();


struct FInterchangeAnimationPayLoadKey;
// ********** End ScriptStruct FInterchangeAnimationPayLoadKey *************************************

// ********** Begin Class UInterchangeAnimationTrackSetNode ****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomFrameRate); \
	DECLARE_FUNCTION(execSetCustomFrameRate); \
	DECLARE_FUNCTION(execRemoveCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execAddCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUids); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUidCount);


struct Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimationTrackSetNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeAnimationTrackSetNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAnimationTrackSetNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeAnimationTrackSetNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAnimationTrackSetNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_109_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAnimationTrackSetNode(UInterchangeAnimationTrackSetNode&&) = delete; \
	UInterchangeAnimationTrackSetNode(const UInterchangeAnimationTrackSetNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeAnimationTrackSetNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimationTrackSetNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimationTrackSetNode) \
	INTERCHANGENODES_API virtual ~UInterchangeAnimationTrackSetNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_106_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAnimationTrackSetNode;

// ********** End Class UInterchangeAnimationTrackSetNode ******************************************

// ********** Begin Class UInterchangeAnimationTrackBaseNode ***************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomCompletionMode); \
	DECLARE_FUNCTION(execSetCustomCompletionMode);


struct Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimationTrackBaseNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAnimationTrackBaseNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAnimationTrackBaseNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeAnimationTrackBaseNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAnimationTrackBaseNode(UInterchangeAnimationTrackBaseNode&&) = delete; \
	UInterchangeAnimationTrackBaseNode(const UInterchangeAnimationTrackBaseNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeAnimationTrackBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimationTrackBaseNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimationTrackBaseNode) \
	INTERCHANGENODES_API virtual ~UInterchangeAnimationTrackBaseNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_179_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAnimationTrackBaseNode;

// ********** End Class UInterchangeAnimationTrackBaseNode *****************************************

// ********** Begin Class UInterchangeAnimationTrackSetInstanceNode ********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomTrackSetDependencyUid); \
	DECLARE_FUNCTION(execSetCustomTrackSetDependencyUid); \
	DECLARE_FUNCTION(execGetCustomStartFrame); \
	DECLARE_FUNCTION(execSetCustomStartFrame); \
	DECLARE_FUNCTION(execGetCustomDuration); \
	DECLARE_FUNCTION(execSetCustomDuration); \
	DECLARE_FUNCTION(execGetCustomTimeScale); \
	DECLARE_FUNCTION(execSetCustomTimeScale);


struct Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimationTrackSetInstanceNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAnimationTrackSetInstanceNode, UInterchangeAnimationTrackBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAnimationTrackSetInstanceNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_222_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeAnimationTrackSetInstanceNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAnimationTrackSetInstanceNode(UInterchangeAnimationTrackSetInstanceNode&&) = delete; \
	UInterchangeAnimationTrackSetInstanceNode(const UInterchangeAnimationTrackSetInstanceNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeAnimationTrackSetInstanceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimationTrackSetInstanceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimationTrackSetInstanceNode) \
	INTERCHANGENODES_API virtual ~UInterchangeAnimationTrackSetInstanceNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_219_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_222_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_222_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAnimationTrackSetInstanceNode;

// ********** End Class UInterchangeAnimationTrackSetInstanceNode **********************************

// ********** Begin Class UInterchangeAnimationTrackNode *******************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomFrameCount); \
	DECLARE_FUNCTION(execSetCustomFrameCount); \
	DECLARE_FUNCTION(execGetCustomAnimationPayloadKey); \
	DECLARE_FUNCTION(execSetCustomAnimationPayloadKey); \
	DECLARE_FUNCTION(execGetCustomPropertyTrack); \
	DECLARE_FUNCTION(execSetCustomPropertyTrack); \
	DECLARE_FUNCTION(execGetCustomActorDependencyUid); \
	DECLARE_FUNCTION(execSetCustomActorDependencyUid);


struct Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimationTrackNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeAnimationTrackNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAnimationTrackNode, UInterchangeAnimationTrackBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeAnimationTrackNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAnimationTrackNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeAnimationTrackNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAnimationTrackNode(UInterchangeAnimationTrackNode&&) = delete; \
	UInterchangeAnimationTrackNode(const UInterchangeAnimationTrackNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeAnimationTrackNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimationTrackNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimationTrackNode) \
	INTERCHANGENODES_API virtual ~UInterchangeAnimationTrackNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_298_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_301_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAnimationTrackNode;

// ********** End Class UInterchangeAnimationTrackNode *********************************************

// ********** Begin Class UInterchangeTransformAnimationTrackNode **********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_387_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomUsedChannels); \
	DECLARE_FUNCTION(execSetCustomUsedChannels);


struct Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_387_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTransformAnimationTrackNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTransformAnimationTrackNode, UInterchangeAnimationTrackNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTransformAnimationTrackNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_387_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeTransformAnimationTrackNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTransformAnimationTrackNode(UInterchangeTransformAnimationTrackNode&&) = delete; \
	UInterchangeTransformAnimationTrackNode(const UInterchangeTransformAnimationTrackNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeTransformAnimationTrackNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTransformAnimationTrackNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTransformAnimationTrackNode) \
	INTERCHANGENODES_API virtual ~UInterchangeTransformAnimationTrackNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_384_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_387_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_387_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_387_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_387_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTransformAnimationTrackNode;

// ********** End Class UInterchangeTransformAnimationTrackNode ************************************

// ********** Begin Class UInterchangeSkeletalAnimationTrackNode ***********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_444_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsNodeAnimatedWithBakedCurve); \
	DECLARE_FUNCTION(execSetAnimationPayloadKeyForMorphTargetNodeUid); \
	DECLARE_FUNCTION(execGetMorphTargetNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execSetAnimationPayloadKeyForSceneNodeUid); \
	DECLARE_FUNCTION(execGetSceneNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execGetCustomSourceTimelineAnimationStopTime); \
	DECLARE_FUNCTION(execSetCustomSourceTimelineAnimationStopTime); \
	DECLARE_FUNCTION(execGetCustomSourceTimelineAnimationStartTime); \
	DECLARE_FUNCTION(execSetCustomSourceTimelineAnimationStartTime); \
	DECLARE_FUNCTION(execGetCustomAnimationStopTime); \
	DECLARE_FUNCTION(execSetCustomAnimationStopTime); \
	DECLARE_FUNCTION(execGetCustomAnimationStartTime); \
	DECLARE_FUNCTION(execSetCustomAnimationStartTime); \
	DECLARE_FUNCTION(execGetCustomAnimationSampleRate); \
	DECLARE_FUNCTION(execSetCustomAnimationSampleRate); \
	DECLARE_FUNCTION(execSetCustomSkeletonNodeUid); \
	DECLARE_FUNCTION(execGetCustomSkeletonNodeUid);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_444_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSkeletalAnimationTrackNode, INTERCHANGENODES_API)


struct Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_444_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkeletalAnimationTrackNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSkeletalAnimationTrackNode, UInterchangeAnimationTrackBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSkeletalAnimationTrackNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_444_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_444_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSkeletalAnimationTrackNode(UInterchangeSkeletalAnimationTrackNode&&) = delete; \
	UInterchangeSkeletalAnimationTrackNode(const UInterchangeSkeletalAnimationTrackNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeSkeletalAnimationTrackNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkeletalAnimationTrackNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSkeletalAnimationTrackNode) \
	INTERCHANGENODES_API virtual ~UInterchangeSkeletalAnimationTrackNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_441_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_444_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_444_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_444_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_444_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSkeletalAnimationTrackNode;

// ********** End Class UInterchangeSkeletalAnimationTrackNode *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h

// ********** Begin Enum EInterchangeAnimationPayLoadType ******************************************
#define FOREACH_ENUM_EINTERCHANGEANIMATIONPAYLOADTYPE(op) \
	op(EInterchangeAnimationPayLoadType::NONE) \
	op(EInterchangeAnimationPayLoadType::CURVE) \
	op(EInterchangeAnimationPayLoadType::MORPHTARGETCURVE) \
	op(EInterchangeAnimationPayLoadType::STEPCURVE) \
	op(EInterchangeAnimationPayLoadType::BAKED) \
	op(EInterchangeAnimationPayLoadType::MORPHTARGETCURVEWEIGHTINSTANCE) \
	op(EInterchangeAnimationPayLoadType::GEOMETRY_CACHE_TRANSFORM) 

enum class EInterchangeAnimationPayLoadType : uint8;
template<> struct TIsUEnumClass<EInterchangeAnimationPayLoadType> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeAnimationPayLoadType>();
// ********** End Enum EInterchangeAnimationPayLoadType ********************************************

// ********** Begin Enum EInterchangeAnimatedProperty **********************************************
#define FOREACH_ENUM_EINTERCHANGEANIMATEDPROPERTY(op) \
	op(EInterchangeAnimatedProperty::None) \
	op(EInterchangeAnimatedProperty::Visibility) 

enum class EInterchangeAnimatedProperty : uint8;
template<> struct TIsUEnumClass<EInterchangeAnimatedProperty> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeAnimatedProperty>();
// ********** End Enum EInterchangeAnimatedProperty ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
