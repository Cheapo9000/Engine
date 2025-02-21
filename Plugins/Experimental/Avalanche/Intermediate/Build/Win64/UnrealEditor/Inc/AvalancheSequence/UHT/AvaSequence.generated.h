// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvaMark;
struct FAvaTagHandle;
#ifdef AVALANCHESEQUENCE_AvaSequence_generated_h
#error "AvaSequence.generated.h already included, missing '#pragma once' in AvaSequence.h"
#endif
#define AVALANCHESEQUENCE_AvaSequence_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMark); \
	DECLARE_FUNCTION(execGetMark); \
	DECLARE_FUNCTION(execGetMarks); \
	DECLARE_FUNCTION(execGetEndTime); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetSequenceTag); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execGetLabel);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAvaSequence, NO_API)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSequence(); \
	friend struct Z_Construct_UClass_UAvaSequence_Statics; \
public: \
	DECLARE_CLASS(UAvaSequence, ULevelSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheSequence"), NO_API) \
	DECLARE_SERIALIZER(UAvaSequence) \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_34_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("MotionDesign");} \



#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSequence(UAvaSequence&&); \
	UAvaSequence(const UAvaSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSequence)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESEQUENCE_API UClass* StaticClass<class UAvaSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
