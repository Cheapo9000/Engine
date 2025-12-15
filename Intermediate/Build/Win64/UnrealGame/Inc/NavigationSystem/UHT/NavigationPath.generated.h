// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationPath.h"

#ifdef NAVIGATIONSYSTEM_NavigationPath_generated_h
#error "NavigationPath.generated.h already included, missing '#pragma once' in NavigationPath.h"
#endif
#define NAVIGATIONSYSTEM_NavigationPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavigationPath;
enum class ENavigationOptionFlag : uint8;
struct FLinearColor;

// ********** Begin Delegate FOnNavigationPathUpdated **********************************************
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_17_DELEGATE \
NAVIGATIONSYSTEM_API void FOnNavigationPathUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnNavigationPathUpdated, UNavigationPath* AffectedPath, ENavPathEvent::Type PathEvent);


// ********** End Delegate FOnNavigationPathUpdated ************************************************

// ********** Begin Class UNavigationPath **********************************************************
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsStringPulled); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execIsPartial); \
	DECLARE_FUNCTION(execGetPathCost); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execEnableRecalculationOnInvalidation); \
	DECLARE_FUNCTION(execEnableDebugDrawing); \
	DECLARE_FUNCTION(execGetDebugString);


struct Z_Construct_UClass_UNavigationPath_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationPath(); \
	friend struct ::Z_Construct_UClass_UNavigationPath_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_UNavigationPath_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationPath, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_UNavigationPath_NoRegister) \
	DECLARE_SERIALIZER(UNavigationPath)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavigationPath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationPath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationPath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationPath); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationPath(UNavigationPath&&) = delete; \
	UNavigationPath(const UNavigationPath&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~UNavigationPath();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_23_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_26_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationPath;

// ********** End Class UNavigationPath ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
