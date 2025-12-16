// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequenceCameraShake.h"

#ifdef TEMPLATESEQUENCE_SequenceCameraShake_generated_h
#error "SequenceCameraShake.generated.h already included, missing '#pragma once' in SequenceCameraShake.h"
#endif
#define TEMPLATESEQUENCE_SequenceCameraShake_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USequenceCameraShakePattern **********************************************
struct Z_Construct_UClass_USequenceCameraShakePattern_Statics;
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakePattern_NoRegister();

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequenceCameraShakePattern(); \
	friend struct ::Z_Construct_UClass_USequenceCameraShakePattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMPLATESEQUENCE_API UClass* ::Z_Construct_UClass_USequenceCameraShakePattern_NoRegister(); \
public: \
	DECLARE_CLASS2(USequenceCameraShakePattern, UCameraShakePattern, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TemplateSequence"), Z_Construct_UClass_USequenceCameraShakePattern_NoRegister) \
	DECLARE_SERIALIZER(USequenceCameraShakePattern)


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequenceCameraShakePattern(USequenceCameraShakePattern&&) = delete; \
	USequenceCameraShakePattern(const USequenceCameraShakePattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMPLATESEQUENCE_API, USequenceCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceCameraShakePattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceCameraShakePattern) \
	TEMPLATESEQUENCE_API virtual ~USequenceCameraShakePattern();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_20_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequenceCameraShakePattern;

// ********** End Class USequenceCameraShakePattern ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_SequenceCameraShake_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
