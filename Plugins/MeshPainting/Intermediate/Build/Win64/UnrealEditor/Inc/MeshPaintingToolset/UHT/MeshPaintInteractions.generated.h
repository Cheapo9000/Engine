// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshPaintInteractions.h"

#ifdef MESHPAINTINGTOOLSET_MeshPaintInteractions_generated_h
#error "MeshPaintInteractions.generated.h already included, missing '#pragma once' in MeshPaintInteractions.h"
#endif
#define MESHPAINTINGTOOLSET_MeshPaintInteractions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMeshPaintSelectionInterface *****************************************
struct Z_Construct_UClass_UMeshPaintSelectionInterface_Statics;
MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister();

#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHPAINTINGTOOLSET_API UMeshPaintSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshPaintSelectionInterface(UMeshPaintSelectionInterface&&) = delete; \
	UMeshPaintSelectionInterface(const UMeshPaintSelectionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHPAINTINGTOOLSET_API, UMeshPaintSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintSelectionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshPaintSelectionInterface) \
	virtual ~UMeshPaintSelectionInterface() = default;


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshPaintSelectionInterface(); \
	friend struct ::Z_Construct_UClass_UMeshPaintSelectionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHPAINTINGTOOLSET_API UClass* ::Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshPaintSelectionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MeshPaintingToolset"), Z_Construct_UClass_UMeshPaintSelectionInterface_NoRegister) \
	DECLARE_SERIALIZER(UMeshPaintSelectionInterface)


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshPaintSelectionInterface() {} \
public: \
	typedef UMeshPaintSelectionInterface UClassType; \
	typedef IMeshPaintSelectionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_19_PROLOG
#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshPaintSelectionInterface;

// ********** End Interface UMeshPaintSelectionInterface *******************************************

// ********** Begin Class UMeshPaintSelectionMechanic **********************************************
struct Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics;
MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister();

#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshPaintSelectionMechanic(); \
	friend struct ::Z_Construct_UClass_UMeshPaintSelectionMechanic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHPAINTINGTOOLSET_API UClass* ::Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshPaintSelectionMechanic, UInteractionMechanic, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshPaintingToolset"), Z_Construct_UClass_UMeshPaintSelectionMechanic_NoRegister) \
	DECLARE_SERIALIZER(UMeshPaintSelectionMechanic)


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHPAINTINGTOOLSET_API UMeshPaintSelectionMechanic(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshPaintSelectionMechanic(UMeshPaintSelectionMechanic&&) = delete; \
	UMeshPaintSelectionMechanic(const UMeshPaintSelectionMechanic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHPAINTINGTOOLSET_API, UMeshPaintSelectionMechanic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshPaintSelectionMechanic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshPaintSelectionMechanic) \
	MESHPAINTINGTOOLSET_API virtual ~UMeshPaintSelectionMechanic();


#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_34_PROLOG
#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshPaintSelectionMechanic;

// ********** End Class UMeshPaintSelectionMechanic ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintInteractions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
