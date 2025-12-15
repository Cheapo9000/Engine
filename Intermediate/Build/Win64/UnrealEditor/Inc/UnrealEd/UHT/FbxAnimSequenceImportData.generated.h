// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxAnimSequenceImportData.h"

#ifdef UNREALED_FbxAnimSequenceImportData_generated_h
#error "FbxAnimSequenceImportData.generated.h already included, missing '#pragma once' in FbxAnimSequenceImportData.h"
#endif
#define UNREALED_FbxAnimSequenceImportData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxAnimSequenceImportData ***********************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxAnimSequenceImportData, UNREALED_API)


struct Z_Construct_UClass_UFbxAnimSequenceImportData_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUFbxAnimSequenceImportData(); \
	friend struct ::Z_Construct_UClass_UFbxAnimSequenceImportData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxAnimSequenceImportData, UFbxAssetImportData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister) \
	DECLARE_SERIALIZER(UFbxAnimSequenceImportData) \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxAnimSequenceImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxAnimSequenceImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxAnimSequenceImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxAnimSequenceImportData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxAnimSequenceImportData(UFbxAnimSequenceImportData&&) = delete; \
	UFbxAnimSequenceImportData(const UFbxAnimSequenceImportData&) = delete; \
	UNREALED_API virtual ~UFbxAnimSequenceImportData();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_36_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxAnimSequenceImportData;

// ********** End Class UFbxAnimSequenceImportData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAnimSequenceImportData_h

// ********** Begin Enum EFBXAnimationLengthImportType *********************************************
#define FOREACH_ENUM_EFBXANIMATIONLENGTHIMPORTTYPE(op) \
	op(FBXALIT_ExportedTime) \
	op(FBXALIT_AnimatedKey) \
	op(FBXALIT_SetRange) 

enum EFBXAnimationLengthImportType : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXAnimationLengthImportType>();
// ********** End Enum EFBXAnimationLengthImportType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
