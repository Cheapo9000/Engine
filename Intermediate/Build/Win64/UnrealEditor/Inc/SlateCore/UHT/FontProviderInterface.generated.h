// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fonts/FontProviderInterface.h"

#ifdef SLATECORE_FontProviderInterface_generated_h
#error "FontProviderInterface.generated.h already included, missing '#pragma once' in FontProviderInterface.h"
#endif
#define SLATECORE_FontProviderInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UFontProviderInterface ***********************************************
struct Z_Construct_UClass_UFontProviderInterface_Statics;
SLATECORE_API UClass* Z_Construct_UClass_UFontProviderInterface_NoRegister();

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API UFontProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontProviderInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, UFontProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontProviderInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFontProviderInterface(UFontProviderInterface&&) = delete; \
	UFontProviderInterface(const UFontProviderInterface&) = delete; \
	virtual ~UFontProviderInterface() = default;


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFontProviderInterface(); \
	friend struct ::Z_Construct_UClass_UFontProviderInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATECORE_API UClass* ::Z_Construct_UClass_UFontProviderInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UFontProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SlateCore"), Z_Construct_UClass_UFontProviderInterface_NoRegister) \
	DECLARE_SERIALIZER(UFontProviderInterface)


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IFontProviderInterface() {} \
public: \
	typedef UFontProviderInterface UClassType; \
	typedef IFontProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_17_PROLOG
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFontProviderInterface;

// ********** End Interface UFontProviderInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
