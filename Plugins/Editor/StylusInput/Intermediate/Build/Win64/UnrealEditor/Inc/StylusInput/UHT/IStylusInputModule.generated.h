// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IStylusInputModule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STYLUSINPUT_IStylusInputModule_generated_h
#error "IStylusInputModule.generated.h already included, missing '#pragma once' in IStylusInputModule.h"
#endif
#define STYLUSINPUT_IStylusInputModule_generated_h

#define FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStylusInputSubsystem(); \
	friend struct Z_Construct_UClass_UStylusInputSubsystem_Statics; \
public: \
	DECLARE_CLASS(UStylusInputSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StylusInput"), NO_API) \
	DECLARE_SERIALIZER(UStylusInputSubsystem)


#define FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStylusInputSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStylusInputSubsystem(UStylusInputSubsystem&&); \
	UStylusInputSubsystem(const UStylusInputSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStylusInputSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStylusInputSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStylusInputSubsystem) \
	NO_API virtual ~UStylusInputSubsystem();


#define FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_58_PROLOG
#define FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STYLUSINPUT_API UClass* StaticClass<class UStylusInputSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_StylusInput_Source_StylusInput_Public_IStylusInputModule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
