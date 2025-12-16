// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSmartObjectRegistration.h"

#ifdef MASSSMARTOBJECTS_MassSmartObjectRegistration_generated_h
#error "MassSmartObjectRegistration.generated.h already included, missing '#pragma once' in MassSmartObjectRegistration.h"
#endif
#define MASSSMARTOBJECTS_MassSmartObjectRegistration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassInActiveSmartObjectsRangeTag *********************************
struct Z_Construct_UScriptStruct_FMassInActiveSmartObjectsRangeTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassInActiveSmartObjectsRangeTag_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassInActiveSmartObjectsRangeTag;
// ********** End ScriptStruct FMassInActiveSmartObjectsRangeTag ***********************************

// ********** Begin ScriptStruct FSmartObjectRegistrationFragment **********************************
struct Z_Construct_UScriptStruct_FSmartObjectRegistrationFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectRegistrationFragment_Statics; \
	MASSSMARTOBJECTS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


struct FSmartObjectRegistrationFragment;
// ********** End ScriptStruct FSmartObjectRegistrationFragment ************************************

// ********** Begin Class UMassSmartObjectInitializerBase ******************************************
struct Z_Construct_UClass_UMassSmartObjectInitializerBase_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectInitializerBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSmartObjectInitializerBase(); \
	friend struct ::Z_Construct_UClass_UMassSmartObjectInitializerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_UMassSmartObjectInitializerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSmartObjectInitializerBase, UMassObserverProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_UMassSmartObjectInitializerBase_NoRegister) \
	DECLARE_SERIALIZER(UMassSmartObjectInitializerBase)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSmartObjectInitializerBase(UMassSmartObjectInitializerBase&&) = delete; \
	UMassSmartObjectInitializerBase(const UMassSmartObjectInitializerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSmartObjectInitializerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSmartObjectInitializerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassSmartObjectInitializerBase) \
	NO_API virtual ~UMassSmartObjectInitializerBase();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_39_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSmartObjectInitializerBase;

// ********** End Class UMassSmartObjectInitializerBase ********************************************

// ********** Begin Class UMassSmartObjectDeinitializerBase ****************************************
struct Z_Construct_UClass_UMassSmartObjectDeinitializerBase_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectDeinitializerBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSmartObjectDeinitializerBase(); \
	friend struct ::Z_Construct_UClass_UMassSmartObjectDeinitializerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_UMassSmartObjectDeinitializerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSmartObjectDeinitializerBase, UMassObserverProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_UMassSmartObjectDeinitializerBase_NoRegister) \
	DECLARE_SERIALIZER(UMassSmartObjectDeinitializerBase)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_63_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSmartObjectDeinitializerBase(UMassSmartObjectDeinitializerBase&&) = delete; \
	UMassSmartObjectDeinitializerBase(const UMassSmartObjectDeinitializerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSmartObjectDeinitializerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSmartObjectDeinitializerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassSmartObjectDeinitializerBase) \
	NO_API virtual ~UMassSmartObjectDeinitializerBase();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_60_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSmartObjectDeinitializerBase;

// ********** End Class UMassSmartObjectDeinitializerBase ******************************************

// ********** Begin Class UMassActiveSmartObjectInitializer ****************************************
struct Z_Construct_UClass_UMassActiveSmartObjectInitializer_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassActiveSmartObjectInitializer_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassActiveSmartObjectInitializer(); \
	friend struct ::Z_Construct_UClass_UMassActiveSmartObjectInitializer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_UMassActiveSmartObjectInitializer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassActiveSmartObjectInitializer, UMassSmartObjectInitializerBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_UMassActiveSmartObjectInitializer_NoRegister) \
	DECLARE_SERIALIZER(UMassActiveSmartObjectInitializer)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_81_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassActiveSmartObjectInitializer(UMassActiveSmartObjectInitializer&&) = delete; \
	UMassActiveSmartObjectInitializer(const UMassActiveSmartObjectInitializer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassActiveSmartObjectInitializer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActiveSmartObjectInitializer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassActiveSmartObjectInitializer) \
	NO_API virtual ~UMassActiveSmartObjectInitializer();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_78_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassActiveSmartObjectInitializer;

// ********** End Class UMassActiveSmartObjectInitializer ******************************************

