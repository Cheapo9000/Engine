// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplicationGraph.h"

#ifdef REPLICATIONGRAPH_ReplicationGraph_generated_h
#error "ReplicationGraph.generated.h already included, missing '#pragma once' in ReplicationGraph.h"
#endif
#define REPLICATIONGRAPH_ReplicationGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;

// ********** Begin Class UReplicationGraphNode ****************************************************
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_71_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode, REPLICATIONGRAPH_API)


struct Z_Construct_UClass_UReplicationGraphNode_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode) \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_71_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_71_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode(UReplicationGraphNode&&) = delete; \
	UReplicationGraphNode(const UReplicationGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_68_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode;

// ********** End Class UReplicationGraphNode ******************************************************

// ********** Begin Class UReplicationGraphNode_ActorList ******************************************
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_190_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode_ActorList, REPLICATIONGRAPH_API)


struct Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_ActorList(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_ActorList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_ActorList, UReplicationGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_ActorList) \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_190_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REPLICATIONGRAPH_API UReplicationGraphNode_ActorList(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_ActorList(UReplicationGraphNode_ActorList&&) = delete; \
	UReplicationGraphNode_ActorList(const UReplicationGraphNode_ActorList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_ActorList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_ActorList); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_ActorList) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_ActorList();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_187_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_ActorList;

// ********** End Class UReplicationGraphNode_ActorList ********************************************

// ********** Begin Class UReplicationGraphNode_ActorListFrequencyBuckets **************************
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_241_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode_ActorListFrequencyBuckets, REPLICATIONGRAPH_API)


struct Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_241_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_ActorListFrequencyBuckets(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_ActorListFrequencyBuckets, UReplicationGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_ActorListFrequencyBuckets_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_ActorListFrequencyBuckets) \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_241_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_241_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_ActorListFrequencyBuckets(UReplicationGraphNode_ActorListFrequencyBuckets&&) = delete; \
	UReplicationGraphNode_ActorListFrequencyBuckets(const UReplicationGraphNode_ActorListFrequencyBuckets&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_ActorListFrequencyBuckets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_ActorListFrequencyBuckets); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_ActorListFrequencyBuckets) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_ActorListFrequencyBuckets();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_238_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_241_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_241_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_241_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_ActorListFrequencyBuckets;

// ********** End Class UReplicationGraphNode_ActorListFrequencyBuckets ****************************

// ********** Begin Class UReplicationGraphNode_DynamicSpatialFrequency ****************************
struct Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_324_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_DynamicSpatialFrequency(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_DynamicSpatialFrequency, UReplicationGraphNode_ActorList, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_DynamicSpatialFrequency_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_DynamicSpatialFrequency)


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_324_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_DynamicSpatialFrequency(UReplicationGraphNode_DynamicSpatialFrequency&&) = delete; \
	UReplicationGraphNode_DynamicSpatialFrequency(const UReplicationGraphNode_DynamicSpatialFrequency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_DynamicSpatialFrequency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_DynamicSpatialFrequency); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_DynamicSpatialFrequency) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_DynamicSpatialFrequency();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_321_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_324_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_324_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_324_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_DynamicSpatialFrequency;

// ********** End Class UReplicationGraphNode_DynamicSpatialFrequency ******************************

// ********** Begin Class UReplicationGraphNode_ConnectionDormancyNode *****************************
struct Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_430_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_ConnectionDormancyNode(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_ConnectionDormancyNode, UReplicationGraphNode_ActorList, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_ConnectionDormancyNode_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_ConnectionDormancyNode)


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_430_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REPLICATIONGRAPH_API UReplicationGraphNode_ConnectionDormancyNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_ConnectionDormancyNode(UReplicationGraphNode_ConnectionDormancyNode&&) = delete; \
	UReplicationGraphNode_ConnectionDormancyNode(const UReplicationGraphNode_ConnectionDormancyNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_ConnectionDormancyNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_ConnectionDormancyNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_ConnectionDormancyNode) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_ConnectionDormancyNode();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_427_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_430_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_430_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_430_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_ConnectionDormancyNode;

// ********** End Class UReplicationGraphNode_ConnectionDormancyNode *******************************

// ********** Begin Class UReplicationGraphNode_DormancyNode ***************************************
struct Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_DormancyNode_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_487_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_DormancyNode(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_DormancyNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_DormancyNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_DormancyNode, UReplicationGraphNode_ActorList, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_DormancyNode_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_DormancyNode)


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_487_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REPLICATIONGRAPH_API UReplicationGraphNode_DormancyNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_DormancyNode(UReplicationGraphNode_DormancyNode&&) = delete; \
	UReplicationGraphNode_DormancyNode(const UReplicationGraphNode_DormancyNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_DormancyNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_DormancyNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_DormancyNode) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_DormancyNode();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_484_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_487_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_487_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_487_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_DormancyNode;

// ********** End Class UReplicationGraphNode_DormancyNode *****************************************

