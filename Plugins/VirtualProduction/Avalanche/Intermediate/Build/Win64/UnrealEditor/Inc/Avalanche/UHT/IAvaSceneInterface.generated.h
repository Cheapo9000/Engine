// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAvaSceneInterface.h"

#ifdef AVALANCHE_IAvaSceneInterface_generated_h
#error "IAvaSceneInterface.generated.h already included, missing '#pragma once' in IAvaSceneInterface.h"
#endif
#define AVALANCHE_IAvaSceneInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAvaSceneInterface ***************************************************
struct Z_Construct_UClass_UAvaSceneInterface_Statics;
AVALANCHE_API UClass* Z_Construct_UClass_UAvaSceneInterface_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHE_API UAvaSceneInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSceneInterface(UAvaSceneInterface&&) = delete; \
	UAvaSceneInterface(const UAvaSceneInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHE_API, UAvaSceneInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSceneInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSceneInterface) \
	virtual ~UAvaSceneInterface() = default;


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_27_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAvaSceneInterface(); \
	friend struct ::Z_Construct_UClass_UAvaSceneInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHE_API UClass* ::Z_Construct_UClass_UAvaSceneInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSceneInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Avalanche"), Z_Construct_UClass_UAvaSceneInterface_NoRegister) \
	DECLARE_SERIALIZER(UAvaSceneInterface)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_27_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_27_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_27_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_27_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAvaSceneInterface() {} \
public: \
	typedef UAvaSceneInterface UClassType; \
	typedef IAvaSceneInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_24_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h_27_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSceneInterface;

// ********** End Interface UAvaSceneInterface *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_Avalanche_Public_IAvaSceneInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
