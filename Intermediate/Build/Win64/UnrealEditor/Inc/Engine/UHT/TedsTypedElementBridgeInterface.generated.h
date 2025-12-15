// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TedsTypedElementBridgeInterface.h"

#ifdef ENGINE_TedsTypedElementBridgeInterface_generated_h
#error "TedsTypedElementBridgeInterface.generated.h already included, missing '#pragma once' in TedsTypedElementBridgeInterface.h"
#endif
#define ENGINE_TedsTypedElementBridgeInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UTedsTypedElementBridgeInterface *************************************
struct Z_Construct_UClass_UTedsTypedElementBridgeInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTedsTypedElementBridgeInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTedsTypedElementBridgeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTedsTypedElementBridgeInterface(UTedsTypedElementBridgeInterface&&) = delete; \
	UTedsTypedElementBridgeInterface(const UTedsTypedElementBridgeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTedsTypedElementBridgeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTedsTypedElementBridgeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTedsTypedElementBridgeInterface) \
	virtual ~UTedsTypedElementBridgeInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTedsTypedElementBridgeInterface(); \
	friend struct ::Z_Construct_UClass_UTedsTypedElementBridgeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTedsTypedElementBridgeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UTedsTypedElementBridgeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTedsTypedElementBridgeInterface_NoRegister) \
	DECLARE_SERIALIZER(UTedsTypedElementBridgeInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITedsTypedElementBridgeInterface() {} \
public: \
	typedef UTedsTypedElementBridgeInterface UClassType; \
	typedef ITedsTypedElementBridgeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTedsTypedElementBridgeInterface;

// ********** End Interface UTedsTypedElementBridgeInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TedsTypedElementBridgeInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
