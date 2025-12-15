// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/MotionTrailOptions.h"

#ifdef SEQUENCER_MotionTrailOptions_generated_h
#error "MotionTrailOptions.generated.h already included, missing '#pragma once' in MotionTrailOptions.h"
#endif
#define SEQUENCER_MotionTrailOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMotionTrailToolOptions **************************************************
struct Z_Construct_UClass_UMotionTrailToolOptions_Statics;
SEQUENCER_API UClass* Z_Construct_UClass_UMotionTrailToolOptions_NoRegister();

#define FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionTrailToolOptions(); \
	friend struct ::Z_Construct_UClass_UMotionTrailToolOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SEQUENCER_API UClass* ::Z_Construct_UClass_UMotionTrailToolOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionTrailToolOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sequencer"), Z_Construct_UClass_UMotionTrailToolOptions_NoRegister) \
	DECLARE_SERIALIZER(UMotionTrailToolOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionTrailToolOptions(UMotionTrailToolOptions&&) = delete; \
	UMotionTrailToolOptions(const UMotionTrailToolOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCER_API, UMotionTrailToolOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrailToolOptions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMotionTrailToolOptions) \
	SEQUENCER_API virtual ~UMotionTrailToolOptions();


#define FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_29_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionTrailToolOptions;

// ********** End Class UMotionTrailToolOptions ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h

// ********** Begin Enum EMotionTrailTrailStyle ****************************************************
#define FOREACH_ENUM_EMOTIONTRAILTRAILSTYLE(op) \
	op(EMotionTrailTrailStyle::Default) \
	op(EMotionTrailTrailStyle::Dashed) \
	op(EMotionTrailTrailStyle::Time) \
	op(EMotionTrailTrailStyle::HeatMap) 

enum class EMotionTrailTrailStyle : uint8;
template<> struct TIsUEnumClass<EMotionTrailTrailStyle> { enum { Value = true }; };
template<> SEQUENCER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMotionTrailTrailStyle>();
// ********** End Enum EMotionTrailTrailStyle ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
