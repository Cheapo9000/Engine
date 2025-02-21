// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ChaosVDPooledObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDPooledObject_generated_h
#error "ChaosVDPooledObject.generated.h already included, missing '#pragma once' in ChaosVDPooledObject.h"
#endif
#define CHAOSVD_ChaosVDPooledObject_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDPooledObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDPooledObject(UChaosVDPooledObject&&); \
	UChaosVDPooledObject(const UChaosVDPooledObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDPooledObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDPooledObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDPooledObject) \
	NO_API virtual ~UChaosVDPooledObject();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosVDPooledObject(); \
	friend struct Z_Construct_UClass_UChaosVDPooledObject_Statics; \
public: \
	DECLARE_CLASS(UChaosVDPooledObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDPooledObject)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosVDPooledObject() {} \
public: \
	typedef UChaosVDPooledObject UClassType; \
	typedef IChaosVDPooledObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h_8_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDPooledObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDPooledObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
