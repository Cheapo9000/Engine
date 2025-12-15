// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementObjectInterface.h"

#ifdef TYPEDELEMENTRUNTIME_TypedElementObjectInterface_generated_h
#error "TypedElementObjectInterface.generated.h already included, missing '#pragma once' in TypedElementObjectInterface.h"
#endif
#define TYPEDELEMENTRUNTIME_TypedElementObjectInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
struct FScriptTypedElementHandle;

// ********** Begin Interface UTypedElementObjectInterface *****************************************
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execGetObject);


struct Z_Construct_UClass_UTypedElementObjectInterface_Statics;
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementObjectInterface_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTypedElementObjectInterface(UTypedElementObjectInterface&&) = delete; \
	UTypedElementObjectInterface(const UTypedElementObjectInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementObjectInterface) \
	virtual ~UTypedElementObjectInterface() = default;


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementObjectInterface(); \
	friend struct ::Z_Construct_UClass_UTypedElementObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTRUNTIME_API UClass* ::Z_Construct_UClass_UTypedElementObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UTypedElementObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), Z_Construct_UClass_UTypedElementObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UTypedElementObjectInterface)


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementObjectInterface() {} \
public: \
	typedef UTypedElementObjectInterface UClassType; \
	typedef ITypedElementObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_18_PROLOG
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTypedElementObjectInterface;

// ********** End Interface UTypedElementObjectInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
