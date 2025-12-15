// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Component/ComponentElementObjectInterface.h"

#ifdef ENGINE_ComponentElementObjectInterface_generated_h
#error "ComponentElementObjectInterface.generated.h already included, missing '#pragma once' in ComponentElementObjectInterface.h"
#endif
#define ENGINE_ComponentElementObjectInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComponentElementObjectInterface *****************************************
struct Z_Construct_UClass_UComponentElementObjectInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UComponentElementObjectInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementObjectInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentElementObjectInterface(); \
	friend struct ::Z_Construct_UClass_UComponentElementObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UComponentElementObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UComponentElementObjectInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UComponentElementObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UComponentElementObjectInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UComponentElementObjectInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementObjectInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UComponentElementObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComponentElementObjectInterface(UComponentElementObjectInterface&&) = delete; \
	UComponentElementObjectInterface(const UComponentElementObjectInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UComponentElementObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentElementObjectInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentElementObjectInterface) \
	ENGINE_API virtual ~UComponentElementObjectInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementObjectInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementObjectInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementObjectInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementObjectInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComponentElementObjectInterface;

// ********** End Class UComponentElementObjectInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementObjectInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
