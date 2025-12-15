// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveTool.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveTool_generated_h
#error "InteractiveTool.generated.h already included, missing '#pragma once' in InteractiveTool.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInteractiveToolPropertySet **********************************************
struct Z_Construct_UClass_UInteractiveToolPropertySet_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_258_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveToolPropertySet(); \
	friend struct ::Z_Construct_UClass_UInteractiveToolPropertySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveToolPropertySet, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveToolPropertySet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_258_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveToolPropertySet(UInteractiveToolPropertySet&&) = delete; \
	UInteractiveToolPropertySet(const UInteractiveToolPropertySet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveToolPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveToolPropertySet) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveToolPropertySet();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_255_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_258_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_258_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_258_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveToolPropertySet;

// ********** End Class UInteractiveToolPropertySet ************************************************

// ********** Begin Class UInteractiveTool *********************************************************
struct Z_Construct_UClass_UInteractiveTool_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_365_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveTool(); \
	friend struct ::Z_Construct_UClass_UInteractiveTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInteractiveTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveTool, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInteractiveTool_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveTool) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveTool*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_365_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveTool(UInteractiveTool&&) = delete; \
	UInteractiveTool(const UInteractiveTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveTool) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveTool();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_362_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_365_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_365_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_365_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveTool;

// ********** End Class UInteractiveTool ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h

// ********** Begin Enum EToolShutdownType *********************************************************
#define FOREACH_ENUM_ETOOLSHUTDOWNTYPE(op) \
	op(EToolShutdownType::Completed) \
	op(EToolShutdownType::Accept) \
	op(EToolShutdownType::Cancel) 

enum class EToolShutdownType : uint8;
template<> struct TIsUEnumClass<EToolShutdownType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolShutdownType>();
// ********** End Enum EToolShutdownType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
