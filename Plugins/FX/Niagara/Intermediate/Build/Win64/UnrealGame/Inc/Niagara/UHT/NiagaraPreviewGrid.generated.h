// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraPreviewGrid.h"

#ifdef NIAGARA_NiagaraPreviewGrid_generated_h
#error "NiagaraPreviewGrid.generated.h already included, missing '#pragma once' in NiagaraPreviewGrid.h"
#endif
#define NIAGARA_NiagaraPreviewGrid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class UNiagaraSystem;

// ********** Begin Class ANiagaraPreviewBase ******************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ANiagaraPreviewBase_Statics;
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraPreviewBase(); \
	friend struct ::Z_Construct_UClass_ANiagaraPreviewBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_ANiagaraPreviewBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ANiagaraPreviewBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_ANiagaraPreviewBase_NoRegister) \
	DECLARE_SERIALIZER(ANiagaraPreviewBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANiagaraPreviewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANiagaraPreviewBase(ANiagaraPreviewBase&&) = delete; \
	ANiagaraPreviewBase(const ANiagaraPreviewBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANiagaraPreviewBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraPreviewBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraPreviewBase) \
	NO_API virtual ~ANiagaraPreviewBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_17_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANiagaraPreviewBase;

// ********** End Class ANiagaraPreviewBase ********************************************************

// ********** Begin Class UNiagaraPreviewAxis ******************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyToPreview); \
	DECLARE_FUNCTION(execNum);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UNiagaraPreviewAxis_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis(); \
	friend struct ::Z_Construct_UClass_UNiagaraPreviewAxis_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPreviewAxis, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPreviewAxis(UNiagaraPreviewAxis&&) = delete; \
	UNiagaraPreviewAxis(const UNiagaraPreviewAxis&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis) \
	NO_API virtual ~UNiagaraPreviewAxis();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_39_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPreviewAxis;

// ********** End Class UNiagaraPreviewAxis ********************************************************

// ********** Begin Class UNiagaraPreviewAxis_InterpParamBase **************************************
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase(); \
	friend struct ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPreviewAxis_InterpParamBase, UNiagaraPreviewAxis, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPreviewAxis_InterpParamBase(UNiagaraPreviewAxis_InterpParamBase&&) = delete; \
	UNiagaraPreviewAxis_InterpParamBase(const UNiagaraPreviewAxis_InterpParamBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamBase) \
	NO_API virtual ~UNiagaraPreviewAxis_InterpParamBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_64_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPreviewAxis_InterpParamBase;

// ********** End Class UNiagaraPreviewAxis_InterpParamBase ****************************************

// ********** Begin Class UNiagaraPreviewAxis_InterpParamInt32 *************************************
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32(); \
	friend struct ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPreviewAxis_InterpParamInt32, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamInt32)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamInt32(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPreviewAxis_InterpParamInt32(UNiagaraPreviewAxis_InterpParamInt32&&) = delete; \
	UNiagaraPreviewAxis_InterpParamInt32(const UNiagaraPreviewAxis_InterpParamInt32&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamInt32); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamInt32); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamInt32) \
	NO_API virtual ~UNiagaraPreviewAxis_InterpParamInt32();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_78_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPreviewAxis_InterpParamInt32;

// ********** End Class UNiagaraPreviewAxis_InterpParamInt32 ***************************************

// ********** Begin Class UNiagaraPreviewAxis_InterpParamFloat *************************************
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat(); \
	friend struct ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPreviewAxis_InterpParamFloat, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamFloat)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPreviewAxis_InterpParamFloat(UNiagaraPreviewAxis_InterpParamFloat&&) = delete; \
	UNiagaraPreviewAxis_InterpParamFloat(const UNiagaraPreviewAxis_InterpParamFloat&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamFloat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamFloat) \
	NO_API virtual ~UNiagaraPreviewAxis_InterpParamFloat();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_94_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPreviewAxis_InterpParamFloat;

// ********** End Class UNiagaraPreviewAxis_InterpParamFloat ***************************************

// ********** Begin Class UNiagaraPreviewAxis_InterpParamVector2D **********************************
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D(); \
	friend struct ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPreviewAxis_InterpParamVector2D, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamVector2D)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPreviewAxis_InterpParamVector2D(UNiagaraPreviewAxis_InterpParamVector2D&&) = delete; \
	UNiagaraPreviewAxis_InterpParamVector2D(const UNiagaraPreviewAxis_InterpParamVector2D&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamVector2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamVector2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamVector2D) \
	NO_API virtual ~UNiagaraPreviewAxis_InterpParamVector2D();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_110_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPreviewAxis_InterpParamVector2D;