// ********** Begin Class UReplicationGraphNode_GridCell *******************************************
struct Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridCell_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_537_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_GridCell(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_GridCell_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_GridCell_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_GridCell, UReplicationGraphNode_ActorList, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_GridCell_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_GridCell)


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_537_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REPLICATIONGRAPH_API UReplicationGraphNode_GridCell(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_GridCell(UReplicationGraphNode_GridCell&&) = delete; \
	UReplicationGraphNode_GridCell(const UReplicationGraphNode_GridCell&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_GridCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_GridCell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_GridCell) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_GridCell();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_534_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_537_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_537_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_537_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_GridCell;

// ********** End Class UReplicationGraphNode_GridCell *********************************************

// ********** Begin Class UReplicationGraphNode_GridSpatialization2D *******************************
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_581_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode_GridSpatialization2D, REPLICATIONGRAPH_API)


struct Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_581_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_GridSpatialization2D(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_GridSpatialization2D, UReplicationGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_GridSpatialization2D_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_GridSpatialization2D) \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_581_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_581_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_GridSpatialization2D(UReplicationGraphNode_GridSpatialization2D&&) = delete; \
	UReplicationGraphNode_GridSpatialization2D(const UReplicationGraphNode_GridSpatialization2D&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_GridSpatialization2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_GridSpatialization2D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_GridSpatialization2D) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_GridSpatialization2D();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_578_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_581_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_581_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_581_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_GridSpatialization2D;

// ********** End Class UReplicationGraphNode_GridSpatialization2D *********************************

// ********** Begin Class UReplicationGraphNode_AlwaysRelevant *************************************
struct Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_773_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_AlwaysRelevant(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_AlwaysRelevant, UReplicationGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_AlwaysRelevant)


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_773_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_AlwaysRelevant(UReplicationGraphNode_AlwaysRelevant&&) = delete; \
	UReplicationGraphNode_AlwaysRelevant(const UReplicationGraphNode_AlwaysRelevant&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_AlwaysRelevant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_AlwaysRelevant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_AlwaysRelevant) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_AlwaysRelevant();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_770_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_773_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_773_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_773_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_AlwaysRelevant;

// ********** End Class UReplicationGraphNode_AlwaysRelevant ***************************************

// ********** Begin ScriptStruct FAlwaysRelevantActorInfo ******************************************
struct Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics;
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_802_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAlwaysRelevantActorInfo_Statics; \
	REPLICATIONGRAPH_API static class UScriptStruct* StaticStruct();


struct FAlwaysRelevantActorInfo;
// ********** End ScriptStruct FAlwaysRelevantActorInfo ********************************************

// ********** Begin Class UReplicationGraphNode_AlwaysRelevant_ForConnection ***********************
struct Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_829_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_AlwaysRelevant_ForConnection(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_AlwaysRelevant_ForConnection, UReplicationGraphNode_ActorList, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_AlwaysRelevant_ForConnection)


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_829_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REPLICATIONGRAPH_API UReplicationGraphNode_AlwaysRelevant_ForConnection(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_AlwaysRelevant_ForConnection(UReplicationGraphNode_AlwaysRelevant_ForConnection&&) = delete; \
	UReplicationGraphNode_AlwaysRelevant_ForConnection(const UReplicationGraphNode_AlwaysRelevant_ForConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_AlwaysRelevant_ForConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_AlwaysRelevant_ForConnection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_AlwaysRelevant_ForConnection) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_AlwaysRelevant_ForConnection();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_826_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_829_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_829_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_829_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_AlwaysRelevant_ForConnection;

// ********** End Class UReplicationGraphNode_AlwaysRelevant_ForConnection *************************

// ********** Begin ScriptStruct FTearOffActorInfo *************************************************
struct Z_Construct_UScriptStruct_FTearOffActorInfo_Statics;
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_874_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTearOffActorInfo_Statics; \
	REPLICATIONGRAPH_API static class UScriptStruct* StaticStruct();


struct FTearOffActorInfo;
// ********** End ScriptStruct FTearOffActorInfo ***************************************************

// ********** Begin Class UReplicationGraphNode_TearOff_ForConnection ******************************
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_890_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraphNode_TearOff_ForConnection, REPLICATIONGRAPH_API)


struct Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_890_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraphNode_TearOff_ForConnection(); \
	friend struct ::Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraphNode_TearOff_ForConnection, UReplicationGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraphNode_TearOff_ForConnection_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraphNode_TearOff_ForConnection) \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_890_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_890_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REPLICATIONGRAPH_API UReplicationGraphNode_TearOff_ForConnection(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraphNode_TearOff_ForConnection(UReplicationGraphNode_TearOff_ForConnection&&) = delete; \
	UReplicationGraphNode_TearOff_ForConnection(const UReplicationGraphNode_TearOff_ForConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraphNode_TearOff_ForConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraphNode_TearOff_ForConnection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraphNode_TearOff_ForConnection) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraphNode_TearOff_ForConnection();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_887_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_890_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_890_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_890_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraphNode_TearOff_ForConnection;

// ********** End Class UReplicationGraphNode_TearOff_ForConnection ********************************

// ********** Begin Class UReplicationGraph ********************************************************
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_922_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReplicationGraph, REPLICATIONGRAPH_API)


