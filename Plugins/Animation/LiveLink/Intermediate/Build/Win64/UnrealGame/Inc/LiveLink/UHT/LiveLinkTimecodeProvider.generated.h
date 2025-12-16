// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkTimecodeProvider.h"

#ifdef LIVELINK_LiveLinkTimecodeProvider_generated_h
#error "LiveLinkTimecodeProvider.generated.h already included, missing '#pragma once' in LiveLinkTimecodeProvider.h"
#endif
#define LIVELINK_LiveLinkTimecodeProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkTimecodeProvider ************************************************
struct Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkTimecodeProvider(); \
	friend struct ::Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkTimecodeProvider, UTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkTimecodeProvider) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkTimecodeProvider(ULiveLinkTimecodeProvider&&) = delete; \
	ULiveLinkTimecodeProvider(const ULiveLinkTimecodeProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkTimecodeProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkTimecodeProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkTimecodeProvider) \
	LIVELINK_API virtual ~ULiveLinkTimecodeProvider();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_32_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkTimecodeProvider;

// ********** End Class ULiveLinkTimecodeProvider **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h

// ********** Begin Enum ELiveLinkTimecodeProviderEvaluationType ***********************************
#define FOREACH_ENUM_ELIVELINKTIMECODEPROVIDEREVALUATIONTYPE(op) \
	op(ELiveLinkTimecodeProviderEvaluationType::Lerp) \
	op(ELiveLinkTimecodeProviderEvaluationType::Nearest) \
	op(ELiveLinkTimecodeProviderEvaluationType::Latest) 

enum class ELiveLinkTimecodeProviderEvaluationType;
template<> struct TIsUEnumClass<ELiveLinkTimecodeProviderEvaluationType> { enum { Value = true }; };
template<> LIVELINK_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkTimecodeProviderEvaluationType>();
// ********** End Enum ELiveLinkTimecodeProviderEvaluationType *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
