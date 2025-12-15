// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PostBufferBlurUpdater.h"

#ifdef UMG_PostBufferBlurUpdater_generated_h
#error "PostBufferBlurUpdater.generated.h already included, missing '#pragma once' in PostBufferBlurUpdater.h"
#endif
#define UMG_PostBufferBlurUpdater_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPostBufferBlurUpdater ***************************************************
struct Z_Construct_UClass_UPostBufferBlurUpdater_Statics;
UMG_API UClass* Z_Construct_UClass_UPostBufferBlurUpdater_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostBufferBlurUpdater(); \
	friend struct ::Z_Construct_UClass_UPostBufferBlurUpdater_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UPostBufferBlurUpdater_NoRegister(); \
public: \
	DECLARE_CLASS2(UPostBufferBlurUpdater, USlatePostBufferProcessorUpdater, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UPostBufferBlurUpdater_NoRegister) \
	DECLARE_SERIALIZER(UPostBufferBlurUpdater)


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UPostBufferBlurUpdater(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPostBufferBlurUpdater(UPostBufferBlurUpdater&&) = delete; \
	UPostBufferBlurUpdater(const UPostBufferBlurUpdater&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UPostBufferBlurUpdater); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostBufferBlurUpdater); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostBufferBlurUpdater) \
	UMG_API virtual ~UPostBufferBlurUpdater();


#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPostBufferBlurUpdater;

// ********** End Class UPostBufferBlurUpdater *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_PostBufferBlurUpdater_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
