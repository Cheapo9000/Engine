// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackmagicTimecodeProvider.h"

#ifdef BLACKMAGICMEDIA_BlackmagicTimecodeProvider_generated_h
#error "BlackmagicTimecodeProvider.generated.h already included, missing '#pragma once' in BlackmagicTimecodeProvider.h"
#endif
#define BLACKMAGICMEDIA_BlackmagicTimecodeProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackmagicTimecodeProvider **********************************************
struct Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics;
BLACKMAGICMEDIA_API UClass* Z_Construct_UClass_UBlackmagicTimecodeProvider_NoRegister();

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackmagicTimecodeProvider(); \
	friend struct ::Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLACKMAGICMEDIA_API UClass* ::Z_Construct_UClass_UBlackmagicTimecodeProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackmagicTimecodeProvider, UGenlockedTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMedia"), Z_Construct_UClass_UBlackmagicTimecodeProvider_NoRegister) \
	DECLARE_SERIALIZER(UBlackmagicTimecodeProvider)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackmagicTimecodeProvider(UBlackmagicTimecodeProvider&&) = delete; \
	UBlackmagicTimecodeProvider(const UBlackmagicTimecodeProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicTimecodeProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicTimecodeProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlackmagicTimecodeProvider) \
	NO_API virtual ~UBlackmagicTimecodeProvider();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_19_PROLOG
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackmagicTimecodeProvider;

// ********** End Class UBlackmagicTimecodeProvider ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
