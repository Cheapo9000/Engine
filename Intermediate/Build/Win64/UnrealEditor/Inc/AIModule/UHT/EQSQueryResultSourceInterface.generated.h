// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EQSQueryResultSourceInterface.h"

#ifdef AIMODULE_EQSQueryResultSourceInterface_generated_h
#error "EQSQueryResultSourceInterface.generated.h already included, missing '#pragma once' in EQSQueryResultSourceInterface.h"
#endif
#define AIMODULE_EQSQueryResultSourceInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UEQSQueryResultSourceInterface ***************************************
struct Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEQSQueryResultSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEQSQueryResultSourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEQSQueryResultSourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEQSQueryResultSourceInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEQSQueryResultSourceInterface(UEQSQueryResultSourceInterface&&) = delete; \
	UEQSQueryResultSourceInterface(const UEQSQueryResultSourceInterface&) = delete; \
	virtual ~UEQSQueryResultSourceInterface() = default;


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEQSQueryResultSourceInterface(); \
	friend struct ::Z_Construct_UClass_UEQSQueryResultSourceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UEQSQueryResultSourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister) \
	DECLARE_SERIALIZER(UEQSQueryResultSourceInterface)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEQSQueryResultSourceInterface() {} \
public: \
	typedef UEQSQueryResultSourceInterface UClassType; \
	typedef IEQSQueryResultSourceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_10_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEQSQueryResultSourceInterface;

// ********** End Interface UEQSQueryResultSourceInterface *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSQueryResultSourceInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
