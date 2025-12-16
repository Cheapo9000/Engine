// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SharedMemoryMediaCapture.h"

#ifdef SHAREDMEMORYMEDIA_SharedMemoryMediaCapture_generated_h
#error "SharedMemoryMediaCapture.generated.h already included, missing '#pragma once' in SharedMemoryMediaCapture.h"
#endif
#define SHAREDMEMORYMEDIA_SharedMemoryMediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USharedMemoryMediaCapture ************************************************
struct Z_Construct_UClass_USharedMemoryMediaCapture_Statics;
SHAREDMEMORYMEDIA_API UClass* Z_Construct_UClass_USharedMemoryMediaCapture_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSharedMemoryMediaCapture(); \
	friend struct ::Z_Construct_UClass_USharedMemoryMediaCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHAREDMEMORYMEDIA_API UClass* ::Z_Construct_UClass_USharedMemoryMediaCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(USharedMemoryMediaCapture, UMediaCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SharedMemoryMedia"), Z_Construct_UClass_USharedMemoryMediaCapture_NoRegister) \
	DECLARE_SERIALIZER(USharedMemoryMediaCapture)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USharedMemoryMediaCapture(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USharedMemoryMediaCapture(USharedMemoryMediaCapture&&) = delete; \
	USharedMemoryMediaCapture(const USharedMemoryMediaCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USharedMemoryMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USharedMemoryMediaCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USharedMemoryMediaCapture) \
	NO_API virtual ~USharedMemoryMediaCapture();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USharedMemoryMediaCapture;

// ********** End Class USharedMemoryMediaCapture **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_SharedMemoryMedia_Public_SharedMemoryMediaCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
