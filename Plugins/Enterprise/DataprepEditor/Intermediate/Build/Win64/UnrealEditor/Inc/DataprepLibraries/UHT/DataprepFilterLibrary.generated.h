// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepFilterLibrary.h"

#ifdef DATAPREPLIBRARIES_DataprepFilterLibrary_generated_h
#error "DataprepFilterLibrary.generated.h already included, missing '#pragma once' in DataprepFilterLibrary.h"
#endif
#define DATAPREPLIBRARIES_DataprepFilterLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
enum class EDataprepSizeFilterMode : uint8;
enum class EDataprepSizeSource : uint8;
enum class EEditorScriptingStringMatchType : uint8;

// ********** Begin Class UDataprepFilterLibrary ***************************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFilterByTag); \
	DECLARE_FUNCTION(execFilterBySize); \
	DECLARE_FUNCTION(execFilterByName); \
	DECLARE_FUNCTION(execFilterByClass);


struct Z_Construct_UClass_UDataprepFilterLibrary_Statics;
DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepFilterLibrary_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepFilterLibrary(); \
	friend struct ::Z_Construct_UClass_UDataprepFilterLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPLIBRARIES_API UClass* ::Z_Construct_UClass_UDataprepFilterLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepLibraries"), Z_Construct_UClass_UDataprepFilterLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDataprepFilterLibrary)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepFilterLibrary(UDataprepFilterLibrary&&) = delete; \
	UDataprepFilterLibrary(const UDataprepFilterLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFilterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFilterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFilterLibrary) \
	NO_API virtual ~UDataprepFilterLibrary();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_24_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepFilterLibrary;

// ********** End Class UDataprepFilterLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h

// ********** Begin Enum EDataprepSizeSource *******************************************************
#define FOREACH_ENUM_EDATAPREPSIZESOURCE(op) \
	op(EDataprepSizeSource::BoundingBoxVolume) 

enum class EDataprepSizeSource : uint8;
template<> struct TIsUEnumClass<EDataprepSizeSource> { enum { Value = true }; };
template<> DATAPREPLIBRARIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataprepSizeSource>();
// ********** End Enum EDataprepSizeSource *********************************************************

// ********** Begin Enum EDataprepSizeFilterMode ***************************************************
#define FOREACH_ENUM_EDATAPREPSIZEFILTERMODE(op) \
	op(EDataprepSizeFilterMode::SmallerThan) \
	op(EDataprepSizeFilterMode::BiggerThan) 

enum class EDataprepSizeFilterMode : uint8;
template<> struct TIsUEnumClass<EDataprepSizeFilterMode> { enum { Value = true }; };
template<> DATAPREPLIBRARIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataprepSizeFilterMode>();
// ********** End Enum EDataprepSizeFilterMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
