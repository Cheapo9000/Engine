// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CompositeMeshComponent.h"

#ifdef COMPOSITE_CompositeMeshComponent_generated_h
#error "CompositeMeshComponent.generated.h already included, missing '#pragma once' in CompositeMeshComponent.h"
#endif
#define COMPOSITE_CompositeMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECompositeMeshMaterialType : uint8;

// ********** Begin Class UCompositeMeshComponent **************************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeMeshComponent_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMaterialType); \
	DECLARE_FUNCTION(execGetMaterialType);


struct Z_Construct_UClass_UCompositeMeshComponent_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositeMeshComponent_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeMeshComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeMeshComponent(); \
	friend struct ::Z_Construct_UClass_UCompositeMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositeMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositeMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UCompositeMeshComponent)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeMeshComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSITE_API UCompositeMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositeMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeMeshComponent(UCompositeMeshComponent&&) = delete; \
	UCompositeMeshComponent(const UCompositeMeshComponent&) = delete; \
	COMPOSITE_API virtual ~UCompositeMeshComponent();


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeMeshComponent_h_26_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeMeshComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeMeshComponent_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeMeshComponent_h_29_INCLASS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeMeshComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeMeshComponent;

// ********** End Class UCompositeMeshComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Components_CompositeMeshComponent_h

// ********** Begin Enum ECompositeMeshMaterialType ************************************************
#define FOREACH_ENUM_ECOMPOSITEMESHMATERIALTYPE(op) \
	op(ECompositeMeshMaterialType::DefaultLitMasked) \
	op(ECompositeMeshMaterialType::DefaultUnlitAlphaComposite) \
	op(ECompositeMeshMaterialType::Custom) 

enum class ECompositeMeshMaterialType : uint8;
template<> struct TIsUEnumClass<ECompositeMeshMaterialType> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositeMeshMaterialType>();
// ********** End Enum ECompositeMeshMaterialType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
