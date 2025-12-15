// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/PhysicsAssetEditorOptions.h"

#ifdef UNREALED_PhysicsAssetEditorOptions_generated_h
#error "PhysicsAssetEditorOptions.generated.h already included, missing '#pragma once' in PhysicsAssetEditorOptions.h"
#endif
#define UNREALED_PhysicsAssetEditorOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsAssetEditorOptions ***********************************************
struct Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics;
UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetEditorOptions_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetEditorOptions(); \
	friend struct ::Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UPhysicsAssetEditorOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsAssetEditorOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UPhysicsAssetEditorOptions_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsAssetEditorOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPhysicsAssetEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetEditorOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPhysicsAssetEditorOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetEditorOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsAssetEditorOptions(UPhysicsAssetEditorOptions&&) = delete; \
	UPhysicsAssetEditorOptions(const UPhysicsAssetEditorOptions&) = delete; \
	UNREALED_API virtual ~UPhysicsAssetEditorOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_45_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_48_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsAssetEditorOptions;

// ********** End Class UPhysicsAssetEditorOptions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h

// ********** Begin Enum EPhysicsAssetEditorCollisionViewMode **************************************
#define FOREACH_ENUM_EPHYSICSASSETEDITORCOLLISIONVIEWMODE(op) \
	op(EPhysicsAssetEditorCollisionViewMode::Solid) \
	op(EPhysicsAssetEditorCollisionViewMode::Wireframe) \
	op(EPhysicsAssetEditorCollisionViewMode::SolidWireframe) \
	op(EPhysicsAssetEditorCollisionViewMode::None) 

enum class EPhysicsAssetEditorCollisionViewMode : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetEditorCollisionViewMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhysicsAssetEditorCollisionViewMode>();
// ********** End Enum EPhysicsAssetEditorCollisionViewMode ****************************************

// ********** Begin Enum EPhysicsAssetEditorCenterOfMassViewMode ***********************************
#define FOREACH_ENUM_EPHYSICSASSETEDITORCENTEROFMASSVIEWMODE(op) \
	op(EPhysicsAssetEditorCenterOfMassViewMode::All) \
	op(EPhysicsAssetEditorCenterOfMassViewMode::Selected) \
	op(EPhysicsAssetEditorCenterOfMassViewMode::None) 

enum class EPhysicsAssetEditorCenterOfMassViewMode : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetEditorCenterOfMassViewMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhysicsAssetEditorCenterOfMassViewMode>();
// ********** End Enum EPhysicsAssetEditorCenterOfMassViewMode *************************************

// ********** Begin Enum EPhysicsAssetEditorMeshViewMode *******************************************
#define FOREACH_ENUM_EPHYSICSASSETEDITORMESHVIEWMODE(op) \
	op(EPhysicsAssetEditorMeshViewMode::Solid) \
	op(EPhysicsAssetEditorMeshViewMode::Wireframe) \
	op(EPhysicsAssetEditorMeshViewMode::None) 

enum class EPhysicsAssetEditorMeshViewMode : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetEditorMeshViewMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhysicsAssetEditorMeshViewMode>();
// ********** End Enum EPhysicsAssetEditorMeshViewMode *********************************************

// ********** Begin Enum EPhysicsAssetEditorConstraintViewMode *************************************
#define FOREACH_ENUM_EPHYSICSASSETEDITORCONSTRAINTVIEWMODE(op) \
	op(EPhysicsAssetEditorConstraintViewMode::None) \
	op(EPhysicsAssetEditorConstraintViewMode::AllPositions) \
	op(EPhysicsAssetEditorConstraintViewMode::AllLimits) 

enum class EPhysicsAssetEditorConstraintViewMode : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetEditorConstraintViewMode> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhysicsAssetEditorConstraintViewMode>();
// ********** End Enum EPhysicsAssetEditorConstraintViewMode ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
