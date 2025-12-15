// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/NetworkPredictionInterface.h"

#ifdef ENGINE_NetworkPredictionInterface_generated_h
#error "NetworkPredictionInterface.generated.h already included, missing '#pragma once' in NetworkPredictionInterface.h"
#endif
#define ENGINE_NetworkPredictionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNetworkPredictionInterface ******************************************
struct Z_Construct_UClass_UNetworkPredictionInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkPredictionInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetworkPredictionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkPredictionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkPredictionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPredictionInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkPredictionInterface(UNetworkPredictionInterface&&) = delete; \
	UNetworkPredictionInterface(const UNetworkPredictionInterface&) = delete; \
	virtual ~UNetworkPredictionInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNetworkPredictionInterface(); \
	friend struct ::Z_Construct_UClass_UNetworkPredictionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkPredictionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkPredictionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkPredictionInterface_NoRegister) \
	DECLARE_SERIALIZER(UNetworkPredictionInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~INetworkPredictionInterface() {} \
public: \
	typedef UNetworkPredictionInterface UClassType; \
	typedef INetworkPredictionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkPredictionInterface;

// ********** End Interface UNetworkPredictionInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_NetworkPredictionInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
