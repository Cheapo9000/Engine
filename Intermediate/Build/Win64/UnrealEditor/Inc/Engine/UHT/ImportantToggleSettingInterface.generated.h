// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ImportantToggleSettingInterface.h"

#ifdef ENGINE_ImportantToggleSettingInterface_generated_h
#error "ImportantToggleSettingInterface.generated.h already included, missing '#pragma once' in ImportantToggleSettingInterface.h"
#endif
#define ENGINE_ImportantToggleSettingInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UImportantToggleSettingInterface *************************************
struct Z_Construct_UClass_UImportantToggleSettingInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UImportantToggleSettingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportantToggleSettingInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UImportantToggleSettingInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportantToggleSettingInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImportantToggleSettingInterface(UImportantToggleSettingInterface&&) = delete; \
	UImportantToggleSettingInterface(const UImportantToggleSettingInterface&) = delete; \
	virtual ~UImportantToggleSettingInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUImportantToggleSettingInterface(); \
	friend struct ::Z_Construct_UClass_UImportantToggleSettingInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UImportantToggleSettingInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister) \
	DECLARE_SERIALIZER(UImportantToggleSettingInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~IImportantToggleSettingInterface() {} \
public: \
	typedef UImportantToggleSettingInterface UClassType; \
	typedef IImportantToggleSettingInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImportantToggleSettingInterface;

// ********** End Interface UImportantToggleSettingInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ImportantToggleSettingInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
