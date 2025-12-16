// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectMixerEditorSerializedData.h"

#ifdef OBJECTMIXEREDITOR_ObjectMixerEditorSerializedData_generated_h
#error "ObjectMixerEditorSerializedData.generated.h already included, missing '#pragma once' in ObjectMixerEditorSerializedData.h"
#endif
#define OBJECTMIXEREDITOR_ObjectMixerEditorSerializedData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FObjectMixerCollectionObjectData **********************************
struct Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics;
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectMixerCollectionObjectData_Statics; \
	OBJECTMIXEREDITOR_API static class UScriptStruct* StaticStruct();


struct FObjectMixerCollectionObjectData;
// ********** End ScriptStruct FObjectMixerCollectionObjectData ************************************

// ********** Begin ScriptStruct FObjectMixerCollectionObjectSet ***********************************
struct Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics;
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectMixerCollectionObjectSet_Statics; \
	OBJECTMIXEREDITOR_API static class UScriptStruct* StaticStruct();


struct FObjectMixerCollectionObjectSet;
// ********** End ScriptStruct FObjectMixerCollectionObjectSet *************************************

// ********** Begin ScriptStruct FObjectMixerColumnData ********************************************
struct Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics;
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectMixerColumnData_Statics; \
	OBJECTMIXEREDITOR_API static class UScriptStruct* StaticStruct();


struct FObjectMixerColumnData;
// ********** End ScriptStruct FObjectMixerColumnData **********************************************

// ********** Begin ScriptStruct FObjectMixerSerializationDataPerFilter ****************************
struct Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics;
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectMixerSerializationDataPerFilter_Statics; \
	OBJECTMIXEREDITOR_API static class UScriptStruct* StaticStruct();


struct FObjectMixerSerializationDataPerFilter;
// ********** End ScriptStruct FObjectMixerSerializationDataPerFilter ******************************

// ********** Begin Class UObjectMixerEditorSerializedData *****************************************
struct Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics;
OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorSerializedData_NoRegister();

#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectMixerEditorSerializedData(); \
	friend struct ::Z_Construct_UClass_UObjectMixerEditorSerializedData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTMIXEREDITOR_API UClass* ::Z_Construct_UClass_UObjectMixerEditorSerializedData_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectMixerEditorSerializedData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectMixerEditor"), Z_Construct_UClass_UObjectMixerEditorSerializedData_NoRegister) \
	DECLARE_SERIALIZER(UObjectMixerEditorSerializedData) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("ObjectMixerSerializedData");} \



#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_104_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectMixerEditorSerializedData(UObjectMixerEditorSerializedData&&) = delete; \
	UObjectMixerEditorSerializedData(const UObjectMixerEditorSerializedData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBJECTMIXEREDITOR_API, UObjectMixerEditorSerializedData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectMixerEditorSerializedData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectMixerEditorSerializedData) \
	OBJECTMIXEREDITOR_API virtual ~UObjectMixerEditorSerializedData();


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_101_PROLOG
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectMixerEditorSerializedData;

// ********** End Class UObjectMixerEditorSerializedData *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSerializedData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
