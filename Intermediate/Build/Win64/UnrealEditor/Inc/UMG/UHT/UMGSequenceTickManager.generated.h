// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/UMGSequenceTickManager.h"

#ifdef UMG_UMGSequenceTickManager_generated_h
#error "UMGSequenceTickManager.generated.h already included, missing '#pragma once' in UMGSequenceTickManager.h"
#endif
#define UMG_UMGSequenceTickManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSequenceTickManagerWidgetData ************************************
struct Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FSequenceTickManagerWidgetData;
// ********** End ScriptStruct FSequenceTickManagerWidgetData **************************************

// ********** Begin Class UUMGSequenceTickManager **************************************************
struct Z_Construct_UClass_UUMGSequenceTickManager_Statics;
UMG_API UClass* Z_Construct_UClass_UUMGSequenceTickManager_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGSequenceTickManager(); \
	friend struct ::Z_Construct_UClass_UUMGSequenceTickManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UUMGSequenceTickManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UUMGSequenceTickManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UUMGSequenceTickManager_NoRegister) \
	DECLARE_SERIALIZER(UUMGSequenceTickManager)


#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUMGSequenceTickManager(UUMGSequenceTickManager&&) = delete; \
	UUMGSequenceTickManager(const UUMGSequenceTickManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUMGSequenceTickManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSequenceTickManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSequenceTickManager) \
	UMG_API virtual ~UUMGSequenceTickManager();


#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_32_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_36_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUMGSequenceTickManager;

// ********** End Class UUMGSequenceTickManager ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
