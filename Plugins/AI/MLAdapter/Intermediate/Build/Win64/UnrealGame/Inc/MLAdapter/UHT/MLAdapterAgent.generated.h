// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Agents/MLAdapterAgent.h"

#ifdef MLADAPTER_MLAdapterAgent_generated_h
#error "MLAdapterAgent.generated.h already included, missing '#pragma once' in MLAdapterAgent.h"
#endif
#define MLADAPTER_MLAdapterAgent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APawn;

// ********** Begin ScriptStruct FMLAdapterParameterMap ********************************************
struct Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics;
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMLAdapterParameterMap;
// ********** End ScriptStruct FMLAdapterParameterMap **********************************************

// ********** Begin ScriptStruct FMLAdapterAgentConfig *********************************************
struct Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics;
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMLAdapterAgentConfig;
// ********** End ScriptStruct FMLAdapterAgentConfig ***********************************************

// ********** Begin Class UMLAdapterAgent **********************************************************
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnControllerChanged); \
	DECLARE_FUNCTION(execOnAvatarDestroyed);


struct Z_Construct_UClass_UMLAdapterAgent_Statics;
MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgent_NoRegister();

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterAgent(); \
	friend struct ::Z_Construct_UClass_UMLAdapterAgent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLADAPTER_API UClass* ::Z_Construct_UClass_UMLAdapterAgent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLAdapterAgent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLAdapter"), Z_Construct_UClass_UMLAdapterAgent_NoRegister) \
	DECLARE_SERIALIZER(UMLAdapterAgent)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLAdapterAgent(UMLAdapterAgent&&) = delete; \
	UMLAdapterAgent(const UMLAdapterAgent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterAgent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterAgent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterAgent) \
	NO_API virtual ~UMLAdapterAgent();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_73_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLAdapterAgent;

// ********** End Class UMLAdapterAgent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
