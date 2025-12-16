// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterInstance.h"

#ifdef METAHUMANCHARACTERPALETTE_MetaHumanCharacterInstance_generated_h
#error "MetaHumanCharacterInstance.generated.h already included, missing '#pragma once' in MetaHumanCharacterInstance.h"
#endif
#define METAHUMANCHARACTERPALETTE_MetaHumanCharacterInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetaHumanCollection;
class UObject;
enum class EMetaHumanCharacterAssemblyResult : uint8;
enum class EMetaHumanCharacterPaletteBuildQuality : uint8;
struct FInstancedStruct;
struct FMetaHumanPaletteItemKey;
struct FMetaHumanPipelineSlotSelection;
struct FMetaHumanPipelineSlotSelectionData;

// ********** Begin Delegate FMetaHumanCharacterAssembled ******************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_46_DELEGATE \
METAHUMANCHARACTERPALETTE_API void FMetaHumanCharacterAssembled_DelegateWrapper(const FScriptDelegate& MetaHumanCharacterAssembled, EMetaHumanCharacterAssemblyResult Result);


// ********** End Delegate FMetaHumanCharacterAssembled ********************************************

// ********** Begin Delegate FMetaHumanCharacterInstanceUpdated ************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_49_DELEGATE \
METAHUMANCHARACTERPALETTE_API void FMetaHumanCharacterInstanceUpdated_DelegateWrapper(const FMulticastScriptDelegate& MetaHumanCharacterInstanceUpdated);


// ********** End Delegate FMetaHumanCharacterInstanceUpdated **************************************

// ********** Begin Delegate FMetaHumanCharacterInstanceUpdated_Unicast ****************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_50_DELEGATE \
METAHUMANCHARACTERPALETTE_API void FMetaHumanCharacterInstanceUpdated_Unicast_DelegateWrapper(const FScriptDelegate& MetaHumanCharacterInstanceUpdated_Unicast);


// ********** End Delegate FMetaHumanCharacterInstanceUpdated_Unicast ******************************

// ********** Begin Class UMetaHumanCharacterInstance **********************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterOnInstanceUpdated); \
	DECLARE_FUNCTION(execRegisterOnInstanceUpdated); \
	DECLARE_FUNCTION(execGetSlotSelectionData); \
	DECLARE_FUNCTION(execTryAddSlotSelection); \
	DECLARE_FUNCTION(execSetSingleSlotSelection); \
	DECLARE_FUNCTION(execGetMetaHumanCollection); \
	DECLARE_FUNCTION(execSetMetaHumanCollection); \
	DECLARE_FUNCTION(execClearAssemblyOutput); \
	DECLARE_FUNCTION(execGetAssemblyOutput); \
	DECLARE_FUNCTION(execAssemble);


struct Z_Construct_UClass_UMetaHumanCharacterInstance_Statics;
METAHUMANCHARACTERPALETTE_API UClass* Z_Construct_UClass_UMetaHumanCharacterInstance_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterInstance(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTERPALETTE_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterPalette"), Z_Construct_UClass_UMetaHumanCharacterInstance_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterInstance)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterInstance(UMetaHumanCharacterInstance&&) = delete; \
	UMetaHumanCharacterInstance(const UMetaHumanCharacterInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanCharacterInstance) \
	NO_API virtual ~UMetaHumanCharacterInstance();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_58_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterInstance;

// ********** End Class UMetaHumanCharacterInstance ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterPalette_Public_MetaHumanCharacterInstance_h

// ********** Begin Enum EMetaHumanCharacterAssemblyResult *****************************************
#define FOREACH_ENUM_EMETAHUMANCHARACTERASSEMBLYRESULT(op) \
	op(EMetaHumanCharacterAssemblyResult::Succeeded) \
	op(EMetaHumanCharacterAssemblyResult::Failed) 

enum class EMetaHumanCharacterAssemblyResult : uint8;
template<> struct TIsUEnumClass<EMetaHumanCharacterAssemblyResult> { enum { Value = true }; };
template<> METAHUMANCHARACTERPALETTE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanCharacterAssemblyResult>();
// ********** End Enum EMetaHumanCharacterAssemblyResult *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
