// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositeAssetUserData.h"

#ifdef COMPOSITE_CompositeAssetUserData_generated_h
#error "CompositeAssetUserData.generated.h already included, missing '#pragma once' in CompositeAssetUserData.h"
#endif
#define COMPOSITE_CompositeAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeAssetUserData **************************************************
struct Z_Construct_UClass_UCompositeAssetUserData_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositeAssetUserData_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeAssetUserData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeAssetUserData(); \
	friend struct ::Z_Construct_UClass_UCompositeAssetUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositeAssetUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositeAssetUserData_NoRegister) \
	DECLARE_SERIALIZER(UCompositeAssetUserData)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeAssetUserData_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositeAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeAssetUserData(UCompositeAssetUserData&&) = delete; \
	UCompositeAssetUserData(const UCompositeAssetUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeAssetUserData) \
	NO_API virtual ~UCompositeAssetUserData();


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeAssetUserData_h_15_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeAssetUserData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeAssetUserData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeAssetUserData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeAssetUserData;

// ********** End Class UCompositeAssetUserData ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_CompositeAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
