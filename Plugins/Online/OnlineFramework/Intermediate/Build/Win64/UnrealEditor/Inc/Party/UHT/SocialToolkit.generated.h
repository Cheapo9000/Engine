// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocialToolkit.h"

#ifdef PARTY_SocialToolkit_generated_h
#error "SocialToolkit.generated.h already included, missing '#pragma once' in SocialToolkit.h"
#endif
#define PARTY_SocialToolkit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USocialToolkit ***********************************************************
struct Z_Construct_UClass_USocialToolkit_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialToolkit_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialToolkit(); \
	friend struct ::Z_Construct_UClass_USocialToolkit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialToolkit_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialToolkit, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialToolkit_NoRegister) \
	DECLARE_SERIALIZER(USocialToolkit) \
	DECLARE_WITHIN(USocialManager) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialToolkit(USocialToolkit&&) = delete; \
	USocialToolkit(const USocialToolkit&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialToolkit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialToolkit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialToolkit) \
	PARTY_API virtual ~USocialToolkit();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_48_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialToolkit;

// ********** End Class USocialToolkit *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialToolkit_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
