// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundscapeSubsystem.h"

#ifdef SOUNDSCAPE_SoundscapeSubsystem_generated_h
#error "SoundscapeSubsystem.generated.h already included, missing '#pragma once' in SoundscapeSubsystem.h"
#endif
#define SOUNDSCAPE_SoundscapeSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FSoundscapeColorPointCollection;
struct FSoundscapePaletteCollection;

// ********** Begin ScriptStruct FSoundscapePaletteCollection **************************************
struct Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics;
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundscapePaletteCollection_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSoundscapePaletteCollection;
// ********** End ScriptStruct FSoundscapePaletteCollection ****************************************

// ********** Begin ScriptStruct FSoundscapePaletteCollectionLoaded ********************************
struct Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics;
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundscapePaletteCollectionLoaded_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSoundscapePaletteCollectionLoaded;
// ********** End ScriptStruct FSoundscapePaletteCollectionLoaded **********************************

// ********** Begin ScriptStruct FSoundscapeColorPointCollection ***********************************
struct Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics;
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundscapeColorPointCollection_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSoundscapeColorPointCollection;
// ********** End ScriptStruct FSoundscapeColorPointCollection *************************************

// ********** Begin Class USoundscapeColorPointHashCellDensity *************************************
struct Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashCellDensity_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundscapeColorPointHashCellDensity(); \
	friend struct ::Z_Construct_UClass_USoundscapeColorPointHashCellDensity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_USoundscapeColorPointHashCellDensity_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapeColorPointHashCellDensity, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_USoundscapeColorPointHashCellDensity_NoRegister) \
	DECLARE_SERIALIZER(USoundscapeColorPointHashCellDensity)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundscapeColorPointHashCellDensity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapeColorPointHashCellDensity(USoundscapeColorPointHashCellDensity&&) = delete; \
	USoundscapeColorPointHashCellDensity(const USoundscapeColorPointHashCellDensity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeColorPointHashCellDensity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeColorPointHashCellDensity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapeColorPointHashCellDensity) \
	NO_API virtual ~USoundscapeColorPointHashCellDensity();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_52_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapeColorPointHashCellDensity;

// ********** End Class USoundscapeColorPointHashCellDensity ***************************************

// ********** Begin Class USoundscapeColorPointHashMap *********************************************
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGridCenterpoint); \
	DECLARE_FUNCTION(execCalculateHashIndex); \
	DECLARE_FUNCTION(execAddColorPointArrayToHash); \
	DECLARE_FUNCTION(execAddColorPointToHash); \
	DECLARE_FUNCTION(execNumColorPointsInCell); \
	DECLARE_FUNCTION(execClearHash); \
	DECLARE_FUNCTION(execInitializeHash);


struct Z_Construct_UClass_USoundscapeColorPointHashMap_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundscapeColorPointHashMap(); \
	friend struct ::Z_Construct_UClass_USoundscapeColorPointHashMap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapeColorPointHashMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_USoundscapeColorPointHashMap_NoRegister) \
	DECLARE_SERIALIZER(USoundscapeColorPointHashMap)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundscapeColorPointHashMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapeColorPointHashMap(USoundscapeColorPointHashMap&&) = delete; \
	USoundscapeColorPointHashMap(const USoundscapeColorPointHashMap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeColorPointHashMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeColorPointHashMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapeColorPointHashMap) \
	NO_API virtual ~USoundscapeColorPointHashMap();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_65_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapeColorPointHashMap;

// ********** End Class USoundscapeColorPointHashMap ***********************************************

// ********** Begin Class USoundscapeColorPointHashMapCollection ***********************************
struct Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundscapeColorPointHashMapCollection(); \
	friend struct ::Z_Construct_UClass_USoundscapeColorPointHashMapCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapeColorPointHashMapCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister) \
	DECLARE_SERIALIZER(USoundscapeColorPointHashMapCollection)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundscapeColorPointHashMapCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapeColorPointHashMapCollection(USoundscapeColorPointHashMapCollection&&) = delete; \
	USoundscapeColorPointHashMapCollection(const USoundscapeColorPointHashMapCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeColorPointHashMapCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeColorPointHashMapCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapeColorPointHashMapCollection) \
	NO_API virtual ~USoundscapeColorPointHashMapCollection();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_151_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapeColorPointHashMapCollection;

// ********** End Class USoundscapeColorPointHashMapCollection *************************************

// ********** Begin Class USoundscapeSubsystem *****************************************************
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckColorPointDensity); \
	DECLARE_FUNCTION(execRemoveColorPointCollection); \
	DECLARE_FUNCTION(execAddColorPointCollection); \
	DECLARE_FUNCTION(execRemovePaletteCollection); \
	DECLARE_FUNCTION(execAddPaletteCollection); \
	DECLARE_FUNCTION(execRestartSoundscape); \
	DECLARE_FUNCTION(execClearState); \
	DECLARE_FUNCTION(execSetState);


struct Z_Construct_UClass_USoundscapeSubsystem_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_207_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundscapeSubsystem(); \
	friend struct ::Z_Construct_UClass_USoundscapeSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_USoundscapeSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapeSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_USoundscapeSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USoundscapeSubsystem)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_207_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundscapeSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapeSubsystem(USoundscapeSubsystem&&) = delete; \
	USoundscapeSubsystem(const USoundscapeSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundscapeSubsystem) \
	NO_API virtual ~USoundscapeSubsystem();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_204_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_207_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_207_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h_207_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapeSubsystem;

// ********** End Class USoundscapeSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSubsystem_h

// ********** Begin Enum ESoundscapeLOD ************************************************************
#define FOREACH_ENUM_ESOUNDSCAPELOD(op) \
	op(ESoundscapeLOD::LOD1) \
	op(ESoundscapeLOD::LOD2) \
	op(ESoundscapeLOD::LOD3) 

enum class ESoundscapeLOD : uint8;
template<> struct TIsUEnumClass<ESoundscapeLOD> { enum { Value = true }; };
template<> SOUNDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundscapeLOD>();
// ********** End Enum ESoundscapeLOD **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
