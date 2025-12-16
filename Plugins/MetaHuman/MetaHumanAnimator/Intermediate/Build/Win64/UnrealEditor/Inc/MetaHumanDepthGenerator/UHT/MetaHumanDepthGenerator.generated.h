// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanDepthGenerator.h"

#ifdef METAHUMANDEPTHGENERATOR_MetaHumanDepthGenerator_generated_h
#error "MetaHumanDepthGenerator.generated.h already included, missing '#pragma once' in MetaHumanDepthGenerator.h"
#endif
#define METAHUMANDEPTHGENERATOR_MetaHumanDepthGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFootageCaptureData;
class UMetaHumanGenerateDepthWindowOptions;

// ********** Begin Class UMetaHumanDepthGenerator *************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanDepthGenerator_Private_MetaHumanDepthGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcess);


struct Z_Construct_UClass_UMetaHumanDepthGenerator_Statics;
METAHUMANDEPTHGENERATOR_API UClass* Z_Construct_UClass_UMetaHumanDepthGenerator_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanDepthGenerator_Private_MetaHumanDepthGenerator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanDepthGenerator(); \
	friend struct ::Z_Construct_UClass_UMetaHumanDepthGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANDEPTHGENERATOR_API UClass* ::Z_Construct_UClass_UMetaHumanDepthGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanDepthGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanDepthGenerator"), Z_Construct_UClass_UMetaHumanDepthGenerator_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanDepthGenerator)


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanDepthGenerator_Private_MetaHumanDepthGenerator_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanDepthGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanDepthGenerator(UMetaHumanDepthGenerator&&) = delete; \
	UMetaHumanDepthGenerator(const UMetaHumanDepthGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanDepthGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanDepthGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanDepthGenerator) \
	NO_API virtual ~UMetaHumanDepthGenerator();


#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanDepthGenerator_Private_MetaHumanDepthGenerator_h_14_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanDepthGenerator_Private_MetaHumanDepthGenerator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanDepthGenerator_Private_MetaHumanDepthGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanDepthGenerator_Private_MetaHumanDepthGenerator_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanDepthGenerator_Private_MetaHumanDepthGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanDepthGenerator;

// ********** End Class UMetaHumanDepthGenerator ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanDepthGenerator_Private_MetaHumanDepthGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
