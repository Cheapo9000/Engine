// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interface_PostProcessVolume.h"

#ifdef ENGINE_Interface_PostProcessVolume_generated_h
#error "Interface_PostProcessVolume.generated.h already included, missing '#pragma once' in Interface_PostProcessVolume.h"
#endif
#define ENGINE_Interface_PostProcessVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterface_PostProcessVolume *****************************************
struct Z_Construct_UClass_UInterface_PostProcessVolume_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_PostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PostProcessVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_PostProcessVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PostProcessVolume); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterface_PostProcessVolume(UInterface_PostProcessVolume&&) = delete; \
	UInterface_PostProcessVolume(const UInterface_PostProcessVolume&) = delete; \
	virtual ~UInterface_PostProcessVolume() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_PostProcessVolume(); \
	friend struct ::Z_Construct_UClass_UInterface_PostProcessVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterface_PostProcessVolume, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister) \
	DECLARE_SERIALIZER(UInterface_PostProcessVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_35_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_35_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_35_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_35_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_PostProcessVolume() {} \
public: \
	typedef UInterface_PostProcessVolume UClassType; \
	typedef IInterface_PostProcessVolume ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_35_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterface_PostProcessVolume;

// ********** End Interface UInterface_PostProcessVolume *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
