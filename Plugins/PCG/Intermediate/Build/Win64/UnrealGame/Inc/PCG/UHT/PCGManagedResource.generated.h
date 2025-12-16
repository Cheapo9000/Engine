// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGManagedResource.h"

#ifdef PCG_PCGManagedResource_generated_h
#error "PCGManagedResource.generated.h already included, missing '#pragma once' in PCGManagedResource.h"
#endif
#define PCG_PCGManagedResource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;

// ********** Begin Class UPCGManagedResource ******************************************************
struct Z_Construct_UClass_UPCGManagedResource_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedResource_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedResource(); \
	friend struct ::Z_Construct_UClass_UPCGManagedResource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedResource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedResource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedResource_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedResource)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGManagedResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedResource(UPCGManagedResource&&) = delete; \
	UPCGManagedResource(const UPCGManagedResource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGManagedResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedResource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedResource) \
	PCG_API virtual ~UPCGManagedResource();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_29_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedResource;

// ********** End Class UPCGManagedResource ********************************************************

// ********** Begin Class UPCGManagedActors ********************************************************
struct Z_Construct_UClass_UPCGManagedActors_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedActors_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedActors(); \
	friend struct ::Z_Construct_UClass_UPCGManagedActors_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedActors_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedActors, UPCGManagedResource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedActors_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedActors)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGManagedActors(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedActors(UPCGManagedActors&&) = delete; \
	UPCGManagedActors(const UPCGManagedActors&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGManagedActors); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedActors); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedActors) \
	PCG_API virtual ~UPCGManagedActors();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_96_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedActors;

// ********** End Class UPCGManagedActors **********************************************************

// ********** Begin Class UPCGManagedComponentBase *************************************************
struct Z_Construct_UClass_UPCGManagedComponentBase_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedComponentBase_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedComponentBase(); \
	friend struct ::Z_Construct_UClass_UPCGManagedComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedComponentBase, UPCGManagedResource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedComponentBase)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGManagedComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedComponentBase(UPCGManagedComponentBase&&) = delete; \
	UPCGManagedComponentBase(const UPCGManagedComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGManagedComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedComponentBase) \
	PCG_API virtual ~UPCGManagedComponentBase();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_140_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedComponentBase;

// ********** End Class UPCGManagedComponentBase ***************************************************

// ********** Begin Class UPCGManagedComponent *****************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGeneratedComponentFromBP);


struct Z_Construct_UClass_UPCGManagedComponent_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedComponent(); \
	friend struct ::Z_Construct_UClass_UPCGManagedComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedComponent, UPCGManagedComponentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedComponent)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_188_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGManagedComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedComponent(UPCGManagedComponent&&) = delete; \
	UPCGManagedComponent(const UPCGManagedComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGManagedComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedComponent) \
	PCG_API virtual ~UPCGManagedComponent();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_185_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_188_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_188_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedComponent;

// ********** End Class UPCGManagedComponent *******************************************************

// ********** Begin Class UPCGManagedComponentList *************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGeneratedComponentsFromBP);


struct Z_Construct_UClass_UPCGManagedComponentList_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedComponentList_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedComponentList(); \
	friend struct ::Z_Construct_UClass_UPCGManagedComponentList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedComponentList_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedComponentList, UPCGManagedComponentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedComponentList_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedComponentList)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGManagedComponentList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedComponentList(UPCGManagedComponentList&&) = delete; \
	UPCGManagedComponentList(const UPCGManagedComponentList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGManagedComponentList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedComponentList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedComponentList) \
	PCG_API virtual ~UPCGManagedComponentList();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_222_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_225_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedComponentList;

// ********** End Class UPCGManagedComponentList ***************************************************

// ********** Begin Class UPCGManagedComponentDefaultList ******************************************
struct Z_Construct_UClass_UPCGManagedComponentDefaultList_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedComponentDefaultList_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_261_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedComponentDefaultList(); \
	friend struct ::Z_Construct_UClass_UPCGManagedComponentDefaultList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedComponentDefaultList_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedComponentDefaultList, UPCGManagedComponentList, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedComponentDefaultList_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedComponentDefaultList)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_261_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGManagedComponentDefaultList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedComponentDefaultList(UPCGManagedComponentDefaultList&&) = delete; \
	UPCGManagedComponentDefaultList(const UPCGManagedComponentDefaultList&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGManagedComponentDefaultList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedComponentDefaultList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedComponentDefaultList) \
	NO_API virtual ~UPCGManagedComponentDefaultList();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_258_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_261_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_261_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_261_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedComponentDefaultList;

// ********** End Class UPCGManagedComponentDefaultList ********************************************

// ********** Begin Class UPCGManagedISMComponent **************************************************
struct Z_Construct_UClass_UPCGManagedISMComponent_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedISMComponent(); \
	friend struct ::Z_Construct_UClass_UPCGManagedISMComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedISMComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedISMComponent, UPCGManagedComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedISMComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedISMComponent)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_271_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGManagedISMComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedISMComponent(UPCGManagedISMComponent&&) = delete; \
	UPCGManagedISMComponent(const UPCGManagedISMComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGManagedISMComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedISMComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedISMComponent) \
	PCG_API virtual ~UPCGManagedISMComponent();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_268_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_271_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_271_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedISMComponent;

// ********** End Class UPCGManagedISMComponent ****************************************************

// ********** Begin Class UPCGManagedISKMComponent *************************************************
struct Z_Construct_UClass_UPCGManagedISKMComponent_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedISKMComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_332_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedISKMComponent(); \
	friend struct ::Z_Construct_UClass_UPCGManagedISKMComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedISKMComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedISKMComponent, UPCGManagedComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedISKMComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedISKMComponent)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_332_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGManagedISKMComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedISKMComponent(UPCGManagedISKMComponent&&) = delete; \
	UPCGManagedISKMComponent(const UPCGManagedISKMComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGManagedISKMComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedISKMComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedISKMComponent) \
	PCG_API virtual ~UPCGManagedISKMComponent();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_329_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_332_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_332_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_332_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedISKMComponent;

// ********** End Class UPCGManagedISKMComponent ***************************************************

// ********** Begin Class UPCGManagedSplineMeshComponent *******************************************
struct Z_Construct_UClass_UPCGManagedSplineMeshComponent_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGManagedSplineMeshComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_381_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGManagedSplineMeshComponent(); \
	friend struct ::Z_Construct_UClass_UPCGManagedSplineMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGManagedSplineMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGManagedSplineMeshComponent, UPCGManagedComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGManagedSplineMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGManagedSplineMeshComponent)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_381_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGManagedSplineMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGManagedSplineMeshComponent(UPCGManagedSplineMeshComponent&&) = delete; \
	UPCGManagedSplineMeshComponent(const UPCGManagedSplineMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGManagedSplineMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGManagedSplineMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGManagedSplineMeshComponent) \
	PCG_API virtual ~UPCGManagedSplineMeshComponent();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_378_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_381_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_381_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_381_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGManagedSplineMeshComponent;

// ********** End Class UPCGManagedSplineMeshComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
