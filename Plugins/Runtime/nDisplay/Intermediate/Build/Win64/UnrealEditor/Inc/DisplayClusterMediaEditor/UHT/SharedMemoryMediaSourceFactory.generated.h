// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SharedMemoryMediaSourceFactory.h"

#ifdef DISPLAYCLUSTERMEDIAEDITOR_SharedMemoryMediaSourceFactory_generated_h
#error "SharedMemoryMediaSourceFactory.generated.h already included, missing '#pragma once' in SharedMemoryMediaSourceFactory.h"
#endif
#define DISPLAYCLUSTERMEDIAEDITOR_SharedMemoryMediaSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USharedMemoryMediaSourceFactory ******************************************
struct Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics;
DISPLAYCLUSTERMEDIAEDITOR_API UClass* Z_Construct_UClass_USharedMemoryMediaSourceFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSharedMemoryMediaSourceFactory(); \
	friend struct ::Z_Construct_UClass_USharedMemoryMediaSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTERMEDIAEDITOR_API UClass* ::Z_Construct_UClass_USharedMemoryMediaSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USharedMemoryMediaSourceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DisplayClusterMediaEditor"), Z_Construct_UClass_USharedMemoryMediaSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(USharedMemoryMediaSourceFactory)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USharedMemoryMediaSourceFactory(USharedMemoryMediaSourceFactory&&) = delete; \
	USharedMemoryMediaSourceFactory(const USharedMemoryMediaSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USharedMemoryMediaSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USharedMemoryMediaSourceFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USharedMemoryMediaSourceFactory) \
	NO_API virtual ~USharedMemoryMediaSourceFactory();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USharedMemoryMediaSourceFactory;

// ********** End Class USharedMemoryMediaSourceFactory ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMediaEditor_Private_SharedMemoryMediaSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
