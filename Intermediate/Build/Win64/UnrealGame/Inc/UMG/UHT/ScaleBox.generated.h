// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ScaleBox.h"

#ifdef UMG_ScaleBox_generated_h
#error "ScaleBox.generated.h already included, missing '#pragma once' in ScaleBox.h"
#endif
#define UMG_ScaleBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScaleBox ****************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetIgnoreInheritedScale); \
	DECLARE_FUNCTION(execSetUserSpecifiedScale); \
	DECLARE_FUNCTION(execSetStretchDirection); \
	DECLARE_FUNCTION(execSetStretch);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_ACCESSORS \
static void GetStretch_WrapperImpl(const void* Object, void* OutValue); \
static void SetStretch_WrapperImpl(void* Object, const void* InValue); \
static void GetStretchDirection_WrapperImpl(const void* Object, void* OutValue); \
static void SetStretchDirection_WrapperImpl(void* Object, const void* InValue); \
static void GetUserSpecifiedScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetUserSpecifiedScale_WrapperImpl(void* Object, const void* InValue); \
static void GetIgnoreInheritedScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetIgnoreInheritedScale_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UScaleBox, UMG_API)


struct Z_Construct_UClass_UScaleBox_Statics;
UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUScaleBox(); \
	friend struct ::Z_Construct_UClass_UScaleBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UScaleBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UScaleBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UScaleBox_NoRegister) \
	DECLARE_SERIALIZER(UScaleBox) \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UScaleBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScaleBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UScaleBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScaleBox); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScaleBox(UScaleBox&&) = delete; \
	UScaleBox(const UScaleBox&) = delete; \
	UMG_API virtual ~UScaleBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScaleBox;

// ********** End Class UScaleBox ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ScaleBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
