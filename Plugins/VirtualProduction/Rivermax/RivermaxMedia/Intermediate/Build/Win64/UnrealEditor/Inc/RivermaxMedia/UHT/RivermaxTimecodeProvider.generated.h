// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RivermaxTimecodeProvider.h"

#ifdef RIVERMAXMEDIA_RivermaxTimecodeProvider_generated_h
#error "RivermaxTimecodeProvider.generated.h already included, missing '#pragma once' in RivermaxTimecodeProvider.h"
#endif
#define RIVERMAXMEDIA_RivermaxTimecodeProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URivermaxTimecodeProvider ************************************************
struct Z_Construct_UClass_URivermaxTimecodeProvider_Statics;
RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxTimecodeProvider_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxTimecodeProvider_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURivermaxTimecodeProvider(); \
	friend struct ::Z_Construct_UClass_URivermaxTimecodeProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIVERMAXMEDIA_API UClass* ::Z_Construct_UClass_URivermaxTimecodeProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(URivermaxTimecodeProvider, UGenlockedTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RivermaxMedia"), Z_Construct_UClass_URivermaxTimecodeProvider_NoRegister) \
	DECLARE_SERIALIZER(URivermaxTimecodeProvider)


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxTimecodeProvider_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URivermaxTimecodeProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URivermaxTimecodeProvider(URivermaxTimecodeProvider&&) = delete; \
	URivermaxTimecodeProvider(const URivermaxTimecodeProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivermaxTimecodeProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivermaxTimecodeProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URivermaxTimecodeProvider) \
	NO_API virtual ~URivermaxTimecodeProvider();


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxTimecodeProvider_h_26_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxTimecodeProvider_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxTimecodeProvider_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxTimecodeProvider_h_30_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URivermaxTimecodeProvider;

// ********** End Class URivermaxTimecodeProvider **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxTimecodeProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
