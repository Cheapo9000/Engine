// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interface_CollisionDataProvider.h"

#ifdef ENGINE_Interface_CollisionDataProvider_generated_h
#error "Interface_CollisionDataProvider.generated.h already included, missing '#pragma once' in Interface_CollisionDataProvider.h"
#endif
#define ENGINE_Interface_CollisionDataProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterface_CollisionDataProvider *************************************
struct Z_Construct_UClass_UInterface_CollisionDataProvider_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_CollisionDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_CollisionDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_CollisionDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_CollisionDataProvider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterface_CollisionDataProvider(UInterface_CollisionDataProvider&&) = delete; \
	UInterface_CollisionDataProvider(const UInterface_CollisionDataProvider&) = delete; \
	virtual ~UInterface_CollisionDataProvider() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_CollisionDataProvider(); \
	friend struct ::Z_Construct_UClass_UInterface_CollisionDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterface_CollisionDataProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UInterface_CollisionDataProvider)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_CollisionDataProvider() {} \
public: \
	typedef UInterface_CollisionDataProvider UClassType; \
	typedef IInterface_CollisionDataProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterface_CollisionDataProvider;

// ********** End Interface UInterface_CollisionDataProvider ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
