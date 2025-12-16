// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSequenceLibrary.h"

#ifdef AVALANCHESEQUENCE_AvaSequenceLibrary_generated_h
#error "AvaSequenceLibrary.generated.h already included, missing '#pragma once' in AvaSequenceLibrary.h"
#endif
#define AVALANCHESEQUENCE_AvaSequenceLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAvaSequencePlaybackObject;
class UObject;
enum class EAvaSequencePlayMode : uint8;
struct FAvaSequencePlayParams;
struct FAvaSequenceTime;

// ********** Begin Class UAvaSequenceLibrary ******************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeSingleFramePlaySettings); \
	DECLARE_FUNCTION(execGetPlaybackObject);


struct Z_Construct_UClass_UAvaSequenceLibrary_Statics;
AVALANCHESEQUENCE_API UClass* Z_Construct_UClass_UAvaSequenceLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSequenceLibrary(); \
	friend struct ::Z_Construct_UClass_UAvaSequenceLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESEQUENCE_API UClass* ::Z_Construct_UClass_UAvaSequenceLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSequenceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheSequence"), Z_Construct_UClass_UAvaSequenceLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAvaSequenceLibrary)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHESEQUENCE_API UAvaSequenceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSequenceLibrary(UAvaSequenceLibrary&&) = delete; \
	UAvaSequenceLibrary(const UAvaSequenceLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESEQUENCE_API, UAvaSequenceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequenceLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSequenceLibrary) \
	AVALANCHESEQUENCE_API virtual ~UAvaSequenceLibrary();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceLibrary_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSequenceLibrary;

// ********** End Class UAvaSequenceLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_AvaSequenceLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
