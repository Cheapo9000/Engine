// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LayeredMoveBase.h"

#ifdef MOVER_LayeredMoveBase_generated_h
#error "LayeredMoveBase.generated.h already included, missing '#pragma once' in LayeredMoveBase.h"
#endif
#define MOVER_LayeredMoveBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULayeredMoveLogic;
class UMoverBlackboard;
struct FLayeredMoveInstancedData;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;

// ********** Begin ScriptStruct FLayeredMoveActivationParams **************************************
struct Z_Construct_UScriptStruct_FLayeredMoveActivationParams_Statics;
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLayeredMoveActivationParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FLayeredMoveActivationParams;
// ********** End ScriptStruct FLayeredMoveActivationParams ****************************************

// ********** Begin ScriptStruct FLayeredMoveInstancedData *****************************************
struct Z_Construct_UScriptStruct_FLayeredMoveInstancedData_Statics;
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLayeredMoveInstancedData_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FLayeredMoveInstancedData;
// ********** End ScriptStruct FLayeredMoveInstancedData *******************************************

// ********** Begin Class ULayeredMoveLogic ********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execGenerateMove); \
	DECLARE_FUNCTION(execOnEnd); \
	DECLARE_FUNCTION(execOnStart);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_122_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULayeredMoveLogic_Statics;
	struct Z_Construct_UFunction_ULayeredMoveLogic_K2_GetActiveMoveData_Statics; \
	struct Z_Construct_UFunction_ULayeredMoveLogic_K2_SetActiveMoveData_Statics; \
MOVER_API UClass* Z_Construct_UClass_ULayeredMoveLogic_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULayeredMoveLogic(); \
	friend struct ::Z_Construct_UClass_ULayeredMoveLogic_Statics; \
	friend struct ::Z_Construct_UFunction_ULayeredMoveLogic_K2_GetActiveMoveData_Statics; \
	friend struct ::Z_Construct_UFunction_ULayeredMoveLogic_K2_SetActiveMoveData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* ::Z_Construct_UClass_ULayeredMoveLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(ULayeredMoveLogic, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_ULayeredMoveLogic_NoRegister) \
	DECLARE_SERIALIZER(ULayeredMoveLogic)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_122_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULayeredMoveLogic(ULayeredMoveLogic&&) = delete; \
	ULayeredMoveLogic(const ULayeredMoveLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULayeredMoveLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayeredMoveLogic); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULayeredMoveLogic) \
	NO_API virtual ~ULayeredMoveLogic();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_119_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_122_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULayeredMoveLogic;

// ********** End Class ULayeredMoveLogic **********************************************************

// ********** Begin ScriptStruct FLayeredMoveInstance **********************************************
struct Z_Construct_UScriptStruct_FLayeredMoveInstance_Statics;
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h_237_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLayeredMoveInstance_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FLayeredMoveInstance;
// ********** End ScriptStruct FLayeredMoveInstance ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMoveBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
