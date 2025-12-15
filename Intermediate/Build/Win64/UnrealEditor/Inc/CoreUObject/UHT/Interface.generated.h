// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/Interface.h"

#ifdef COREUOBJECT_Interface_generated_h
#error "Interface.generated.h already included, missing '#pragma once' in Interface.h"
#endif
#define COREUOBJECT_Interface_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterface ***********************************************************
struct Z_Construct_UClass_UInterface_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterface(UInterface&&) = delete; \
	UInterface(const UInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface) \
	virtual ~UInterface() = default;


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface(); \
	friend struct ::Z_Construct_UClass_UInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UInterface_NoRegister) \
	DECLARE_SERIALIZER(UInterface)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface() {} \
public: \
	typedef UInterface UClassType; \
	typedef IInterface ThisClass;


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h_17_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterface;

// ********** End Interface UInterface *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
