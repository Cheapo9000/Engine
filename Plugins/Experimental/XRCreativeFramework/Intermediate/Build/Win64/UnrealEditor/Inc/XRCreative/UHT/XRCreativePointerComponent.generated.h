// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativePointerComponent.h"

#ifdef XRCREATIVE_XRCreativePointerComponent_generated_h
#error "XRCreativePointerComponent.generated.h already included, missing '#pragma once' in XRCreativePointerComponent.h"
#endif
#define XRCREATIVE_XRCreativePointerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;

// ********** Begin Class UXRCreativePointerComponent **********************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execGetFilteredTraceEnd); \
	DECLARE_FUNCTION(execGetRawTraceEnd);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_20_ACCESSORS \
static void GetbEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnabled_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UXRCreativePointerComponent_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePointerComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativePointerComponent(); \
	friend struct ::Z_Construct_UClass_UXRCreativePointerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_UXRCreativePointerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativePointerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_UXRCreativePointerComponent_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativePointerComponent)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativePointerComponent(UXRCreativePointerComponent&&) = delete; \
	UXRCreativePointerComponent(const UXRCreativePointerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativePointerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativePointerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXRCreativePointerComponent) \
	NO_API virtual ~UXRCreativePointerComponent();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativePointerComponent;

// ********** End Class UXRCreativePointerComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
