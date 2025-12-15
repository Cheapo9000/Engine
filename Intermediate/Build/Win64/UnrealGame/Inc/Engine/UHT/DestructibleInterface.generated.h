// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestructibleInterface.h"

#ifdef ENGINE_DestructibleInterface_generated_h
#error "DestructibleInterface.generated.h already included, missing '#pragma once' in DestructibleInterface.h"
#endif
#define ENGINE_DestructibleInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDestructibleInterface ***********************************************
struct Z_Construct_UClass_UDestructibleInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDestructibleInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDestructibleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDestructibleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDestructibleInterface(UDestructibleInterface&&) = delete; \
	UDestructibleInterface(const UDestructibleInterface&) = delete; \
	virtual ~UDestructibleInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDestructibleInterface(); \
	friend struct ::Z_Construct_UClass_UDestructibleInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDestructibleInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDestructibleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDestructibleInterface_NoRegister) \
	DECLARE_SERIALIZER(UDestructibleInterface)


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IDestructibleInterface() {} \
public: \
	typedef UDestructibleInterface UClassType; \
	typedef IDestructibleInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_7_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDestructibleInterface;

// ********** End Interface UDestructibleInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
