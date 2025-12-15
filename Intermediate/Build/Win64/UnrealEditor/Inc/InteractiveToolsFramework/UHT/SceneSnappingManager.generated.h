// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneQueries/SceneSnappingManager.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_SceneSnappingManager_generated_h
#error "SceneSnappingManager.generated.h already included, missing '#pragma once' in SceneSnappingManager.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SceneSnappingManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneSnappingManager ****************************************************
struct Z_Construct_UClass_USceneSnappingManager_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USceneSnappingManager_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_241_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneSnappingManager(); \
	friend struct ::Z_Construct_UClass_USceneSnappingManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USceneSnappingManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneSnappingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USceneSnappingManager_NoRegister) \
	DECLARE_SERIALIZER(USceneSnappingManager)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_241_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USceneSnappingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneSnappingManager(USceneSnappingManager&&) = delete; \
	USceneSnappingManager(const USceneSnappingManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USceneSnappingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneSnappingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneSnappingManager) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USceneSnappingManager();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_238_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_241_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_241_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_241_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneSnappingManager;

// ********** End Class USceneSnappingManager ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h

// ********** Begin Enum ESceneSnapQueryType *******************************************************
#define FOREACH_ENUM_ESCENESNAPQUERYTYPE(op) \
	op(ESceneSnapQueryType::Position) \
	op(ESceneSnapQueryType::Rotation) \
	op(ESceneSnapQueryType::RotationAngle) \
	op(ESceneSnapQueryType::Scale) \
	op(ESceneSnapQueryType::Transform) 

enum class ESceneSnapQueryType : uint8;
template<> struct TIsUEnumClass<ESceneSnapQueryType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneSnapQueryType>();
// ********** End Enum ESceneSnapQueryType *********************************************************

// ********** Begin Enum ESceneSnapQueryTargetType *************************************************
#define FOREACH_ENUM_ESCENESNAPQUERYTARGETTYPE(op) \
	op(ESceneSnapQueryTargetType::None) \
	op(ESceneSnapQueryTargetType::MeshVertex) \
	op(ESceneSnapQueryTargetType::MeshEdge) \
	op(ESceneSnapQueryTargetType::Grid) \
	op(ESceneSnapQueryTargetType::ObjectTransform) \
	op(ESceneSnapQueryTargetType::Custom) \
	op(ESceneSnapQueryTargetType::All) 

enum class ESceneSnapQueryTargetType : uint8;
template<> struct TIsUEnumClass<ESceneSnapQueryTargetType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneSnapQueryTargetType>();
// ********** End Enum ESceneSnapQueryTargetType ***************************************************

// ********** Begin Enum ESceneSnapQueryTargetResult ***********************************************
#define FOREACH_ENUM_ESCENESNAPQUERYTARGETRESULT(op) \
	op(ESceneSnapQueryTargetResult::NotSnapped) \
	op(ESceneSnapQueryTargetResult::Snapped) \
	op(ESceneSnapQueryTargetResult::Disabled) \
	op(ESceneSnapQueryTargetResult::Unsupported) 

enum class ESceneSnapQueryTargetResult : uint8;
template<> struct TIsUEnumClass<ESceneSnapQueryTargetResult> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneSnapQueryTargetResult>();
// ********** End Enum ESceneSnapQueryTargetResult *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
