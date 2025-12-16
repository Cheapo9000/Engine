// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IconsTracker.h"

#ifdef USERTOOLBOXCORE_IconsTracker_generated_h
#error "IconsTracker.generated.h already included, missing '#pragma once' in IconsTracker.h"
#endif
#define USERTOOLBOXCORE_IconsTracker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIconInfo *********************************************************
struct Z_Construct_UScriptStruct_FIconInfo_Statics;
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIconInfo_Statics; \
	USERTOOLBOXCORE_API static class UScriptStruct* StaticStruct();


struct FIconInfo;
// ********** End ScriptStruct FIconInfo ***********************************************************

// ********** Begin ScriptStruct FIconFolderInfo ***************************************************
struct Z_Construct_UScriptStruct_FIconFolderInfo_Statics;
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIconFolderInfo_Statics; \
	USERTOOLBOXCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FIconFolderInfo;
// ********** End ScriptStruct FIconFolderInfo *****************************************************

// ********** Begin Class UIconsTracker ************************************************************
struct Z_Construct_UClass_UIconsTracker_Statics;
USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UIconsTracker_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIconsTracker(); \
	friend struct ::Z_Construct_UClass_UIconsTracker_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXCORE_API UClass* ::Z_Construct_UClass_UIconsTracker_NoRegister(); \
public: \
	DECLARE_CLASS2(UIconsTracker, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), Z_Construct_UClass_UIconsTracker_NoRegister) \
	DECLARE_SERIALIZER(UIconsTracker)


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIconsTracker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIconsTracker(UIconsTracker&&) = delete; \
	UIconsTracker(const UIconsTracker&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIconsTracker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIconsTracker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIconsTracker) \
	NO_API virtual ~UIconsTracker();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_35_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIconsTracker;

// ********** End Class UIconsTracker **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_IconsTracker_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
