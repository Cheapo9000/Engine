// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlateIMInGameWidgetBase.h"

#ifdef SLATEIMINGAME_SlateIMInGameWidgetBase_generated_h
#error "SlateIMInGameWidgetBase.generated.h already included, missing '#pragma once' in SlateIMInGameWidgetBase.h"
#endif
#define SLATEIMINGAME_SlateIMInGameWidgetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASlateIMInGameWidgetBase *************************************************
#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SLATEIMINGAME_API virtual void Server_Destroy_Implementation(); \
	DECLARE_FUNCTION(execServer_Destroy);


#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ASlateIMInGameWidgetBase_Statics;
SLATEIMINGAME_API UClass* Z_Construct_UClass_ASlateIMInGameWidgetBase_NoRegister();

#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlateIMInGameWidgetBase(); \
	friend struct ::Z_Construct_UClass_ASlateIMInGameWidgetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATEIMINGAME_API UClass* ::Z_Construct_UClass_ASlateIMInGameWidgetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ASlateIMInGameWidgetBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlateIMInGame"), Z_Construct_UClass_ASlateIMInGameWidgetBase_NoRegister) \
	DECLARE_SERIALIZER(ASlateIMInGameWidgetBase)


#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASlateIMInGameWidgetBase(ASlateIMInGameWidgetBase&&) = delete; \
	ASlateIMInGameWidgetBase(const ASlateIMInGameWidgetBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATEIMINGAME_API, ASlateIMInGameWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlateIMInGameWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlateIMInGameWidgetBase) \
	SLATEIMINGAME_API virtual ~ASlateIMInGameWidgetBase();


#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_17_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASlateIMInGameWidgetBase;

// ********** End Class ASlateIMInGameWidgetBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SlateIM_Source_SlateIMInGame_Public_SlateIMInGameWidgetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
