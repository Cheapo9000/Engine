// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Agents/MLAdapterAgent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APawn;
#ifdef MLADAPTER_MLAdapterAgent_generated_h
#error "MLAdapterAgent.generated.h already included, missing '#pragma once' in MLAdapterAgent.h"
#endif
#define MLADAPTER_MLAdapterAgent_generated_h

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMLAdapterParameterMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MLADAPTER_API UScriptStruct* StaticStruct<struct FMLAdapterParameterMap>();

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMLAdapterAgentConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MLADAPTER_API UScriptStruct* StaticStruct<struct FMLAdapterAgentConfig>();

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnControllerChanged); \
	DECLARE_FUNCTION(execOnAvatarDestroyed);


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterAgent(); \
	friend struct Z_Construct_UClass_UMLAdapterAgent_Statics; \
public: \
	DECLARE_CLASS(UMLAdapterAgent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLAdapter"), NO_API) \
	DECLARE_SERIALIZER(UMLAdapterAgent)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h_76_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMLAdapterAgent(UMLAdapterAgent&&); \
	UMLAdapterAgent(const UMLAdapterAgent&); \
public: \
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


template<> MLADAPTER_API UClass* StaticClass<class UMLAdapterAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
