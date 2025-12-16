// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PostProcessAnimationAssetUserData.h"

#ifdef UAFANIMGRAPH_PostProcessAnimationAssetUserData_generated_h
#error "PostProcessAnimationAssetUserData.generated.h already included, missing '#pragma once' in PostProcessAnimationAssetUserData.h"
#endif
#define UAFANIMGRAPH_PostProcessAnimationAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPostProcessAnimationUserAssetData ***************************************
struct Z_Construct_UClass_UPostProcessAnimationUserAssetData_Statics;
UAFANIMGRAPH_API UClass* Z_Construct_UClass_UPostProcessAnimationUserAssetData_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Graph_PostProcessAnimationAssetUserData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostProcessAnimationUserAssetData(); \
	friend struct ::Z_Construct_UClass_UPostProcessAnimationUserAssetData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFANIMGRAPH_API UClass* ::Z_Construct_UClass_UPostProcessAnimationUserAssetData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPostProcessAnimationUserAssetData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFAnimGraph"), Z_Construct_UClass_UPostProcessAnimationUserAssetData_NoRegister) \
	DECLARE_SERIALIZER(UPostProcessAnimationUserAssetData)


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Graph_PostProcessAnimationAssetUserData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFANIMGRAPH_API UPostProcessAnimationUserAssetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPostProcessAnimationUserAssetData(UPostProcessAnimationUserAssetData&&) = delete; \
	UPostProcessAnimationUserAssetData(const UPostProcessAnimationUserAssetData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFANIMGRAPH_API, UPostProcessAnimationUserAssetData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostProcessAnimationUserAssetData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostProcessAnimationUserAssetData) \
	UAFANIMGRAPH_API virtual ~UPostProcessAnimationUserAssetData();


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Graph_PostProcessAnimationAssetUserData_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Graph_PostProcessAnimationAssetUserData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Graph_PostProcessAnimationAssetUserData_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Graph_PostProcessAnimationAssetUserData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPostProcessAnimationUserAssetData;

// ********** End Class UPostProcessAnimationUserAssetData *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Public_Graph_PostProcessAnimationAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
