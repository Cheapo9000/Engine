// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTaskResource.h"

#ifdef GAMEPLAYTASKS_GameplayTaskResource_generated_h
#error "GameplayTaskResource.generated.h already included, missing '#pragma once' in GameplayTaskResource.h"
#endif
#define GAMEPLAYTASKS_GameplayTaskResource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayTaskResource ****************************************************
struct Z_Construct_UClass_UGameplayTaskResource_Statics;
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTaskResource(); \
	friend struct ::Z_Construct_UClass_UGameplayTaskResource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTASKS_API UClass* ::Z_Construct_UClass_UGameplayTaskResource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTaskResource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), Z_Construct_UClass_UGameplayTaskResource_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTaskResource) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTaskResource(UGameplayTaskResource&&) = delete; \
	UGameplayTaskResource(const UGameplayTaskResource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTaskResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTaskResource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTaskResource) \
	GAMEPLAYTASKS_API virtual ~UGameplayTaskResource();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_13_PROLOG
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTaskResource;

// ********** End Class UGameplayTaskResource ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
