// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavLinkCustomInterface.h"

#ifdef NAVIGATIONSYSTEM_NavLinkCustomInterface_generated_h
#error "NavLinkCustomInterface.generated.h already included, missing '#pragma once' in NavLinkCustomInterface.h"
#endif
#define NAVIGATIONSYSTEM_NavLinkCustomInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNavLinkCustomInterface **********************************************
struct Z_Construct_UClass_UNavLinkCustomInterface_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavLinkCustomInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkCustomInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavLinkCustomInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkCustomInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavLinkCustomInterface(UNavLinkCustomInterface&&) = delete; \
	UNavLinkCustomInterface(const UNavLinkCustomInterface&) = delete; \
	virtual ~UNavLinkCustomInterface() = default;


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_36_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavLinkCustomInterface(); \
	friend struct ::Z_Construct_UClass_UNavLinkCustomInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_UNavLinkCustomInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavLinkCustomInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_UNavLinkCustomInterface_NoRegister) \
	DECLARE_SERIALIZER(UNavLinkCustomInterface)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_36_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_36_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_36_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_36_INCLASS_IINTERFACE \
protected: \
	virtual ~INavLinkCustomInterface() {} \
public: \
	typedef UNavLinkCustomInterface UClassType; \
	typedef INavLinkCustomInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_33_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_36_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavLinkCustomInterface;

// ********** End Interface UNavLinkCustomInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
