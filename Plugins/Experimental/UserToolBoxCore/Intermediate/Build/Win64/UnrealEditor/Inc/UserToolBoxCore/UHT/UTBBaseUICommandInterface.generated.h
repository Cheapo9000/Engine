// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UTBBaseUICommandInterface.h"

#ifdef USERTOOLBOXCORE_UTBBaseUICommandInterface_generated_h
#error "UTBBaseUICommandInterface.generated.h already included, missing '#pragma once' in UTBBaseUICommandInterface.h"
#endif
#define USERTOOLBOXCORE_UTBBaseUICommandInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UUTBUICommand ********************************************************
struct Z_Construct_UClass_UUTBUICommand_Statics;
USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBUICommand_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USERTOOLBOXCORE_API UUTBUICommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUTBUICommand(UUTBUICommand&&) = delete; \
	UUTBUICommand(const UUTBUICommand&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USERTOOLBOXCORE_API, UUTBUICommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTBUICommand); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUTBUICommand) \
	virtual ~UUTBUICommand() = default;


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUTBUICommand(); \
	friend struct ::Z_Construct_UClass_UUTBUICommand_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXCORE_API UClass* ::Z_Construct_UClass_UUTBUICommand_NoRegister(); \
public: \
	DECLARE_CLASS2(UUTBUICommand, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), Z_Construct_UClass_UUTBUICommand_NoRegister) \
	DECLARE_SERIALIZER(UUTBUICommand)


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUTBUICommand() {} \
public: \
	typedef UUTBUICommand UClassType; \
	typedef IUTBUICommand ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUTBUICommand;

// ********** End Interface UUTBUICommand **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
