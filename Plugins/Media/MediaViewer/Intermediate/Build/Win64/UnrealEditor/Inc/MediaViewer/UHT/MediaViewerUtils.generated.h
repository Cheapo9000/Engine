// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaViewerUtils.h"

#ifdef MEDIAVIEWER_MediaViewerUtils_generated_h
#error "MediaViewerUtils.generated.h already included, missing '#pragma once' in MediaViewerUtils.h"
#endif
#define MEDIAVIEWER_MediaViewerUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaViewerUserData *****************************************************
struct Z_Construct_UClass_UMediaViewerUserData_Statics;
MEDIAVIEWER_API UClass* Z_Construct_UClass_UMediaViewerUserData_NoRegister();

#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_MediaViewerUtils_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaViewerUserData(); \
	friend struct ::Z_Construct_UClass_UMediaViewerUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAVIEWER_API UClass* ::Z_Construct_UClass_UMediaViewerUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaViewerUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaViewer"), Z_Construct_UClass_UMediaViewerUserData_NoRegister) \
	DECLARE_SERIALIZER(UMediaViewerUserData)


#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_MediaViewerUtils_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaViewerUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaViewerUserData(UMediaViewerUserData&&) = delete; \
	UMediaViewerUserData(const UMediaViewerUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaViewerUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaViewerUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaViewerUserData) \
	NO_API virtual ~UMediaViewerUserData();


#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_MediaViewerUtils_h_31_PROLOG
#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_MediaViewerUtils_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_MediaViewerUtils_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_MediaViewerUtils_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaViewerUserData;

// ********** End Class UMediaViewerUserData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_MediaViewerUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
