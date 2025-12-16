// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeRecorderSource/TakeRecorderLiveLinkSource.h"

#ifdef LIVELINKSEQUENCER_TakeRecorderLiveLinkSource_generated_h
#error "TakeRecorderLiveLinkSource.generated.h already included, missing '#pragma once' in TakeRecorderLiveLinkSource.h"
#endif
#define LIVELINKSEQUENCER_TakeRecorderLiveLinkSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkSubjectProperty ******************************************
struct Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics;
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics; \
	LIVELINKSEQUENCER_API static class UScriptStruct* StaticStruct();


struct FLiveLinkSubjectProperty;
// ********** End ScriptStruct FLiveLinkSubjectProperty ********************************************

// ********** Begin Class ULiveLinkSubjectProperties ***********************************************
struct Z_Construct_UClass_ULiveLinkSubjectProperties_Statics;
LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_ULiveLinkSubjectProperties_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSubjectProperties(); \
	friend struct ::Z_Construct_UClass_ULiveLinkSubjectProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKSEQUENCER_API UClass* ::Z_Construct_UClass_ULiveLinkSubjectProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkSubjectProperties, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkSequencer"), Z_Construct_UClass_ULiveLinkSubjectProperties_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkSubjectProperties)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkSubjectProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkSubjectProperties(ULiveLinkSubjectProperties&&) = delete; \
	ULiveLinkSubjectProperties(const ULiveLinkSubjectProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkSubjectProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSubjectProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSubjectProperties) \
	NO_API virtual ~ULiveLinkSubjectProperties();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_35_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkSubjectProperties;

// ********** End Class ULiveLinkSubjectProperties *************************************************

// ********** Begin Class UTakeRecorderLiveLinkSource **********************************************
struct Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics;
LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UTakeRecorderLiveLinkSource_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeRecorderLiveLinkSource(); \
	friend struct ::Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKSEQUENCER_API UClass* ::Z_Construct_UClass_UTakeRecorderLiveLinkSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeRecorderLiveLinkSource, UTakeRecorderSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkSequencer"), Z_Construct_UClass_UTakeRecorderLiveLinkSource_NoRegister) \
	DECLARE_SERIALIZER(UTakeRecorderLiveLinkSource) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeRecorderLiveLinkSource(UTakeRecorderLiveLinkSource&&) = delete; \
	UTakeRecorderLiveLinkSource(const UTakeRecorderLiveLinkSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeRecorderLiveLinkSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeRecorderLiveLinkSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeRecorderLiveLinkSource) \
	NO_API virtual ~UTakeRecorderLiveLinkSource();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_47_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_52_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeRecorderLiveLinkSource;

// ********** End Class UTakeRecorderLiveLinkSource ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
