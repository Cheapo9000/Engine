// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ViewportStatsSubsystem.h"

#ifdef ENGINE_ViewportStatsSubsystem_generated_h
#error "ViewportStatsSubsystem.generated.h already included, missing '#pragma once' in ViewportStatsSubsystem.h"
#endif
#define ENGINE_ViewportStatsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Delegate FViewportDisplayCallback **********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_17_DELEGATE \
ENGINE_API bool FViewportDisplayCallback_DelegateWrapper(const FScriptDelegate& ViewportDisplayCallback, FText& OutText, FLinearColor& OutColor);


// ********** End Delegate FViewportDisplayCallback ************************************************

// ********** Begin Class UViewportStatsSubsystem **************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveDisplayDelegate); \
	DECLARE_FUNCTION(execAddDisplayDelegate); \
	DECLARE_FUNCTION(execAddTimedDisplay);


struct Z_Construct_UClass_UViewportStatsSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UViewportStatsSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportStatsSubsystem(); \
	friend struct ::Z_Construct_UClass_UViewportStatsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UViewportStatsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportStatsSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UViewportStatsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UViewportStatsSubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UViewportStatsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportStatsSubsystem(UViewportStatsSubsystem&&) = delete; \
	UViewportStatsSubsystem(const UViewportStatsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UViewportStatsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportStatsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportStatsSubsystem) \
	ENGINE_API virtual ~UViewportStatsSubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_73_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportStatsSubsystem;

// ********** End Class UViewportStatsSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
