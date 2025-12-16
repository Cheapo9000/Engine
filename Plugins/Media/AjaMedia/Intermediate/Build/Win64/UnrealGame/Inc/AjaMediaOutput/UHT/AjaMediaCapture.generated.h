// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AjaMediaCapture.h"

#ifdef AJAMEDIAOUTPUT_AjaMediaCapture_generated_h
#error "AjaMediaCapture.generated.h already included, missing '#pragma once' in AjaMediaCapture.h"
#endif
#define AJAMEDIAOUTPUT_AjaMediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAjaMediaCapture *********************************************************
struct Z_Construct_UClass_UAjaMediaCapture_Statics;
AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaMediaCapture_NoRegister();

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAjaMediaCapture(); \
	friend struct ::Z_Construct_UClass_UAjaMediaCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AJAMEDIAOUTPUT_API UClass* ::Z_Construct_UClass_UAjaMediaCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UAjaMediaCapture, UMediaCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AjaMediaOutput"), Z_Construct_UClass_UAjaMediaCapture_NoRegister) \
	DECLARE_SERIALIZER(UAjaMediaCapture)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAjaMediaCapture(UAjaMediaCapture&&) = delete; \
	UAjaMediaCapture(const UAjaMediaCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaMediaCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAjaMediaCapture)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_32_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAjaMediaCapture;

// ********** End Class UAjaMediaCapture ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
