// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThumbnailRendering/ThumbnailManager.h"

#ifdef UNREALED_ThumbnailManager_generated_h
#error "ThumbnailManager.generated.h already included, missing '#pragma once' in ThumbnailManager.h"
#endif
#define UNREALED_ThumbnailManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FThumbnailRenderingInfo *******************************************
struct Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FThumbnailRenderingInfo;
// ********** End ScriptStruct FThumbnailRenderingInfo *********************************************

// ********** Begin Class UThumbnailManager ********************************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_94_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UThumbnailManager, NO_API)


struct Z_Construct_UClass_UThumbnailManager_Statics;
UNREALED_API UClass* Z_Construct_UClass_UThumbnailManager_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_94_INCLASS \
private: \
	static void StaticRegisterNativesUThumbnailManager(); \
	friend struct ::Z_Construct_UClass_UThumbnailManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UThumbnailManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UThumbnailManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UThumbnailManager_NoRegister) \
	DECLARE_SERIALIZER(UThumbnailManager) \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_94_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThumbnailManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThumbnailManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThumbnailManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThumbnailManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UThumbnailManager(UThumbnailManager&&) = delete; \
	UThumbnailManager(const UThumbnailManager&) = delete; \
	NO_API virtual ~UThumbnailManager();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_91_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_94_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UThumbnailManager;

// ********** End Class UThumbnailManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h

// ********** Begin Enum EThumbnailPrimType ********************************************************
#define FOREACH_ENUM_ETHUMBNAILPRIMTYPE(op) \
	op(TPT_None) \
	op(TPT_Sphere) \
	op(TPT_Cube) \
	op(TPT_Plane) \
	op(TPT_Cylinder) 

enum EThumbnailPrimType : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EThumbnailPrimType>();
// ********** End Enum EThumbnailPrimType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
