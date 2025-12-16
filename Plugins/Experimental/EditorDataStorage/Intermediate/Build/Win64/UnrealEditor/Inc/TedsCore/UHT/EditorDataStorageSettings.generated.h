// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorDataStorageSettings.h"

#ifdef TEDSCORE_EditorDataStorageSettings_generated_h
#error "EditorDataStorageSettings.generated.h already included, missing '#pragma once' in EditorDataStorageSettings.h"
#endif
#define TEDSCORE_EditorDataStorageSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorDataStorageSettings ***********************************************
struct Z_Construct_UClass_UEditorDataStorageSettings_Statics;
TEDSCORE_API UClass* Z_Construct_UClass_UEditorDataStorageSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_EditorDataStorageSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorDataStorageSettings(); \
	friend struct ::Z_Construct_UClass_UEditorDataStorageSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEDSCORE_API UClass* ::Z_Construct_UClass_UEditorDataStorageSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorDataStorageSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TedsCore"), Z_Construct_UClass_UEditorDataStorageSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorDataStorageSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_EditorDataStorageSettings_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEDSCORE_API UEditorDataStorageSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorDataStorageSettings(UEditorDataStorageSettings&&) = delete; \
	UEditorDataStorageSettings(const UEditorDataStorageSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEDSCORE_API, UEditorDataStorageSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDataStorageSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDataStorageSettings) \
	TEDSCORE_API virtual ~UEditorDataStorageSettings();


#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_EditorDataStorageSettings_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_EditorDataStorageSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_EditorDataStorageSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_EditorDataStorageSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorDataStorageSettings;

// ********** End Class UEditorDataStorageSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_EditorDataStorage_Source_TedsCore_Private_EditorDataStorageSettings_h

// ********** Begin Enum EChunkMemorySize **********************************************************
#define FOREACH_ENUM_ECHUNKMEMORYSIZE(op) \
	op(EChunkMemorySize::Size4Kb) \
	op(EChunkMemorySize::Size8Kb) \
	op(EChunkMemorySize::Size16Kb) \
	op(EChunkMemorySize::Size32Kb) \
	op(EChunkMemorySize::Size64Kb) \
	op(EChunkMemorySize::Size128Kb) \
	op(EChunkMemorySize::Size256Kb) \
	op(EChunkMemorySize::Size512Kb) 

enum class EChunkMemorySize : int32;
template<> struct TIsUEnumClass<EChunkMemorySize> { enum { Value = true }; };
template<> TEDSCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EChunkMemorySize>();
// ********** End Enum EChunkMemorySize ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
