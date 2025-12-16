// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimecodeSynchronizerFactory.h"

#ifdef TIMECODESYNCHRONIZEREDITOR_TimecodeSynchronizerFactory_generated_h
#error "TimecodeSynchronizerFactory.generated.h already included, missing '#pragma once' in TimecodeSynchronizerFactory.h"
#endif
#define TIMECODESYNCHRONIZEREDITOR_TimecodeSynchronizerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTimecodeSynchronizerFactory *********************************************
struct Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics;
TIMECODESYNCHRONIZEREDITOR_API UClass* Z_Construct_UClass_UTimecodeSynchronizerFactory_NoRegister();

#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTimecodeSynchronizerFactory(); \
	friend struct ::Z_Construct_UClass_UTimecodeSynchronizerFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMECODESYNCHRONIZEREDITOR_API UClass* ::Z_Construct_UClass_UTimecodeSynchronizerFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimecodeSynchronizerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimecodeSynchronizerEditor"), Z_Construct_UClass_UTimecodeSynchronizerFactory_NoRegister) \
	DECLARE_SERIALIZER(UTimecodeSynchronizerFactory)


#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimecodeSynchronizerFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimecodeSynchronizerFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimecodeSynchronizerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimecodeSynchronizerFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimecodeSynchronizerFactory(UTimecodeSynchronizerFactory&&) = delete; \
	UTimecodeSynchronizerFactory(const UTimecodeSynchronizerFactory&) = delete; \
	NO_API virtual ~UTimecodeSynchronizerFactory();


#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_11_PROLOG
#define FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_14_INCLASS \
	FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimecodeSynchronizerFactory;

// ********** End Class UTimecodeSynchronizerFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizerEditor_Public_TimecodeSynchronizerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
