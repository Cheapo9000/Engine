// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundEditorBuilderListener.h"

#ifdef METASOUNDEDITOR_MetasoundEditorBuilderListener_generated_h
#error "MetasoundEditorBuilderListener.generated.h already included, missing '#pragma once' in MetasoundEditorBuilderListener.h"
#endif
#define METASOUNDEDITOR_MetasoundEditorBuilderListener_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMetasoundFrontendLiteral;

// ********** Begin Delegate FOnMetaSoundBuilderDocumentMetadataTextChanged ************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_15_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderDocumentMetadataTextChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderDocumentMetadataTextChanged, const FText& NewText);


// ********** End Delegate FOnMetaSoundBuilderDocumentMetadataTextChanged **************************

// ********** Begin Delegate FOnMetaSoundBuilderDocumentMetadataTextArrayChanged *******************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_16_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderDocumentMetadataTextArrayChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderDocumentMetadataTextArrayChanged, const TArray<FText>& NewTextArray);


// ********** End Delegate FOnMetaSoundBuilderDocumentMetadataTextArrayChanged *********************

// ********** Begin Delegate FOnMetaSoundBuilderDocumentMetadataStringChanged **********************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_17_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderDocumentMetadataStringChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderDocumentMetadataStringChanged, const FString& NewString);


// ********** End Delegate FOnMetaSoundBuilderDocumentMetadataStringChanged ************************

// ********** Begin Delegate FOnMetaSoundBuilderDocumentMetadataBoolChanged ************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_18_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderDocumentMetadataBoolChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderDocumentMetadataBoolChanged, bool NewBool);


// ********** End Delegate FOnMetaSoundBuilderDocumentMetadataBoolChanged **************************

// ********** Begin Delegate FOnMetaSoundBuilderGraphInterfaceMutate *******************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_19_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderGraphInterfaceMutate_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderGraphInterfaceMutate, FName VertexName, FName DataType);


// ********** End Delegate FOnMetaSoundBuilderGraphInterfaceMutate *********************************

// ********** Begin Delegate FOnMetaSoundBuilderGraphLiteralMutate *********************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_20_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderGraphLiteralMutate_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderGraphLiteralMutate, FName VertexName, FMetasoundFrontendLiteral LiteralValue, FName PageName);


// ********** End Delegate FOnMetaSoundBuilderGraphLiteralMutate ***********************************

// ********** Begin Delegate FOnMetaSoundBuilderGraphVertexRename **********************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_21_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderGraphVertexRename_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderGraphVertexRename, FName OldName, FName NewName);


// ********** End Delegate FOnMetaSoundBuilderGraphVertexRename ************************************

// ********** Begin Delegate FOnMetaSoundBuilderGraphVertexBoolChanged *****************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_22_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderGraphVertexBoolChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderGraphVertexBoolChanged, FName VertexName, bool bNewBool);


// ********** End Delegate FOnMetaSoundBuilderGraphVertexBoolChanged *******************************

// ********** Begin Delegate FOnMetaSoundBuilderGraphVertexIntChanged ******************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_23_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderGraphVertexIntChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderGraphVertexIntChanged, FName VertexName, int32 NewInt);


// ********** End Delegate FOnMetaSoundBuilderGraphVertexIntChanged ********************************

// ********** Begin Delegate FOnMetaSoundBuilderGraphVertexTextChanged *****************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_24_DELEGATE \
METASOUNDEDITOR_API void FOnMetaSoundBuilderGraphVertexTextChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMetaSoundBuilderGraphVertexTextChanged, FName VertexName, const FText& NewText);


// ********** End Delegate FOnMetaSoundBuilderGraphVertexTextChanged *******************************

// ********** Begin Class UMetaSoundEditorBuilderListener ******************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveAllDelegates);


struct Z_Construct_UClass_UMetaSoundEditorBuilderListener_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundEditorBuilderListener_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundEditorBuilderListener(); \
	friend struct ::Z_Construct_UClass_UMetaSoundEditorBuilderListener_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetaSoundEditorBuilderListener_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundEditorBuilderListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetaSoundEditorBuilderListener_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundEditorBuilderListener)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetaSoundEditorBuilderListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundEditorBuilderListener(UMetaSoundEditorBuilderListener&&) = delete; \
	UMetaSoundEditorBuilderListener(const UMetaSoundEditorBuilderListener&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetaSoundEditorBuilderListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundEditorBuilderListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundEditorBuilderListener)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h_30_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundEditorBuilderListener;

// ********** End Class UMetaSoundEditorBuilderListener ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorBuilderListener_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
