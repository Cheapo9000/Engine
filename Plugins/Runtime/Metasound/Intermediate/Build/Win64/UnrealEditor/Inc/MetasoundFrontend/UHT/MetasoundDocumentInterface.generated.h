// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundDocumentInterface.h"

#ifdef METASOUNDFRONTEND_MetasoundDocumentInterface_generated_h
#error "MetasoundDocumentInterface.generated.h already included, missing '#pragma once' in MetasoundDocumentInterface.h"
#endif
#define METASOUNDFRONTEND_MetasoundDocumentInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMetaSoundDocumentInterface ******************************************
struct Z_Construct_UClass_UMetaSoundDocumentInterface_Statics;
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDFRONTEND_API UMetaSoundDocumentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundDocumentInterface(UMetaSoundDocumentInterface&&) = delete; \
	UMetaSoundDocumentInterface(const UMetaSoundDocumentInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDFRONTEND_API, UMetaSoundDocumentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundDocumentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundDocumentInterface) \
	virtual ~UMetaSoundDocumentInterface() = default;


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMetaSoundDocumentInterface(); \
	friend struct ::Z_Construct_UClass_UMetaSoundDocumentInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDFRONTEND_API UClass* ::Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundDocumentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MetasoundFrontend"), Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundDocumentInterface)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMetaSoundDocumentInterface() {} \
public: \
	typedef UMetaSoundDocumentInterface UClassType; \
	typedef IMetaSoundDocumentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundDocumentInterface;

// ********** End Interface UMetaSoundDocumentInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundDocumentInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
