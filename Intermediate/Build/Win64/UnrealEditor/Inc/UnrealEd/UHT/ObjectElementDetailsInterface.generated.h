// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Object/ObjectElementDetailsInterface.h"

#ifdef UNREALED_ObjectElementDetailsInterface_generated_h
#error "ObjectElementDetailsInterface.generated.h already included, missing '#pragma once' in ObjectElementDetailsInterface.h"
#endif
#define UNREALED_ObjectElementDetailsInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectElementDetailsInterface *******************************************
struct Z_Construct_UClass_UObjectElementDetailsInterface_Statics;
UNREALED_API UClass* Z_Construct_UClass_UObjectElementDetailsInterface_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectElementDetailsInterface(); \
	friend struct ::Z_Construct_UClass_UObjectElementDetailsInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UObjectElementDetailsInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectElementDetailsInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UObjectElementDetailsInterface_NoRegister) \
	DECLARE_SERIALIZER(UObjectElementDetailsInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UObjectElementDetailsInterface*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UObjectElementDetailsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectElementDetailsInterface(UObjectElementDetailsInterface&&) = delete; \
	UObjectElementDetailsInterface(const UObjectElementDetailsInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UObjectElementDetailsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectElementDetailsInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectElementDetailsInterface) \
	UNREALED_API virtual ~UObjectElementDetailsInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectElementDetailsInterface;

// ********** End Class UObjectElementDetailsInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