struct Z_Construct_UClass_UReplicationGraph_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_922_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationGraph(); \
	friend struct ::Z_Construct_UClass_UReplicationGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UReplicationGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicationGraph, UReplicationDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UReplicationGraph_NoRegister) \
	DECLARE_SERIALIZER(UReplicationGraph) \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_922_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_922_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicationGraph(UReplicationGraph&&) = delete; \
	UReplicationGraph(const UReplicationGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UReplicationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationGraph) \
	REPLICATIONGRAPH_API virtual ~UReplicationGraph();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_919_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_922_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_922_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_922_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicationGraph;

// ********** End Class UReplicationGraph **********************************************************

// ********** Begin ScriptStruct FLastLocationGatherInfo *******************************************
struct Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics;
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1240_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLastLocationGatherInfo_Statics; \
	REPLICATIONGRAPH_API static class UScriptStruct* StaticStruct();


struct FLastLocationGatherInfo;
// ********** End ScriptStruct FLastLocationGatherInfo *********************************************

// ********** Begin Class UNetReplicationGraphConnection *******************************************
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1286_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNetReplicationGraphConnection, REPLICATIONGRAPH_API)


struct Z_Construct_UClass_UNetReplicationGraphConnection_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UNetReplicationGraphConnection_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1286_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetReplicationGraphConnection(); \
	friend struct ::Z_Construct_UClass_UNetReplicationGraphConnection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UNetReplicationGraphConnection_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetReplicationGraphConnection, UReplicationConnectionDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UNetReplicationGraphConnection_NoRegister) \
	DECLARE_SERIALIZER(UNetReplicationGraphConnection) \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1286_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1286_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetReplicationGraphConnection(UNetReplicationGraphConnection&&) = delete; \
	UNetReplicationGraphConnection(const UNetReplicationGraphConnection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, UNetReplicationGraphConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetReplicationGraphConnection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetReplicationGraphConnection) \
	REPLICATIONGRAPH_API virtual ~UNetReplicationGraphConnection();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1283_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1286_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1286_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1286_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetReplicationGraphConnection;

// ********** End Class UNetReplicationGraphConnection *********************************************

// ********** Begin Class AReplicationGraphDebugActor **********************************************
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1516_RPC_WRAPPERS_NO_PURE_DECLS \
	REPLICATIONGRAPH_API virtual void ClientCellInfo_Implementation(FVector CellLocation, FVector CellExtent, TArray<AActor*> const& Actors); \
	REPLICATIONGRAPH_API virtual void ServerPrintCullDistances_Implementation(); \
	REPLICATIONGRAPH_API virtual void ServerSetConditionalActorBreakpoint_Implementation(AActor* Actor); \
	REPLICATIONGRAPH_API virtual void ServerSetPeriodFrameForClass_Implementation(UClass* Class, int32 PeriodFrame); \
	REPLICATIONGRAPH_API virtual void ServerSetCullDistanceForClass_Implementation(UClass* Class, float CullDistance); \
	REPLICATIONGRAPH_API virtual void ServerPrintAllActorInfo_Implementation(const FString& Str); \
	REPLICATIONGRAPH_API virtual void ServerCellInfo_Implementation(); \
	REPLICATIONGRAPH_API virtual void ServerStopDebugging_Implementation(); \
	REPLICATIONGRAPH_API virtual void ServerStartDebugging_Implementation(); \
	DECLARE_FUNCTION(execClientCellInfo); \
	DECLARE_FUNCTION(execServerPrintCullDistances); \
	DECLARE_FUNCTION(execServerSetConditionalActorBreakpoint); \
	DECLARE_FUNCTION(execServerSetPeriodFrameForClass); \
	DECLARE_FUNCTION(execServerSetCullDistanceForClass); \
	DECLARE_FUNCTION(execServerPrintAllActorInfo); \
	DECLARE_FUNCTION(execServerCellInfo); \
	DECLARE_FUNCTION(execServerStopDebugging); \
	DECLARE_FUNCTION(execServerStartDebugging);


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1516_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AReplicationGraphDebugActor_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_AReplicationGraphDebugActor_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1516_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplicationGraphDebugActor(); \
	friend struct ::Z_Construct_UClass_AReplicationGraphDebugActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_AReplicationGraphDebugActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AReplicationGraphDebugActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_AReplicationGraphDebugActor_NoRegister) \
	DECLARE_SERIALIZER(AReplicationGraphDebugActor)


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1516_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AReplicationGraphDebugActor(AReplicationGraphDebugActor&&) = delete; \
	AReplicationGraphDebugActor(const AReplicationGraphDebugActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REPLICATIONGRAPH_API, AReplicationGraphDebugActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplicationGraphDebugActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReplicationGraphDebugActor) \
	REPLICATIONGRAPH_API virtual ~AReplicationGraphDebugActor();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1513_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1516_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1516_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1516_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1516_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h_1516_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AReplicationGraphDebugActor;

// ********** End Class AReplicationGraphDebugActor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
