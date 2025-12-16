// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/MovieSceneNiagaraSystemSpawnSection.h"

#ifdef NIAGARA_MovieSceneNiagaraSystemSpawnSection_generated_h
#error "MovieSceneNiagaraSystemSpawnSection.generated.h already included, missing '#pragma once' in MovieSceneNiagaraSystemSpawnSection.h"
#endif
#define NIAGARA_MovieSceneNiagaraSystemSpawnSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ENiagaraAgeUpdateMode : uint8;
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8;
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8;
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8;

// ********** Begin Class UMovieSceneNiagaraSystemSpawnSection *************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAllowScalability); \
	DECLARE_FUNCTION(execGetAllowScalability); \
	DECLARE_FUNCTION(execSetAgeUpdateMode); \
	DECLARE_FUNCTION(execGetAgeUpdateMode); \
	DECLARE_FUNCTION(execSetSectionEndBehavior); \
	DECLARE_FUNCTION(execGetSectionEndBehavior); \
	DECLARE_FUNCTION(execSetSectionEvaluateBehavior); \
	DECLARE_FUNCTION(execGetSectionEvaluateBehavior); \
	DECLARE_FUNCTION(execSetSectionStartBehavior); \
	DECLARE_FUNCTION(execGetSectionStartBehavior);


struct Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraSystemSpawnSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneNiagaraSystemSpawnSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraSystemSpawnSection)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraSystemSpawnSection(UMovieSceneNiagaraSystemSpawnSection&&) = delete; \
	UMovieSceneNiagaraSystemSpawnSection(const UMovieSceneNiagaraSystemSpawnSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UMovieSceneNiagaraSystemSpawnSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraSystemSpawnSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneNiagaraSystemSpawnSection) \
	NIAGARA_API virtual ~UMovieSceneNiagaraSystemSpawnSection();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_40_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneNiagaraSystemSpawnSection;

// ********** End Class UMovieSceneNiagaraSystemSpawnSection ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h

// ********** Begin Enum ENiagaraSystemSpawnSectionStartBehavior ***********************************
#define FOREACH_ENUM_ENIAGARASYSTEMSPAWNSECTIONSTARTBEHAVIOR(op) \
	op(ENiagaraSystemSpawnSectionStartBehavior::Activate) 

enum class ENiagaraSystemSpawnSectionStartBehavior : uint8;
template<> struct TIsUEnumClass<ENiagaraSystemSpawnSectionStartBehavior> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionStartBehavior>();
// ********** End Enum ENiagaraSystemSpawnSectionStartBehavior *************************************

// ********** Begin Enum ENiagaraSystemSpawnSectionEvaluateBehavior ********************************
#define FOREACH_ENUM_ENIAGARASYSTEMSPAWNSECTIONEVALUATEBEHAVIOR(op) \
	op(ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive) \
	op(ENiagaraSystemSpawnSectionEvaluateBehavior::None) 

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8;
template<> struct TIsUEnumClass<ENiagaraSystemSpawnSectionEvaluateBehavior> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionEvaluateBehavior>();
// ********** End Enum ENiagaraSystemSpawnSectionEvaluateBehavior **********************************

// ********** Begin Enum ENiagaraSystemSpawnSectionEndBehavior *************************************
#define FOREACH_ENUM_ENIAGARASYSTEMSPAWNSECTIONENDBEHAVIOR(op) \
	op(ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive) \
	op(ENiagaraSystemSpawnSectionEndBehavior::Deactivate) \
	op(ENiagaraSystemSpawnSectionEndBehavior::None) 

enum class ENiagaraSystemSpawnSectionEndBehavior : uint8;
template<> struct TIsUEnumClass<ENiagaraSystemSpawnSectionEndBehavior> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionEndBehavior>();
// ********** End Enum ENiagaraSystemSpawnSectionEndBehavior ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
