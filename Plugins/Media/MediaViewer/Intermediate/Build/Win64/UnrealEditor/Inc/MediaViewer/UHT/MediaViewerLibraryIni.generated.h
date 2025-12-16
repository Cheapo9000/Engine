// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/MediaViewerLibraryIni.h"

#ifdef MEDIAVIEWER_MediaViewerLibraryIni_generated_h
#error "MediaViewerLibraryIni.generated.h already included, missing '#pragma once' in MediaViewerLibraryIni.h"
#endif
#define MEDIAVIEWER_MediaViewerLibraryIni_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMediaViewerLibraryItemData ***************************************
struct Z_Construct_UScriptStruct_FMediaViewerLibraryItemData_Statics;
#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaViewerLibraryItemData_Statics; \
	MEDIAVIEWER_API static class UScriptStruct* StaticStruct();


struct FMediaViewerLibraryItemData;
// ********** End ScriptStruct FMediaViewerLibraryItemData *****************************************

// ********** Begin ScriptStruct FMediaViewerImageState ********************************************
struct Z_Construct_UScriptStruct_FMediaViewerImageState_Statics;
#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaViewerImageState_Statics; \
	MEDIAVIEWER_API static class UScriptStruct* StaticStruct();


struct FMediaViewerImageState;
// ********** End ScriptStruct FMediaViewerImageState **********************************************

// ********** Begin ScriptStruct FMediaViewerState *************************************************
struct Z_Construct_UScriptStruct_FMediaViewerState_Statics;
#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaViewerState_Statics; \
	MEDIAVIEWER_API static class UScriptStruct* StaticStruct();


struct FMediaViewerState;
// ********** End ScriptStruct FMediaViewerState ***************************************************

// ********** Begin Class UMediaViewerLibraryIni ***************************************************
struct Z_Construct_UClass_UMediaViewerLibraryIni_Statics;
MEDIAVIEWER_API UClass* Z_Construct_UClass_UMediaViewerLibraryIni_NoRegister();

#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaViewerLibraryIni(); \
	friend struct ::Z_Construct_UClass_UMediaViewerLibraryIni_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAVIEWER_API UClass* ::Z_Construct_UClass_UMediaViewerLibraryIni_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaViewerLibraryIni, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaViewer"), Z_Construct_UClass_UMediaViewerLibraryIni_NoRegister) \
	DECLARE_SERIALIZER(UMediaViewerLibraryIni) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h_70_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaViewerLibraryIni(UMediaViewerLibraryIni&&) = delete; \
	UMediaViewerLibraryIni(const UMediaViewerLibraryIni&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaViewerLibraryIni); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaViewerLibraryIni); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMediaViewerLibraryIni) \
	NO_API virtual ~UMediaViewerLibraryIni();


#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h_67_PROLOG
#define FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaViewerLibraryIni;

// ********** End Class UMediaViewerLibraryIni *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaViewer_Source_MediaViewer_Private_Library_MediaViewerLibraryIni_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
