// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundEditorSubsystem.h"

#ifdef METASOUNDEDITOR_MetasoundEditorSubsystem_generated_h
#error "MetasoundEditorSubsystem.generated.h already included, missing '#pragma once' in MetasoundEditorSubsystem.h"
#endif
#define METASOUNDEDITOR_MetasoundEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
class UMetaSoundBuilderBase;
class UMetaSoundEditorBuilderListener;
class UMetaSoundFrontendMemberMetadata;
class USoundWave;
enum class EMetaSoundBuilderResult : uint8;
struct FMetaSoundNodeHandle;

// ********** Begin Class UMetaSoundEditorSubsystem ************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFocusedPage); \
	DECLARE_FUNCTION(execAddBuilderDelegateListener); \
	DECLARE_FUNCTION(execSetNodeLocation); \
	DECLARE_FUNCTION(execFindOrCreateGraphInputMetadata); \
	DECLARE_FUNCTION(execFindOrBeginBuilding); \
	DECLARE_FUNCTION(execBuildToAsset);


struct Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UMetaSoundEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetaSoundEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetaSoundEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundEditorSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetaSoundEditorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundEditorSubsystem(UMetaSoundEditorSubsystem&&) = delete; \
	UMetaSoundEditorSubsystem(const UMetaSoundEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetaSoundEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundEditorSubsystem) \
	METASOUNDEDITOR_API virtual ~UMetaSoundEditorSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundEditorSubsystem;

// ********** End Class UMetaSoundEditorSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
