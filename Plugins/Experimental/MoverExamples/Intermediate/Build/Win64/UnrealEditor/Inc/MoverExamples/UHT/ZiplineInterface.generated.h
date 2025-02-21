// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterVariants/Ziplining/ZiplineInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef MOVEREXAMPLES_ZiplineInterface_generated_h
#error "ZiplineInterface.generated.h already included, missing '#pragma once' in ZiplineInterface.h"
#endif
#define MOVEREXAMPLES_ZiplineInterface_generated_h

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USceneComponent* GetEndComponent_Implementation() { return NULL; }; \
	virtual USceneComponent* GetStartComponent_Implementation() { return NULL; }; \
	DECLARE_FUNCTION(execGetEndComponent); \
	DECLARE_FUNCTION(execGetStartComponent);


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVEREXAMPLES_API UZipline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UZipline(UZipline&&); \
	UZipline(const UZipline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVEREXAMPLES_API, UZipline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZipline); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZipline) \
	MOVEREXAMPLES_API virtual ~UZipline();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUZipline(); \
	friend struct Z_Construct_UClass_UZipline_Statics; \
public: \
	DECLARE_CLASS(UZipline, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MoverExamples"), MOVEREXAMPLES_API) \
	DECLARE_SERIALIZER(UZipline)


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IZipline() {} \
public: \
	typedef UZipline UClassType; \
	typedef IZipline ThisClass; \
	static USceneComponent* Execute_GetEndComponent(UObject* O); \
	static USceneComponent* Execute_GetStartComponent(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEREXAMPLES_API UClass* StaticClass<class UZipline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
