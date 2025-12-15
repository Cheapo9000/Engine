// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavRelevantInterface.h"

#ifdef ENGINE_NavRelevantInterface_generated_h
#error "NavRelevantInterface.generated.h already included, missing '#pragma once' in NavRelevantInterface.h"
#endif
#define ENGINE_NavRelevantInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNavRelevantInterface ************************************************
struct Z_Construct_UClass_UNavRelevantInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavRelevantInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavRelevantInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavRelevantInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavRelevantInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavRelevantInterface(UNavRelevantInterface&&) = delete; \
	UNavRelevantInterface(const UNavRelevantInterface&) = delete; \
	virtual ~UNavRelevantInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_45_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavRelevantInterface(); \
	friend struct ::Z_Construct_UClass_UNavRelevantInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNavRelevantInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavRelevantInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNavRelevantInterface_NoRegister) \
	DECLARE_SERIALIZER(UNavRelevantInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_45_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_45_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_45_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_45_INCLASS_IINTERFACE \
protected: \
	virtual ~INavRelevantInterface() {} \
public: \
	typedef UNavRelevantInterface UClassType; \
	typedef INavRelevantInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_42_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_45_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavRelevantInterface;

// ********** End Interface UNavRelevantInterface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h

// ********** Begin Enum EHasCustomNavigableGeometry ***********************************************
#define FOREACH_ENUM_EHASCUSTOMNAVIGABLEGEOMETRY(op) \
	op(EHasCustomNavigableGeometry::No) \
	op(EHasCustomNavigableGeometry::Yes) \
	op(EHasCustomNavigableGeometry::EvenIfNotCollidable) \
	op(EHasCustomNavigableGeometry::DontExport) 

namespace EHasCustomNavigableGeometry { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHasCustomNavigableGeometry::Type>();
// ********** End Enum EHasCustomNavigableGeometry *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
