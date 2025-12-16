// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IChooserParameterProxyTable.h"

#ifdef PROXYTABLE_IChooserParameterProxyTable_generated_h
#error "IChooserParameterProxyTable.generated.h already included, missing '#pragma once' in IChooserParameterProxyTable.h"
#endif
#define PROXYTABLE_IChooserParameterProxyTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UChooserParameterProxyTable ******************************************
struct Z_Construct_UClass_UChooserParameterProxyTable_Statics;
PROXYTABLE_API UClass* Z_Construct_UClass_UChooserParameterProxyTable_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROXYTABLE_API UChooserParameterProxyTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserParameterProxyTable(UChooserParameterProxyTable&&) = delete; \
	UChooserParameterProxyTable(const UChooserParameterProxyTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROXYTABLE_API, UChooserParameterProxyTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserParameterProxyTable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserParameterProxyTable) \
	virtual ~UChooserParameterProxyTable() = default;


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChooserParameterProxyTable(); \
	friend struct ::Z_Construct_UClass_UChooserParameterProxyTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROXYTABLE_API UClass* ::Z_Construct_UClass_UChooserParameterProxyTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserParameterProxyTable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProxyTable"), Z_Construct_UClass_UChooserParameterProxyTable_NoRegister) \
	DECLARE_SERIALIZER(UChooserParameterProxyTable)


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChooserParameterProxyTable() {} \
public: \
	typedef UChooserParameterProxyTable UClassType; \
	typedef IChooserParameterProxyTable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_14_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChooserParameterProxyTable;

// ********** End Interface UChooserParameterProxyTable ********************************************

// ********** Begin ScriptStruct FChooserParameterProxyTableBase ***********************************
struct Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics;
#define FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics; \
	PROXYTABLE_API static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterBase Super;


struct FChooserParameterProxyTableBase;
// ********** End ScriptStruct FChooserParameterProxyTableBase *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
