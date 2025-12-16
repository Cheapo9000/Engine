// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocialManager.h"

#ifdef PARTY_SocialManager_generated_h
#error "SocialManager.generated.h already included, missing '#pragma once' in SocialManager.h"
#endif
#define PARTY_SocialManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USocialManager ***********************************************************
struct Z_Construct_UClass_USocialManager_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialManager_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialManager(); \
	friend struct ::Z_Construct_UClass_USocialManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialManager_NoRegister) \
	DECLARE_SERIALIZER(USocialManager) \
	DECLARE_WITHIN(UGameInstance) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialManager(USocialManager&&) = delete; \
	USocialManager(const USocialManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialManager) \
	PARTY_API virtual ~USocialManager();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_33_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialManager;

// ********** End Class USocialManager *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