// ********** End Class UNiagaraPreviewAxis_InterpParamVector2D ************************************

// ********** Begin Class UNiagaraPreviewAxis_InterpParamVector ************************************
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector(); \
	friend struct ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPreviewAxis_InterpParamVector, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamVector)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPreviewAxis_InterpParamVector(UNiagaraPreviewAxis_InterpParamVector&&) = delete; \
	UNiagaraPreviewAxis_InterpParamVector(const UNiagaraPreviewAxis_InterpParamVector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamVector) \
	NO_API virtual ~UNiagaraPreviewAxis_InterpParamVector();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_126_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPreviewAxis_InterpParamVector;

// ********** End Class UNiagaraPreviewAxis_InterpParamVector **************************************

// ********** Begin Class UNiagaraPreviewAxis_InterpParamVector4 ***********************************
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4(); \
	friend struct ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPreviewAxis_InterpParamVector4, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamVector4)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamVector4(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPreviewAxis_InterpParamVector4(UNiagaraPreviewAxis_InterpParamVector4&&) = delete; \
	UNiagaraPreviewAxis_InterpParamVector4(const UNiagaraPreviewAxis_InterpParamVector4&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamVector4); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamVector4); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamVector4) \
	NO_API virtual ~UNiagaraPreviewAxis_InterpParamVector4();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_142_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_145_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPreviewAxis_InterpParamVector4;

// ********** End Class UNiagaraPreviewAxis_InterpParamVector4 *************************************

// ********** Begin Class UNiagaraPreviewAxis_InterpParamLinearColor *******************************
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor(); \
	friend struct ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraPreviewAxis_InterpParamLinearColor, UNiagaraPreviewAxis_InterpParamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraPreviewAxis_InterpParamLinearColor)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraPreviewAxis_InterpParamLinearColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraPreviewAxis_InterpParamLinearColor(UNiagaraPreviewAxis_InterpParamLinearColor&&) = delete; \
	UNiagaraPreviewAxis_InterpParamLinearColor(const UNiagaraPreviewAxis_InterpParamLinearColor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraPreviewAxis_InterpParamLinearColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraPreviewAxis_InterpParamLinearColor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraPreviewAxis_InterpParamLinearColor) \
	NO_API virtual ~UNiagaraPreviewAxis_InterpParamLinearColor();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_158_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_161_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraPreviewAxis_InterpParamLinearColor;

// ********** End Class UNiagaraPreviewAxis_InterpParamLinearColor *********************************

// ********** Begin Class ANiagaraPreviewGrid ******************************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPreviews); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execDeactivatePreviews); \
	DECLARE_FUNCTION(execActivatePreviews);


struct Z_Construct_UClass_ANiagaraPreviewGrid_Statics;
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewGrid_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_INCLASS \
private: \
	static void StaticRegisterNativesANiagaraPreviewGrid(); \
	friend struct ::Z_Construct_UClass_ANiagaraPreviewGrid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_ANiagaraPreviewGrid_NoRegister(); \
public: \
	DECLARE_CLASS2(ANiagaraPreviewGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_ANiagaraPreviewGrid_NoRegister) \
	DECLARE_SERIALIZER(ANiagaraPreviewGrid)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANiagaraPreviewGrid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraPreviewGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANiagaraPreviewGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraPreviewGrid); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANiagaraPreviewGrid(ANiagaraPreviewGrid&&) = delete; \
	ANiagaraPreviewGrid(const ANiagaraPreviewGrid&) = delete; \
	NO_API virtual ~ANiagaraPreviewGrid();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_182_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANiagaraPreviewGrid;

// ********** End Class ANiagaraPreviewGrid ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h

// ********** Begin Enum ENiagaraPreviewGridResetMode **********************************************
#define FOREACH_ENUM_ENIAGARAPREVIEWGRIDRESETMODE(op) \
	op(ENiagaraPreviewGridResetMode::Never) \
	op(ENiagaraPreviewGridResetMode::Individual) \
	op(ENiagaraPreviewGridResetMode::All) 

enum class ENiagaraPreviewGridResetMode : uint8;
template<> struct TIsUEnumClass<ENiagaraPreviewGridResetMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraPreviewGridResetMode>();
// ********** End Enum ENiagaraPreviewGridResetMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
