// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_ChooserPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSERUNCOOKED_AnimGraphNode_ChooserPlayer_generated_h
#error "AnimGraphNode_ChooserPlayer.generated.h already included, missing '#pragma once' in AnimGraphNode_ChooserPlayer.h"
#endif
#define CHOOSERUNCOOKED_AnimGraphNode_ChooserPlayer_generated_h

#define FID_Engine_Plugins_Chooser_Source_ChooserUncooked_Public_AnimGraphNode_ChooserPlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_ChooserPlayer(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_ChooserPlayer_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_ChooserPlayer, UAnimGraphNode_BlendStack_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChooserUncooked"), CHOOSERUNCOOKED_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_ChooserPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimGraphNode_ChooserPlayer*>(this); }


#define FID_Engine_Plugins_Chooser_Source_ChooserUncooked_Public_AnimGraphNode_ChooserPlayer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSERUNCOOKED_API UAnimGraphNode_ChooserPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_ChooserPlayer(UAnimGraphNode_ChooserPlayer&&); \
	UAnimGraphNode_ChooserPlayer(const UAnimGraphNode_ChooserPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSERUNCOOKED_API, UAnimGraphNode_ChooserPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_ChooserPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_ChooserPlayer) \
	CHOOSERUNCOOKED_API virtual ~UAnimGraphNode_ChooserPlayer();


#define FID_Engine_Plugins_Chooser_Source_ChooserUncooked_Public_AnimGraphNode_ChooserPlayer_h_13_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ChooserUncooked_Public_AnimGraphNode_ChooserPlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ChooserUncooked_Public_AnimGraphNode_ChooserPlayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ChooserUncooked_Public_AnimGraphNode_ChooserPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSERUNCOOKED_API UClass* StaticClass<class UAnimGraphNode_ChooserPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ChooserUncooked_Public_AnimGraphNode_ChooserPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
