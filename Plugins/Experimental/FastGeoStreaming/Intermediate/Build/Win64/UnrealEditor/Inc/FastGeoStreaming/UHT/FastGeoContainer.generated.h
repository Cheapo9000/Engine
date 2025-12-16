// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FastGeoContainer.h"

#ifdef FASTGEOSTREAMING_FastGeoContainer_generated_h
#error "FastGeoContainer.generated.h already included, missing '#pragma once' in FastGeoContainer.h"
#endif
#define FASTGEOSTREAMING_FastGeoContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFastGeoContainer ********************************************************
#define FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h_102_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFastGeoContainer, NO_API)


struct Z_Construct_UClass_UFastGeoContainer_Statics;
FASTGEOSTREAMING_API UClass* Z_Construct_UClass_UFastGeoContainer_NoRegister();

#define FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFastGeoContainer(); \
	friend struct ::Z_Construct_UClass_UFastGeoContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FASTGEOSTREAMING_API UClass* ::Z_Construct_UClass_UFastGeoContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UFastGeoContainer, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FastGeoStreaming"), Z_Construct_UClass_UFastGeoContainer_NoRegister) \
	DECLARE_SERIALIZER(UFastGeoContainer) \
	FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h_102_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ULevel) \
	virtual UObject* _getUObject() const override { return const_cast<UFastGeoContainer*>(this); }


#define FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFastGeoContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFastGeoContainer(UFastGeoContainer&&) = delete; \
	UFastGeoContainer(const UFastGeoContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFastGeoContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFastGeoContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFastGeoContainer) \
	NO_API virtual ~UFastGeoContainer();


#define FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h_99_PROLOG
#define FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFastGeoContainer;

// ********** End Class UFastGeoContainer **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FastGeoStreaming_Source_FastGeoStreaming_Internal_FastGeoContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
