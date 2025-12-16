// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocialDebugTools.h"

#ifdef PARTY_SocialDebugTools_generated_h
#error "SocialDebugTools.generated.h already included, missing '#pragma once' in SocialDebugTools.h"
#endif
#define PARTY_SocialDebugTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USocialDebugTools ********************************************************
struct Z_Construct_UClass_USocialDebugTools_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialDebugTools_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialDebugTools(); \
	friend struct ::Z_Construct_UClass_USocialDebugTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialDebugTools_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialDebugTools, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialDebugTools_NoRegister) \
	DECLARE_SERIALIZER(USocialDebugTools) \
	DECLARE_WITHIN(USocialManager) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialDebugTools(USocialDebugTools&&) = delete; \
	USocialDebugTools(const USocialDebugTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialDebugTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialDebugTools); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialDebugTools) \
	PARTY_API virtual ~USocialDebugTools();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_26_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialDebugTools;

// ********** End Class USocialDebugTools **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialDebugTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
