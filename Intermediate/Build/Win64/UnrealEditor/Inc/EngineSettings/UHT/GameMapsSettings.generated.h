// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMapsSettings.h"

#ifdef ENGINESETTINGS_GameMapsSettings_generated_h
#error "GameMapsSettings.generated.h already included, missing '#pragma once' in GameMapsSettings.h"
#endif
#define ENGINESETTINGS_GameMapsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameMapsSettings;

// ********** Begin ScriptStruct FGameModeName *****************************************************
struct Z_Construct_UScriptStruct_FGameModeName_Statics;
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameModeName_Statics; \
	ENGINESETTINGS_API static class UScriptStruct* StaticStruct();


struct FGameModeName;
// ********** End ScriptStruct FGameModeName *******************************************************

// ********** Begin ScriptStruct FTemplateMapInfoOverride ******************************************
struct Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics;
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTemplateMapInfoOverride_Statics; \
	ENGINESETTINGS_API static class UScriptStruct* StaticStruct();


struct FTemplateMapInfoOverride;
// ********** End ScriptStruct FTemplateMapInfoOverride ********************************************

// ********** Begin Class UGameMapsSettings ********************************************************
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_104_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetSkipAssigningGamepadToPlayer1); \
	DECLARE_FUNCTION(execSetSkipAssigningGamepadToPlayer1); \
	DECLARE_FUNCTION(execGetGameMapsSettings);


struct Z_Construct_UClass_UGameMapsSettings_Statics;
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameMapsSettings_NoRegister();

#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUGameMapsSettings(); \
	friend struct ::Z_Construct_UClass_UGameMapsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINESETTINGS_API UClass* ::Z_Construct_UClass_UGameMapsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameMapsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), Z_Construct_UClass_UGameMapsSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameMapsSettings)


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINESETTINGS_API UGameMapsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameMapsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINESETTINGS_API, UGameMapsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameMapsSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameMapsSettings(UGameMapsSettings&&) = delete; \
	UGameMapsSettings(const UGameMapsSettings&) = delete; \
	ENGINESETTINGS_API virtual ~UGameMapsSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_100_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_104_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_104_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameMapsSettings;

// ********** End Class UGameMapsSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h

// ********** Begin Enum ETwoPlayerSplitScreenType *************************************************
#define FOREACH_ENUM_ETWOPLAYERSPLITSCREENTYPE(op) \
	op(ETwoPlayerSplitScreenType::Horizontal) \
	op(ETwoPlayerSplitScreenType::Vertical) 

namespace ETwoPlayerSplitScreenType { enum Type : int; }
template<> ENGINESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwoPlayerSplitScreenType::Type>();
// ********** End Enum ETwoPlayerSplitScreenType ***************************************************

// ********** Begin Enum EThreePlayerSplitScreenType ***********************************************
#define FOREACH_ENUM_ETHREEPLAYERSPLITSCREENTYPE(op) \
	op(EThreePlayerSplitScreenType::FavorTop) \
	op(EThreePlayerSplitScreenType::FavorBottom) \
	op(EThreePlayerSplitScreenType::Vertical) \
	op(EThreePlayerSplitScreenType::Horizontal) 

namespace EThreePlayerSplitScreenType { enum Type : int; }
template<> ENGINESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EThreePlayerSplitScreenType::Type>();
// ********** End Enum EThreePlayerSplitScreenType *************************************************

// ********** Begin Enum EFourPlayerSplitScreenType ************************************************
#define FOREACH_ENUM_EFOURPLAYERSPLITSCREENTYPE(op) \
	op(EFourPlayerSplitScreenType::Grid) \
	op(EFourPlayerSplitScreenType::Vertical) \
	op(EFourPlayerSplitScreenType::Horizontal) 

enum class EFourPlayerSplitScreenType : uint8;
template<> struct TIsUEnumClass<EFourPlayerSplitScreenType> { enum { Value = true }; };
template<> ENGINESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EFourPlayerSplitScreenType>();
// ********** End Enum EFourPlayerSplitScreenType **************************************************

// ********** Begin Enum ESubLevelStripMode ********************************************************
#define FOREACH_ENUM_ESUBLEVELSTRIPMODE(op) \
	op(ESubLevelStripMode::ExactClass) \
	op(ESubLevelStripMode::IsChildOf) 

enum class ESubLevelStripMode : uint8;
template<> struct TIsUEnumClass<ESubLevelStripMode> { enum { Value = true }; };
template<> ENGINESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubLevelStripMode>();
// ********** End Enum ESubLevelStripMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
