// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEditorPreviewActor.h"

#ifdef NIAGARA_NiagaraEditorPreviewActor_generated_h
#error "NiagaraEditorPreviewActor.generated.h already included, missing '#pragma once' in NiagaraEditorPreviewActor.h"
#endif
#define NIAGARA_NiagaraEditorPreviewActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANiagaraEditorPreviewActor ***********************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h_48_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ANiagaraEditorPreviewActor_Statics;
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraEditorPreviewActor_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraEditorPreviewActor(); \
	friend struct ::Z_Construct_UClass_ANiagaraEditorPreviewActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_ANiagaraEditorPreviewActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ANiagaraEditorPreviewActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_ANiagaraEditorPreviewActor_NoRegister) \
	DECLARE_SERIALIZER(ANiagaraEditorPreviewActor)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANiagaraEditorPreviewActor(ANiagaraEditorPreviewActor&&) = delete; \
	ANiagaraEditorPreviewActor(const ANiagaraEditorPreviewActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, ANiagaraEditorPreviewActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraEditorPreviewActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraEditorPreviewActor) \
	NIAGARA_API virtual ~ANiagaraEditorPreviewActor();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h_45_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h_48_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANiagaraEditorPreviewActor;

// ********** End Class ANiagaraEditorPreviewActor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h

// ********** Begin Enum ENiagaraEditorPreviewActorPlaybackType ************************************
#define FOREACH_ENUM_ENIAGARAEDITORPREVIEWACTORPLAYBACKTYPE(op) \
	op(ENiagaraEditorPreviewActorPlaybackType::Once) \
	op(ENiagaraEditorPreviewActorPlaybackType::Looping) \
	op(ENiagaraEditorPreviewActorPlaybackType::PingPong) 

enum class ENiagaraEditorPreviewActorPlaybackType;
template<> struct TIsUEnumClass<ENiagaraEditorPreviewActorPlaybackType> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraEditorPreviewActorPlaybackType>();
// ********** End Enum ENiagaraEditorPreviewActorPlaybackType **************************************

// ********** Begin Enum ENiagaraEditorPreviewActorShapeType ***************************************
#define FOREACH_ENUM_ENIAGARAEDITORPREVIEWACTORSHAPETYPE(op) \
	op(ENiagaraEditorPreviewActorShapeType::Circle) \
	op(ENiagaraEditorPreviewActorShapeType::Square) \
	op(ENiagaraEditorPreviewActorShapeType::Triangle) \
	op(ENiagaraEditorPreviewActorShapeType::Custom) \
	op(ENiagaraEditorPreviewActorShapeType::Blueprint) 

enum class ENiagaraEditorPreviewActorShapeType;
template<> struct TIsUEnumClass<ENiagaraEditorPreviewActorShapeType> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraEditorPreviewActorShapeType>();
// ********** End Enum ENiagaraEditorPreviewActorShapeType *****************************************

// ********** Begin Enum ENiagaraEditorPreviewActorRotationMode ************************************
#define FOREACH_ENUM_ENIAGARAEDITORPREVIEWACTORROTATIONMODE(op) \
	op(ENiagaraEditorPreviewActorRotationMode::None) \
	op(ENiagaraEditorPreviewActorRotationMode::DirectionOfTravel) \
	op(ENiagaraEditorPreviewActorRotationMode::Blueprint) 

enum class ENiagaraEditorPreviewActorRotationMode;
template<> struct TIsUEnumClass<ENiagaraEditorPreviewActorRotationMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraEditorPreviewActorRotationMode>();
// ********** End Enum ENiagaraEditorPreviewActorRotationMode **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
