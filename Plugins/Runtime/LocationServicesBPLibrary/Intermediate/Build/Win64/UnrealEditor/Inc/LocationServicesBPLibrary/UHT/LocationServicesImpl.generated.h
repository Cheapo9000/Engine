// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocationServicesImpl.h"

#ifdef LOCATIONSERVICESBPLIBRARY_LocationServicesImpl_generated_h
#error "LocationServicesImpl.generated.h already included, missing '#pragma once' in LocationServicesImpl.h"
#endif
#define LOCATIONSERVICESBPLIBRARY_LocationServicesImpl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULocationServicesImpl ****************************************************
struct Z_Construct_UClass_ULocationServicesImpl_Statics;
LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServicesImpl_NoRegister();

#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocationServicesImpl(); \
	friend struct ::Z_Construct_UClass_ULocationServicesImpl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOCATIONSERVICESBPLIBRARY_API UClass* ::Z_Construct_UClass_ULocationServicesImpl_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocationServicesImpl, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LocationServicesBPLibrary"), Z_Construct_UClass_ULocationServicesImpl_NoRegister) \
	DECLARE_SERIALIZER(ULocationServicesImpl)


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationServicesImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocationServicesImpl(ULocationServicesImpl&&) = delete; \
	ULocationServicesImpl(const ULocationServicesImpl&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationServicesImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationServicesImpl); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationServicesImpl) \
	NO_API virtual ~ULocationServicesImpl();


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocationServicesImpl;

// ********** End Class ULocationServicesImpl ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
