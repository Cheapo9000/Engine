// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArchVisCharMovementComponent.h"

#ifdef ARCHVISCHARACTER_ArchVisCharMovementComponent_generated_h
#error "ArchVisCharMovementComponent.generated.h already included, missing '#pragma once' in ArchVisCharMovementComponent.h"
#endif
#define ARCHVISCHARACTER_ArchVisCharMovementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UArchVisCharMovementComponent ********************************************
struct Z_Construct_UClass_UArchVisCharMovementComponent_Statics;
ARCHVISCHARACTER_API UClass* Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchVisCharMovementComponent(); \
	friend struct ::Z_Construct_UClass_UArchVisCharMovementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCHVISCHARACTER_API UClass* ::Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UArchVisCharMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchVisCharacter"), Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister) \
	DECLARE_SERIALIZER(UArchVisCharMovementComponent)


#define FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UArchVisCharMovementComponent(UArchVisCharMovementComponent&&) = delete; \
	UArchVisCharMovementComponent(const UArchVisCharMovementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCHVISCHARACTER_API, UArchVisCharMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchVisCharMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchVisCharMovementComponent) \
	ARCHVISCHARACTER_API virtual ~UArchVisCharMovementComponent();


#define FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UArchVisCharMovementComponent;

// ********** End Class UArchVisCharMovementComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
