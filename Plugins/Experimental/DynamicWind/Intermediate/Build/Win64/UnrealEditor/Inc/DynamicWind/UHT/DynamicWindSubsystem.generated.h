// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicWindSubsystem.h"

#ifdef DYNAMICWIND_DynamicWindSubsystem_generated_h
#error "DynamicWindSubsystem.generated.h already included, missing '#pragma once' in DynamicWindSubsystem.h"
#endif
#define DYNAMICWIND_DynamicWindSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDynamicWindParameters;

// ********** Begin Class UDynamicWindSubsystem ****************************************************
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateWindParameters); \
	DECLARE_FUNCTION(execGetBlendedWindAmplitude);


struct Z_Construct_UClass_UDynamicWindSubsystem_Statics;
DYNAMICWIND_API UClass* Z_Construct_UClass_UDynamicWindSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicWindSubsystem(); \
	friend struct ::Z_Construct_UClass_UDynamicWindSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICWIND_API UClass* ::Z_Construct_UClass_UDynamicWindSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicWindSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicWind"), Z_Construct_UClass_UDynamicWindSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDynamicWindSubsystem)


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicWindSubsystem(UDynamicWindSubsystem&&) = delete; \
	UDynamicWindSubsystem(const UDynamicWindSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicWindSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicWindSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicWindSubsystem) \
	NO_API virtual ~UDynamicWindSubsystem();


#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicWindSubsystem;

// ********** End Class UDynamicWindSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicWind_Source_DynamicWind_Public_DynamicWindSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
