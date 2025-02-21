// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAvaSceneInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHE_IAvaSceneInterface_generated_h
#error "IAvaSceneInterface.generated.h already included, missing '#pragma once' in IAvaSceneInterface.h"
#endif
#define AVALANCHE_IAvaSceneInterface_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHE_API UAvaSceneInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSceneInterface(UAvaSceneInterface&&); \
	UAvaSceneInterface(const UAvaSceneInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaSceneInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSceneInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSceneInterface) \
	AVALANCHE_API virtual ~UAvaSceneInterface();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaSceneInterface(); \
	friend struct Z_Construct_UClass_UAvaSceneInterface_Statics; \
public: \
	DECLARE_CLASS(UAvaSceneInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Avalanche"), AVALANCHE_API) \
	DECLARE_SERIALIZER(UAvaSceneInterface)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaSceneInterface() {} \
public: \
	typedef UAvaSceneInterface UClassType; \
	typedef IAvaSceneInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHE_API UClass* StaticClass<class UAvaSceneInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
