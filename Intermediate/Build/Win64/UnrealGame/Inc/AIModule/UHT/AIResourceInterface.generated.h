// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIResourceInterface.h"

#ifdef AIMODULE_AIResourceInterface_generated_h
#error "AIResourceInterface.generated.h already included, missing '#pragma once' in AIResourceInterface.h"
#endif
#define AIMODULE_AIResourceInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAIResourceInterface *************************************************
struct Z_Construct_UClass_UAIResourceInterface_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIResourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIResourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIResourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIResourceInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIResourceInterface(UAIResourceInterface&&) = delete; \
	UAIResourceInterface(const UAIResourceInterface&) = delete; \
	virtual ~UAIResourceInterface() = default;


#define FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAIResourceInterface(); \
	friend struct ::Z_Construct_UClass_UAIResourceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAIResourceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIResourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAIResourceInterface_NoRegister) \
	DECLARE_SERIALIZER(UAIResourceInterface)


#define FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IAIResourceInterface() {} \
public: \
	typedef UAIResourceInterface UClassType; \
	typedef IAIResourceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_11_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIResourceInterface;

// ********** End Interface UAIResourceInterface ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AIResourceInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
