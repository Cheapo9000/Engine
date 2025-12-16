// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepParameterizableObject.h"

#ifdef DATAPREPCORE_DataprepParameterizableObject_generated_h
#error "DataprepParameterizableObject.generated.h already included, missing '#pragma once' in DataprepParameterizableObject.h"
#endif
#define DATAPREPCORE_DataprepParameterizableObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepParameterizableObject *******************************************
struct Z_Construct_UClass_UDataprepParameterizableObject_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepParameterizableObject(); \
	friend struct ::Z_Construct_UClass_UDataprepParameterizableObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepParameterizableObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepParameterizableObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepParameterizableObject_NoRegister) \
	DECLARE_SERIALIZER(UDataprepParameterizableObject)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepParameterizableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepParameterizableObject(UDataprepParameterizableObject&&) = delete; \
	UDataprepParameterizableObject(const UDataprepParameterizableObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepParameterizableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepParameterizableObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepParameterizableObject) \
	NO_API virtual ~UDataprepParameterizableObject();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_18_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepParameterizableObject;

// ********** End Class UDataprepParameterizableObject *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepParameterizableObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
