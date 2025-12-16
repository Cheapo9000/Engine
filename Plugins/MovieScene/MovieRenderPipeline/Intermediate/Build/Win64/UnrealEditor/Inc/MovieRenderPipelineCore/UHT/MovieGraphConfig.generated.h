// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphConfig.h"

#ifdef MOVIERENDERPIPELINECORE_MovieGraphConfig_generated_h
#error "MovieGraphConfig.generated.h already included, missing '#pragma once' in MovieGraphConfig.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieGraphConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMovieGraphConfig;
class UMovieGraphEvaluatedConfig;
class UMovieGraphInput;
class UMovieGraphMember;
class UMovieGraphNode;
class UMovieGraphOutput;
class UMovieGraphPin;
class UMovieGraphPipeline;
class UMovieGraphSettingNode;
class UMovieGraphValueContainer;
class UMovieGraphVariable;
class UObject;
struct FGuid;
struct FMovieGraphTraversalContext;

// ********** Begin Class UMovieGraphMember ********************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEditable); \
	DECLARE_FUNCTION(execIsDeletable); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execCanRename); \
	DECLARE_FUNCTION(execSetMemberName); \
	DECLARE_FUNCTION(execGetMemberName);


struct Z_Construct_UClass_UMovieGraphMember_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphMember_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphMember(); \
	friend struct ::Z_Construct_UClass_UMovieGraphMember_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphMember_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphMember, UMovieGraphValueContainer, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphMember_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphMember)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphMember(UMovieGraphMember&&) = delete; \
	UMovieGraphMember(const UMovieGraphMember&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphMember); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphMember) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphMember();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_26_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphMember;

// ********** End Class UMovieGraphMember **********************************************************

// ********** Begin Class UMovieGraphVariable ******************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCategory); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execIsGlobal);


struct Z_Construct_UClass_UMovieGraphVariable_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphVariable_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphVariable(); \
	friend struct ::Z_Construct_UClass_UMovieGraphVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphVariable, UMovieGraphMember, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphVariable_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphVariable)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_119_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphVariable(UMovieGraphVariable&&) = delete; \
	UMovieGraphVariable(const UMovieGraphVariable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphVariable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphVariable) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphVariable();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_113_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphVariable;

// ********** End Class UMovieGraphVariable ********************************************************

// ********** Begin Class UMovieGraphGlobalVariable ************************************************
struct Z_Construct_UClass_UMovieGraphGlobalVariable_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphGlobalVariable_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_166_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphGlobalVariable(); \
	friend struct ::Z_Construct_UClass_UMovieGraphGlobalVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphGlobalVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphGlobalVariable, UMovieGraphVariable, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphGlobalVariable_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphGlobalVariable)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_166_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphGlobalVariable(UMovieGraphGlobalVariable&&) = delete; \
	UMovieGraphGlobalVariable(const UMovieGraphGlobalVariable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphGlobalVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphGlobalVariable); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphGlobalVariable) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphGlobalVariable();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_163_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_166_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_166_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_166_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphGlobalVariable;

// ********** End Class UMovieGraphGlobalVariable **************************************************

// ********** Begin Class UMovieGraphGlobalVariable_ShotName ***************************************
struct Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphGlobalVariable_ShotName(); \
	friend struct ::Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphGlobalVariable_ShotName, UMovieGraphGlobalVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphGlobalVariable_ShotName_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphGlobalVariable_ShotName)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_183_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphGlobalVariable_ShotName(UMovieGraphGlobalVariable_ShotName&&) = delete; \
	UMovieGraphGlobalVariable_ShotName(const UMovieGraphGlobalVariable_ShotName&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieGraphGlobalVariable_ShotName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphGlobalVariable_ShotName); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphGlobalVariable_ShotName) \
	NO_API virtual ~UMovieGraphGlobalVariable_ShotName();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_180_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_183_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_183_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphGlobalVariable_ShotName;

// ********** End Class UMovieGraphGlobalVariable_ShotName *****************************************

// ********** Begin Class UMovieGraphGlobalVariable_SequenceName ***********************************
struct Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphGlobalVariable_SequenceName(); \
	friend struct ::Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphGlobalVariable_SequenceName, UMovieGraphGlobalVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphGlobalVariable_SequenceName_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphGlobalVariable_SequenceName)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_193_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphGlobalVariable_SequenceName(UMovieGraphGlobalVariable_SequenceName&&) = delete; \
	UMovieGraphGlobalVariable_SequenceName(const UMovieGraphGlobalVariable_SequenceName&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieGraphGlobalVariable_SequenceName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphGlobalVariable_SequenceName); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphGlobalVariable_SequenceName) \
	NO_API virtual ~UMovieGraphGlobalVariable_SequenceName();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_190_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_193_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphGlobalVariable_SequenceName;

// ********** End Class UMovieGraphGlobalVariable_SequenceName *************************************

