// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileMediaOutput.h"

#ifdef MEDIAIOCORE_FileMediaOutput_generated_h
#error "FileMediaOutput.generated.h already included, missing '#pragma once' in FileMediaOutput.h"
#endif
#define MEDIAIOCORE_FileMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFileMediaOutput *********************************************************
struct Z_Construct_UClass_UFileMediaOutput_Statics;
MEDIAIOCORE_API UClass* Z_Construct_UClass_UFileMediaOutput_NoRegister();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileMediaOutput(); \
	friend struct ::Z_Construct_UClass_UFileMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAIOCORE_API UClass* ::Z_Construct_UClass_UFileMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UFileMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaIOCore"), Z_Construct_UClass_UFileMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(UFileMediaOutput)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFileMediaOutput(UFileMediaOutput&&) = delete; \
	UFileMediaOutput(const UFileMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAIOCORE_API, UFileMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileMediaOutput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFileMediaOutput) \
	MEDIAIOCORE_API virtual ~UFileMediaOutput();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_29_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFileMediaOutput;

// ********** End Class UFileMediaOutput ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h

// ********** Begin Enum EFileMediaOutputPixelFormat ***********************************************
#define FOREACH_ENUM_EFILEMEDIAOUTPUTPIXELFORMAT(op) \
	op(EFileMediaOutputPixelFormat::B8G8R8A8) \
	op(EFileMediaOutputPixelFormat::FloatRGBA) 

enum class EFileMediaOutputPixelFormat;
template<> struct TIsUEnumClass<EFileMediaOutputPixelFormat> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFileMediaOutputPixelFormat>();
// ********** End Enum EFileMediaOutputPixelFormat *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
