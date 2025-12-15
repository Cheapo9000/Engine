// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoInterfaces.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoInterfaces_generated_h
#error "GizmoInterfaces.generated.h already included, missing '#pragma once' in GizmoInterfaces.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoInterfaces_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UGizmoTransformSource ************************************************
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execGetTransform);


struct Z_Construct_UClass_UGizmoTransformSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoTransformSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoTransformSource(UGizmoTransformSource&&) = delete; \
	UGizmoTransformSource(const UGizmoTransformSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoTransformSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoTransformSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoTransformSource) \
	virtual ~UGizmoTransformSource() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoTransformSource(); \
	friend struct ::Z_Construct_UClass_UGizmoTransformSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoTransformSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoTransformSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoTransformSource_NoRegister) \
	DECLARE_SERIALIZER(UGizmoTransformSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoTransformSource() {} \
public: \
	typedef UGizmoTransformSource UClassType; \
	typedef IGizmoTransformSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_28_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoTransformSource;

// ********** End Interface UGizmoTransformSource **************************************************

// ********** Begin Interface UGizmoAxisSource *****************************************************
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTangentVectors); \
	DECLARE_FUNCTION(execHasTangentVectors); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetOrigin);


struct Z_Construct_UClass_UGizmoAxisSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoAxisSource(UGizmoAxisSource&&) = delete; \
	UGizmoAxisSource(const UGizmoAxisSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoAxisSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoAxisSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoAxisSource) \
	virtual ~UGizmoAxisSource() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoAxisSource(); \
	friend struct ::Z_Construct_UClass_UGizmoAxisSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoAxisSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoAxisSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoAxisSource_NoRegister) \
	DECLARE_SERIALIZER(UGizmoAxisSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoAxisSource() {} \
public: \
	typedef UGizmoAxisSource UClassType; \
	typedef IGizmoAxisSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_51_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoAxisSource;

// ********** End Interface UGizmoAxisSource *******************************************************

// ********** Begin Interface UGizmoClickTarget ****************************************************
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateSubdueState); \
	DECLARE_FUNCTION(execUpdateSelectedState); \
	DECLARE_FUNCTION(execUpdateInteractingState); \
	DECLARE_FUNCTION(execUpdateHoverState);


struct Z_Construct_UClass_UGizmoClickTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoClickTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoClickTarget(UGizmoClickTarget&&) = delete; \
	UGizmoClickTarget(const UGizmoClickTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoClickTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoClickTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoClickTarget) \
	virtual ~UGizmoClickTarget() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoClickTarget(); \
	friend struct ::Z_Construct_UClass_UGizmoClickTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoClickTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoClickTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoClickTarget_NoRegister) \
	DECLARE_SERIALIZER(UGizmoClickTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoClickTarget() {} \
public: \
	typedef UGizmoClickTarget UClassType; \
	typedef IGizmoClickTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_99_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoClickTarget;

// ********** End Interface UGizmoClickTarget ******************************************************

// ********** Begin Interface UGizmoClickMultiTarget ***********************************************
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateHittableState); \
	DECLARE_FUNCTION(execUpdateSubdueState); \
	DECLARE_FUNCTION(execUpdateSelectedState); \
	DECLARE_FUNCTION(execUpdateInteractingState); \
	DECLARE_FUNCTION(execUpdateHoverState);


struct Z_Construct_UClass_UGizmoClickMultiTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoClickMultiTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoClickMultiTarget(UGizmoClickMultiTarget&&) = delete; \
	UGizmoClickMultiTarget(const UGizmoClickMultiTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoClickMultiTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoClickMultiTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoClickMultiTarget) \
	virtual ~UGizmoClickMultiTarget() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_149_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoClickMultiTarget(); \
	friend struct ::Z_Construct_UClass_UGizmoClickMultiTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoClickMultiTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoClickMultiTarget_NoRegister) \
	DECLARE_SERIALIZER(UGizmoClickMultiTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_149_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_149_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_149_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_149_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoClickMultiTarget() {} \
public: \
	typedef UGizmoClickMultiTarget UClassType; \
	typedef IGizmoClickMultiTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_146_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_149_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoClickMultiTarget;

// ********** End Interface UGizmoClickMultiTarget *************************************************

// ********** Begin Interface UGizmoRenderTarget ***************************************************
struct Z_Construct_UClass_UGizmoRenderTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRenderTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_212_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoRenderTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoRenderTarget(UGizmoRenderTarget&&) = delete; \
	UGizmoRenderTarget(const UGizmoRenderTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoRenderTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoRenderTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoRenderTarget) \
	virtual ~UGizmoRenderTarget() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_212_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoRenderTarget(); \
	friend struct ::Z_Construct_UClass_UGizmoRenderTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoRenderTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoRenderTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoRenderTarget_NoRegister) \
	DECLARE_SERIALIZER(UGizmoRenderTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_212_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_212_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_212_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_212_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoRenderTarget() {} \
public: \
	typedef UGizmoRenderTarget UClassType; \
	typedef IGizmoRenderTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_209_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_220_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_212_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoRenderTarget;

// ********** End Interface UGizmoRenderTarget *****************************************************

// ********** Begin Interface UGizmoRenderMultiTarget **********************************************
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateVisibilityState);


