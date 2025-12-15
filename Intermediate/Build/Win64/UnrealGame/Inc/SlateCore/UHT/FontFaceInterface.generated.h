// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fonts/FontFaceInterface.h"

#ifdef SLATECORE_FontFaceInterface_generated_h
#error "FontFaceInterface.generated.h already included, missing '#pragma once' in FontFaceInterface.h"
#endif
#define SLATECORE_FontFaceInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UFontFaceInterface ***************************************************
struct Z_Construct_UClass_UFontFaceInterface_Statics;
SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister();

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API UFontFaceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFaceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, UFontFaceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFaceInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFontFaceInterface(UFontFaceInterface&&) = delete; \
	UFontFaceInterface(const UFontFaceInterface&) = delete; \
	virtual ~UFontFaceInterface() = default;


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFontFaceInterface(); \
	friend struct ::Z_Construct_UClass_UFontFaceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATECORE_API UClass* ::Z_Construct_UClass_UFontFaceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UFontFaceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SlateCore"), Z_Construct_UClass_UFontFaceInterface_NoRegister) \
	DECLARE_SERIALIZER(UFontFaceInterface)


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IFontFaceInterface() {} \
public: \
	typedef UFontFaceInterface UClassType; \
	typedef IFontFaceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_17_PROLOG
#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFontFaceInterface;

// ********** End Interface UFontFaceInterface *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
