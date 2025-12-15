// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Component/ComponentElementDetailsInterface.h"

#ifdef UNREALED_ComponentElementDetailsInterface_generated_h
#error "ComponentElementDetailsInterface.generated.h already included, missing '#pragma once' in ComponentElementDetailsInterface.h"
#endif
#define UNREALED_ComponentElementDetailsInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComponentElementDetailsInterface ****************************************
struct Z_Construct_UClass_UComponentElementDetailsInterface_Statics;
UNREALED_API UClass* Z_Construct_UClass_UComponentElementDetailsInterface_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentElementDetailsInterface(); \
	friend struct ::Z_Construct_UClass_UComponentElementDetailsInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UComponentElementDetailsInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UComponentElementDetailsInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UComponentElementDetailsInterface_NoRegister) \
	DECLARE_SERIALIZER(UComponentElementDetailsInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UComponentElementDetailsInterface*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UComponentElementDetailsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComponentElementDetailsInterface(UComponentElementDetailsInterface&&) = delete; \
	UComponentElementDetailsInterface(const UComponentElementDetailsInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UComponentElementDetailsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentElementDetailsInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentElementDetailsInterface) \
	UNREALED_API virtual ~UComponentElementDetailsInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComponentElementDetailsInterface;

// ********** End Class UComponentElementDetailsInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
