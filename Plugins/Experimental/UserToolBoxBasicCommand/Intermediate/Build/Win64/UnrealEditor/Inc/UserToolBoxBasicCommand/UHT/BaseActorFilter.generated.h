// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFilter/BaseActorFilter.h"

#ifdef USERTOOLBOXBASICCOMMAND_BaseActorFilter_generated_h
#error "BaseActorFilter.generated.h already included, missing '#pragma once' in BaseActorFilter.h"
#endif
#define USERTOOLBOXBASICCOMMAND_BaseActorFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UBaseActorFilter *********************************************************
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool FilterUnit_Implementation(AActor* Source); \
	virtual TArray<AActor*> Filter_Implementation(TArray<AActor*> const& Source); \
	DECLARE_FUNCTION(execFilterUnit); \
	DECLARE_FUNCTION(execFilter);


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UBaseActorFilter_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UBaseActorFilter_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseActorFilter(); \
	friend struct ::Z_Construct_UClass_UBaseActorFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UBaseActorFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseActorFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UBaseActorFilter_NoRegister) \
	DECLARE_SERIALIZER(UBaseActorFilter)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseActorFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseActorFilter(UBaseActorFilter&&) = delete; \
	UBaseActorFilter(const UBaseActorFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseActorFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseActorFilter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseActorFilter) \
	NO_API virtual ~UBaseActorFilter();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_17_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseActorFilter;

// ********** End Class UBaseActorFilter ***********************************************************

// ********** Begin Class UGetAllDescendants *******************************************************
struct Z_Construct_UClass_UGetAllDescendants_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UGetAllDescendants_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetAllDescendants(); \
	friend struct ::Z_Construct_UClass_UGetAllDescendants_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UGetAllDescendants_NoRegister(); \
public: \
	DECLARE_CLASS2(UGetAllDescendants, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UGetAllDescendants_NoRegister) \
	DECLARE_SERIALIZER(UGetAllDescendants)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetAllDescendants(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGetAllDescendants(UGetAllDescendants&&) = delete; \
	UGetAllDescendants(const UGetAllDescendants&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetAllDescendants); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetAllDescendants); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetAllDescendants) \
	NO_API virtual ~UGetAllDescendants();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGetAllDescendants;

// ********** End Class UGetAllDescendants *********************************************************

// ********** Begin Class UGetParents **************************************************************
struct Z_Construct_UClass_UGetParents_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UGetParents_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetParents(); \
	friend struct ::Z_Construct_UClass_UGetParents_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UGetParents_NoRegister(); \
public: \
	DECLARE_CLASS2(UGetParents, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UGetParents_NoRegister) \
	DECLARE_SERIALIZER(UGetParents)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetParents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGetParents(UGetParents&&) = delete; \
	UGetParents(const UGetParents&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetParents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetParents); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetParents) \
	NO_API virtual ~UGetParents();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_66_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGetParents;

// ********** End Class UGetParents ****************************************************************

// ********** Begin Class UHasAttachedActor ********************************************************
struct Z_Construct_UClass_UHasAttachedActor_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasAttachedActor_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHasAttachedActor(); \
	friend struct ::Z_Construct_UClass_UHasAttachedActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UHasAttachedActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UHasAttachedActor, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UHasAttachedActor_NoRegister) \
	DECLARE_SERIALIZER(UHasAttachedActor)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHasAttachedActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHasAttachedActor(UHasAttachedActor&&) = delete; \
	UHasAttachedActor(const UHasAttachedActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHasAttachedActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasAttachedActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHasAttachedActor) \
	NO_API virtual ~UHasAttachedActor();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_73_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHasAttachedActor;

// ********** End Class UHasAttachedActor **********************************************************

// ********** Begin Class UHasComponentOfClass *****************************************************
struct Z_Construct_UClass_UHasComponentOfClass_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasComponentOfClass_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHasComponentOfClass(); \
	friend struct ::Z_Construct_UClass_UHasComponentOfClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UHasComponentOfClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UHasComponentOfClass, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UHasComponentOfClass_NoRegister) \
	DECLARE_SERIALIZER(UHasComponentOfClass)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHasComponentOfClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHasComponentOfClass(UHasComponentOfClass&&) = delete; \
	UHasComponentOfClass(const UHasComponentOfClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHasComponentOfClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasComponentOfClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHasComponentOfClass) \
	NO_API virtual ~UHasComponentOfClass();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_81_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHasComponentOfClass;

// ********** End Class UHasComponentOfClass *******************************************************

// ********** Begin Class UHasMetadataByKey ********************************************************
struct Z_Construct_UClass_UHasMetadataByKey_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasMetadataByKey_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHasMetadataByKey(); \
	friend struct ::Z_Construct_UClass_UHasMetadataByKey_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UHasMetadataByKey_NoRegister(); \
