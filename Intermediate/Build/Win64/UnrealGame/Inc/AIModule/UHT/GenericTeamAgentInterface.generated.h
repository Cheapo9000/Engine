// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenericTeamAgentInterface.h"

#ifdef AIMODULE_GenericTeamAgentInterface_generated_h
#error "GenericTeamAgentInterface.generated.h already included, missing '#pragma once' in GenericTeamAgentInterface.h"
#endif
#define AIMODULE_GenericTeamAgentInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGenericTeamId ****************************************************
struct Z_Construct_UScriptStruct_FGenericTeamId_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGenericTeamId_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FGenericTeamId;
// ********** End ScriptStruct FGenericTeamId ******************************************************

// ********** Begin Interface UGenericTeamAgentInterface *******************************************
struct Z_Construct_UClass_UGenericTeamAgentInterface_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UGenericTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericTeamAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UGenericTeamAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericTeamAgentInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenericTeamAgentInterface(UGenericTeamAgentInterface&&) = delete; \
	UGenericTeamAgentInterface(const UGenericTeamAgentInterface&) = delete; \
	virtual ~UGenericTeamAgentInterface() = default;


#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGenericTeamAgentInterface(); \
	friend struct ::Z_Construct_UClass_UGenericTeamAgentInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenericTeamAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister) \
	DECLARE_SERIALIZER(UGenericTeamAgentInterface)


#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_INCLASS_IINTERFACE \
protected: \
	virtual ~IGenericTeamAgentInterface() {} \
public: \
	typedef UGenericTeamAgentInterface UClassType; \
	typedef IGenericTeamAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_75_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_78_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenericTeamAgentInterface;

// ********** End Interface UGenericTeamAgentInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h

// ********** Begin Enum ETeamAttitude *************************************************************
#define FOREACH_ENUM_ETEAMATTITUDE(op) \
	op(ETeamAttitude::Friendly) \
	op(ETeamAttitude::Neutral) \
	op(ETeamAttitude::Hostile) 

namespace ETeamAttitude { enum Type : int; }
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETeamAttitude::Type>();
// ********** End Enum ETeamAttitude ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