struct Z_Construct_UClass_UGizmoRenderMultiTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRenderMultiTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_234_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoRenderMultiTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoRenderMultiTarget(UGizmoRenderMultiTarget&&) = delete; \
	UGizmoRenderMultiTarget(const UGizmoRenderMultiTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoRenderMultiTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoRenderMultiTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoRenderMultiTarget) \
	virtual ~UGizmoRenderMultiTarget() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_234_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoRenderMultiTarget(); \
	friend struct ::Z_Construct_UClass_UGizmoRenderMultiTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoRenderMultiTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoRenderMultiTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoRenderMultiTarget_NoRegister) \
	DECLARE_SERIALIZER(UGizmoRenderMultiTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_234_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_234_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_234_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_234_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoRenderMultiTarget() {} \
public: \
	typedef UGizmoRenderMultiTarget UClassType; \
	typedef IGizmoRenderMultiTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_231_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_234_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoRenderMultiTarget;

// ********** End Interface UGizmoRenderMultiTarget ************************************************

// ********** Begin Interface UGizmoStateTarget ****************************************************
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_266_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndUpdate); \
	DECLARE_FUNCTION(execBeginUpdate);


struct Z_Construct_UClass_UGizmoStateTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_266_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoStateTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoStateTarget(UGizmoStateTarget&&) = delete; \
	UGizmoStateTarget(const UGizmoStateTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoStateTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoStateTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoStateTarget) \
	virtual ~UGizmoStateTarget() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_266_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoStateTarget(); \
	friend struct ::Z_Construct_UClass_UGizmoStateTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoStateTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoStateTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoStateTarget_NoRegister) \
	DECLARE_SERIALIZER(UGizmoStateTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_266_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_266_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_266_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_266_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoStateTarget() {} \
public: \
	typedef UGizmoStateTarget UClassType; \
	typedef IGizmoStateTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_263_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_273_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_266_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_266_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoStateTarget;

// ********** End Interface UGizmoStateTarget ******************************************************

// ********** Begin Interface UGizmoFloatParameterSource *******************************************
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_295_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


struct Z_Construct_UClass_UGizmoFloatParameterSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_295_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoFloatParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoFloatParameterSource(UGizmoFloatParameterSource&&) = delete; \
	UGizmoFloatParameterSource(const UGizmoFloatParameterSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoFloatParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoFloatParameterSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoFloatParameterSource) \
	virtual ~UGizmoFloatParameterSource() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_295_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoFloatParameterSource(); \
	friend struct ::Z_Construct_UClass_UGizmoFloatParameterSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoFloatParameterSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister) \
	DECLARE_SERIALIZER(UGizmoFloatParameterSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_295_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_295_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_295_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_295_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoFloatParameterSource() {} \
public: \
	typedef UGizmoFloatParameterSource UClassType; \
	typedef IGizmoFloatParameterSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_292_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_302_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_295_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_295_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoFloatParameterSource;

// ********** End Interface UGizmoFloatParameterSource *********************************************

// ********** Begin Interface UGizmoVec2ParameterSource ********************************************
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


struct Z_Construct_UClass_UGizmoVec2ParameterSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_328_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoVec2ParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoVec2ParameterSource(UGizmoVec2ParameterSource&&) = delete; \
	UGizmoVec2ParameterSource(const UGizmoVec2ParameterSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoVec2ParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoVec2ParameterSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoVec2ParameterSource) \
	virtual ~UGizmoVec2ParameterSource() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_328_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoVec2ParameterSource(); \
	friend struct ::Z_Construct_UClass_UGizmoVec2ParameterSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoVec2ParameterSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister) \
	DECLARE_SERIALIZER(UGizmoVec2ParameterSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_328_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_328_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_328_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_328_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoVec2ParameterSource() {} \
public: \
	typedef UGizmoVec2ParameterSource UClassType; \
	typedef IGizmoVec2ParameterSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_325_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_335_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_328_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoVec2ParameterSource;

// ********** End Interface UGizmoVec2ParameterSource **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
