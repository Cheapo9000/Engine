// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsBodyInstanceOwnerInterface.h"

#ifdef ENGINE_PhysicsBodyInstanceOwnerInterface_generated_h
#error "PhysicsBodyInstanceOwnerInterface.generated.h already included, missing '#pragma once' in PhysicsBodyInstanceOwnerInterface.h"
#endif
#define ENGINE_PhysicsBodyInstanceOwnerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPhysicsBodyInstanceOwnerResolver ************************************
struct Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsBodyInstanceOwnerResolver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsBodyInstanceOwnerResolver(UPhysicsBodyInstanceOwnerResolver&&) = delete; \
	UPhysicsBodyInstanceOwnerResolver(const UPhysicsBodyInstanceOwnerResolver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsBodyInstanceOwnerResolver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsBodyInstanceOwnerResolver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsBodyInstanceOwnerResolver) \
	virtual ~UPhysicsBodyInstanceOwnerResolver() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPhysicsBodyInstanceOwnerResolver(); \
	friend struct ::Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsBodyInstanceOwnerResolver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsBodyInstanceOwnerResolver)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPhysicsBodyInstanceOwnerResolver() {} \
public: \
	typedef UPhysicsBodyInstanceOwnerResolver UClassType; \
	typedef IPhysicsBodyInstanceOwnerResolver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsBodyInstanceOwnerResolver;

// ********** End Interface UPhysicsBodyInstanceOwnerResolver **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsBodyInstanceOwnerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
