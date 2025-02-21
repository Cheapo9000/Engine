// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IHasContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_IHasContext_generated_h
#error "IHasContext.generated.h already included, missing '#pragma once' in IHasContext.h"
#endif
#define CHOOSER_IHasContext_generated_h

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UHasContextClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHasContextClass(UHasContextClass&&); \
	UHasContextClass(const UHasContextClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UHasContextClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasContextClass); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHasContextClass) \
	CHOOSER_API virtual ~UHasContextClass();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHasContextClass(); \
	friend struct Z_Construct_UClass_UHasContextClass_Statics; \
public: \
	DECLARE_CLASS(UHasContextClass, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Chooser"), CHOOSER_API) \
	DECLARE_SERIALIZER(UHasContextClass)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHasContextClass() {} \
public: \
	typedef UHasContextClass UClassType; \
	typedef IHasContextClass ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h_13_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSER_API UClass* StaticClass<class UHasContextClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_IHasContext_h


#define FOREACH_ENUM_EOBJECTCHOOSERRESULTTYPE(op) \
	op(EObjectChooserResultType::ObjectResult) \
	op(EObjectChooserResultType::ClassResult) 

enum class EObjectChooserResultType;
template<> struct TIsUEnumClass<EObjectChooserResultType> { enum { Value = true }; };
template<> CHOOSER_API UEnum* StaticEnum<EObjectChooserResultType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
