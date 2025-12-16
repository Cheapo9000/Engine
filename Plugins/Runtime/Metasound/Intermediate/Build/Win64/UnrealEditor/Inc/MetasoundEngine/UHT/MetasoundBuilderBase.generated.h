// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundBuilderBase.h"

#ifdef METASOUNDENGINE_MetasoundBuilderBase_generated_h
#error "MetasoundBuilderBase.generated.h already included, missing '#pragma once' in MetasoundBuilderBase.h"
#endif
#define METASOUNDENGINE_MetasoundBuilderBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
class UObject;
enum class EMetaSoundBuilderResult : uint8;
enum class EMetasoundFrontendVertexAccessType : int32;
struct FMetaSoundBuilderNodeInputHandle;
struct FMetaSoundBuilderNodeOutputHandle;
struct FMetaSoundBuilderOptions;
struct FMetasoundFrontendClassName;
struct FMetasoundFrontendLiteral;
struct FMetasoundFrontendVersion;
struct FMetaSoundNodeHandle;

// ********** Begin ScriptStruct FMetaSoundBuilderNodeInputHandle **********************************
struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundBuilderNodeInputHandle_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundFrontendVertexHandle Super;


struct FMetaSoundBuilderNodeInputHandle;
// ********** End ScriptStruct FMetaSoundBuilderNodeInputHandle ************************************

// ********** Begin ScriptStruct FMetaSoundBuilderNodeOutputHandle *********************************
struct Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundBuilderNodeOutputHandle_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FMetasoundFrontendVertexHandle Super;


struct FMetaSoundBuilderNodeOutputHandle;
// ********** End ScriptStruct FMetaSoundBuilderNodeOutputHandle ***********************************

// ********** Begin ScriptStruct FMetaSoundNodeHandle **********************************************
struct Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundNodeHandle_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct();


struct FMetaSoundNodeHandle;
// ********** End ScriptStruct FMetaSoundNodeHandle ************************************************

// ********** Begin ScriptStruct FMetaSoundBuilderOptions ******************************************
struct Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics;
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundBuilderOptions_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct();


struct FMetaSoundBuilderOptions;
// ********** End ScriptStruct FMetaSoundBuilderOptions ********************************************

