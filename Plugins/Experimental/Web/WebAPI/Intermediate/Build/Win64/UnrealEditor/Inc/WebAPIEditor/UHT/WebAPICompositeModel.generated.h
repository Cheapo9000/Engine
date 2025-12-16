// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dom/WebAPICompositeModel.h"

#ifdef WEBAPIEDITOR_WebAPICompositeModel_generated_h
#error "WebAPICompositeModel.generated.h already included, missing '#pragma once' in WebAPICompositeModel.h"
#endif
#define WEBAPIEDITOR_WebAPICompositeModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPICompositeModel ****************************************************
struct Z_Construct_UClass_UWebAPICompositeModel_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICompositeModel_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPICompositeModel(); \
	friend struct ::Z_Construct_UClass_UWebAPICompositeModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPICompositeModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPICompositeModel, UWebAPIModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPICompositeModel_NoRegister) \
	DECLARE_SERIALIZER(UWebAPICompositeModel)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WEBAPIEDITOR_API UWebAPICompositeModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPICompositeModel(UWebAPICompositeModel&&) = delete; \
	UWebAPICompositeModel(const UWebAPICompositeModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WEBAPIEDITOR_API, UWebAPICompositeModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPICompositeModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPICompositeModel) \
	WEBAPIEDITOR_API virtual ~UWebAPICompositeModel();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPICompositeModel;

// ********** End Class UWebAPICompositeModel ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPICompositeModel_h

// ********** Begin Enum EWebAPIModelCompositionType ***********************************************
#define FOREACH_ENUM_EWEBAPIMODELCOMPOSITIONTYPE(op) \
	op(EWebAPIModelCompositionType::Single) \
	op(EWebAPIModelCompositionType::Multiple) \
	op(EWebAPIModelCompositionType::All) 

enum class EWebAPIModelCompositionType;
template<> struct TIsUEnumClass<EWebAPIModelCompositionType> { enum { Value = true }; };
template<> WEBAPIEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EWebAPIModelCompositionType>();
// ********** End Enum EWebAPIModelCompositionType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
