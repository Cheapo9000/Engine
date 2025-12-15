// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NamedSlotInterface.h"

#ifdef UMG_NamedSlotInterface_generated_h
#error "NamedSlotInterface.generated.h already included, missing '#pragma once' in NamedSlotInterface.h"
#endif
#define UMG_NamedSlotInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNamedSlotInterface **************************************************
struct Z_Construct_UClass_UNamedSlotInterface_Statics;
UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UNamedSlotInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNamedSlotInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UNamedSlotInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNamedSlotInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNamedSlotInterface(UNamedSlotInterface&&) = delete; \
	UNamedSlotInterface(const UNamedSlotInterface&) = delete; \
	virtual ~UNamedSlotInterface() = default;


#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNamedSlotInterface(); \
	friend struct ::Z_Construct_UClass_UNamedSlotInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UNamedSlotInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNamedSlotInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UNamedSlotInterface_NoRegister) \
	DECLARE_SERIALIZER(UNamedSlotInterface)


#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~INamedSlotInterface() {} \
public: \
	typedef UNamedSlotInterface UClassType; \
	typedef INamedSlotInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNamedSlotInterface;

// ********** End Interface UNamedSlotInterface ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
