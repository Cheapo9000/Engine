// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectEditorUtils.h"

#ifdef ENGINE_ObjectEditorUtils_generated_h
#error "ObjectEditorUtils.generated.h already included, missing '#pragma once' in ObjectEditorUtils.h"
#endif
#define ENGINE_ObjectEditorUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UValkyrieMetaData ********************************************************
struct Z_Construct_UClass_UValkyrieMetaData_Statics;
ENGINE_API UClass* Z_Construct_UClass_UValkyrieMetaData_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h_211_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUValkyrieMetaData(); \
	friend struct ::Z_Construct_UClass_UValkyrieMetaData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UValkyrieMetaData_NoRegister(); \
public: \
	DECLARE_CLASS2(UValkyrieMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UValkyrieMetaData_NoRegister) \
	DECLARE_SERIALIZER(UValkyrieMetaData) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h_211_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UValkyrieMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UValkyrieMetaData(UValkyrieMetaData&&) = delete; \
	UValkyrieMetaData(const UValkyrieMetaData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UValkyrieMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UValkyrieMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UValkyrieMetaData) \
	ENGINE_API virtual ~UValkyrieMetaData();


#define FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h_208_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h_211_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h_211_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h_211_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UValkyrieMetaData;

// ********** End Class UValkyrieMetaData **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ObjectEditorUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
