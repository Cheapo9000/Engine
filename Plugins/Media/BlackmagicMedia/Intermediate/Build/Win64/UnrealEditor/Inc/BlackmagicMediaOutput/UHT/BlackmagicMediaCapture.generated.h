// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackmagicMediaCapture.h"

#ifdef BLACKMAGICMEDIAOUTPUT_BlackmagicMediaCapture_generated_h
#error "BlackmagicMediaCapture.generated.h already included, missing '#pragma once' in BlackmagicMediaCapture.h"
#endif
#define BLACKMAGICMEDIAOUTPUT_BlackmagicMediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlackmagicMediaCapture **************************************************
struct Z_Construct_UClass_UBlackmagicMediaCapture_Statics;
BLACKMAGICMEDIAOUTPUT_API UClass* Z_Construct_UClass_UBlackmagicMediaCapture_NoRegister();

#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackmagicMediaCapture(); \
	friend struct ::Z_Construct_UClass_UBlackmagicMediaCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLACKMAGICMEDIAOUTPUT_API UClass* ::Z_Construct_UClass_UBlackmagicMediaCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlackmagicMediaCapture, UMediaCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlackmagicMediaOutput"), Z_Construct_UClass_UBlackmagicMediaCapture_NoRegister) \
	DECLARE_SERIALIZER(UBlackmagicMediaCapture)


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlackmagicMediaCapture(UBlackmagicMediaCapture&&) = delete; \
	UBlackmagicMediaCapture(const UBlackmagicMediaCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackmagicMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackmagicMediaCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlackmagicMediaCapture) \
	NO_API virtual ~UBlackmagicMediaCapture();


#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_34_PROLOG
#define FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlackmagicMediaCapture;

// ********** End Class UBlackmagicMediaCapture ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