// ********** Begin Class UMovieGraphGlobalVariable_FrameNumber ************************************
struct Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphGlobalVariable_FrameNumber(); \
	friend struct ::Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphGlobalVariable_FrameNumber, UMovieGraphGlobalVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphGlobalVariable_FrameNumber_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphGlobalVariable_FrameNumber)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_203_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphGlobalVariable_FrameNumber(UMovieGraphGlobalVariable_FrameNumber&&) = delete; \
	UMovieGraphGlobalVariable_FrameNumber(const UMovieGraphGlobalVariable_FrameNumber&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieGraphGlobalVariable_FrameNumber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphGlobalVariable_FrameNumber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphGlobalVariable_FrameNumber) \
	NO_API virtual ~UMovieGraphGlobalVariable_FrameNumber();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_200_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_203_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_203_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphGlobalVariable_FrameNumber;

// ********** End Class UMovieGraphGlobalVariable_FrameNumber **************************************

// ********** Begin Class UMovieGraphGlobalVariable_CameraName *************************************
struct Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_213_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphGlobalVariable_CameraName(); \
	friend struct ::Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphGlobalVariable_CameraName, UMovieGraphGlobalVariable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphGlobalVariable_CameraName_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphGlobalVariable_CameraName)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_213_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphGlobalVariable_CameraName(UMovieGraphGlobalVariable_CameraName&&) = delete; \
	UMovieGraphGlobalVariable_CameraName(const UMovieGraphGlobalVariable_CameraName&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieGraphGlobalVariable_CameraName); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphGlobalVariable_CameraName); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphGlobalVariable_CameraName) \
	NO_API virtual ~UMovieGraphGlobalVariable_CameraName();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_210_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_213_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphGlobalVariable_CameraName;

// ********** End Class UMovieGraphGlobalVariable_CameraName ***************************************

// ********** Begin Class UMovieGraphInterfaceBase *************************************************
struct Z_Construct_UClass_UMovieGraphInterfaceBase_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphInterfaceBase_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphInterfaceBase(); \
	friend struct ::Z_Construct_UClass_UMovieGraphInterfaceBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphInterfaceBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphInterfaceBase, UMovieGraphMember, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphInterfaceBase_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphInterfaceBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_226_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphInterfaceBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphInterfaceBase(UMovieGraphInterfaceBase&&) = delete; \
	UMovieGraphInterfaceBase(const UMovieGraphInterfaceBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphInterfaceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphInterfaceBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphInterfaceBase) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphInterfaceBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_223_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_226_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphInterfaceBase;

// ********** End Class UMovieGraphInterfaceBase ***************************************************

// ********** Begin Class UMovieGraphInput *********************************************************
struct Z_Construct_UClass_UMovieGraphInput_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphInput_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphInput(); \
	friend struct ::Z_Construct_UClass_UMovieGraphInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphInput, UMovieGraphInterfaceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphInput_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphInput)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_240_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphInput(UMovieGraphInput&&) = delete; \
	UMovieGraphInput(const UMovieGraphInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphInput) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphInput();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_237_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_240_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphInput;

// ********** End Class UMovieGraphInput ***********************************************************

// ********** Begin Class UMovieGraphOutput ********************************************************
struct Z_Construct_UClass_UMovieGraphOutput_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphOutput_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_267_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphOutput(); \
	friend struct ::Z_Construct_UClass_UMovieGraphOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphOutput, UMovieGraphInterfaceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphOutput_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphOutput)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_267_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphOutput(UMovieGraphOutput&&) = delete; \
	UMovieGraphOutput(const UMovieGraphOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphOutput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphOutput) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphOutput();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_264_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_267_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_267_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_267_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphOutput;

// ********** End Class UMovieGraphOutput **********************************************************

// ********** Begin ScriptStruct FMovieGraphEvaluatedSettingsStack *********************************
struct Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_299_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphEvaluatedSettingsStack_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphEvaluatedSettingsStack;
// ********** End ScriptStruct FMovieGraphEvaluatedSettingsStack ***********************************

// ********** Begin ScriptStruct FMovieGraphEvaluatedBranchConfig **********************************
struct Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_313_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphEvaluatedBranchConfig;
// ********** End ScriptStruct FMovieGraphEvaluatedBranchConfig ************************************

// ********** Begin ScriptStruct FMovieGraphEvaluationContext_VisitedNodeInfo **********************
struct Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_386_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphEvaluationContext_VisitedNodeInfo;
// ********** End ScriptStruct FMovieGraphEvaluationContext_VisitedNodeInfo ************************

// ********** Begin ScriptStruct FMovieGraphEvaluationContext **************************************
struct Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics;
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_401_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


struct FMovieGraphEvaluationContext;
// ********** End ScriptStruct FMovieGraphEvaluationContext ****************************************

// ********** Begin Class UMovieGraphEvaluatedConfig ***********************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_458_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEvaluatedGraphs); \
	DECLARE_FUNCTION(execGetVariableStringValueByName); \
	DECLARE_FUNCTION(execGetVariableValueByName); \
	DECLARE_FUNCTION(execGetSettingsForBranch); \
	DECLARE_FUNCTION(execGetSettingForBranch); \
	DECLARE_FUNCTION(execGetBranchNames);


