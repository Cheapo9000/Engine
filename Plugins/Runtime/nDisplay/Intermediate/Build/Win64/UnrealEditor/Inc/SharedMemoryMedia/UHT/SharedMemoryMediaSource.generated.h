// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SharedMemoryMediaSource.h"

#ifdef SHAREDMEMORYMEDIA_SharedMemoryMediaSource_generated_h
#error "SharedMemoryMediaSource.generated.h already included, missing '#pragma once' in SharedMemoryMediaSource.h"
#endif
#define SHAREDMEMORYMEDIA_SharedMemoryMediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USharedMemoryMediaSource *************************************************
struct Z_Construct_UClass_USharedMemoryMediaSource_Statics;
SHAREDMEMORYMEDIA_API UClass* Z_Construct_UClass_USharedMemoryMediaSource_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaSource_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSharedMemoryMediaSource(); \
	friend struct ::Z_Construct_UClass_USharedMemoryMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHAREDMEMORYMEDIA_API UClass* ::Z_Construct_UClass_USharedMemoryMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(USharedMemoryMediaSource, UMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SharedMemoryMedia"), Z_Construct_UClass_USharedMemoryMediaSource_NoRegister) \
	DECLARE_SERIALIZER(USharedMemoryMediaSource)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaSource_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USharedMemoryMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USharedMemoryMediaSource(USharedMemoryMediaSource&&) = delete; \
	USharedMemoryMediaSource(const USharedMemoryMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USharedMemoryMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USharedMemoryMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USharedMemoryMediaSource) \
	NO_API virtual ~USharedMemoryMediaSource();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaSource_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaSource_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaSource_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaSource_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USharedMemoryMediaSource;

// ********** End Class USharedMemoryMediaSource ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaSource_h

// ********** Begin Enum ESharedMemoryMediaSourceMode **********************************************
#define FOREACH_ENUM_ESHAREDMEMORYMEDIASOURCEMODE(op) \
	op(ESharedMemoryMediaSourceMode::Framelocked) \
	op(ESharedMemoryMediaSourceMode::Genlocked) \
	op(ESharedMemoryMediaSourceMode::Freerun) 

enum class ESharedMemoryMediaSourceMode : uint8;
template<> struct TIsUEnumClass<ESharedMemoryMediaSourceMode> { enum { Value = true }; };
template<> SHAREDMEMORYMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<ESharedMemoryMediaSourceMode>();
// ********** End Enum ESharedMemoryMediaSourceMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
