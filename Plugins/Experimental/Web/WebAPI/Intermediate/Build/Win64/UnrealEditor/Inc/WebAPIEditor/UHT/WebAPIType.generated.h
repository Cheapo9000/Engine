// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dom/WebAPIType.h"

#ifdef WEBAPIEDITOR_WebAPIType_generated_h
#error "WebAPIType.generated.h already included, missing '#pragma once' in WebAPIType.h"
#endif
#define WEBAPIEDITOR_WebAPIType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWebAPITypeInfo **********************************************************
struct Z_Construct_UClass_UWebAPITypeInfo_Statics;
WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPITypeInfo_NoRegister();

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPITypeInfo(); \
	friend struct ::Z_Construct_UClass_UWebAPITypeInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEBAPIEDITOR_API UClass* ::Z_Construct_UClass_UWebAPITypeInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UWebAPITypeInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPIEditor"), Z_Construct_UClass_UWebAPITypeInfo_NoRegister) \
	DECLARE_SERIALIZER(UWebAPITypeInfo)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWebAPITypeInfo(UWebAPITypeInfo&&) = delete; \
	UWebAPITypeInfo(const UWebAPITypeInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPITypeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPITypeInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebAPITypeInfo) \
	NO_API virtual ~UWebAPITypeInfo();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWebAPITypeInfo;

// ********** End Class UWebAPITypeInfo ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h

// ********** Begin Enum EWebAPISchemaType *********************************************************
#define FOREACH_ENUM_EWEBAPISCHEMATYPE(op) \
	op(EWebAPISchemaType::Model) \
	op(EWebAPISchemaType::Service) \
	op(EWebAPISchemaType::Operation) \
	op(EWebAPISchemaType::Property) \
	op(EWebAPISchemaType::Parameter) \
	op(EWebAPISchemaType::Unspecified) 

enum class EWebAPISchemaType : uint8;
template<> struct TIsUEnumClass<EWebAPISchemaType> { enum { Value = true }; };
template<> WEBAPIEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EWebAPISchemaType>();
// ********** End Enum EWebAPISchemaType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
