// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TwitterIntegrationBase.h"

#ifdef ENGINE_TwitterIntegrationBase_generated_h
#error "TwitterIntegrationBase.generated.h already included, missing '#pragma once' in TwitterIntegrationBase.h"
#endif
#define ENGINE_TwitterIntegrationBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTwitterIntegrationBase **************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTwitterRequest); \
	DECLARE_FUNCTION(execGetAccountName); \
	DECLARE_FUNCTION(execGetNumAccounts); \
	DECLARE_FUNCTION(execAuthorizeAccounts); \
	DECLARE_FUNCTION(execShowTweetUI); \
	DECLARE_FUNCTION(execCanShowTweetUI); \
	DECLARE_FUNCTION(execInit);


struct Z_Construct_UClass_UTwitterIntegrationBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUTwitterIntegrationBase(); \
	friend struct ::Z_Construct_UClass_UTwitterIntegrationBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTwitterIntegrationBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UTwitterIntegrationBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTwitterIntegrationBase_NoRegister) \
	DECLARE_SERIALIZER(UTwitterIntegrationBase) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwitterIntegrationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwitterIntegrationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwitterIntegrationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwitterIntegrationBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwitterIntegrationBase(UTwitterIntegrationBase&&) = delete; \
	UTwitterIntegrationBase(const UTwitterIntegrationBase&) = delete; \
	NO_API virtual ~UTwitterIntegrationBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwitterIntegrationBase;

// ********** End Class UTwitterIntegrationBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h

// ********** Begin Enum ETwitterRequestMethod *****************************************************
#define FOREACH_ENUM_ETWITTERREQUESTMETHOD(op) \
	op(TRM_Get) \
	op(TRM_Post) \
	op(TRM_Delete) 

enum ETwitterRequestMethod : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwitterRequestMethod>();
// ********** End Enum ETwitterRequestMethod *******************************************************

// ********** Begin Enum ETwitterIntegrationDelegate ***********************************************
#define FOREACH_ENUM_ETWITTERINTEGRATIONDELEGATE(op) \
	op(TID_AuthorizeComplete) \
	op(TID_TweetUIComplete) \
	op(TID_RequestComplete) 

enum ETwitterIntegrationDelegate : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwitterIntegrationDelegate>();
// ********** End Enum ETwitterIntegrationDelegate *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
