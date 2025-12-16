// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SharedMemoryMediaOutput.h"

#ifdef SHAREDMEMORYMEDIA_SharedMemoryMediaOutput_generated_h
#error "SharedMemoryMediaOutput.generated.h already included, missing '#pragma once' in SharedMemoryMediaOutput.h"
#endif
#define SHAREDMEMORYMEDIA_SharedMemoryMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USharedMemoryMediaOutput *************************************************
struct Z_Construct_UClass_USharedMemoryMediaOutput_Statics;
SHAREDMEMORYMEDIA_API UClass* Z_Construct_UClass_USharedMemoryMediaOutput_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaOutput_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSharedMemoryMediaOutput(); \
	friend struct ::Z_Construct_UClass_USharedMemoryMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHAREDMEMORYMEDIA_API UClass* ::Z_Construct_UClass_USharedMemoryMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(USharedMemoryMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SharedMemoryMedia"), Z_Construct_UClass_USharedMemoryMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(USharedMemoryMediaOutput)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaOutput_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USharedMemoryMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USharedMemoryMediaOutput(USharedMemoryMediaOutput&&) = delete; \
	USharedMemoryMediaOutput(const USharedMemoryMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USharedMemoryMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USharedMemoryMediaOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USharedMemoryMediaOutput) \
	NO_API virtual ~USharedMemoryMediaOutput();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaOutput_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaOutput_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaOutput_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaOutput_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USharedMemoryMediaOutput;

// ********** End Class USharedMemoryMediaOutput ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
