// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceElementPrimitiveCustomDataInterface.h"

#ifdef ENGINE_SMInstanceElementPrimitiveCustomDataInterface_generated_h
#error "SMInstanceElementPrimitiveCustomDataInterface.generated.h already included, missing '#pragma once' in SMInstanceElementPrimitiveCustomDataInterface.h"
#endif
#define ENGINE_SMInstanceElementPrimitiveCustomDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USMInstanceElementPrimitiveCustomDataInterface ***************************
struct Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceElementPrimitiveCustomDataInterface(); \
	friend struct ::Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceElementPrimitiveCustomDataInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USMInstanceElementPrimitiveCustomDataInterface_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceElementPrimitiveCustomDataInterface) \
	virtual UObject* _getUObject() const override { return const_cast<USMInstanceElementPrimitiveCustomDataInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USMInstanceElementPrimitiveCustomDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceElementPrimitiveCustomDataInterface(USMInstanceElementPrimitiveCustomDataInterface&&) = delete; \
	USMInstanceElementPrimitiveCustomDataInterface(const USMInstanceElementPrimitiveCustomDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USMInstanceElementPrimitiveCustomDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceElementPrimitiveCustomDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceElementPrimitiveCustomDataInterface) \
	ENGINE_API virtual ~USMInstanceElementPrimitiveCustomDataInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceElementPrimitiveCustomDataInterface;

// ********** End Class USMInstanceElementPrimitiveCustomDataInterface *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementPrimitiveCustomDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
