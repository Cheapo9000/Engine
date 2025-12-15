// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimAssetFindReplaceNotifies.h"

#ifdef PERSONA_AnimAssetFindReplaceNotifies_generated_h
#error "AnimAssetFindReplaceNotifies.generated.h already included, missing '#pragma once' in AnimAssetFindReplaceNotifies.h"
#endif
#define PERSONA_AnimAssetFindReplaceNotifies_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimAssetFindReplaceNotifies ********************************************
struct Z_Construct_UClass_UAnimAssetFindReplaceNotifies_Statics;
PERSONA_API UClass* Z_Construct_UClass_UAnimAssetFindReplaceNotifies_NoRegister();

#define FID_Engine_Source_Editor_Persona_Public_AnimAssetFindReplaceNotifies_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimAssetFindReplaceNotifies(); \
	friend struct ::Z_Construct_UClass_UAnimAssetFindReplaceNotifies_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UAnimAssetFindReplaceNotifies_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimAssetFindReplaceNotifies, UAnimAssetFindReplaceProcessor_StringBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UAnimAssetFindReplaceNotifies_NoRegister) \
	DECLARE_SERIALIZER(UAnimAssetFindReplaceNotifies)


#define FID_Engine_Source_Editor_Persona_Public_AnimAssetFindReplaceNotifies_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API UAnimAssetFindReplaceNotifies(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimAssetFindReplaceNotifies(UAnimAssetFindReplaceNotifies&&) = delete; \
	UAnimAssetFindReplaceNotifies(const UAnimAssetFindReplaceNotifies&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, UAnimAssetFindReplaceNotifies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimAssetFindReplaceNotifies); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimAssetFindReplaceNotifies) \
	PERSONA_API virtual ~UAnimAssetFindReplaceNotifies();


#define FID_Engine_Source_Editor_Persona_Public_AnimAssetFindReplaceNotifies_h_10_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_AnimAssetFindReplaceNotifies_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_AnimAssetFindReplaceNotifies_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_AnimAssetFindReplaceNotifies_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimAssetFindReplaceNotifies;

// ********** End Class UAnimAssetFindReplaceNotifies **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_AnimAssetFindReplaceNotifies_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
