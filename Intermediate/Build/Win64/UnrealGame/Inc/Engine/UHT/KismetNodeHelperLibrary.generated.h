// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetNodeHelperLibrary.h"

#ifdef ENGINE_KismetNodeHelperLibrary_generated_h
#error "KismetNodeHelperLibrary.generated.h already included, missing '#pragma once' in KismetNodeHelperLibrary.h"
#endif
#define ENGINE_KismetNodeHelperLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;

// ********** Begin Class UKismetNodeHelperLibrary *************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetEnumeratorValueFromIndex); \
	DECLARE_FUNCTION(execGetValidValue); \
	DECLARE_FUNCTION(execGetEnumeratorUserFriendlyName); \
	DECLARE_FUNCTION(execGetEnumeratorName); \
	DECLARE_FUNCTION(execGetFirstUnmarkedBit); \
	DECLARE_FUNCTION(execGetRandomUnmarkedBit); \
	DECLARE_FUNCTION(execGetUnmarkedBit); \
	DECLARE_FUNCTION(execHasMarkedBit); \
	DECLARE_FUNCTION(execHasUnmarkedBit); \
	DECLARE_FUNCTION(execClearAllBits); \
	DECLARE_FUNCTION(execClearBit); \
	DECLARE_FUNCTION(execMarkBit); \
	DECLARE_FUNCTION(execBitIsMarked);


struct Z_Construct_UClass_UKismetNodeHelperLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UKismetNodeHelperLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUKismetNodeHelperLibrary(); \
	friend struct ::Z_Construct_UClass_UKismetNodeHelperLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UKismetNodeHelperLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UKismetNodeHelperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UKismetNodeHelperLibrary_NoRegister) \
	DECLARE_SERIALIZER(UKismetNodeHelperLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetNodeHelperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetNodeHelperLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetNodeHelperLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetNodeHelperLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKismetNodeHelperLibrary(UKismetNodeHelperLibrary&&) = delete; \
	UKismetNodeHelperLibrary(const UKismetNodeHelperLibrary&) = delete; \
	ENGINE_API virtual ~UKismetNodeHelperLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKismetNodeHelperLibrary;

// ********** End Class UKismetNodeHelperLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetNodeHelperLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
