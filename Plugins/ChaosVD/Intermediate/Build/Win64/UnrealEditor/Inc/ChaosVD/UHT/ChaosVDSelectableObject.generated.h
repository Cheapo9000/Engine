// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ChaosVDSelectableObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDSelectableObject_generated_h
#error "ChaosVDSelectableObject.generated.h already included, missing '#pragma once' in ChaosVDSelectableObject.h"
#endif
#define CHAOSVD_ChaosVDSelectableObject_generated_h

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVDSelectableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosVDSelectableObject(UChaosVDSelectableObject&&); \
	UChaosVDSelectableObject(const UChaosVDSelectableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVDSelectableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDSelectableObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDSelectableObject) \
	NO_API virtual ~UChaosVDSelectableObject();


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosVDSelectableObject(); \
	friend struct Z_Construct_UClass_UChaosVDSelectableObject_Statics; \
public: \
	DECLARE_CLASS(UChaosVDSelectableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosVD"), NO_API) \
	DECLARE_SERIALIZER(UChaosVDSelectableObject)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosVDSelectableObject() {} \
public: \
	typedef UChaosVDSelectableObject UClassType; \
	typedef IChaosVDSelectableObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h_8_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDSelectableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Interfaces_ChaosVDSelectableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