// ********** Begin Class UMassActiveSmartObjectDeinitializer **************************************
struct Z_Construct_UClass_UMassActiveSmartObjectDeinitializer_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassActiveSmartObjectDeinitializer_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassActiveSmartObjectDeinitializer(); \
	friend struct ::Z_Construct_UClass_UMassActiveSmartObjectDeinitializer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_UMassActiveSmartObjectDeinitializer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassActiveSmartObjectDeinitializer, UMassSmartObjectDeinitializerBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_UMassActiveSmartObjectDeinitializer_NoRegister) \
	DECLARE_SERIALIZER(UMassActiveSmartObjectDeinitializer)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_92_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassActiveSmartObjectDeinitializer(UMassActiveSmartObjectDeinitializer&&) = delete; \
	UMassActiveSmartObjectDeinitializer(const UMassActiveSmartObjectDeinitializer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassActiveSmartObjectDeinitializer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActiveSmartObjectDeinitializer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassActiveSmartObjectDeinitializer) \
	NO_API virtual ~UMassActiveSmartObjectDeinitializer();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_89_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassActiveSmartObjectDeinitializer;

// ********** End Class UMassActiveSmartObjectDeinitializer ****************************************

// ********** Begin Class UMassActorInstanceHandleInitializer **************************************
struct Z_Construct_UClass_UMassActorInstanceHandleInitializer_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassActorInstanceHandleInitializer_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassActorInstanceHandleInitializer(); \
	friend struct ::Z_Construct_UClass_UMassActorInstanceHandleInitializer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_UMassActorInstanceHandleInitializer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassActorInstanceHandleInitializer, UMassSmartObjectInitializerBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_UMassActorInstanceHandleInitializer_NoRegister) \
	DECLARE_SERIALIZER(UMassActorInstanceHandleInitializer)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_104_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassActorInstanceHandleInitializer(UMassActorInstanceHandleInitializer&&) = delete; \
	UMassActorInstanceHandleInitializer(const UMassActorInstanceHandleInitializer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassActorInstanceHandleInitializer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActorInstanceHandleInitializer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassActorInstanceHandleInitializer) \
	NO_API virtual ~UMassActorInstanceHandleInitializer();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_101_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassActorInstanceHandleInitializer;

// ********** End Class UMassActorInstanceHandleInitializer ****************************************

// ********** Begin Class UMassActorInstanceHandleDeinitializer ************************************
struct Z_Construct_UClass_UMassActorInstanceHandleDeinitializer_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassActorInstanceHandleDeinitializer_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassActorInstanceHandleDeinitializer(); \
	friend struct ::Z_Construct_UClass_UMassActorInstanceHandleDeinitializer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_UMassActorInstanceHandleDeinitializer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassActorInstanceHandleDeinitializer, UMassSmartObjectDeinitializerBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_UMassActorInstanceHandleDeinitializer_NoRegister) \
	DECLARE_SERIALIZER(UMassActorInstanceHandleDeinitializer)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_115_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassActorInstanceHandleDeinitializer(UMassActorInstanceHandleDeinitializer&&) = delete; \
	UMassActorInstanceHandleDeinitializer(const UMassActorInstanceHandleDeinitializer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassActorInstanceHandleDeinitializer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActorInstanceHandleDeinitializer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassActorInstanceHandleDeinitializer) \
	NO_API virtual ~UMassActorInstanceHandleDeinitializer();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_112_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassActorInstanceHandleDeinitializer;

// ********** End Class UMassActorInstanceHandleDeinitializer **************************************

// ********** Begin Class UMassActiveSmartObjectSignalProcessor ************************************
struct Z_Construct_UClass_UMassActiveSmartObjectSignalProcessor_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassActiveSmartObjectSignalProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassActiveSmartObjectSignalProcessor(); \
	friend struct ::Z_Construct_UClass_UMassActiveSmartObjectSignalProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_UMassActiveSmartObjectSignalProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassActiveSmartObjectSignalProcessor, UMassSignalProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_UMassActiveSmartObjectSignalProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassActiveSmartObjectSignalProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_132_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassActiveSmartObjectSignalProcessor(UMassActiveSmartObjectSignalProcessor&&) = delete; \
	UMassActiveSmartObjectSignalProcessor(const UMassActiveSmartObjectSignalProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassActiveSmartObjectSignalProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActiveSmartObjectSignalProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassActiveSmartObjectSignalProcessor) \
	NO_API virtual ~UMassActiveSmartObjectSignalProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_129_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassActiveSmartObjectSignalProcessor;

// ********** End Class UMassActiveSmartObjectSignalProcessor **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectRegistration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
