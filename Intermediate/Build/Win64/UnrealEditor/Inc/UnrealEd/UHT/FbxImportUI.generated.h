// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxImportUI.h"

#ifdef UNREALED_FbxImportUI_generated_h
#error "FbxImportUI.generated.h already included, missing '#pragma once' in FbxImportUI.h"
#endif
#define UNREALED_FbxImportUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFbxImportUI *************************************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetToDefault);


struct Z_Construct_UClass_UFbxImportUI_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUFbxImportUI(); \
	friend struct ::Z_Construct_UClass_UFbxImportUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFbxImportUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UFbxImportUI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFbxImportUI_NoRegister) \
	DECLARE_SERIALIZER(UFbxImportUI) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxImportUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxImportUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxImportUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxImportUI); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFbxImportUI(UFbxImportUI&&) = delete; \
	UFbxImportUI(const UFbxImportUI&) = delete; \
	UNREALED_API virtual ~UFbxImportUI();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_97_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFbxImportUI;

// ********** End Class UFbxImportUI ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h

// ********** Begin Enum EFBXImportType ************************************************************
#define FOREACH_ENUM_EFBXIMPORTTYPE(op) \
	op(FBXIT_StaticMesh) \
	op(FBXIT_SkeletalMesh) \
	op(FBXIT_Animation) 

enum EFBXImportType : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFBXImportType>();
// ********** End Enum EFBXImportType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
