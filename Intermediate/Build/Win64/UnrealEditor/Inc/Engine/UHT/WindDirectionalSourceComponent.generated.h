// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WindDirectionalSourceComponent.h"

#ifdef ENGINE_WindDirectionalSourceComponent_generated_h
#error "WindDirectionalSourceComponent.generated.h already included, missing '#pragma once' in WindDirectionalSourceComponent.h"
#endif
#define ENGINE_WindDirectionalSourceComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWindSourceType : uint8;

// ********** Begin Class UWindDirectionalSourceComponent ******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetWindType); \
	DECLARE_FUNCTION(execSetRadius); \
	DECLARE_FUNCTION(execSetMaximumGustAmount); \
	DECLARE_FUNCTION(execSetMinimumGustAmount); \
	DECLARE_FUNCTION(execSetSpeed); \
	DECLARE_FUNCTION(execSetStrength);


struct Z_Construct_UClass_UWindDirectionalSourceComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUWindDirectionalSourceComponent(); \
	friend struct ::Z_Construct_UClass_UWindDirectionalSourceComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWindDirectionalSourceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister) \
	DECLARE_SERIALIZER(UWindDirectionalSourceComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWindDirectionalSourceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindDirectionalSourceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWindDirectionalSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindDirectionalSourceComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWindDirectionalSourceComponent(UWindDirectionalSourceComponent&&) = delete; \
	UWindDirectionalSourceComponent(const UWindDirectionalSourceComponent&) = delete; \
	ENGINE_API virtual ~UWindDirectionalSourceComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWindDirectionalSourceComponent;

// ********** End Class UWindDirectionalSourceComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h

// ********** Begin Enum EWindSourceType ***********************************************************
#define FOREACH_ENUM_EWINDSOURCETYPE(op) \
	op(EWindSourceType::Directional) \
	op(EWindSourceType::Point) 

enum class EWindSourceType : uint8;
template<> struct TIsUEnumClass<EWindSourceType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWindSourceType>();
// ********** End Enum EWindSourceType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
