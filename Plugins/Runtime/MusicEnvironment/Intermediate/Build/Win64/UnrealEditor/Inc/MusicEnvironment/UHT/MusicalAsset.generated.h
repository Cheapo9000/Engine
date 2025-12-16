// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MusicTypes/MusicalAsset.h"

#ifdef MUSICENVIRONMENT_MusicalAsset_generated_h
#error "MusicalAsset.generated.h already included, missing '#pragma once' in MusicalAsset.h"
#endif
#define MUSICENVIRONMENT_MusicalAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMusicHandle;
class UAudioComponent;
class UObject;
struct FGameplayTag;

// ********** Begin Interface UMusicalAsset ********************************************************
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPrepareToPlay);


struct Z_Construct_UClass_UMusicalAsset_Statics;
MUSICENVIRONMENT_API UClass* Z_Construct_UClass_UMusicalAsset_NoRegister();

#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MUSICENVIRONMENT_API UMusicalAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicalAsset(UMusicalAsset&&) = delete; \
	UMusicalAsset(const UMusicalAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MUSICENVIRONMENT_API, UMusicalAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicalAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicalAsset) \
	virtual ~UMusicalAsset() = default;


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_46_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMusicalAsset(); \
	friend struct ::Z_Construct_UClass_UMusicalAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MUSICENVIRONMENT_API UClass* ::Z_Construct_UClass_UMusicalAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicalAsset, UMusicMapSource, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MusicEnvironment"), Z_Construct_UClass_UMusicalAsset_NoRegister) \
	DECLARE_SERIALIZER(UMusicalAsset)


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_46_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_46_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_46_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMusicalAsset() {} \
public: \
	typedef UMusicalAsset UClassType; \
	typedef IMusicalAsset ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_43_PROLOG
#define FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicalAsset;

// ********** End Interface UMusicalAsset **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MusicEnvironment_Source_MusicEnvironment_Public_MusicTypes_MusicalAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
