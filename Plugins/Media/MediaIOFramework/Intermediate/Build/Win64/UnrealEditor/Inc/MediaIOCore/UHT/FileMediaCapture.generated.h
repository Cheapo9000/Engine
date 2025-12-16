// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileMediaCapture.h"

#ifdef MEDIAIOCORE_FileMediaCapture_generated_h
#error "FileMediaCapture.generated.h already included, missing '#pragma once' in FileMediaCapture.h"
#endif
#define MEDIAIOCORE_FileMediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFileMediaCapture ********************************************************
struct Z_Construct_UClass_UFileMediaCapture_Statics;
MEDIAIOCORE_API UClass* Z_Construct_UClass_UFileMediaCapture_NoRegister();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileMediaCapture(); \
	friend struct ::Z_Construct_UClass_UFileMediaCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAIOCORE_API UClass* ::Z_Construct_UClass_UFileMediaCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UFileMediaCapture, UMediaCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaIOCore"), Z_Construct_UClass_UFileMediaCapture_NoRegister) \
	DECLARE_SERIALIZER(UFileMediaCapture)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAIOCORE_API UFileMediaCapture(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFileMediaCapture(UFileMediaCapture&&) = delete; \
	UFileMediaCapture(const UFileMediaCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAIOCORE_API, UFileMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileMediaCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFileMediaCapture) \
	MEDIAIOCORE_API virtual ~UFileMediaCapture();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_15_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFileMediaCapture;

// ********** End Class UFileMediaCapture **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
