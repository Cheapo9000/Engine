// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IPhysicsComponent.h"

#ifdef ENGINE_IPhysicsComponent_generated_h
#error "IPhysicsComponent.generated.h already included, missing '#pragma once' in IPhysicsComponent.h"
#endif
#define ENGINE_IPhysicsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPhysicsComponent ****************************************************
struct Z_Construct_UClass_UPhysicsComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicsComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsComponent(UPhysicsComponent&&) = delete; \
	UPhysicsComponent(const UPhysicsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsComponent) \
	virtual ~UPhysicsComponent() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPhysicsComponent(); \
	friend struct ::Z_Construct_UClass_UPhysicsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsComponent, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicsComponent_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPhysicsComponent() {} \
public: \
	typedef UPhysicsComponent UClassType; \
	typedef IPhysicsComponent ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsComponent;

// ********** End Interface UPhysicsComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
