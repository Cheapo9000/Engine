// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RivermaxMediaOutput.h"

#ifdef RIVERMAXMEDIA_RivermaxMediaOutput_generated_h
#error "RivermaxMediaOutput.generated.h already included, missing '#pragma once' in RivermaxMediaOutput.h"
#endif
#define RIVERMAXMEDIA_RivermaxMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRivermaxStream ***************************************************
struct Z_Construct_UScriptStruct_FRivermaxStream_Statics;
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRivermaxStream_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRivermaxStream;
// ********** End ScriptStruct FRivermaxStream *****************************************************

// ********** Begin ScriptStruct FRivermaxVideoStream **********************************************
struct Z_Construct_UScriptStruct_FRivermaxVideoStream_Statics;
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRivermaxVideoStream_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRivermaxStream Super;


struct FRivermaxVideoStream;
// ********** End ScriptStruct FRivermaxVideoStream ************************************************

// ********** Begin ScriptStruct FRivermaxAncStream ************************************************
struct Z_Construct_UScriptStruct_FRivermaxAncStream_Statics;
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_122_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRivermaxAncStream_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRivermaxStream Super;


struct FRivermaxAncStream;
// ********** End ScriptStruct FRivermaxAncStream **************************************************

// ********** Begin Class URivermaxMediaOutput *****************************************************
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_135_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URivermaxMediaOutput, NO_API)


struct Z_Construct_UClass_URivermaxMediaOutput_Statics;
RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxMediaOutput_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURivermaxMediaOutput(); \
	friend struct ::Z_Construct_UClass_URivermaxMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIVERMAXMEDIA_API UClass* ::Z_Construct_UClass_URivermaxMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(URivermaxMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RivermaxMedia"), Z_Construct_UClass_URivermaxMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(URivermaxMediaOutput) \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_135_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URivermaxMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URivermaxMediaOutput(URivermaxMediaOutput&&) = delete; \
	URivermaxMediaOutput(const URivermaxMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivermaxMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivermaxMediaOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URivermaxMediaOutput) \
	NO_API virtual ~URivermaxMediaOutput();


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_132_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_135_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URivermaxMediaOutput;

// ********** End Class URivermaxMediaOutput *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h

// ********** Begin Enum ERivermaxMediaOutputPixelFormat *******************************************
#define FOREACH_ENUM_ERIVERMAXMEDIAOUTPUTPIXELFORMAT(op) \
	op(ERivermaxMediaOutputPixelFormat::PF_8BIT_YUV422) \
	op(ERivermaxMediaOutputPixelFormat::PF_10BIT_YUV422) \
	op(ERivermaxMediaOutputPixelFormat::PF_8BIT_RGB) \
	op(ERivermaxMediaOutputPixelFormat::PF_10BIT_RGB) \
	op(ERivermaxMediaOutputPixelFormat::PF_12BIT_RGB) \
	op(ERivermaxMediaOutputPixelFormat::PF_FLOAT16_RGB) 

enum class ERivermaxMediaOutputPixelFormat : uint8;
template<> struct TIsUEnumClass<ERivermaxMediaOutputPixelFormat> { enum { Value = true }; };
template<> RIVERMAXMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<ERivermaxMediaOutputPixelFormat>();
// ********** End Enum ERivermaxMediaOutputPixelFormat *********************************************

// ********** Begin Enum ERivermaxMediaAlignmentMode ***********************************************
#define FOREACH_ENUM_ERIVERMAXMEDIAALIGNMENTMODE(op) \
	op(ERivermaxMediaAlignmentMode::AlignmentPoint) \
	op(ERivermaxMediaAlignmentMode::FrameCreation) 

enum class ERivermaxMediaAlignmentMode : uint8;
template<> struct TIsUEnumClass<ERivermaxMediaAlignmentMode> { enum { Value = true }; };
template<> RIVERMAXMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<ERivermaxMediaAlignmentMode>();
// ********** End Enum ERivermaxMediaAlignmentMode *************************************************

// ********** Begin Enum ERivermaxFrameLockingMode *************************************************
#define FOREACH_ENUM_ERIVERMAXFRAMELOCKINGMODE(op) \
	op(ERivermaxFrameLockingMode::FreeRun) \
	op(ERivermaxFrameLockingMode::BlockOnReservation) 

enum class ERivermaxFrameLockingMode : uint8;
template<> struct TIsUEnumClass<ERivermaxFrameLockingMode> { enum { Value = true }; };
template<> RIVERMAXMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<ERivermaxFrameLockingMode>();
// ********** End Enum ERivermaxFrameLockingMode ***************************************************

// ********** Begin Enum ERivermaxAncStreamType ****************************************************
#define FOREACH_ENUM_ERIVERMAXANCSTREAMTYPE(op) \
	op(ERivermaxAncStreamType::None) \
	op(ERivermaxAncStreamType::ST2110_40_TC) 

enum class ERivermaxAncStreamType : uint8;
template<> struct TIsUEnumClass<ERivermaxAncStreamType> { enum { Value = true }; };
template<> RIVERMAXMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<ERivermaxAncStreamType>();
// ********** End Enum ERivermaxAncStreamType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
