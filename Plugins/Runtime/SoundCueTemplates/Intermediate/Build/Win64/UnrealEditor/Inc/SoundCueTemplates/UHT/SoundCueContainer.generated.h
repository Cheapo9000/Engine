// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueContainer.h"

#ifdef SOUNDCUETEMPLATES_SoundCueContainer_generated_h
#error "SoundCueContainer.generated.h already included, missing '#pragma once' in SoundCueContainer.h"
#endif
#define SOUNDCUETEMPLATES_SoundCueContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundCueContainer *******************************************************
struct Z_Construct_UClass_USoundCueContainer_Statics;
SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueContainer_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueContainer(); \
	friend struct ::Z_Construct_UClass_USoundCueContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDCUETEMPLATES_API UClass* ::Z_Construct_UClass_USoundCueContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueContainer, USoundCueTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundCueTemplates"), Z_Construct_UClass_USoundCueContainer_NoRegister) \
	DECLARE_SERIALIZER(USoundCueContainer)


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDCUETEMPLATES_API USoundCueContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDCUETEMPLATES_API, USoundCueContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueContainer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueContainer(USoundCueContainer&&) = delete; \
	USoundCueContainer(const USoundCueContainer&) = delete; \
	SOUNDCUETEMPLATES_API virtual ~USoundCueContainer();


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_INCLASS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueContainer;

// ********** End Class USoundCueContainer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h

// ********** Begin Enum ESoundContainerType *******************************************************
#define FOREACH_ENUM_ESOUNDCONTAINERTYPE(op) \
	op(ESoundContainerType::Concatenate) \
	op(ESoundContainerType::Randomize) \
	op(ESoundContainerType::Mix) 

enum class ESoundContainerType : uint8;
template<> struct TIsUEnumClass<ESoundContainerType> { enum { Value = true }; };
template<> SOUNDCUETEMPLATES_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundContainerType>();
// ********** End Enum ESoundContainerType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
