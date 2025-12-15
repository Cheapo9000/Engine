// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NamedSlot.h"

#ifdef UMG_NamedSlot_generated_h
#error "NamedSlot.generated.h already included, missing '#pragma once' in NamedSlot.h"
#endif
#define UMG_NamedSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNamedSlot ***************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNamedSlot, UMG_API)


struct Z_Construct_UClass_UNamedSlot_Statics;
UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNamedSlot(); \
	friend struct ::Z_Construct_UClass_UNamedSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UNamedSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UNamedSlot, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UNamedSlot_NoRegister) \
	DECLARE_SERIALIZER(UNamedSlot) \
	FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UNamedSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamedSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UNamedSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamedSlot); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNamedSlot(UNamedSlot&&) = delete; \
	UNamedSlot(const UNamedSlot&) = delete; \
	UMG_API virtual ~UNamedSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNamedSlot;

// ********** End Class UNamedSlot *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
