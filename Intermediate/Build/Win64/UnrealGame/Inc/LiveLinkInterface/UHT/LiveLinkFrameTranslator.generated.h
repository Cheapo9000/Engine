// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkFrameTranslator.h"

#ifdef LIVELINKINTERFACE_LiveLinkFrameTranslator_generated_h
#error "LiveLinkFrameTranslator.generated.h already included, missing '#pragma once' in LiveLinkFrameTranslator.h"
#endif
#define LIVELINKINTERFACE_LiveLinkFrameTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkFrameTranslator *************************************************
struct Z_Construct_UClass_ULiveLinkFrameTranslator_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkFrameTranslator(); \
	friend struct ::Z_Construct_UClass_ULiveLinkFrameTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkFrameTranslator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkFrameTranslator)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkFrameTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkFrameTranslator(ULiveLinkFrameTranslator&&) = delete; \
	ULiveLinkFrameTranslator(const ULiveLinkFrameTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkFrameTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFrameTranslator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkFrameTranslator) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkFrameTranslator();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_39_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkFrameTranslator;

// ********** End Class ULiveLinkFrameTranslator ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
