// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancedActorsModifierVolumeComponent.h"

#ifdef INSTANCEDACTORS_InstancedActorsModifierVolumeComponent_generated_h
#error "InstancedActorsModifierVolumeComponent.generated.h already included, missing '#pragma once' in InstancedActorsModifierVolumeComponent.h"
#endif
#define INSTANCEDACTORS_InstancedActorsModifierVolumeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInstancedActorsModifierVolumeComponent **********************************
struct Z_Construct_UClass_UInstancedActorsModifierVolumeComponent_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_UInstancedActorsModifierVolumeComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInstancedActorsModifierVolumeComponent(); \
	friend struct ::Z_Construct_UClass_UInstancedActorsModifierVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_UInstancedActorsModifierVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInstancedActorsModifierVolumeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_UInstancedActorsModifierVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(UInstancedActorsModifierVolumeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Shape=NETFIELD_REP_START, \
		Extent, \
		Radius, \
		LevelsToIgnore, \
		NETFIELD_REP_END=LevelsToIgnore	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(INSTANCEDACTORS_API)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInstancedActorsModifierVolumeComponent(UInstancedActorsModifierVolumeComponent&&) = delete; \
	UInstancedActorsModifierVolumeComponent(const UInstancedActorsModifierVolumeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, UInstancedActorsModifierVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInstancedActorsModifierVolumeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInstancedActorsModifierVolumeComponent) \
	INSTANCEDACTORS_API virtual ~UInstancedActorsModifierVolumeComponent();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInstancedActorsModifierVolumeComponent;

// ********** End Class UInstancedActorsModifierVolumeComponent ************************************

// ********** Begin Class URemoveInstancesModifierVolumeComponent **********************************
struct Z_Construct_UClass_URemoveInstancesModifierVolumeComponent_Statics;
INSTANCEDACTORS_API UClass* Z_Construct_UClass_URemoveInstancesModifierVolumeComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoveInstancesModifierVolumeComponent(); \
	friend struct ::Z_Construct_UClass_URemoveInstancesModifierVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INSTANCEDACTORS_API UClass* ::Z_Construct_UClass_URemoveInstancesModifierVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoveInstancesModifierVolumeComponent, UInstancedActorsModifierVolumeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InstancedActors"), Z_Construct_UClass_URemoveInstancesModifierVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(URemoveInstancesModifierVolumeComponent)


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_140_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoveInstancesModifierVolumeComponent(URemoveInstancesModifierVolumeComponent&&) = delete; \
	URemoveInstancesModifierVolumeComponent(const URemoveInstancesModifierVolumeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INSTANCEDACTORS_API, URemoveInstancesModifierVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoveInstancesModifierVolumeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoveInstancesModifierVolumeComponent) \
	INSTANCEDACTORS_API virtual ~URemoveInstancesModifierVolumeComponent();


#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_137_PROLOG
#define FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_140_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoveInstancesModifierVolumeComponent;

// ********** End Class URemoveInstancesModifierVolumeComponent ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_InstancedActors_Source_InstancedActors_Public_InstancedActorsModifierVolumeComponent_h

// ********** Begin Enum EInstancedActorsVolumeShape ***********************************************
#define FOREACH_ENUM_EINSTANCEDACTORSVOLUMESHAPE(op) \
	op(EInstancedActorsVolumeShape::Box) \
	op(EInstancedActorsVolumeShape::Sphere) 

enum class EInstancedActorsVolumeShape : uint8;
template<> struct TIsUEnumClass<EInstancedActorsVolumeShape> { enum { Value = true }; };
template<> INSTANCEDACTORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EInstancedActorsVolumeShape>();
// ********** End Enum EInstancedActorsVolumeShape *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