// ********** Begin Class UMetaSoundBuilderBase ****************************************************
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildNewMetaSound); \
	DECLARE_FUNCTION(execBuildAndOverwriteMetaSound); \
	DECLARE_FUNCTION(execBuild); \
	DECLARE_FUNCTION(execSetGraphOutputName); \
	DECLARE_FUNCTION(execSetGraphOutputDataType); \
	DECLARE_FUNCTION(execSetGraphOutputAccessType); \
	DECLARE_FUNCTION(execSetGraphInputName); \
	DECLARE_FUNCTION(execSetGraphInputDefault); \
	DECLARE_FUNCTION(execSetGraphInputDataType); \
	DECLARE_FUNCTION(execSetGraphInputAccessType); \
	DECLARE_FUNCTION(execSetNodeInputDefault); \
	DECLARE_FUNCTION(execRemoveUnusedDependencies); \
	DECLARE_FUNCTION(execRemoveNodeInputDefault); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execRemoveInterface); \
	DECLARE_FUNCTION(execRemoveGraphVariable); \
	DECLARE_FUNCTION(execRemoveGraphOutput); \
	DECLARE_FUNCTION(execRemoveGraphInput); \
	DECLARE_FUNCTION(execConvertToPreset); \
	DECLARE_FUNCTION(execConvertFromPreset); \
	DECLARE_FUNCTION(execIsPreset); \
	DECLARE_FUNCTION(execNodeOutputIsConnected); \
	DECLARE_FUNCTION(execNodeInputIsConnected); \
	DECLARE_FUNCTION(execNodesAreConnected); \
	DECLARE_FUNCTION(execInterfaceIsDeclared); \
	DECLARE_FUNCTION(execGetReferencedPresetAsset); \
	DECLARE_FUNCTION(execGetNodeOutputIsConstructorPin); \
	DECLARE_FUNCTION(execGetNodeOutputData); \
	DECLARE_FUNCTION(execGetNodeInputIsConstructorPin); \
	DECLARE_FUNCTION(execGetNodeInputClassDefault); \
	DECLARE_FUNCTION(execGetNodeInputDefault); \
	DECLARE_FUNCTION(execGetNodeInputData); \
	DECLARE_FUNCTION(execGetRootGraphClassName); \
	DECLARE_FUNCTION(execGetGraphVariableDefault); \
	DECLARE_FUNCTION(execGetGraphInputDefault); \
	DECLARE_FUNCTION(execGetGraphOutputNames); \
	DECLARE_FUNCTION(execGetGraphInputNames); \
	DECLARE_FUNCTION(execFindNodeClassVersion); \
	DECLARE_FUNCTION(execFindNodeOutputParent); \
	DECLARE_FUNCTION(execFindNodeInputParent); \
	DECLARE_FUNCTION(execFindInterfaceOutputNodes); \
	DECLARE_FUNCTION(execFindInterfaceInputNodes); \
	DECLARE_FUNCTION(execFindNodeOutputsByDataType); \
	DECLARE_FUNCTION(execFindNodeOutputs); \
	DECLARE_FUNCTION(execFindNodeOutputByName); \
	DECLARE_FUNCTION(execFindNodeInputsByDataType); \
	DECLARE_FUNCTION(execFindNodeInputs); \
	DECLARE_FUNCTION(execFindNodeInputByName); \
	DECLARE_FUNCTION(execFindGraphOutputNode); \
	DECLARE_FUNCTION(execFindGraphInputNode); \
	DECLARE_FUNCTION(execDisconnectNodesByInterfaceBindings); \
	DECLARE_FUNCTION(execDisconnectNodeOutput); \
	DECLARE_FUNCTION(execDisconnectNodeInput); \
	DECLARE_FUNCTION(execDisconnectNodes); \
	DECLARE_FUNCTION(execContainsNodeOutput); \
	DECLARE_FUNCTION(execContainsNodeInput); \
	DECLARE_FUNCTION(execContainsNode); \
	DECLARE_FUNCTION(execConnectNodeInputToGraphInput); \
	DECLARE_FUNCTION(execConnectNamedNodeOutputToGraphOutput); \
	DECLARE_FUNCTION(execConnectNamedNodeOutputToNamedGraphOutput); \
	DECLARE_FUNCTION(execConnectNodeOutputToGraphOutput); \
	DECLARE_FUNCTION(execConnectNodeInputsToMatchingGraphInterfaceInputs); \
	DECLARE_FUNCTION(execConnectNodeOutputsToMatchingGraphInterfaceOutputs); \
	DECLARE_FUNCTION(execConnectNodesByInterfaceBindings); \
	DECLARE_FUNCTION(execConnectNodes); \
	DECLARE_FUNCTION(execAddNodeByClassName); \
	DECLARE_FUNCTION(execAddNode); \
	DECLARE_FUNCTION(execAddInterface); \
	DECLARE_FUNCTION(execAddGraphVariableSetNode); \
	DECLARE_FUNCTION(execAddGraphVariableGetDelayedNode); \
	DECLARE_FUNCTION(execAddGraphVariableGetNode); \
	DECLARE_FUNCTION(execAddGraphVariable); \
	DECLARE_FUNCTION(execAddGraphOutputNode); \
	DECLARE_FUNCTION(execAddGraphInputNode);


struct Z_Construct_UClass_UMetaSoundBuilderBase_Statics;
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundBuilderBase(); \
	friend struct ::Z_Construct_UClass_UMetaSoundBuilderBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDENGINE_API UClass* ::Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundBuilderBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), Z_Construct_UClass_UMetaSoundBuilderBase_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundBuilderBase)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDENGINE_API UMetaSoundBuilderBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundBuilderBase(UMetaSoundBuilderBase&&) = delete; \
	UMetaSoundBuilderBase(const UMetaSoundBuilderBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDENGINE_API, UMetaSoundBuilderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundBuilderBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundBuilderBase) \
	METASOUNDENGINE_API virtual ~UMetaSoundBuilderBase();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_123_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_126_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundBuilderBase;

// ********** End Class UMetaSoundBuilderBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundBuilderBase_h

// ********** Begin Enum EMetaSoundBuilderResult ***************************************************
#define FOREACH_ENUM_EMETASOUNDBUILDERRESULT(op) \
	op(EMetaSoundBuilderResult::Succeeded) \
	op(EMetaSoundBuilderResult::Failed) 

enum class EMetaSoundBuilderResult : uint8;
template<> struct TIsUEnumClass<EMetaSoundBuilderResult> { enum { Value = true }; };
template<> METASOUNDENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaSoundBuilderResult>();
// ********** End Enum EMetaSoundBuilderResult *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
