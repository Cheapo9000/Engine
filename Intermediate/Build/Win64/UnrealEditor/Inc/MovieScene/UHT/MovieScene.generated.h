// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene.h"

#ifdef MOVIESCENE_MovieScene_generated_h
#error "MovieScene.generated.h already included, missing '#pragma once' in MovieScene.h"
#endif
#define MOVIESCENE_MovieScene_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMovieSceneExpansionState *****************************************
struct Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneExpansionState;
// ********** End ScriptStruct FMovieSceneExpansionState *******************************************

// ********** Begin ScriptStruct FMovieSceneEditorData *********************************************
struct Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneEditorData;
// ********** End ScriptStruct FMovieSceneEditorData ***********************************************

// ********** Begin ScriptStruct FMovieSceneTrackLabels ********************************************
struct Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_154_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneTrackLabels;
// ********** End ScriptStruct FMovieSceneTrackLabels **********************************************

// ********** Begin ScriptStruct FMovieSceneObjectBindingIDs ***************************************
struct Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_177_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneObjectBindingIDs;
// ********** End ScriptStruct FMovieSceneObjectBindingIDs *****************************************

// ********** Begin ScriptStruct FMovieSceneSectionGroup *******************************************
struct Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_189_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FMovieSceneSectionGroup;
// ********** End ScriptStruct FMovieSceneSectionGroup *********************************************

// ********** Begin Class UMovieSceneNodeGroup *****************************************************
struct Z_Construct_UClass_UMovieSceneNodeGroup_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_243_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNodeGroup(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNodeGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNodeGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNodeGroup)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_243_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneNodeGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNodeGroup(UMovieSceneNodeGroup&&) = delete; \
	UMovieSceneNodeGroup(const UMovieSceneNodeGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneNodeGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNodeGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNodeGroup) \
	MOVIESCENE_API virtual ~UMovieSceneNodeGroup();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_240_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_243_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_243_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_243_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNodeGroup;

// ********** End Class UMovieSceneNodeGroup *******************************************************

// ********** Begin Class UMovieSceneNodeGroupCollection *******************************************
struct Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_302_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNodeGroupCollection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNodeGroupCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNodeGroupCollection)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_302_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneNodeGroupCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNodeGroupCollection(UMovieSceneNodeGroupCollection&&) = delete; \
	UMovieSceneNodeGroupCollection(const UMovieSceneNodeGroupCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneNodeGroupCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNodeGroupCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNodeGroupCollection) \
	MOVIESCENE_API virtual ~UMovieSceneNodeGroupCollection();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_299_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_302_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_302_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_302_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNodeGroupCollection;

// ********** End Class UMovieSceneNodeGroupCollection *********************************************

// ********** Begin Class UMovieScene **************************************************************
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_359_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScene, MOVIESCENE_API)


struct Z_Construct_UClass_UMovieScene_Statics;
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_359_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene(); \
	friend struct ::Z_Construct_UClass_UMovieScene_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENE_API UClass* ::Z_Construct_UClass_UMovieScene_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieScene, UMovieSceneDecorationContainerObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), Z_Construct_UClass_UMovieScene_NoRegister) \
	DECLARE_SERIALIZER(UMovieScene) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_359_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_359_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieScene(UMovieScene&&) = delete; \
	UMovieScene(const UMovieScene&) = delete; \
	MOVIESCENE_API virtual ~UMovieScene();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_355_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_359_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_359_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_359_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieScene;

// ********** End Class UMovieScene ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
