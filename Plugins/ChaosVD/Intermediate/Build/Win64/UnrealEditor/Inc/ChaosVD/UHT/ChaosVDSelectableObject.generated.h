// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ChaosVDSelectableObject.h"

#ifdef CHAOSVD_ChaosVDSelectableObject_generated_h
#error "ChaosVDSelectableObject.generated.h already included, missing '#pragma once' in ChaosVDSelectableObject.h"
#endif
#define CHAOSVD_ChaosVDSelectableObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UChaosVDSelectableObject *********************************************
struct Z_Construct_UClass_UChaosVDSelectableObject_Statics;
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDSelectableObject_NoRegister();

#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSVD_API UChaosVDSelectableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosVDSelectableObject(UChaosVDSelectableObject&&) = delete; \
	UChaosVDSelectableObject(const UChaosVDSelectableObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVD_API, UChaosVDSelectableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDSelectableObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDSelectableObject) \
	virtual ~UChaosVDSelectableObject() = default;


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosVDSelectableObject(); \
	friend struct ::Z_Construct_UClass_UChaosVDSelectableObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSVD_API UClass* ::Z_Construct_UClass_UChaosVDSelectableObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosVDSelectableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosVD"), Z_Construct_UClass_UChaosVDSelectableObject_NoRegister) \
	DECLARE_SERIALIZER(UChaosVDSelectableObject)


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosVDSelectableObject() {} \
public: \
	typedef UChaosVDSelectableObject UClassType; \
	typedef IChaosVDSelectableObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h_8_PROLOG
#define FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosVDSelectableObject;

// ********** End Interface UChaosVDSelectableObject ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_Interfaces_ChaosVDSelectableObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
