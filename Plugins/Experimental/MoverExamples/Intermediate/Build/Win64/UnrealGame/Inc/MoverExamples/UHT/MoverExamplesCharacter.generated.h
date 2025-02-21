// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverExamplesCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacterMoverComponent;
struct FMoverInputCmdContext;
#ifdef MOVEREXAMPLES_MoverExamplesCharacter_generated_h
#error "MoverExamplesCharacter.generated.h already included, missing '#pragma once' in MoverExamplesCharacter.h"
#endif
#define MOVEREXAMPLES_MoverExamplesCharacter_generated_h

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestMoveByVelocity); \
	DECLARE_FUNCTION(execRequestMoveByIntent); \
	DECLARE_FUNCTION(execGetMoverComponent);


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoverExamplesCharacter(); \
	friend struct Z_Construct_UClass_AMoverExamplesCharacter_Statics; \
public: \
	DECLARE_CLASS(AMoverExamplesCharacter, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverExamples"), NO_API) \
	DECLARE_SERIALIZER(AMoverExamplesCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMoverExamplesCharacter*>(this); }


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMoverExamplesCharacter(AMoverExamplesCharacter&&); \
	AMoverExamplesCharacter(const AMoverExamplesCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoverExamplesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoverExamplesCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoverExamplesCharacter) \
	NO_API virtual ~AMoverExamplesCharacter();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEREXAMPLES_API UClass* StaticClass<class AMoverExamplesCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
