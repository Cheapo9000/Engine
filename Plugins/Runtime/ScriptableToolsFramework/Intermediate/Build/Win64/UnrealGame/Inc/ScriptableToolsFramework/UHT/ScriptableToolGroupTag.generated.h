// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tags/ScriptableToolGroupTag.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableToolGroupTag_generated_h
#error "ScriptableToolGroupTag.generated.h already included, missing '#pragma once' in ScriptableToolGroupTag.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableToolGroupTag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScriptableToolGroupTag **************************************************
struct Z_Construct_UClass_UScriptableToolGroupTag_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolGroupTag_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Tags_ScriptableToolGroupTag_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolGroupTag(); \
	friend struct ::Z_Construct_UClass_UScriptableToolGroupTag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolGroupTag_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolGroupTag, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolGroupTag_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolGroupTag)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Tags_ScriptableToolGroupTag_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolGroupTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolGroupTag(UScriptableToolGroupTag&&) = delete; \
	UScriptableToolGroupTag(const UScriptableToolGroupTag&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolGroupTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolGroupTag); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolGroupTag) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolGroupTag();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Tags_ScriptableToolGroupTag_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Tags_ScriptableToolGroupTag_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Tags_ScriptableToolGroupTag_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Tags_ScriptableToolGroupTag_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolGroupTag;

// ********** End Class UScriptableToolGroupTag ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_Tags_ScriptableToolGroupTag_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
