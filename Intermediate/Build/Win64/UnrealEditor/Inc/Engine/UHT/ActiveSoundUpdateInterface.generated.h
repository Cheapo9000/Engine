// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActiveSoundUpdateInterface.h"

#ifdef ENGINE_ActiveSoundUpdateInterface_generated_h
#error "ActiveSoundUpdateInterface.generated.h already included, missing '#pragma once' in ActiveSoundUpdateInterface.h"
#endif
#define ENGINE_ActiveSoundUpdateInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UActiveSoundUpdateInterface ******************************************
struct Z_Construct_UClass_UActiveSoundUpdateInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActiveSoundUpdateInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundUpdateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActiveSoundUpdateInterface(UActiveSoundUpdateInterface&&) = delete; \
	UActiveSoundUpdateInterface(const UActiveSoundUpdateInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundUpdateInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundUpdateInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundUpdateInterface) \
	virtual ~UActiveSoundUpdateInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActiveSoundUpdateInterface(); \
	friend struct ::Z_Construct_UClass_UActiveSoundUpdateInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActiveSoundUpdateInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UActiveSoundUpdateInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActiveSoundUpdateInterface_NoRegister) \
	DECLARE_SERIALIZER(UActiveSoundUpdateInterface)


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActiveSoundUpdateInterface() {} \
public: \
	typedef UActiveSoundUpdateInterface UClassType; \
	typedef IActiveSoundUpdateInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActiveSoundUpdateInterface;

// ********** End Interface UActiveSoundUpdateInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
