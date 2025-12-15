// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Object/ObjectElementObjectInterface.h"

#ifdef ENGINE_ObjectElementObjectInterface_generated_h
#error "ObjectElementObjectInterface.generated.h already included, missing '#pragma once' in ObjectElementObjectInterface.h"
#endif
#define ENGINE_ObjectElementObjectInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectElementObjectInterface ********************************************
struct Z_Construct_UClass_UObjectElementObjectInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UObjectElementObjectInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectElementObjectInterface(); \
	friend struct ::Z_Construct_UClass_UObjectElementObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UObjectElementObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectElementObjectInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UObjectElementObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UObjectElementObjectInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UObjectElementObjectInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UObjectElementObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectElementObjectInterface(UObjectElementObjectInterface&&) = delete; \
	UObjectElementObjectInterface(const UObjectElementObjectInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UObjectElementObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectElementObjectInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectElementObjectInterface) \
	ENGINE_API virtual ~UObjectElementObjectInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectElementObjectInterface;

// ********** End Class UObjectElementObjectInterface **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
