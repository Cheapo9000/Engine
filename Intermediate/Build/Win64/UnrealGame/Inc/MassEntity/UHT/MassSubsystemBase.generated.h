// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSubsystemBase.h"

#ifdef MASSENTITY_MassSubsystemBase_generated_h
#error "MassSubsystemBase.generated.h already included, missing '#pragma once' in MassSubsystemBase.h"
#endif
#define MASSENTITY_MassSubsystemBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSubsystemBase *******************************************************
struct Z_Construct_UClass_UMassSubsystemBase_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassSubsystemBase_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSubsystemBase(); \
	friend struct ::Z_Construct_UClass_UMassSubsystemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassSubsystemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSubsystemBase, UWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassSubsystemBase_NoRegister) \
	DECLARE_SERIALIZER(UMassSubsystemBase) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Mass");} \



#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSENTITY_API UMassSubsystemBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSubsystemBase(UMassSubsystemBase&&) = delete; \
	UMassSubsystemBase(const UMassSubsystemBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassSubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSubsystemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassSubsystemBase) \
	MASSENTITY_API virtual ~UMassSubsystemBase();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_35_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSubsystemBase;

// ********** End Class UMassSubsystemBase *********************************************************

// ********** Begin Class UMassTickableSubsystemBase ***********************************************
struct Z_Construct_UClass_UMassTickableSubsystemBase_Statics;
MASSENTITY_API UClass* Z_Construct_UClass_UMassTickableSubsystemBase_NoRegister();

#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTickableSubsystemBase(); \
	friend struct ::Z_Construct_UClass_UMassTickableSubsystemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITY_API UClass* ::Z_Construct_UClass_UMassTickableSubsystemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTickableSubsystemBase, UTickableWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassEntity"), Z_Construct_UClass_UMassTickableSubsystemBase_NoRegister) \
	DECLARE_SERIALIZER(UMassTickableSubsystemBase) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Mass");} \



#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSENTITY_API UMassTickableSubsystemBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTickableSubsystemBase(UMassTickableSubsystemBase&&) = delete; \
	UMassTickableSubsystemBase(const UMassTickableSubsystemBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITY_API, UMassTickableSubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTickableSubsystemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassTickableSubsystemBase) \
	MASSENTITY_API virtual ~UMassTickableSubsystemBase();


#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_80_PROLOG
#define FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTickableSubsystemBase;

// ********** End Class UMassTickableSubsystemBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MassEntity_Public_MassSubsystemBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
