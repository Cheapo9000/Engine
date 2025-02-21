// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variables/IAnimNextVariableProxyHost.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_IAnimNextVariableProxyHost_generated_h
#error "IAnimNextVariableProxyHost.generated.h already included, missing '#pragma once' in IAnimNextVariableProxyHost.h"
#endif
#define ANIMNEXT_IAnimNextVariableProxyHost_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNextVariableProxyHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextVariableProxyHost(UAnimNextVariableProxyHost&&); \
	UAnimNextVariableProxyHost(const UAnimNextVariableProxyHost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextVariableProxyHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextVariableProxyHost); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextVariableProxyHost) \
	NO_API virtual ~UAnimNextVariableProxyHost();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimNextVariableProxyHost(); \
	friend struct Z_Construct_UClass_UAnimNextVariableProxyHost_Statics; \
public: \
	DECLARE_CLASS(UAnimNextVariableProxyHost, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimNext"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextVariableProxyHost)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimNextVariableProxyHost() {} \
public: \
	typedef UAnimNextVariableProxyHost UClassType; \
	typedef IAnimNextVariableProxyHost ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXT_API UClass* StaticClass<class UAnimNextVariableProxyHost>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Variables_IAnimNextVariableProxyHost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
