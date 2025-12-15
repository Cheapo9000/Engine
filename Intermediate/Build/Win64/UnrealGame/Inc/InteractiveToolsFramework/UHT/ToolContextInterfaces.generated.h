// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolContextInterfaces.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_ToolContextInterfaces_generated_h
#error "ToolContextInterfaces.generated.h already included, missing '#pragma once' in ToolContextInterfaces.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_ToolContextInterfaces_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToolsContextCursorAPI ***************************************************
struct Z_Construct_UClass_UToolsContextCursorAPI_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolsContextCursorAPI_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolsContextCursorAPI(); \
	friend struct ::Z_Construct_UClass_UToolsContextCursorAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UToolsContextCursorAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolsContextCursorAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UToolsContextCursorAPI_NoRegister) \
	DECLARE_SERIALIZER(UToolsContextCursorAPI)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_194_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolsContextCursorAPI(UToolsContextCursorAPI&&) = delete; \
	UToolsContextCursorAPI(const UToolsContextCursorAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UToolsContextCursorAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolsContextCursorAPI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToolsContextCursorAPI)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_191_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_194_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolsContextCursorAPI;

// ********** End Class UToolsContextCursorAPI *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h

// ********** Begin Enum EStandardToolContextMaterials *********************************************
#define FOREACH_ENUM_ESTANDARDTOOLCONTEXTMATERIALS(op) \
	op(EStandardToolContextMaterials::VertexColorMaterial) 

enum class EStandardToolContextMaterials;
template<> struct TIsUEnumClass<EStandardToolContextMaterials> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EStandardToolContextMaterials>();
// ********** End Enum EStandardToolContextMaterials ***********************************************

// ********** Begin Enum EToolContextCoordinateSystem **********************************************
#define FOREACH_ENUM_ETOOLCONTEXTCOORDINATESYSTEM(op) \
	op(EToolContextCoordinateSystem::World) \
	op(EToolContextCoordinateSystem::Local) \
	op(EToolContextCoordinateSystem::Screen) 

enum class EToolContextCoordinateSystem : uint8;
template<> struct TIsUEnumClass<EToolContextCoordinateSystem> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolContextCoordinateSystem>();
// ********** End Enum EToolContextCoordinateSystem ************************************************

// ********** Begin Enum EToolContextTransformGizmoMode ********************************************
#define FOREACH_ENUM_ETOOLCONTEXTTRANSFORMGIZMOMODE(op) \
	op(EToolContextTransformGizmoMode::NoGizmo) \
	op(EToolContextTransformGizmoMode::Translation) \
	op(EToolContextTransformGizmoMode::Rotation) \
	op(EToolContextTransformGizmoMode::Scale) \
	op(EToolContextTransformGizmoMode::Combined) 

enum class EToolContextTransformGizmoMode : uint8;
template<> struct TIsUEnumClass<EToolContextTransformGizmoMode> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolContextTransformGizmoMode>();
// ********** End Enum EToolContextTransformGizmoMode **********************************************

// ********** Begin Enum EToolMessageLevel *********************************************************
#define FOREACH_ENUM_ETOOLMESSAGELEVEL(op) \
	op(EToolMessageLevel::Internal) \
	op(EToolMessageLevel::UserMessage) \
	op(EToolMessageLevel::UserNotification) \
	op(EToolMessageLevel::UserWarning) \
	op(EToolMessageLevel::UserError) 

enum class EToolMessageLevel;
template<> struct TIsUEnumClass<EToolMessageLevel> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolMessageLevel>();
// ********** End Enum EToolMessageLevel ***********************************************************

// ********** Begin Enum ESelectedObjectsModificationType ******************************************
#define FOREACH_ENUM_ESELECTEDOBJECTSMODIFICATIONTYPE(op) \
	op(ESelectedObjectsModificationType::Replace) \
	op(ESelectedObjectsModificationType::Add) \
	op(ESelectedObjectsModificationType::Remove) \
	op(ESelectedObjectsModificationType::Clear) 

enum class ESelectedObjectsModificationType;
template<> struct TIsUEnumClass<ESelectedObjectsModificationType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ESelectedObjectsModificationType>();
// ********** End Enum ESelectedObjectsModificationType ********************************************

// ********** Begin Enum EViewInteractionState *****************************************************
#define FOREACH_ENUM_EVIEWINTERACTIONSTATE(op) \
	op(EViewInteractionState::None) \
	op(EViewInteractionState::Hovered) \
	op(EViewInteractionState::Focused) 

enum class EViewInteractionState;
template<> struct TIsUEnumClass<EViewInteractionState> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EViewInteractionState>();
// ********** End Enum EViewInteractionState *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
