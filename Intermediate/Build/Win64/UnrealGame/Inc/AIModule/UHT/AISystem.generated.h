// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AISystem.h"

#ifdef AIMODULE_AISystem_generated_h
#error "AISystem.generated.h already included, missing '#pragma once' in AISystem.h"
#endif
#define AIMODULE_AISystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISystem ****************************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAILoggingVerbose); \
	DECLARE_FUNCTION(execAIIgnorePlayers);


struct Z_Construct_UClass_UAISystem_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAISystem_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISystem(); \
	friend struct ::Z_Construct_UClass_UAISystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAISystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISystem, UAISystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAISystem_NoRegister) \
	DECLARE_SERIALIZER(UAISystem)


#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISystem(UAISystem&&) = delete; \
	UAISystem(const UAISystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISystem) \
	AIMODULE_API virtual ~UAISystem();


#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_25_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISystem;

// ********** End Class UAISystem ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
