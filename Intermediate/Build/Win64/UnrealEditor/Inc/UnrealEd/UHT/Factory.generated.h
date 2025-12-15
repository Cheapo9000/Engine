// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/Factory.h"

#ifdef UNREALED_Factory_generated_h
#error "Factory.generated.h already included, missing '#pragma once' in Factory.h"
#endif
#define UNREALED_Factory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAssetImportTask;

// ********** Begin Class UFactory *****************************************************************
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_47_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UFactory_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUFactory(); \
	friend struct ::Z_Construct_UClass_UFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFactory_NoRegister) \
	DECLARE_SERIALIZER(UFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFactory(UFactory&&) = delete; \
	UFactory(const UFactory&) = delete; \
	UNREALED_API virtual ~UFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_44_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_47_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_47_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFactory;

// ********** End Class UFactory *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h

// ********** Begin Enum EFactoryCreateWorkflow ****************************************************
#define FOREACH_ENUM_EFACTORYCREATEWORKFLOW(op) \
	op(EFactoryCreateWorkflow::Default) \
	op(EFactoryCreateWorkflow::Asynchronous) 

enum class EFactoryCreateWorkflow : uint8;
template<> struct TIsUEnumClass<EFactoryCreateWorkflow> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EFactoryCreateWorkflow>();
// ********** End Enum EFactoryCreateWorkflow ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
