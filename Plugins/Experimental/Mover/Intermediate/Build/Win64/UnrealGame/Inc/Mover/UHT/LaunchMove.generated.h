// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/LayeredMoves/LaunchMove.h"

#ifdef MOVER_LaunchMove_generated_h
#error "LaunchMove.generated.h already included, missing '#pragma once' in LaunchMove.h"
#endif
#define MOVER_LaunchMove_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLaunchMoveActivationParams ***************************************
struct Z_Construct_UScriptStruct_FLaunchMoveActivationParams_Statics;
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLaunchMoveActivationParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveActivationParams Super;


struct FLaunchMoveActivationParams;
// ********** End ScriptStruct FLaunchMoveActivationParams *****************************************

// ********** Begin ScriptStruct FLaunchMoveData ***************************************************
struct Z_Construct_UScriptStruct_FLaunchMoveData_Statics;
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLaunchMoveData_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveInstancedData Super;


struct FLaunchMoveData;
// ********** End ScriptStruct FLaunchMoveData *****************************************************

// ********** Begin Class ULaunchMoveLogic *********************************************************
struct Z_Construct_UClass_ULaunchMoveLogic_Statics;
MOVER_API UClass* Z_Construct_UClass_ULaunchMoveLogic_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULaunchMoveLogic(); \
	friend struct ::Z_Construct_UClass_ULaunchMoveLogic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* ::Z_Construct_UClass_ULaunchMoveLogic_NoRegister(); \
public: \
	DECLARE_CLASS2(ULaunchMoveLogic, ULayeredMoveLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_ULaunchMoveLogic_NoRegister) \
	DECLARE_SERIALIZER(ULaunchMoveLogic)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULaunchMoveLogic(ULaunchMoveLogic&&) = delete; \
	ULaunchMoveLogic(const ULaunchMoveLogic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULaunchMoveLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULaunchMoveLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULaunchMoveLogic) \
	NO_API virtual ~ULaunchMoveLogic();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h_49_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULaunchMoveLogic;

// ********** End Class ULaunchMoveLogic ***********************************************************

// ********** Begin ScriptStruct FLayeredMove_Launch ***********************************************
struct Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics;
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


struct FLayeredMove_Launch;
// ********** End ScriptStruct FLayeredMove_Launch *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
