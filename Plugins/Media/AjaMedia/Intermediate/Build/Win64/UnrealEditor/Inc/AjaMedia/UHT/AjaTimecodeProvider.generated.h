// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AjaTimecodeProvider.h"

#ifdef AJAMEDIA_AjaTimecodeProvider_generated_h
#error "AjaTimecodeProvider.generated.h already included, missing '#pragma once' in AjaTimecodeProvider.h"
#endif
#define AJAMEDIA_AjaTimecodeProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAjaTimecodeProvider *****************************************************
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAjaTimecodeProvider, NO_API)


struct Z_Construct_UClass_UAjaTimecodeProvider_Statics;
AJAMEDIA_API UClass* Z_Construct_UClass_UAjaTimecodeProvider_NoRegister();

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAjaTimecodeProvider(); \
	friend struct ::Z_Construct_UClass_UAjaTimecodeProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AJAMEDIA_API UClass* ::Z_Construct_UClass_UAjaTimecodeProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAjaTimecodeProvider, UGenlockedTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMedia"), Z_Construct_UClass_UAjaTimecodeProvider_NoRegister) \
	DECLARE_SERIALIZER(UAjaTimecodeProvider) \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_29_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAjaTimecodeProvider(UAjaTimecodeProvider&&) = delete; \
	UAjaTimecodeProvider(const UAjaTimecodeProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaTimecodeProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaTimecodeProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAjaTimecodeProvider) \
	NO_API virtual ~UAjaTimecodeProvider();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_25_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_29_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAjaTimecodeProvider;

// ********** End Class UAjaTimecodeProvider *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
