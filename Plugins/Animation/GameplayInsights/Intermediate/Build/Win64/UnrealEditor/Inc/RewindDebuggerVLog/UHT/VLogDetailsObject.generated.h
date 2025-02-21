// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VLogDetailsObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REWINDDEBUGGERVLOG_VLogDetailsObject_generated_h
#error "VLogDetailsObject.generated.h already included, missing '#pragma once' in VLogDetailsObject.h"
#endif
#define REWINDDEBUGGERVLOG_VLogDetailsObject_generated_h

#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogDetailsObject_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVisualLogDetails_Statics; \
	REWINDDEBUGGERVLOG_API static class UScriptStruct* StaticStruct();


template<> REWINDDEBUGGERVLOG_API UScriptStruct* StaticStruct<struct FVisualLogDetails>();

#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogDetailsObject_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVLogDetailsObject(); \
	friend struct Z_Construct_UClass_UVLogDetailsObject_Statics; \
public: \
	DECLARE_CLASS(UVLogDetailsObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RewindDebuggerVLog"), NO_API) \
	DECLARE_SERIALIZER(UVLogDetailsObject)


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogDetailsObject_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVLogDetailsObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVLogDetailsObject(UVLogDetailsObject&&); \
	UVLogDetailsObject(const UVLogDetailsObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVLogDetailsObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVLogDetailsObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVLogDetailsObject) \
	NO_API virtual ~UVLogDetailsObject();


#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogDetailsObject_h_19_PROLOG
#define FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogDetailsObject_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogDetailsObject_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogDetailsObject_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REWINDDEBUGGERVLOG_API UClass* StaticClass<class UVLogDetailsObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_GameplayInsights_Source_RewindDebuggerVLog_Private_VLogDetailsObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
