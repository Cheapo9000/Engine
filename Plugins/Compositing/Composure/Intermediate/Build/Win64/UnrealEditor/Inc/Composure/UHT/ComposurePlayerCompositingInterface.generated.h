// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposurePlayerCompositingInterface.h"

#ifdef COMPOSURE_ComposurePlayerCompositingInterface_generated_h
#error "ComposurePlayerCompositingInterface.generated.h already included, missing '#pragma once' in ComposurePlayerCompositingInterface.h"
#endif
#define COMPOSURE_ComposurePlayerCompositingInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UComposurePlayerCompositingInterface *********************************
struct Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingInterface_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSURE_API UComposurePlayerCompositingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePlayerCompositingInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UComposurePlayerCompositingInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePlayerCompositingInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposurePlayerCompositingInterface(UComposurePlayerCompositingInterface&&) = delete; \
	UComposurePlayerCompositingInterface(const UComposurePlayerCompositingInterface&) = delete; \
	virtual ~UComposurePlayerCompositingInterface() = default;


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUComposurePlayerCompositingInterface(); \
	friend struct ::Z_Construct_UClass_UComposurePlayerCompositingInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposurePlayerCompositingInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposurePlayerCompositingInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposurePlayerCompositingInterface_NoRegister) \
	DECLARE_SERIALIZER(UComposurePlayerCompositingInterface)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IComposurePlayerCompositingInterface() {} \
public: \
	typedef UComposurePlayerCompositingInterface UClassType; \
	typedef IComposurePlayerCompositingInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_10_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposurePlayerCompositingInterface;

// ********** End Interface UComposurePlayerCompositingInterface ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_ComposurePlayerCompositingInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
