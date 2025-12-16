// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphRenderLayerSubsystem.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphRenderLayerSubsystem_generated_h
#error "MovieGraphRenderLayerSubsystem.generated.h already included, missing '#pragma once' in MovieGraphRenderLayerSubsystem.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphRenderLayerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UClass;
class UMaterialInterface;
class UMovieGraphCollection;
class UMovieGraphCollectionModifier;
class UMovieGraphConditionGroup;
class UMovieGraphConditionGroupQueryBase;
class UMovieGraphModifierBase;
class UMovieGraphRenderLayer;
class UMovieGraphRenderLayerSubsystem;
class UWorld;
enum class EMovieGraphConditionGroupOpType : uint8;
enum class EMovieGraphConditionGroupQueryOpType : uint8;
struct FMovieGraphEvaluationResult;

// ********** Begin Class UMovieGraphConditionGroupQueryBase ***************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsFirstConditionGroupQuery); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEditorOnlyQuery); \
	DECLARE_FUNCTION(execShouldEvaluateComponents); \
	DECLARE_FUNCTION(execShouldHidePropertyNames); \
	DECLARE_FUNCTION(execEvaluateActorsAndComponents); \
	DECLARE_FUNCTION(execEvaluate); \
	DECLARE_FUNCTION(execGetOperationType); \
	DECLARE_FUNCTION(execSetOperationType);


