// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorGizmos/TransformGizmoInterfaces.h"

#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_TransformGizmoInterfaces_generated_h
#error "TransformGizmoInterfaces.generated.h already included, missing '#pragma once' in TransformGizmoInterfaces.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_TransformGizmoInterfaces_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRotationContext **************************************************
struct Z_Construct_UScriptStruct_FRotationContext_Statics;
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRotationContext_Statics; \
	EDITORINTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FRotationContext;
// ********** End ScriptStruct FRotationContext ****************************************************

// ********** Begin Interface UTransformGizmoSource ************************************************
struct Z_Construct_UClass_UTransformGizmoSource_Statics;
EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmoSource_NoRegister();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UTransformGizmoSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformGizmoSource(UTransformGizmoSource&&) = delete; \
	UTransformGizmoSource(const UTransformGizmoSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UTransformGizmoSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformGizmoSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformGizmoSource) \
	virtual ~UTransformGizmoSource() = default;


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_68_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTransformGizmoSource(); \
	friend struct ::Z_Construct_UClass_UTransformGizmoSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UTransformGizmoSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformGizmoSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), Z_Construct_UClass_UTransformGizmoSource_NoRegister) \
	DECLARE_SERIALIZER(UTransformGizmoSource)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_68_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_68_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_68_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_68_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITransformGizmoSource() {} \
public: \
	typedef UTransformGizmoSource UClassType; \
	typedef ITransformGizmoSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_65_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_68_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformGizmoSource;

// ********** End Interface UTransformGizmoSource **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h

// ********** Begin Enum EGizmoTransformMode *******************************************************
#define FOREACH_ENUM_EGIZMOTRANSFORMMODE(op) \
	op(EGizmoTransformMode::None) \
	op(EGizmoTransformMode::Translate) \
	op(EGizmoTransformMode::Rotate) \
	op(EGizmoTransformMode::Scale) \
	op(EGizmoTransformMode::Max) 

enum class EGizmoTransformMode : uint8;
template<> struct TIsUEnumClass<EGizmoTransformMode> { enum { Value = true }; };
template<> EDITORINTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoTransformMode>();
// ********** End Enum EGizmoTransformMode *********************************************************

// ********** Begin Enum EGizmoTransformScaleType **************************************************
#define FOREACH_ENUM_EGIZMOTRANSFORMSCALETYPE(op) \
	op(EGizmoTransformScaleType::Default) \
	op(EGizmoTransformScaleType::PercentageBased) 

enum class EGizmoTransformScaleType : uint8;
template<> struct TIsUEnumClass<EGizmoTransformScaleType> { enum { Value = true }; };
template<> EDITORINTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGizmoTransformScaleType>();
// ********** End Enum EGizmoTransformScaleType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
