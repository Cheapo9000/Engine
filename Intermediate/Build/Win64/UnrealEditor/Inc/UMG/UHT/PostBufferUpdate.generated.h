// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PostBufferUpdate.h"

#ifdef UMG_PostBufferUpdate_generated_h
#error "PostBufferUpdate.generated.h already included, missing '#pragma once' in PostBufferUpdate.h"
#endif
#define UMG_PostBufferUpdate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSlatePostBufferUpdateInfo ****************************************
struct Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSlatePostBufferUpdateInfo_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FSlatePostBufferUpdateInfo;
// ********** End ScriptStruct FSlatePostBufferUpdateInfo ******************************************

// ********** Begin Class UPostBufferUpdate ********************************************************
struct Z_Construct_UClass_UPostBufferUpdate_Statics;
UMG_API UClass* Z_Construct_UClass_UPostBufferUpdate_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostBufferUpdate(); \
	friend struct ::Z_Construct_UClass_UPostBufferUpdate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UPostBufferUpdate_NoRegister(); \
public: \
	DECLARE_CLASS2(UPostBufferUpdate, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UPostBufferUpdate_NoRegister) \
	DECLARE_SERIALIZER(UPostBufferUpdate)


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPostBufferUpdate(UPostBufferUpdate&&) = delete; \
	UPostBufferUpdate(const UPostBufferUpdate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UPostBufferUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostBufferUpdate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPostBufferUpdate) \
	UMG_API virtual ~UPostBufferUpdate();


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_43_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPostBufferUpdate;

// ********** End Class UPostBufferUpdate **********************************************************

// ********** Begin Class USlatePostBufferProcessorUpdater *****************************************
struct Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics;
UMG_API UClass* Z_Construct_UClass_USlatePostBufferProcessorUpdater_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlatePostBufferProcessorUpdater(); \
	friend struct ::Z_Construct_UClass_USlatePostBufferProcessorUpdater_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_USlatePostBufferProcessorUpdater_NoRegister(); \
public: \
	DECLARE_CLASS2(USlatePostBufferProcessorUpdater, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_USlatePostBufferProcessorUpdater_NoRegister) \
	DECLARE_SERIALIZER(USlatePostBufferProcessorUpdater)


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API USlatePostBufferProcessorUpdater(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlatePostBufferProcessorUpdater(USlatePostBufferProcessorUpdater&&) = delete; \
	USlatePostBufferProcessorUpdater(const USlatePostBufferProcessorUpdater&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USlatePostBufferProcessorUpdater); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlatePostBufferProcessorUpdater); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlatePostBufferProcessorUpdater) \
	UMG_API virtual ~USlatePostBufferProcessorUpdater();


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_102_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlatePostBufferProcessorUpdater;

// ********** End Class USlatePostBufferProcessorUpdater *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferUpdate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