struct Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQueryBase(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQueryBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQueryBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQueryBase(UMovieGraphConditionGroupQueryBase&&) = delete; \
	UMovieGraphConditionGroupQueryBase(const UMovieGraphConditionGroupQueryBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQueryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQueryBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQueryBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQueryBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_49_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQueryBase;

// ********** End Class UMovieGraphConditionGroupQueryBase *****************************************

// ********** Begin ScriptStruct FMovieGraphActorQueryEntry ****************************************
struct Z_Construct_UScriptStruct_FMovieGraphActorQueryEntry_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphActorQueryEntry_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphActorQueryEntry;
// ********** End ScriptStruct FMovieGraphActorQueryEntry ******************************************

// ********** Begin Class UMovieGraphConditionGroupQuery_Actor *************************************
struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_189_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_Actor(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_Actor, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_Actor_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_Actor)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_189_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_Actor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_Actor(UMovieGraphConditionGroupQuery_Actor&&) = delete; \
	UMovieGraphConditionGroupQuery_Actor(const UMovieGraphConditionGroupQuery_Actor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_Actor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_Actor) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_Actor();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_186_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_189_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_189_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_189_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_Actor;

// ********** End Class UMovieGraphConditionGroupQuery_Actor ***************************************

// ********** Begin Class UMovieGraphConditionGroupQuery_ActorTagName ******************************
struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_289_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorTagName(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_ActorTagName, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorTagName_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_ActorTagName)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_289_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_ActorTagName(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_ActorTagName(UMovieGraphConditionGroupQuery_ActorTagName&&) = delete; \
	UMovieGraphConditionGroupQuery_ActorTagName(const UMovieGraphConditionGroupQuery_ActorTagName&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_ActorTagName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_ActorTagName); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_ActorTagName) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_ActorTagName();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_286_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_289_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_289_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_289_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_ActorTagName;

// ********** End Class UMovieGraphConditionGroupQuery_ActorTagName ********************************

// ********** Begin Class UMovieGraphConditionGroupQuery_ActorName *********************************
struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_322_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorName(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_ActorName, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorName_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_ActorName)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_322_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_ActorName(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_ActorName(UMovieGraphConditionGroupQuery_ActorName&&) = delete; \
	UMovieGraphConditionGroupQuery_ActorName(const UMovieGraphConditionGroupQuery_ActorName&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_ActorName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_ActorName); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_ActorName) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_ActorName();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_319_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_322_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_322_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_322_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_ActorName;

// ********** End Class UMovieGraphConditionGroupQuery_ActorName ***********************************

// ********** Begin Class UMovieGraphConditionGroupQuery_ActorType *********************************
struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_357_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorType(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_ActorType, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorType_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_ActorType)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_357_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_ActorType(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_ActorType(UMovieGraphConditionGroupQuery_ActorType&&) = delete; \
	UMovieGraphConditionGroupQuery_ActorType(const UMovieGraphConditionGroupQuery_ActorType&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_ActorType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_ActorType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_ActorType) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_ActorType();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_354_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_357_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_357_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_357_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_ActorType;

// ********** End Class UMovieGraphConditionGroupQuery_ActorType ***********************************

// ********** Begin Class UMovieGraphConditionGroupQuery_ComponentTagName **************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_395_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieGraphConditionGroupQuery_ComponentTagName, MOVIERENDERPIPELINECORE_API)


struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_395_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentTagName(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_ComponentTagName, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentTagName_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_ComponentTagName) \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_395_ARCHIVESERIALIZER


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_395_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_ComponentTagName(UMovieGraphConditionGroupQuery_ComponentTagName&&) = delete; \
	UMovieGraphConditionGroupQuery_ComponentTagName(const UMovieGraphConditionGroupQuery_ComponentTagName&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_ComponentTagName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_ComponentTagName); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_ComponentTagName) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_ComponentTagName();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_392_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_395_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_395_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_395_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_ComponentTagName;

// ********** End Class UMovieGraphConditionGroupQuery_ComponentTagName ****************************

// ********** Begin Class UMovieGraphConditionGroupQuery_ComponentType *****************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_440_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieGraphConditionGroupQuery_ComponentType, MOVIERENDERPIPELINECORE_API)


struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_440_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_ComponentType(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_ComponentType, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_ComponentType_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_ComponentType) \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_440_ARCHIVESERIALIZER


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_440_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_ComponentType(UMovieGraphConditionGroupQuery_ComponentType&&) = delete; \
	UMovieGraphConditionGroupQuery_ComponentType(const UMovieGraphConditionGroupQuery_ComponentType&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_ComponentType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_ComponentType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_ComponentType) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_ComponentType();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_437_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_440_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_440_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_440_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_ComponentType;

// ********** End Class UMovieGraphConditionGroupQuery_ComponentType *******************************

// ********** Begin Class UMovieGraphConditionGroupQuery_EditorFolder ******************************
struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_487_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_EditorFolder(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_EditorFolder, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_EditorFolder_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_EditorFolder)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_487_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_EditorFolder(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_EditorFolder(UMovieGraphConditionGroupQuery_EditorFolder&&) = delete; \
	UMovieGraphConditionGroupQuery_EditorFolder(const UMovieGraphConditionGroupQuery_EditorFolder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_EditorFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_EditorFolder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_EditorFolder) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_EditorFolder();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_484_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_487_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_487_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_487_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_EditorFolder;

// ********** End Class UMovieGraphConditionGroupQuery_EditorFolder ********************************

// ********** Begin Class UMovieGraphConditionGroupQuery_Sublevel **********************************
struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_526_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_Sublevel(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_Sublevel, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_Sublevel_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_Sublevel)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_526_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_Sublevel(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_Sublevel(UMovieGraphConditionGroupQuery_Sublevel&&) = delete; \
	UMovieGraphConditionGroupQuery_Sublevel(const UMovieGraphConditionGroupQuery_Sublevel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_Sublevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_Sublevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_Sublevel) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_Sublevel();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_523_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_526_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_526_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_526_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_Sublevel;

// ********** End Class UMovieGraphConditionGroupQuery_Sublevel ************************************

// ********** Begin Class UMovieGraphConditionGroupQuery_ActorLayer ********************************
struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_571_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_ActorLayer(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_ActorLayer, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_ActorLayer_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_ActorLayer)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_571_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_ActorLayer(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_ActorLayer(UMovieGraphConditionGroupQuery_ActorLayer&&) = delete; \
	UMovieGraphConditionGroupQuery_ActorLayer(const UMovieGraphConditionGroupQuery_ActorLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_ActorLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_ActorLayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_ActorLayer) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_ActorLayer();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_568_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_571_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_571_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_571_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_ActorLayer;

// ********** End Class UMovieGraphConditionGroupQuery_ActorLayer **********************************

// ********** Begin Class UMovieGraphConditionGroupQuery_DataLayer *********************************
struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_610_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_DataLayer(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_DataLayer, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_DataLayer_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_DataLayer)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_610_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_DataLayer(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_DataLayer(UMovieGraphConditionGroupQuery_DataLayer&&) = delete; \
	UMovieGraphConditionGroupQuery_DataLayer(const UMovieGraphConditionGroupQuery_DataLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_DataLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_DataLayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_DataLayer) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_DataLayer();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_607_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_610_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_610_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_610_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_DataLayer;

// ********** End Class UMovieGraphConditionGroupQuery_DataLayer ***********************************

// ********** Begin Class UMovieGraphConditionGroupQuery_IsSpawnable *******************************
struct Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_655_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroupQuery_IsSpawnable(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroupQuery_IsSpawnable, UMovieGraphConditionGroupQueryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroupQuery_IsSpawnable_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroupQuery_IsSpawnable)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_655_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQuery_IsSpawnable(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroupQuery_IsSpawnable(UMovieGraphConditionGroupQuery_IsSpawnable&&) = delete; \
	UMovieGraphConditionGroupQuery_IsSpawnable(const UMovieGraphConditionGroupQuery_IsSpawnable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroupQuery_IsSpawnable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroupQuery_IsSpawnable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroupQuery_IsSpawnable) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroupQuery_IsSpawnable();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_652_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_655_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_655_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_655_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroupQuery_IsSpawnable;

// ********** End Class UMovieGraphConditionGroupQuery_IsSpawnable *********************************

// ********** Begin ScriptStruct FMovieGraphEvaluationResult ***************************************
struct Z_Construct_UScriptStruct_FMovieGraphEvaluationResult_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_672_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphEvaluationResult_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphEvaluationResult;
// ********** End ScriptStruct FMovieGraphEvaluationResult *****************************************

// ********** Begin Class UMovieGraphConditionGroup ************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_709_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveQueryToIndex); \
	DECLARE_FUNCTION(execIsFirstConditionGroup); \
	DECLARE_FUNCTION(execDuplicateQuery); \
	DECLARE_FUNCTION(execRemoveQuery); \
	DECLARE_FUNCTION(execGetQueries); \
	DECLARE_FUNCTION(execAddQuery); \
	DECLARE_FUNCTION(execEvaluateActorsAndComponents); \
	DECLARE_FUNCTION(execEvaluate); \
	DECLARE_FUNCTION(execGetOperationType); \
	DECLARE_FUNCTION(execSetOperationType);


struct Z_Construct_UClass_UMovieGraphConditionGroup_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConditionGroup_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_709_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConditionGroup(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConditionGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConditionGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConditionGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConditionGroup_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConditionGroup)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_709_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConditionGroup(UMovieGraphConditionGroup&&) = delete; \
	UMovieGraphConditionGroup(const UMovieGraphConditionGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConditionGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConditionGroup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConditionGroup) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConditionGroup();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_706_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_709_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_709_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_709_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_709_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConditionGroup;

// ********** End Class UMovieGraphConditionGroup **************************************************

// ********** Begin Class UMovieGraphCollection ****************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_797_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveConditionGroupToIndex); \
	DECLARE_FUNCTION(execRemoveConditionGroup); \
	DECLARE_FUNCTION(execGetConditionGroups); \
	DECLARE_FUNCTION(execAddConditionGroup); \
	DECLARE_FUNCTION(execEvaluateActorsAndComponents); \
	DECLARE_FUNCTION(execEvaluate); \
	DECLARE_FUNCTION(execGetCollectionName); \
	DECLARE_FUNCTION(execSetCollectionName);


struct Z_Construct_UClass_UMovieGraphCollection_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphCollection_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_797_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphCollection(); \
	friend struct ::Z_Construct_UClass_UMovieGraphCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphCollection_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphCollection)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_797_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphCollection(UMovieGraphCollection&&) = delete; \
	UMovieGraphCollection(const UMovieGraphCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphCollection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphCollection) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphCollection();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_794_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_797_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_797_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_797_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_797_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphCollection;

// ********** End Class UMovieGraphCollection ******************************************************

// ********** Begin Class UMovieGraphModifierBase **************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_881_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModifierName); \
	DECLARE_FUNCTION(execUndoModifier); \
	DECLARE_FUNCTION(execApplyModifier);


struct Z_Construct_UClass_UMovieGraphModifierBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphModifierBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_881_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphModifierBase(); \
	friend struct ::Z_Construct_UClass_UMovieGraphModifierBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphModifierBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphModifierBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphModifierBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphModifierBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_881_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphModifierBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphModifierBase(UMovieGraphModifierBase&&) = delete; \
	UMovieGraphModifierBase(const UMovieGraphModifierBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphModifierBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphModifierBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphModifierBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphModifierBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_878_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_881_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_881_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_881_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_881_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphModifierBase;

// ********** End Class UMovieGraphModifierBase ****************************************************

// ********** Begin Class UMovieGraphCollectionModifier ********************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_903_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCollections); \
	DECLARE_FUNCTION(execSetCollections); \
	DECLARE_FUNCTION(execAddCollection);


struct Z_Construct_UClass_UMovieGraphCollectionModifier_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_903_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphCollectionModifier(); \
	friend struct ::Z_Construct_UClass_UMovieGraphCollectionModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphCollectionModifier, UMovieGraphModifierBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphCollectionModifier_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphCollectionModifier)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_903_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphCollectionModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphCollectionModifier(UMovieGraphCollectionModifier&&) = delete; \
	UMovieGraphCollectionModifier(const UMovieGraphCollectionModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphCollectionModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphCollectionModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphCollectionModifier) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphCollectionModifier();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_900_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_903_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_903_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_903_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_903_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphCollectionModifier;

// ********** End Class UMovieGraphCollectionModifier **********************************************

// ********** Begin Class UMovieGraphMaterialModifier **********************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_934_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMaterial);


struct Z_Construct_UClass_UMovieGraphMaterialModifier_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphMaterialModifier_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_934_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphMaterialModifier(); \
	friend struct ::Z_Construct_UClass_UMovieGraphMaterialModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphMaterialModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphMaterialModifier, UMovieGraphCollectionModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphMaterialModifier_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphMaterialModifier)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_934_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphMaterialModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphMaterialModifier(UMovieGraphMaterialModifier&&) = delete; \
	UMovieGraphMaterialModifier(const UMovieGraphMaterialModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphMaterialModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphMaterialModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphMaterialModifier) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphMaterialModifier();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_931_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_934_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_934_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_934_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_934_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphMaterialModifier;

// ********** End Class UMovieGraphMaterialModifier ************************************************

// ********** Begin Class UMovieGraphRenderPropertyModifier ****************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_967_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsHidden); \
	DECLARE_FUNCTION(execSetHidden);


struct Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderPropertyModifier_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_967_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphRenderPropertyModifier(); \
	friend struct ::Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphRenderPropertyModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphRenderPropertyModifier, UMovieGraphCollectionModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphRenderPropertyModifier_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphRenderPropertyModifier)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_967_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphRenderPropertyModifier(UMovieGraphRenderPropertyModifier&&) = delete; \
	UMovieGraphRenderPropertyModifier(const UMovieGraphRenderPropertyModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphRenderPropertyModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphRenderPropertyModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphRenderPropertyModifier) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphRenderPropertyModifier();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_964_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_967_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_967_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_967_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_967_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphRenderPropertyModifier;

// ********** End Class UMovieGraphRenderPropertyModifier ******************************************

// ********** Begin Class UMovieGraphRenderLayer ***************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1091_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRevert); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execRemoveLayerModifier); \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execGetLayerModifiers); \
	DECLARE_FUNCTION(execGetModifiers); \
	DECLARE_FUNCTION(execAddLayerModifier); \
	DECLARE_FUNCTION(execAddModifier); \
	DECLARE_FUNCTION(execGetCollectionByName); \
	DECLARE_FUNCTION(execSetRenderLayerName); \
	DECLARE_FUNCTION(execGetRenderLayerName);


struct Z_Construct_UClass_UMovieGraphRenderLayer_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderLayer_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1091_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphRenderLayer(); \
	friend struct ::Z_Construct_UClass_UMovieGraphRenderLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphRenderLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphRenderLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphRenderLayer_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphRenderLayer)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1091_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphRenderLayer(UMovieGraphRenderLayer&&) = delete; \
	UMovieGraphRenderLayer(const UMovieGraphRenderLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphRenderLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphRenderLayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphRenderLayer) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphRenderLayer();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1088_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1091_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1091_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1091_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1091_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphRenderLayer;

// ********** End Class UMovieGraphRenderLayer *****************************************************

// ********** Begin Class UMovieGraphRenderLayerSubsystem ******************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1150_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearActiveRenderLayer); \
	DECLARE_FUNCTION(execSetActiveRenderLayerByObj); \
	DECLARE_FUNCTION(execSetActiveRenderLayerByName); \
	DECLARE_FUNCTION(execGetActiveRenderLayer); \
	DECLARE_FUNCTION(execRemoveRenderLayer); \
	DECLARE_FUNCTION(execGetRenderLayers); \
	DECLARE_FUNCTION(execAddRenderLayer); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGetFromWorld);


struct Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphRenderLayerSubsystem(); \
	friend struct ::Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphRenderLayerSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphRenderLayerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphRenderLayerSubsystem)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1150_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphRenderLayerSubsystem(UMovieGraphRenderLayerSubsystem&&) = delete; \
	UMovieGraphRenderLayerSubsystem(const UMovieGraphRenderLayerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphRenderLayerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphRenderLayerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphRenderLayerSubsystem) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphRenderLayerSubsystem();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1147_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1150_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h_1150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphRenderLayerSubsystem;

// ********** End Class UMovieGraphRenderLayerSubsystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphRenderLayerSubsystem_h

// ********** Begin Enum EMovieGraphConditionGroupOpType *******************************************
#define FOREACH_ENUM_EMOVIEGRAPHCONDITIONGROUPOPTYPE(op) \
	op(EMovieGraphConditionGroupOpType::Add) \
	op(EMovieGraphConditionGroupOpType::Subtract) \
	op(EMovieGraphConditionGroupOpType::And) 

enum class EMovieGraphConditionGroupOpType : uint8;
template<> struct TIsUEnumClass<EMovieGraphConditionGroupOpType> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphConditionGroupOpType>();
// ********** End Enum EMovieGraphConditionGroupOpType *********************************************

// ********** Begin Enum EMovieGraphConditionGroupQueryOpType **************************************
#define FOREACH_ENUM_EMOVIEGRAPHCONDITIONGROUPQUERYOPTYPE(op) \
	op(EMovieGraphConditionGroupQueryOpType::Add) \
	op(EMovieGraphConditionGroupQueryOpType::Subtract) \
	op(EMovieGraphConditionGroupQueryOpType::And) 

enum class EMovieGraphConditionGroupQueryOpType : uint8;
template<> struct TIsUEnumClass<EMovieGraphConditionGroupQueryOpType> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieGraphConditionGroupQueryOpType>();
// ********** End Enum EMovieGraphConditionGroupQueryOpType ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
