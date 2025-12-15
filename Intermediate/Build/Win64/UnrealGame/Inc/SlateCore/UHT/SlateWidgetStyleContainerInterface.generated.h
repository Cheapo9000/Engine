// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styling/SlateWidgetStyleContainerInterface.h"

#ifdef SLATECORE_SlateWidgetStyleContainerInterface_generated_h
#error "SlateWidgetStyleContainerInterface.generated.h already included, missing '#pragma once' in SlateWidgetStyleContainerInterface.h"
#endif
#define SLATECORE_SlateWidgetStyleContainerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USlateWidgetStyleContainerInterface **********************************
struct Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics;
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister();

#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API USlateWidgetStyleContainerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateWidgetStyleContainerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, USlateWidgetStyleContainerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateWidgetStyleContainerInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateWidgetStyleContainerInterface(USlateWidgetStyleContainerInterface&&) = delete; \
	USlateWidgetStyleContainerInterface(const USlateWidgetStyleContainerInterface&) = delete; \
	virtual ~USlateWidgetStyleContainerInterface() = default;


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSlateWidgetStyleContainerInterface(); \
	friend struct ::Z_Construct_UClass_USlateWidgetStyleContainerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATECORE_API UClass* ::Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateWidgetStyleContainerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SlateCore"), Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister) \
	DECLARE_SERIALIZER(USlateWidgetStyleContainerInterface)


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~ISlateWidgetStyleContainerInterface() {} \
public: \
	typedef USlateWidgetStyleContainerInterface UClassType; \
	typedef ISlateWidgetStyleContainerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_14_PROLOG
#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateWidgetStyleContainerInterface;

// ********** End Interface USlateWidgetStyleContainerInterface ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
