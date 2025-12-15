// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NativeWidgetHost.h"

#ifdef UMG_NativeWidgetHost_generated_h
#error "NativeWidgetHost.generated.h already included, missing '#pragma once' in NativeWidgetHost.h"
#endif
#define UMG_NativeWidgetHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNativeWidgetHost ********************************************************
struct Z_Construct_UClass_UNativeWidgetHost_Statics;
UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNativeWidgetHost(); \
	friend struct ::Z_Construct_UClass_UNativeWidgetHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UNativeWidgetHost_NoRegister(); \
public: \
	DECLARE_CLASS2(UNativeWidgetHost, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UNativeWidgetHost_NoRegister) \
	DECLARE_SERIALIZER(UNativeWidgetHost)


#define FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UNativeWidgetHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNativeWidgetHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UNativeWidgetHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNativeWidgetHost); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNativeWidgetHost(UNativeWidgetHost&&) = delete; \
	UNativeWidgetHost(const UNativeWidgetHost&) = delete; \
	UMG_API virtual ~UNativeWidgetHost();


#define FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNativeWidgetHost;

// ********** End Class UNativeWidgetHost **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