struct Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_458_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphEvaluatedConfig(); \
	friend struct ::Z_Construct_UClass_UMovieGraphEvaluatedConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphEvaluatedConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphEvaluatedConfig_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphEvaluatedConfig)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_458_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphEvaluatedConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphEvaluatedConfig(UMovieGraphEvaluatedConfig&&) = delete; \
	UMovieGraphEvaluatedConfig(const UMovieGraphEvaluatedConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphEvaluatedConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphEvaluatedConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphEvaluatedConfig) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphEvaluatedConfig();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_455_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_458_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_458_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_458_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_458_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphEvaluatedConfig;

// ********** End Class UMovieGraphEvaluatedConfig *************************************************

// ********** Begin Interface UMovieGraphTraversableObject *****************************************
struct Z_Construct_UClass_UMovieGraphTraversableObject_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphTraversableObject_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_611_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIERENDERPIPELINECORE_API UMovieGraphTraversableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphTraversableObject(UMovieGraphTraversableObject&&) = delete; \
	UMovieGraphTraversableObject(const UMovieGraphTraversableObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphTraversableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphTraversableObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphTraversableObject) \
	virtual ~UMovieGraphTraversableObject() = default;


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_611_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieGraphTraversableObject(); \
	friend struct ::Z_Construct_UClass_UMovieGraphTraversableObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphTraversableObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphTraversableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphTraversableObject_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphTraversableObject)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_611_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_611_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_611_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_611_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieGraphTraversableObject() {} \
public: \
	typedef UMovieGraphTraversableObject UClassType; \
	typedef IMovieGraphTraversableObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_608_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_620_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_611_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphTraversableObject;

// ********** End Interface UMovieGraphTraversableObject *******************************************

// ********** Begin Class UMovieGraphConfig ********************************************************
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_643_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateNodeByClass); \
	DECLARE_FUNCTION(execMoveCategoryBefore); \
	DECLARE_FUNCTION(execMoveVariableToIndex); \
	DECLARE_FUNCTION(execMoveVariableBefore); \
	DECLARE_FUNCTION(execGetOutputDirectory); \
	DECLARE_FUNCTION(execGetAllContainedSubgraphs); \
	DECLARE_FUNCTION(execGetUpstreamBranchNames); \
	DECLARE_FUNCTION(execGetDownstreamBranchNames); \
	DECLARE_FUNCTION(execCreateFlattenedGraph); \
	DECLARE_FUNCTION(execDuplicateVariable); \
	DECLARE_FUNCTION(execDeleteMember); \
	DECLARE_FUNCTION(execGetOutputs); \
	DECLARE_FUNCTION(execGetInputs); \
	DECLARE_FUNCTION(execUpdateGlobalVariableValues); \
	DECLARE_FUNCTION(execGetVariables); \
	DECLARE_FUNCTION(execGetVariableByName); \
	DECLARE_FUNCTION(execGetVariableByGuid); \
	DECLARE_FUNCTION(execAddOutput); \
	DECLARE_FUNCTION(execAddInput); \
	DECLARE_FUNCTION(execAddVariable); \
	DECLARE_FUNCTION(execGetNodesForTag); \
	DECLARE_FUNCTION(execGetNodeForTag); \
	DECLARE_FUNCTION(execGetNodesForBranch); \
	DECLARE_FUNCTION(execGetNodeForBranch); \
	DECLARE_FUNCTION(execGetBranchNames); \
	DECLARE_FUNCTION(execGetOutputNode); \
	DECLARE_FUNCTION(execGetInputNode); \
	DECLARE_FUNCTION(execRemoveNodes); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execRemoveOutboundEdges); \
	DECLARE_FUNCTION(execRemoveInboundEdges); \
	DECLARE_FUNCTION(execRemoveAllOutboundEdges); \
	DECLARE_FUNCTION(execRemoveAllInboundEdges); \
	DECLARE_FUNCTION(execRemoveLabeledEdge); \
	DECLARE_FUNCTION(execAddLabeledEdge);


struct Z_Construct_UClass_UMovieGraphConfig_Statics;
MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphConfig_NoRegister();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_643_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphConfig(); \
	friend struct ::Z_Construct_UClass_UMovieGraphConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIERENDERPIPELINECORE_API UClass* ::Z_Construct_UClass_UMovieGraphConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieGraphConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), Z_Construct_UClass_UMovieGraphConfig_NoRegister) \
	DECLARE_SERIALIZER(UMovieGraphConfig)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_643_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieGraphConfig(UMovieGraphConfig&&) = delete; \
	UMovieGraphConfig(const UMovieGraphConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIERENDERPIPELINECORE_API, UMovieGraphConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieGraphConfig) \
	MOVIERENDERPIPELINECORE_API virtual ~UMovieGraphConfig();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_640_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_643_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_643_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_643_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h_643_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieGraphConfig;

// ********** End Class UMovieGraphConfig **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
