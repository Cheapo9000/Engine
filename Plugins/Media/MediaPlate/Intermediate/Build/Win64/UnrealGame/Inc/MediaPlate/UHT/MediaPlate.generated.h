// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlate.h"

#ifdef MEDIAPLATE_MediaPlate_generated_h
#error "MediaPlate.generated.h already included, missing '#pragma once' in MediaPlate.h"
#endif
#define MEDIAPLATE_MediaPlate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMediaPlate **************************************************************
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsHoldoutCompositeEnabled); \
	DECLARE_FUNCTION(execSetHoldoutCompositeEnabled);


struct Z_Construct_UClass_AMediaPlate_Statics;
MEDIAPLATE_API UClass* Z_Construct_UClass_AMediaPlate_NoRegister();

#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAMediaPlate(); \
	friend struct ::Z_Construct_UClass_AMediaPlate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAPLATE_API UClass* ::Z_Construct_UClass_AMediaPlate_NoRegister(); \
public: \
	DECLARE_CLASS2(AMediaPlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaPlate"), Z_Construct_UClass_AMediaPlate_NoRegister) \
	DECLARE_SERIALIZER(AMediaPlate)


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAPLATE_API AMediaPlate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMediaPlate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAPLATE_API, AMediaPlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMediaPlate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMediaPlate(AMediaPlate&&) = delete; \
	AMediaPlate(const AMediaPlate&) = delete; \
	MEDIAPLATE_API virtual ~AMediaPlate();


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_19_PROLOG
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_22_INCLASS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMediaPlate;

// ********** End Class AMediaPlate ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
