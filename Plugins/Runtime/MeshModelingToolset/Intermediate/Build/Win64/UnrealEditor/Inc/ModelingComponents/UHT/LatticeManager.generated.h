// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LatticeManager.h"

#ifdef MODELINGCOMPONENTS_LatticeManager_generated_h
#error "LatticeManager.generated.h already included, missing '#pragma once' in LatticeManager.h"
#endif
#define MODELINGCOMPONENTS_LatticeManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface ULatticeStateStorage *************************************************
struct Z_Construct_UClass_ULatticeStateStorage_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULatticeStateStorage_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API ULatticeStateStorage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULatticeStateStorage(ULatticeStateStorage&&) = delete; \
	ULatticeStateStorage(const ULatticeStateStorage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, ULatticeStateStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatticeStateStorage); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULatticeStateStorage) \
	virtual ~ULatticeStateStorage() = default;


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULatticeStateStorage(); \
	friend struct ::Z_Construct_UClass_ULatticeStateStorage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_ULatticeStateStorage_NoRegister(); \
public: \
	DECLARE_CLASS2(ULatticeStateStorage, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_ULatticeStateStorage_NoRegister) \
	DECLARE_SERIALIZER(ULatticeStateStorage)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h_25_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h_25_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h_25_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILatticeStateStorage() {} \
public: \
	typedef ULatticeStateStorage UClassType; \
	typedef ILatticeStateStorage ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULatticeStateStorage;

// ********** End Interface ULatticeStateStorage ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_LatticeManager_h

// ********** Begin Enum ELatticeInterpolationType *************************************************
#define FOREACH_ENUM_ELATTICEINTERPOLATIONTYPE(op) \
	op(ELatticeInterpolationType::Linear) \
	op(ELatticeInterpolationType::Cubic) 

enum class ELatticeInterpolationType : uint8;
template<> struct TIsUEnumClass<ELatticeInterpolationType> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ELatticeInterpolationType>();
// ********** End Enum ELatticeInterpolationType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
