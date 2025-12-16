// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TemplateSequenceActor.h"

#ifdef TEMPLATESEQUENCE_TemplateSequenceActor_generated_h
#error "TemplateSequenceActor.generated.h already included, missing '#pragma once' in TemplateSequenceActor.h"
#endif
#define TEMPLATESEQUENCE_TemplateSequenceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTemplateSequence;
class UTemplateSequencePlayer;

// ********** Begin ScriptStruct FTemplateSequenceBindingOverrideData ******************************
struct Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics;
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics; \
	TEMPLATESEQUENCE_API static class UScriptStruct* StaticStruct();


struct FTemplateSequenceBindingOverrideData;
// ********** End ScriptStruct FTemplateSequenceBindingOverrideData ********************************

// ********** Begin Class ATemplateSequenceActor ***************************************************
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBinding); \
	DECLARE_FUNCTION(execGetSequencePlayer); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execLoadSequence); \
	DECLARE_FUNCTION(execGetSequence);


struct Z_Construct_UClass_ATemplateSequenceActor_Statics;
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_ATemplateSequenceActor_NoRegister();

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATemplateSequenceActor(); \
	friend struct ::Z_Construct_UClass_ATemplateSequenceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMPLATESEQUENCE_API UClass* ::Z_Construct_UClass_ATemplateSequenceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ATemplateSequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TemplateSequence"), Z_Construct_UClass_ATemplateSequenceActor_NoRegister) \
	DECLARE_SERIALIZER(ATemplateSequenceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ATemplateSequenceActor*>(this); } \
	TEMPLATESEQUENCE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequencePlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=SequencePlayer	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(TEMPLATESEQUENCE_API)


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATemplateSequenceActor(ATemplateSequenceActor&&) = delete; \
	ATemplateSequenceActor(const ATemplateSequenceActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMPLATESEQUENCE_API, ATemplateSequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATemplateSequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATemplateSequenceActor) \
	TEMPLATESEQUENCE_API virtual ~ATemplateSequenceActor();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_45_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_52_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATemplateSequenceActor;

// ********** End Class ATemplateSequenceActor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
