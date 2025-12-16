// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPGameMode.h"

#ifdef VPUTILITIES_VPGameMode_generated_h
#error "VPGameMode.generated.h already included, missing '#pragma once' in VPGameMode.h"
#endif
#define VPUTILITIES_VPGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVPRootActor;

// ********** Begin Class AVPGameMode **************************************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRootActor);


struct Z_Construct_UClass_AVPGameMode_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_AVPGameMode_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPGameMode(); \
	friend struct ::Z_Construct_UClass_AVPGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_AVPGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AVPGameMode, AGameMode, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_AVPGameMode_NoRegister) \
	DECLARE_SERIALIZER(AVPGameMode)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVPGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVPGameMode(AVPGameMode&&) = delete; \
	AVPGameMode(const AVPGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPGameMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPGameMode) \
	NO_API virtual ~AVPGameMode();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVPGameMode;

// ********** End Class AVPGameMode ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
