// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RivermaxSettings.h"

#ifdef RIVERMAXCORE_RivermaxSettings_generated_h
#error "RivermaxSettings.generated.h already included, missing '#pragma once' in RivermaxSettings.h"
#endif
#define RIVERMAXCORE_RivermaxSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URivermaxSettings ********************************************************
struct Z_Construct_UClass_URivermaxSettings_Statics;
RIVERMAXCORE_API UClass* Z_Construct_UClass_URivermaxSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURivermaxSettings(); \
	friend struct ::Z_Construct_UClass_URivermaxSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIVERMAXCORE_API UClass* ::Z_Construct_UClass_URivermaxSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URivermaxSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RivermaxCore"), Z_Construct_UClass_URivermaxSettings_NoRegister) \
	DECLARE_SERIALIZER(URivermaxSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URivermaxSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URivermaxSettings(URivermaxSettings&&) = delete; \
	URivermaxSettings(const URivermaxSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivermaxSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivermaxSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URivermaxSettings) \
	NO_API virtual ~URivermaxSettings();


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URivermaxSettings;

// ********** End Class URivermaxSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h

// ********** Begin Enum ERivermaxTimeSource *******************************************************
#define FOREACH_ENUM_ERIVERMAXTIMESOURCE(op) \
	op(ERivermaxTimeSource::PTP) \
	op(ERivermaxTimeSource::Engine) \
	op(ERivermaxTimeSource::System) 

enum class ERivermaxTimeSource;
template<> struct TIsUEnumClass<ERivermaxTimeSource> { enum { Value = true }; };
template<> RIVERMAXCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERivermaxTimeSource>();
// ********** End Enum ERivermaxTimeSource *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
