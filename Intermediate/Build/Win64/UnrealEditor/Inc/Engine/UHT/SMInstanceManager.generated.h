// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceManager.h"

#ifdef ENGINE_SMInstanceManager_generated_h
#error "SMInstanceManager.generated.h already included, missing '#pragma once' in SMInstanceManager.h"
#endif
#define ENGINE_SMInstanceManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USMInstanceManager ***************************************************
struct Z_Construct_UClass_USMInstanceManager_Statics;
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManager_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USMInstanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceManager(USMInstanceManager&&) = delete; \
	USMInstanceManager(const USMInstanceManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USMInstanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceManager); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceManager) \
	virtual ~USMInstanceManager() = default;


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSMInstanceManager(); \
	friend struct ::Z_Construct_UClass_USMInstanceManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USMInstanceManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceManager, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USMInstanceManager_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceManager)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISMInstanceManager() {} \
public: \
	typedef USMInstanceManager UClassType; \
	typedef ISMInstanceManager ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceManager;

// ********** End Interface USMInstanceManager *****************************************************

// ********** Begin Class USMInstanceProxyEditingObject ********************************************
struct Z_Construct_UClass_USMInstanceProxyEditingObject_Statics;
ENGINE_API UClass* Z_Construct_UClass_USMInstanceProxyEditingObject_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceProxyEditingObject(); \
	friend struct ::Z_Construct_UClass_USMInstanceProxyEditingObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USMInstanceProxyEditingObject_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceProxyEditingObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USMInstanceProxyEditingObject_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceProxyEditingObject)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USMInstanceProxyEditingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceProxyEditingObject(USMInstanceProxyEditingObject&&) = delete; \
	USMInstanceProxyEditingObject(const USMInstanceProxyEditingObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USMInstanceProxyEditingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceProxyEditingObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceProxyEditingObject) \
	ENGINE_API virtual ~USMInstanceProxyEditingObject();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_154_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceProxyEditingObject;

// ********** End Class USMInstanceProxyEditingObject **********************************************

// ********** Begin Interface USMInstanceManagerProvider *******************************************
struct Z_Construct_UClass_USMInstanceManagerProvider_Statics;
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManagerProvider_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USMInstanceManagerProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceManagerProvider(USMInstanceManagerProvider&&) = delete; \
	USMInstanceManagerProvider(const USMInstanceManagerProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USMInstanceManagerProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceManagerProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceManagerProvider) \
	virtual ~USMInstanceManagerProvider() = default;


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_174_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSMInstanceManagerProvider(); \
	friend struct ::Z_Construct_UClass_USMInstanceManagerProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USMInstanceManagerProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceManagerProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USMInstanceManagerProvider_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceManagerProvider)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_174_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_174_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_174_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_174_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISMInstanceManagerProvider() {} \
public: \
	typedef USMInstanceManagerProvider UClassType; \
	typedef ISMInstanceManagerProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_171_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_174_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceManagerProvider;

// ********** End Interface USMInstanceManagerProvider *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
