// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorActionUtility.h"

#ifdef BLUTILITY_ActorActionUtility_generated_h
#error "ActorActionUtility.generated.h already included, missing '#pragma once' in ActorActionUtility.h"
#endif
#define BLUTILITY_ActorActionUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;

// ********** Begin Class UActorActionUtility ******************************************************
#define FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSupportedClasses);


#define FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UActorActionUtility_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UActorActionUtility_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorActionUtility(); \
	friend struct ::Z_Construct_UClass_UActorActionUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UActorActionUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorActionUtility, UEditorUtilityObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UActorActionUtility_NoRegister) \
	DECLARE_SERIALIZER(UActorActionUtility) \
	virtual UObject* _getUObject() const override { return const_cast<UActorActionUtility*>(this); }


#define FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UActorActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorActionUtility(UActorActionUtility&&) = delete; \
	UActorActionUtility(const UActorActionUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UActorActionUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorActionUtility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorActionUtility) \
	BLUTILITY_API virtual ~UActorActionUtility();


#define FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_17_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorActionUtility;

// ********** End Class UActorActionUtility ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_ActorActionUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
