// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HairStrandsMutableExtension.h"

#ifdef HAIRSTRANDSMUTABLE_HairStrandsMutableExtension_generated_h
#error "HairStrandsMutableExtension.generated.h already included, missing '#pragma once' in HairStrandsMutableExtension.h"
#endif
#define HAIRSTRANDSMUTABLE_HairStrandsMutableExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGroomPinData *****************************************************
struct Z_Construct_UScriptStruct_FGroomPinData_Statics;
#define FID_Engine_Plugins_Experimental_HairStrandsMutable_Source_HairStrandsMutable_Public_HairStrandsMutableExtension_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGroomPinData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGroomPinData;
// ********** End ScriptStruct FGroomPinData *******************************************************

// ********** Begin ScriptStruct FGroomInstanceData ************************************************
struct Z_Construct_UScriptStruct_FGroomInstanceData_Statics;
#define FID_Engine_Plugins_Experimental_HairStrandsMutable_Source_HairStrandsMutable_Public_HairStrandsMutableExtension_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGroomInstanceData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGroomInstanceData;
// ********** End ScriptStruct FGroomInstanceData **************************************************

// ********** Begin Class UHairStrandsMutableExtension *********************************************
struct Z_Construct_UClass_UHairStrandsMutableExtension_Statics;
HAIRSTRANDSMUTABLE_API UClass* Z_Construct_UClass_UHairStrandsMutableExtension_NoRegister();

#define FID_Engine_Plugins_Experimental_HairStrandsMutable_Source_HairStrandsMutable_Public_HairStrandsMutableExtension_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHairStrandsMutableExtension(); \
	friend struct ::Z_Construct_UClass_UHairStrandsMutableExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAIRSTRANDSMUTABLE_API UClass* ::Z_Construct_UClass_UHairStrandsMutableExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UHairStrandsMutableExtension, UCustomizableObjectExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsMutable"), Z_Construct_UClass_UHairStrandsMutableExtension_NoRegister) \
	DECLARE_SERIALIZER(UHairStrandsMutableExtension)


#define FID_Engine_Plugins_Experimental_HairStrandsMutable_Source_HairStrandsMutable_Public_HairStrandsMutableExtension_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HAIRSTRANDSMUTABLE_API UHairStrandsMutableExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHairStrandsMutableExtension(UHairStrandsMutableExtension&&) = delete; \
	UHairStrandsMutableExtension(const UHairStrandsMutableExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HAIRSTRANDSMUTABLE_API, UHairStrandsMutableExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHairStrandsMutableExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHairStrandsMutableExtension) \
	HAIRSTRANDSMUTABLE_API virtual ~UHairStrandsMutableExtension();


#define FID_Engine_Plugins_Experimental_HairStrandsMutable_Source_HairStrandsMutable_Public_HairStrandsMutableExtension_h_69_PROLOG
#define FID_Engine_Plugins_Experimental_HairStrandsMutable_Source_HairStrandsMutable_Public_HairStrandsMutableExtension_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_HairStrandsMutable_Source_HairStrandsMutable_Public_HairStrandsMutableExtension_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_HairStrandsMutable_Source_HairStrandsMutable_Public_HairStrandsMutableExtension_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHairStrandsMutableExtension;

// ********** End Class UHairStrandsMutableExtension ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_HairStrandsMutable_Source_HairStrandsMutable_Public_HairStrandsMutableExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
