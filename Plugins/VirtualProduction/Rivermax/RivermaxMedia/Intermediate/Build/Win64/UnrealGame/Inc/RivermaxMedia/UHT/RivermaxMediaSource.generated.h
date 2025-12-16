// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RivermaxMediaSource.h"

#ifdef RIVERMAXMEDIA_RivermaxMediaSource_generated_h
#error "RivermaxMediaSource.generated.h already included, missing '#pragma once' in RivermaxMediaSource.h"
#endif
#define RIVERMAXMEDIA_RivermaxMediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URivermaxMediaSource *****************************************************
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URivermaxMediaSource, NO_API)


struct Z_Construct_UClass_URivermaxMediaSource_Statics;
RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxMediaSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURivermaxMediaSource(); \
	friend struct ::Z_Construct_UClass_URivermaxMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIVERMAXMEDIA_API UClass* ::Z_Construct_UClass_URivermaxMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(URivermaxMediaSource, UCaptureCardMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RivermaxMedia"), Z_Construct_UClass_URivermaxMediaSource_NoRegister) \
	DECLARE_SERIALIZER(URivermaxMediaSource) \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_42_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URivermaxMediaSource(URivermaxMediaSource&&) = delete; \
	URivermaxMediaSource(const URivermaxMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivermaxMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivermaxMediaSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URivermaxMediaSource) \
	NO_API virtual ~URivermaxMediaSource();


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_39_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URivermaxMediaSource;

// ********** End Class URivermaxMediaSource *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h

// ********** Begin Enum ERivermaxMediaSourcePixelFormat *******************************************
#define FOREACH_ENUM_ERIVERMAXMEDIASOURCEPIXELFORMAT(op) \
	op(ERivermaxMediaSourcePixelFormat::YUV422_8bit) \
	op(ERivermaxMediaSourcePixelFormat::YUV422_10bit) \
	op(ERivermaxMediaSourcePixelFormat::RGB_8bit) \
	op(ERivermaxMediaSourcePixelFormat::RGB_10bit) \
	op(ERivermaxMediaSourcePixelFormat::RGB_12bit) \
	op(ERivermaxMediaSourcePixelFormat::RGB_16bit_Float) 

enum class ERivermaxMediaSourcePixelFormat : uint8;
template<> struct TIsUEnumClass<ERivermaxMediaSourcePixelFormat> { enum { Value = true }; };
template<> RIVERMAXMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<ERivermaxMediaSourcePixelFormat>();
// ********** End Enum ERivermaxMediaSourcePixelFormat *********************************************

// ********** Begin Enum ERivermaxPlayerMode_DEPRECATED ********************************************
#define FOREACH_ENUM_ERIVERMAXPLAYERMODE_DEPRECATED(op) \
	op(ERivermaxPlayerMode_DEPRECATED::Latest) \
	op(ERivermaxPlayerMode_DEPRECATED::Framelock) 

enum class ERivermaxPlayerMode_DEPRECATED : uint8;
template<> struct TIsUEnumClass<ERivermaxPlayerMode_DEPRECATED> { enum { Value = true }; };
template<> RIVERMAXMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<ERivermaxPlayerMode_DEPRECATED>();
// ********** End Enum ERivermaxPlayerMode_DEPRECATED **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
