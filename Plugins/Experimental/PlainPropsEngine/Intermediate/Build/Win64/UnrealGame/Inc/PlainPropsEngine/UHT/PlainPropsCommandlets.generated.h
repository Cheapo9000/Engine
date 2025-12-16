// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlainPropsCommandlets.h"

#ifdef PLAINPROPSENGINE_PlainPropsCommandlets_generated_h
#error "PlainPropsCommandlets.generated.h already included, missing '#pragma once' in PlainPropsCommandlets.h"
#endif
#define PLAINPROPSENGINE_PlainPropsCommandlets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTestPlainPropsCommandlet ************************************************
struct Z_Construct_UClass_UTestPlainPropsCommandlet_Statics;
PLAINPROPSENGINE_API UClass* Z_Construct_UClass_UTestPlainPropsCommandlet_NoRegister();

#define FID_Engine_Plugins_Experimental_PlainPropsEngine_Source_Public_PlainPropsCommandlets_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTestPlainPropsCommandlet(); \
	friend struct ::Z_Construct_UClass_UTestPlainPropsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLAINPROPSENGINE_API UClass* ::Z_Construct_UClass_UTestPlainPropsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UTestPlainPropsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PlainPropsEngine"), Z_Construct_UClass_UTestPlainPropsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UTestPlainPropsCommandlet)


#define FID_Engine_Plugins_Experimental_PlainPropsEngine_Source_Public_PlainPropsCommandlets_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestPlainPropsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestPlainPropsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestPlainPropsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestPlainPropsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTestPlainPropsCommandlet(UTestPlainPropsCommandlet&&) = delete; \
	UTestPlainPropsCommandlet(const UTestPlainPropsCommandlet&) = delete; \
	NO_API virtual ~UTestPlainPropsCommandlet();


#define FID_Engine_Plugins_Experimental_PlainPropsEngine_Source_Public_PlainPropsCommandlets_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_PlainPropsEngine_Source_Public_PlainPropsCommandlets_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PlainPropsEngine_Source_Public_PlainPropsCommandlets_h_13_INCLASS \
	FID_Engine_Plugins_Experimental_PlainPropsEngine_Source_Public_PlainPropsCommandlets_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTestPlainPropsCommandlet;

// ********** End Class UTestPlainPropsCommandlet **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PlainPropsEngine_Source_Public_PlainPropsCommandlets_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
