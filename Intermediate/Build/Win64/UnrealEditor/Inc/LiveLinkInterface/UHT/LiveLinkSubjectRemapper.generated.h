// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkSubjectRemapper.h"

#ifdef LIVELINKINTERFACE_LiveLinkSubjectRemapper_generated_h
#error "LiveLinkSubjectRemapper.generated.h already included, missing '#pragma once' in LiveLinkSubjectRemapper.h"
#endif
#define LIVELINKINTERFACE_LiveLinkSubjectRemapper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkSubjectRemapper *************************************************
struct Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectRemapper_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSubjectRemapper(); \
	friend struct ::Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkSubjectRemapper_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkSubjectRemapper, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkSubjectRemapper_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkSubjectRemapper)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKINTERFACE_API ULiveLinkSubjectRemapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkSubjectRemapper(ULiveLinkSubjectRemapper&&) = delete; \
	ULiveLinkSubjectRemapper(const ULiveLinkSubjectRemapper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkSubjectRemapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSubjectRemapper); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkSubjectRemapper) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkSubjectRemapper();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_33_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h_37_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkSubjectRemapper;

// ********** End Class ULiveLinkSubjectRemapper ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
