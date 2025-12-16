// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeGen/GenSources/PCGGenSourceBase.h"

#ifdef PCG_PCGGenSourceBase_generated_h
#error "PCGGenSourceBase.generated.h already included, missing '#pragma once' in PCGGenSourceBase.h"
#endif
#define PCG_PCGGenSourceBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPCGGenSourceBase ****************************************************
struct Z_Construct_UClass_UPCGGenSourceBase_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGenSourceBase_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGenSourceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGenSourceBase(UPCGGenSourceBase&&) = delete; \
	UPCGGenSourceBase(const UPCGGenSourceBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGenSourceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGenSourceBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGenSourceBase) \
	virtual ~UPCGGenSourceBase() = default;


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPCGGenSourceBase(); \
	friend struct ::Z_Construct_UClass_UPCGGenSourceBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGenSourceBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGenSourceBase, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGenSourceBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGGenSourceBase)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPCGGenSourceBase() {} \
public: \
	typedef UPCGGenSourceBase UClassType; \
	typedef IPCGGenSourceBase ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGenSourceBase;

// ********** End Interface UPCGGenSourceBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
