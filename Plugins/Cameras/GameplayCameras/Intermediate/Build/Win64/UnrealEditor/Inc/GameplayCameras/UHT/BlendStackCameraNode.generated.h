// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/BlendStackCameraNode.h"

#ifdef GAMEPLAYCAMERAS_BlendStackCameraNode_generated_h
#error "BlendStackCameraNode.generated.h already included, missing '#pragma once' in BlendStackCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_BlendStackCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlendStackCameraNode ****************************************************
struct Z_Construct_UClass_UBlendStackCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBlendStackCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendStackCameraNode(); \
	friend struct ::Z_Construct_UClass_UBlendStackCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UBlendStackCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendStackCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UBlendStackCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UBlendStackCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UBlendStackCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendStackCameraNode(UBlendStackCameraNode&&) = delete; \
	UBlendStackCameraNode(const UBlendStackCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UBlendStackCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendStackCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendStackCameraNode) \
	GAMEPLAYCAMERAS_API virtual ~UBlendStackCameraNode();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_65_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendStackCameraNode;

// ********** End Class UBlendStackCameraNode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h

// ********** Begin Enum ECameraBlendStackType *****************************************************
#define FOREACH_ENUM_ECAMERABLENDSTACKTYPE(op) \
	op(ECameraBlendStackType::IsolatedTransient) \
	op(ECameraBlendStackType::AdditivePersistent) 

enum class ECameraBlendStackType;
template<> struct TIsUEnumClass<ECameraBlendStackType> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraBlendStackType>();
// ********** End Enum ECameraBlendStackType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
