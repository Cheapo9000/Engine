// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/CommonBoundActionButtonInterface.h"

#ifdef COMMONUI_CommonBoundActionButtonInterface_generated_h
#error "CommonBoundActionButtonInterface.generated.h already included, missing '#pragma once' in CommonBoundActionButtonInterface.h"
#endif
#define COMMONUI_CommonBoundActionButtonInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCommonBoundActionButtonInterface ************************************
struct Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionButtonInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonBoundActionButtonInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonBoundActionButtonInterface(UCommonBoundActionButtonInterface&&) = delete; \
	UCommonBoundActionButtonInterface(const UCommonBoundActionButtonInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonBoundActionButtonInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonBoundActionButtonInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonBoundActionButtonInterface) \
	virtual ~UCommonBoundActionButtonInterface() = default;


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCommonBoundActionButtonInterface(); \
	friend struct ::Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonBoundActionButtonInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonBoundActionButtonInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonBoundActionButtonInterface_NoRegister) \
	DECLARE_SERIALIZER(UCommonBoundActionButtonInterface)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICommonBoundActionButtonInterface() {} \
public: \
	typedef UCommonBoundActionButtonInterface UClassType; \
	typedef ICommonBoundActionButtonInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonBoundActionButtonInterface;

// ********** End Interface UCommonBoundActionButtonInterface **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
