// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundEditorGraph.h"

#ifdef METASOUNDEDITOR_MetasoundEditorGraph_generated_h
#error "MetasoundEditorGraph.generated.h already included, missing '#pragma once' in MetasoundEditorGraph.h"
#endif
#define METASOUNDEDITOR_MetasoundEditorGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetasoundEditorGraphMemberBreadcrumb *****************************
struct Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberBreadcrumb_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberBreadcrumb_Statics; \
	METASOUNDEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetasoundEditorGraphMemberBreadcrumb;
// ********** End ScriptStruct FMetasoundEditorGraphMemberBreadcrumb *******************************

// ********** Begin ScriptStruct FMetasoundEditorGraphVertexBreadcrumb *****************************
struct Z_Construct_UScriptStruct_FMetasoundEditorGraphVertexBreadcrumb_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetasoundEditorGraphVertexBreadcrumb_Statics; \
	METASOUNDEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundEditorGraphMemberBreadcrumb Super;


struct FMetasoundEditorGraphVertexBreadcrumb;
// ********** End ScriptStruct FMetasoundEditorGraphVertexBreadcrumb *******************************

// ********** Begin ScriptStruct FMetasoundEditorGraphVariableBreadcrumb ***************************
struct Z_Construct_UScriptStruct_FMetasoundEditorGraphVariableBreadcrumb_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_81_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetasoundEditorGraphVariableBreadcrumb_Statics; \
	METASOUNDEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundEditorGraphMemberBreadcrumb Super;


struct FMetasoundEditorGraphVariableBreadcrumb;
// ********** End ScriptStruct FMetasoundEditorGraphVariableBreadcrumb *****************************

// ********** Begin Class UMetasoundEditorGraphMemberDefaultLiteral ********************************
struct Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphMemberDefaultLiteral(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphMemberDefaultLiteral, UMetaSoundFrontendMemberMetadata, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphMemberDefaultLiteral_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphMemberDefaultLiteral)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphMemberDefaultLiteral(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphMemberDefaultLiteral(UMetasoundEditorGraphMemberDefaultLiteral&&) = delete; \
	UMetasoundEditorGraphMemberDefaultLiteral(const UMetasoundEditorGraphMemberDefaultLiteral&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphMemberDefaultLiteral); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphMemberDefaultLiteral); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphMemberDefaultLiteral) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphMemberDefaultLiteral();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_90_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphMemberDefaultLiteral;

// ********** End Class UMetasoundEditorGraphMemberDefaultLiteral **********************************

// ********** Begin Class UMetasoundEditorGraphMember **********************************************
struct Z_Construct_UClass_UMetasoundEditorGraphMember_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMember_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphMember(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphMember_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphMember_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphMember, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphMember_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphMember)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphMember(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphMember(UMetasoundEditorGraphMember&&) = delete; \
	UMetasoundEditorGraphMember(const UMetasoundEditorGraphMember&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphMember); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphMember); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphMember) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphMember();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_153_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_156_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphMember;

// ********** End Class UMetasoundEditorGraphMember ************************************************

// ********** Begin Class UMetasoundEditorGraphVertex **********************************************
struct Z_Construct_UClass_UMetasoundEditorGraphVertex_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphVertex_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_265_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphVertex(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphVertex_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphVertex_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphVertex, UMetasoundEditorGraphMember, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphVertex_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphVertex)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_265_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphVertex(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphVertex(UMetasoundEditorGraphVertex&&) = delete; \
	UMetasoundEditorGraphVertex(const UMetasoundEditorGraphVertex&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphVertex); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphVertex); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphVertex) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphVertex();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_262_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_265_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_265_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_265_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphVertex;

// ********** End Class UMetasoundEditorGraphVertex ************************************************

// ********** Begin Class UMetasoundEditorGraphInput ***********************************************
struct Z_Construct_UClass_UMetasoundEditorGraphInput_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphInput_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_354_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphInput(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphInput, UMetasoundEditorGraphVertex, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphInput_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphInput)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_354_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphInput(UMetasoundEditorGraphInput&&) = delete; \
	UMetasoundEditorGraphInput(const UMetasoundEditorGraphInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphInput) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphInput();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_351_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_354_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_354_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_354_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphInput;

// ********** End Class UMetasoundEditorGraphInput *************************************************

// ********** Begin Class UMetasoundEditorGraphOutput **********************************************
struct Z_Construct_UClass_UMetasoundEditorGraphOutput_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphOutput_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_388_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphOutput(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphOutput, UMetasoundEditorGraphVertex, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphOutput_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphOutput)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_388_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphOutput(UMetasoundEditorGraphOutput&&) = delete; \
	UMetasoundEditorGraphOutput(const UMetasoundEditorGraphOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphOutput) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphOutput();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_385_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_388_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_388_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_388_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphOutput;

// ********** End Class UMetasoundEditorGraphOutput ************************************************

// ********** Begin Class UMetasoundEditorGraphVariable ********************************************
struct Z_Construct_UClass_UMetasoundEditorGraphVariable_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphVariable_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_416_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphVariable(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphVariable, UMetasoundEditorGraphMember, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphVariable_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphVariable)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_416_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphVariable(UMetasoundEditorGraphVariable&&) = delete; \
	UMetasoundEditorGraphVariable(const UMetasoundEditorGraphVariable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphVariable) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphVariable();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_413_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_416_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_416_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_416_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphVariable;

// ********** End Class UMetasoundEditorGraphVariable **********************************************

// ********** Begin Class UMetasoundEditorGraph ****************************************************
struct Z_Construct_UClass_UMetasoundEditorGraph_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraph_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_491_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraph(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraph, UMetasoundEditorGraphBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraph_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraph)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_491_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraph(UMetasoundEditorGraph&&) = delete; \
	UMetasoundEditorGraph(const UMetasoundEditorGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraph) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraph();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_488_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_491_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_491_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h_491_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraph;

// ********** End Class UMetasoundEditorGraph ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
