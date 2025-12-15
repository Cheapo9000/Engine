// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interface_AsyncCompilation.h"

#ifdef ENGINE_Interface_AsyncCompilation_generated_h
#error "Interface_AsyncCompilation.generated.h already included, missing '#pragma once' in Interface_AsyncCompilation.h"
#endif
#define ENGINE_Interface_AsyncCompilation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInterface_AsyncCompilation ******************************************
struct Z_Construct_UClass_UInterface_AsyncCompilation_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_AsyncCompilation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_AsyncCompilation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_AsyncCompilation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_AsyncCompilation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterface_AsyncCompilation(UInterface_AsyncCompilation&&) = delete; \
	UInterface_AsyncCompilation(const UInterface_AsyncCompilation&) = delete; \
	virtual ~UInterface_AsyncCompilation() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_AsyncCompilation(); \
	friend struct ::Z_Construct_UClass_UInterface_AsyncCompilation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterface_AsyncCompilation, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister) \
	DECLARE_SERIALIZER(UInterface_AsyncCompilation)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_AsyncCompilation() {} \
public: \
	typedef UInterface_AsyncCompilation UClassType; \
	typedef IInterface_AsyncCompilation ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterface_AsyncCompilation;

// ********** End Interface UInterface_AsyncCompilation ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
