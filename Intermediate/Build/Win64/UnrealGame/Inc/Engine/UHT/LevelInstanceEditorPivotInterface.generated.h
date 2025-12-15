// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceEditorPivotInterface.h"

#ifdef ENGINE_LevelInstanceEditorPivotInterface_generated_h
#error "LevelInstanceEditorPivotInterface.generated.h already included, missing '#pragma once' in LevelInstanceEditorPivotInterface.h"
#endif
#define ENGINE_LevelInstanceEditorPivotInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface ULevelInstanceEditorPivotInterface ***********************************
struct Z_Construct_UClass_ULevelInstanceEditorPivotInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceEditorPivotInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelInstanceEditorPivotInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelInstanceEditorPivotInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelInstanceEditorPivotInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceEditorPivotInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelInstanceEditorPivotInterface(ULevelInstanceEditorPivotInterface&&) = delete; \
	ULevelInstanceEditorPivotInterface(const ULevelInstanceEditorPivotInterface&) = delete; \
	virtual ~ULevelInstanceEditorPivotInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULevelInstanceEditorPivotInterface(); \
	friend struct ::Z_Construct_UClass_ULevelInstanceEditorPivotInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelInstanceEditorPivotInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelInstanceEditorPivotInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelInstanceEditorPivotInterface_NoRegister) \
	DECLARE_SERIALIZER(ULevelInstanceEditorPivotInterface)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ILevelInstanceEditorPivotInterface() {} \
public: \
	typedef ULevelInstanceEditorPivotInterface UClassType; \
	typedef ILevelInstanceEditorPivotInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelInstanceEditorPivotInterface;

// ********** End Interface ULevelInstanceEditorPivotInterface *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
