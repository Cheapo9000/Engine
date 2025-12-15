// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPersonaEditorModeManager.h"

#ifdef PERSONA_IPersonaEditorModeManager_generated_h
#error "IPersonaEditorModeManager.generated.h already included, missing '#pragma once' in IPersonaEditorModeManager.h"
#endif
#define PERSONA_IPersonaEditorModeManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPersonaManagerContext ***********************************************
struct Z_Construct_UClass_UPersonaManagerContext_Statics;
PERSONA_API UClass* Z_Construct_UClass_UPersonaManagerContext_NoRegister();

#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API UPersonaManagerContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPersonaManagerContext(UPersonaManagerContext&&) = delete; \
	UPersonaManagerContext(const UPersonaManagerContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, UPersonaManagerContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaManagerContext); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaManagerContext) \
	virtual ~UPersonaManagerContext() = default;


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPersonaManagerContext(); \
	friend struct ::Z_Construct_UClass_UPersonaManagerContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UPersonaManagerContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UPersonaManagerContext, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UPersonaManagerContext_NoRegister) \
	DECLARE_SERIALIZER(UPersonaManagerContext)


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPersonaManagerContext() {} \
public: \
	typedef UPersonaManagerContext UClassType; \
	typedef IPersonaManagerContext ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_12_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPersonaManagerContext;

// ********** End Interface UPersonaManagerContext *************************************************

// ********** Begin Class UPersonaEditorModeManagerContext *****************************************
struct Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics;
PERSONA_API UClass* Z_Construct_UClass_UPersonaEditorModeManagerContext_NoRegister();

#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersonaEditorModeManagerContext(); \
	friend struct ::Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_UPersonaEditorModeManagerContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UPersonaEditorModeManagerContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_UPersonaEditorModeManagerContext_NoRegister) \
	DECLARE_SERIALIZER(UPersonaEditorModeManagerContext) \
	virtual UObject* _getUObject() const override { return const_cast<UPersonaEditorModeManagerContext*>(this); }


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API UPersonaEditorModeManagerContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPersonaEditorModeManagerContext(UPersonaEditorModeManagerContext&&) = delete; \
	UPersonaEditorModeManagerContext(const UPersonaEditorModeManagerContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, UPersonaEditorModeManagerContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaEditorModeManagerContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaEditorModeManagerContext) \
	PERSONA_API virtual ~UPersonaEditorModeManagerContext();


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_39_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPersonaEditorModeManagerContext;

// ********** End Class UPersonaEditorModeManagerContext *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
