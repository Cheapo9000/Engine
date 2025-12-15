// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TileView.h"

#ifdef UMG_TileView_generated_h
#error "TileView.generated.h already included, missing '#pragma once' in TileView.h"
#endif
#define UMG_TileView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTileView ****************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAligned); \
	DECLARE_FUNCTION(execGetEntryWidth); \
	DECLARE_FUNCTION(execGetEntryHeight); \
	DECLARE_FUNCTION(execSetEntryWidth); \
	DECLARE_FUNCTION(execSetEntryHeight);


struct Z_Construct_UClass_UTileView_Statics;
UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileView(); \
	friend struct ::Z_Construct_UClass_UTileView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UTileView_NoRegister(); \
public: \
	DECLARE_CLASS2(UTileView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UTileView_NoRegister) \
	DECLARE_SERIALIZER(UTileView)


#define FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTileView(UTileView&&) = delete; \
	UTileView(const UTileView&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UTileView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileView) \
	UMG_API virtual ~UTileView();


#define FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_14_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTileView;

// ********** End Class UTileView ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
