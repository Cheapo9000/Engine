// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Component/ComponentElementCounterInterface.h"

#ifdef ENGINE_ComponentElementCounterInterface_generated_h
#error "ComponentElementCounterInterface.generated.h already included, missing '#pragma once' in ComponentElementCounterInterface.h"
#endif
#define ENGINE_ComponentElementCounterInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComponentElementCounterInterface ****************************************
struct Z_Construct_UClass_UComponentElementCounterInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UComponentElementCounterInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentElementCounterInterface(); \
	friend struct ::Z_Construct_UClass_UComponentElementCounterInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UComponentElementCounterInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UComponentElementCounterInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UComponentElementCounterInterface_NoRegister) \
	DECLARE_SERIALIZER(UComponentElementCounterInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UComponentElementCounterInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UComponentElementCounterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComponentElementCounterInterface(UComponentElementCounterInterface&&) = delete; \
	UComponentElementCounterInterface(const UComponentElementCounterInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UComponentElementCounterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentElementCounterInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentElementCounterInterface) \
	ENGINE_API virtual ~UComponentElementCounterInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComponentElementCounterInterface;

// ********** End Class UComponentElementCounterInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
