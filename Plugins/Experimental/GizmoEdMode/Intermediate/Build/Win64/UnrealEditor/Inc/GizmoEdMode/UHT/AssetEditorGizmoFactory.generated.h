// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetEditorGizmoFactory.h"

#ifdef GIZMOEDMODE_AssetEditorGizmoFactory_generated_h
#error "AssetEditorGizmoFactory.generated.h already included, missing '#pragma once' in AssetEditorGizmoFactory.h"
#endif
#define GIZMOEDMODE_AssetEditorGizmoFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAssetEditorGizmoFactory *********************************************
struct Z_Construct_UClass_UAssetEditorGizmoFactory_Statics;
GIZMOEDMODE_API UClass* Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GIZMOEDMODE_API UAssetEditorGizmoFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetEditorGizmoFactory(UAssetEditorGizmoFactory&&) = delete; \
	UAssetEditorGizmoFactory(const UAssetEditorGizmoFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GIZMOEDMODE_API, UAssetEditorGizmoFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditorGizmoFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetEditorGizmoFactory) \
	virtual ~UAssetEditorGizmoFactory() = default;


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetEditorGizmoFactory(); \
	friend struct ::Z_Construct_UClass_UAssetEditorGizmoFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GIZMOEDMODE_API UClass* ::Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetEditorGizmoFactory, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GizmoEdMode"), Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister) \
	DECLARE_SERIALIZER(UAssetEditorGizmoFactory)


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_25_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_25_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_25_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetEditorGizmoFactory() {} \
public: \
	typedef UAssetEditorGizmoFactory UClassType; \
	typedef IAssetEditorGizmoFactory ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetEditorGizmoFactory;

// ********** End Interface UAssetEditorGizmoFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h

// ********** Begin Enum EAssetEditorGizmoFactoryPriority ******************************************
#define FOREACH_ENUM_EASSETEDITORGIZMOFACTORYPRIORITY(op) \
	op(EAssetEditorGizmoFactoryPriority::Default) \
	op(EAssetEditorGizmoFactoryPriority::Normal) \
	op(EAssetEditorGizmoFactoryPriority::High) 

enum class EAssetEditorGizmoFactoryPriority;
template<> struct TIsUEnumClass<EAssetEditorGizmoFactoryPriority> { enum { Value = true }; };
template<> GIZMOEDMODE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetEditorGizmoFactoryPriority>();
// ********** End Enum EAssetEditorGizmoFactoryPriority ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
