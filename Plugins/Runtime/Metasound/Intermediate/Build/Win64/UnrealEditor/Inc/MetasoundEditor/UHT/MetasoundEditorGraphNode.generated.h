// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundEditorGraphNode.h"

#ifdef METASOUNDEDITOR_MetasoundEditorGraphNode_generated_h
#error "MetasoundEditorGraphNode.generated.h already included, missing '#pragma once' in MetasoundEditorGraphNode.h"
#endif
#define METASOUNDEDITOR_MetasoundEditorGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetasoundEditorGraphNodeBreadcrumb *******************************
struct Z_Construct_UScriptStruct_FMetasoundEditorGraphNodeBreadcrumb_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetasoundEditorGraphNodeBreadcrumb_Statics; \
	METASOUNDEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetasoundEditorGraphNodeBreadcrumb;
// ********** End ScriptStruct FMetasoundEditorGraphNodeBreadcrumb *********************************

// ********** Begin ScriptStruct FMetasoundEditorGraphMemberNodeBreadcrumb *************************
struct Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberNodeBreadcrumb_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetasoundEditorGraphMemberNodeBreadcrumb_Statics; \
	METASOUNDEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundEditorGraphNodeBreadcrumb Super;


struct FMetasoundEditorGraphMemberNodeBreadcrumb;
// ********** End ScriptStruct FMetasoundEditorGraphMemberNodeBreadcrumb ***************************

// ********** Begin ScriptStruct FMetasoundEditorGraphVertexNodeBreadcrumb *************************
struct Z_Construct_UScriptStruct_FMetasoundEditorGraphVertexNodeBreadcrumb_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetasoundEditorGraphVertexNodeBreadcrumb_Statics; \
	METASOUNDEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundEditorGraphMemberNodeBreadcrumb Super;


struct FMetasoundEditorGraphVertexNodeBreadcrumb;
// ********** End ScriptStruct FMetasoundEditorGraphVertexNodeBreadcrumb ***************************

// ********** Begin Class UMetasoundEditorGraphNode ************************************************
struct Z_Construct_UClass_UMetasoundEditorGraphNode_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphNode_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphNode(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphNode)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphNode(UMetasoundEditorGraphNode&&) = delete; \
	UMetasoundEditorGraphNode(const UMetasoundEditorGraphNode&) = delete; \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphNode();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_97_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_100_INCLASS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphNode;

// ********** End Class UMetasoundEditorGraphNode **************************************************

// ********** Begin Class UMetasoundEditorGraphMemberNode ******************************************
struct Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberNode_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_256_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphMemberNode(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphMemberNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphMemberNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphMemberNode, UMetasoundEditorGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphMemberNode_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphMemberNode)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_256_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphMemberNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphMemberNode(UMetasoundEditorGraphMemberNode&&) = delete; \
	UMetasoundEditorGraphMemberNode(const UMetasoundEditorGraphMemberNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphMemberNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphMemberNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphMemberNode) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphMemberNode();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_253_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_256_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_256_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_256_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphMemberNode;

// ********** End Class UMetasoundEditorGraphMemberNode ********************************************

// ********** Begin Class UMetasoundEditorGraphOutputNode ******************************************
struct Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphOutputNode_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_281_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphOutputNode(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphOutputNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphOutputNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphOutputNode, UMetasoundEditorGraphMemberNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphOutputNode_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphOutputNode)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_281_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphOutputNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphOutputNode(UMetasoundEditorGraphOutputNode&&) = delete; \
	UMetasoundEditorGraphOutputNode(const UMetasoundEditorGraphOutputNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphOutputNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphOutputNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphOutputNode) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphOutputNode();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_278_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_281_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_281_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_281_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphOutputNode;

// ********** End Class UMetasoundEditorGraphOutputNode ********************************************

// ********** Begin Class UMetasoundEditorGraphExternalNode ****************************************
struct Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphExternalNode_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_327_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphExternalNode(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphExternalNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphExternalNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphExternalNode, UMetasoundEditorGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphExternalNode_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphExternalNode)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_327_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphExternalNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphExternalNode(UMetasoundEditorGraphExternalNode&&) = delete; \
	UMetasoundEditorGraphExternalNode(const UMetasoundEditorGraphExternalNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphExternalNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphExternalNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphExternalNode) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphExternalNode();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_324_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_327_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_327_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_327_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphExternalNode;

// ********** End Class UMetasoundEditorGraphExternalNode ******************************************

// ********** Begin Class UMetasoundEditorGraphVariableNode ****************************************
struct Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphVariableNode_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_373_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphVariableNode(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphVariableNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphVariableNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphVariableNode, UMetasoundEditorGraphMemberNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphVariableNode_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphVariableNode)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_373_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphVariableNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphVariableNode(UMetasoundEditorGraphVariableNode&&) = delete; \
	UMetasoundEditorGraphVariableNode(const UMetasoundEditorGraphVariableNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphVariableNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphVariableNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphVariableNode) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphVariableNode();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_370_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_373_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_373_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h_373_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphVariableNode;

// ********** End Class UMetasoundEditorGraphVariableNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