public: \
	DECLARE_CLASS2(UHasMetadataByKey, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UHasMetadataByKey_NoRegister) \
	DECLARE_SERIALIZER(UHasMetadataByKey)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHasMetadataByKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHasMetadataByKey(UHasMetadataByKey&&) = delete; \
	UHasMetadataByKey(const UHasMetadataByKey&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHasMetadataByKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasMetadataByKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHasMetadataByKey) \
	NO_API virtual ~UHasMetadataByKey();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_90_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHasMetadataByKey;

// ********** End Class UHasMetadataByKey **********************************************************

// ********** Begin Class UHasMetadataByKeyAndValue ************************************************
struct Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasMetadataByKeyAndValue_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHasMetadataByKeyAndValue(); \
	friend struct ::Z_Construct_UClass_UHasMetadataByKeyAndValue_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UHasMetadataByKeyAndValue_NoRegister(); \
public: \
	DECLARE_CLASS2(UHasMetadataByKeyAndValue, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UHasMetadataByKeyAndValue_NoRegister) \
	DECLARE_SERIALIZER(UHasMetadataByKeyAndValue)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHasMetadataByKeyAndValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHasMetadataByKeyAndValue(UHasMetadataByKeyAndValue&&) = delete; \
	UHasMetadataByKeyAndValue(const UHasMetadataByKeyAndValue&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHasMetadataByKeyAndValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasMetadataByKeyAndValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHasMetadataByKeyAndValue) \
	NO_API virtual ~UHasMetadataByKeyAndValue();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_99_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHasMetadataByKeyAndValue;

// ********** End Class UHasMetadataByKeyAndValue **************************************************

// ********** Begin Class UIsClassOf ***************************************************************
struct Z_Construct_UClass_UIsClassOf_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UIsClassOf_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsClassOf(); \
	friend struct ::Z_Construct_UClass_UIsClassOf_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UIsClassOf_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsClassOf, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UIsClassOf_NoRegister) \
	DECLARE_SERIALIZER(UIsClassOf)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsClassOf(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsClassOf(UIsClassOf&&) = delete; \
	UIsClassOf(const UIsClassOf&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsClassOf); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsClassOf); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsClassOf) \
	NO_API virtual ~UIsClassOf();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_110_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsClassOf;

// ********** End Class UIsClassOf *****************************************************************

// ********** Begin Class UGetNDescendants *********************************************************
struct Z_Construct_UClass_UGetNDescendants_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UGetNDescendants_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetNDescendants(); \
	friend struct ::Z_Construct_UClass_UGetNDescendants_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UGetNDescendants_NoRegister(); \
public: \
	DECLARE_CLASS2(UGetNDescendants, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UGetNDescendants_NoRegister) \
	DECLARE_SERIALIZER(UGetNDescendants)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetNDescendants(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGetNDescendants(UGetNDescendants&&) = delete; \
	UGetNDescendants(const UGetNDescendants&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetNDescendants); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetNDescendants); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetNDescendants) \
	NO_API virtual ~UGetNDescendants();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_121_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGetNDescendants;

// ********** End Class UGetNDescendants ***********************************************************

// ********** Begin Class UHasMetadataByKeyAndValueDropDown ****************************************
struct Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHasMetadataByKeyAndValueDropDown(); \
	friend struct ::Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_NoRegister(); \
public: \
	DECLARE_CLASS2(UHasMetadataByKeyAndValueDropDown, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UHasMetadataByKeyAndValueDropDown_NoRegister) \
	DECLARE_SERIALIZER(UHasMetadataByKeyAndValueDropDown)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHasMetadataByKeyAndValueDropDown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHasMetadataByKeyAndValueDropDown(UHasMetadataByKeyAndValueDropDown&&) = delete; \
	UHasMetadataByKeyAndValueDropDown(const UHasMetadataByKeyAndValueDropDown&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHasMetadataByKeyAndValueDropDown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasMetadataByKeyAndValueDropDown); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHasMetadataByKeyAndValueDropDown) \
	NO_API virtual ~UHasMetadataByKeyAndValueDropDown();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_132_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_135_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHasMetadataByKeyAndValueDropDown;

// ********** End Class UHasMetadataByKeyAndValueDropDown ******************************************

// ********** Begin Class UEmptyStaticMeshActor ****************************************************
struct Z_Construct_UClass_UEmptyStaticMeshActor_Statics;
USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UEmptyStaticMeshActor_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEmptyStaticMeshActor(); \
	friend struct ::Z_Construct_UClass_UEmptyStaticMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXBASICCOMMAND_API UClass* ::Z_Construct_UClass_UEmptyStaticMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UEmptyStaticMeshActor, UBaseActorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxBasicCommand"), Z_Construct_UClass_UEmptyStaticMeshActor_NoRegister) \
	DECLARE_SERIALIZER(UEmptyStaticMeshActor)


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEmptyStaticMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEmptyStaticMeshActor(UEmptyStaticMeshActor&&) = delete; \
	UEmptyStaticMeshActor(const UEmptyStaticMeshActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEmptyStaticMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEmptyStaticMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEmptyStaticMeshActor) \
	NO_API virtual ~UEmptyStaticMeshActor();


#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_140_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEmptyStaticMeshActor;

// ********** End Class UEmptyStaticMeshActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ActorFilter_BaseActorFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
