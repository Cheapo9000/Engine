// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptableInteractiveTool.h"

#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableInteractiveTool_generated_h
#error "ScriptableInteractiveTool.generated.h already included, missing '#pragma once' in ScriptableInteractiveTool.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableInteractiveTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
class UScriptableInteractiveTool;
class UScriptableInteractiveToolPropertySet;
class UScriptableTool_HUDAPI;
class UScriptableTool_RenderAPI;
class UScriptableToolLineSet;
class UScriptableToolPointSet;
class UScriptableToolTriangleSet;
class UToolTarget;
class UUserWidget;
class UWorld;
enum class EScriptableToolGizmoStateChangeType : uint8;
enum class EToolsFrameworkOutcomePins : uint8;
enum class EToolShutdownType : uint8;
struct FInputRayHit;
struct FLinearColor;
struct FScriptableToolGizmoOptions;

// ********** Begin ScriptStruct FScriptableToolModifierStates *************************************
struct Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics;
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics; \
	SCRIPTABLETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FScriptableToolModifierStates;
// ********** End ScriptStruct FScriptableToolModifierStates ***************************************

// ********** Begin ScriptStruct FScriptableToolGizmoOptions ***************************************
struct Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics;
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_160_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics; \
	SCRIPTABLETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FScriptableToolGizmoOptions;
// ********** End ScriptStruct FScriptableToolGizmoOptions *****************************************

// ********** Begin Class UScriptableTool_RenderAPI ************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawRectWidthHeightXY); \
	DECLARE_FUNCTION(execDrawLine);


struct Z_Construct_UClass_UScriptableTool_RenderAPI_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableTool_RenderAPI_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableTool_RenderAPI(); \
	friend struct ::Z_Construct_UClass_UScriptableTool_RenderAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableTool_RenderAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableTool_RenderAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableTool_RenderAPI_NoRegister) \
	DECLARE_SERIALIZER(UScriptableTool_RenderAPI)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableTool_RenderAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableTool_RenderAPI(UScriptableTool_RenderAPI&&) = delete; \
	UScriptableTool_RenderAPI(const UScriptableTool_RenderAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableTool_RenderAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableTool_RenderAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableTool_RenderAPI) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableTool_RenderAPI();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_200_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_203_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_203_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableTool_RenderAPI;

// ********** End Class UScriptableTool_RenderAPI **************************************************

// ********** Begin Class UScriptableTool_HUDAPI ***************************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCanvasLocation); \
	DECLARE_FUNCTION(execDrawTextArrayAtLocation); \
	DECLARE_FUNCTION(execDrawTextAtLocation);


struct Z_Construct_UClass_UScriptableTool_HUDAPI_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_232_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableTool_HUDAPI(); \
	friend struct ::Z_Construct_UClass_UScriptableTool_HUDAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableTool_HUDAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister) \
	DECLARE_SERIALIZER(UScriptableTool_HUDAPI)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_232_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableTool_HUDAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableTool_HUDAPI(UScriptableTool_HUDAPI&&) = delete; \
	UScriptableTool_HUDAPI(const UScriptableTool_HUDAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableTool_HUDAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableTool_HUDAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableTool_HUDAPI) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableTool_HUDAPI();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_229_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_232_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_232_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_232_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableTool_HUDAPI;

// ********** End Class UScriptableTool_HUDAPI *****************************************************

// ********** Begin Class UScriptableInteractiveToolPropertySet ************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPropertyAsHidden); \
	DECLARE_FUNCTION(execSetPropertyAsReadOnly); \
	DECLARE_FUNCTION(execGetOwningTool);


struct Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableInteractiveToolPropertySet(); \
	friend struct ::Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableInteractiveToolPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister) \
	DECLARE_SERIALIZER(UScriptableInteractiveToolPropertySet)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableInteractiveToolPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableInteractiveToolPropertySet(UScriptableInteractiveToolPropertySet&&) = delete; \
	UScriptableInteractiveToolPropertySet(const UScriptableInteractiveToolPropertySet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableInteractiveToolPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableInteractiveToolPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableInteractiveToolPropertySet) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableInteractiveToolPropertySet();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_274_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_277_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableInteractiveToolPropertySet;

// ********** End Class UScriptableInteractiveToolPropertySet **************************************

// ********** Begin Delegate FToolPropertyModifiedDelegate *****************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_302_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName);


// ********** End Delegate FToolPropertyModifiedDelegate *******************************************

// ********** Begin Delegate FToolFloatPropertyModifiedDelegate ************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_303_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolFloatPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolFloatPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, double NewValue);


// ********** End Delegate FToolFloatPropertyModifiedDelegate **************************************

// ********** Begin Delegate FToolIntPropertyModifiedDelegate **************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_304_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolIntPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolIntPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, int32 NewValue);


// ********** End Delegate FToolIntPropertyModifiedDelegate ****************************************

// ********** Begin Delegate FToolBoolPropertyModifiedDelegate *************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_305_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolBoolPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolBoolPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, bool bNewValue);


// ********** End Delegate FToolBoolPropertyModifiedDelegate ***************************************

// ********** Begin Delegate FToolEnumPropertyModifiedDelegate *************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_306_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolEnumPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolEnumPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, uint8 NewValue);


// ********** End Delegate FToolEnumPropertyModifiedDelegate ***************************************

// ********** Begin Delegate FToolStringPropertyModifiedDelegate ***********************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_307_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolStringPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolStringPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FString& NewValue);


// ********** End Delegate FToolStringPropertyModifiedDelegate *************************************

// ********** Begin Delegate FToolFNamePropertyModifiedDelegate ************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_308_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolFNamePropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolFNamePropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, FName NewValue);


// ********** End Delegate FToolFNamePropertyModifiedDelegate **************************************

// ********** Begin Delegate FToolObjectPropertyModifiedDelegate ***********************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_309_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolObjectPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolObjectPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, UObject* NewValue);


// ********** End Delegate FToolObjectPropertyModifiedDelegate *************************************

// ********** Begin Class UScriptableInteractiveTool ***********************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_319_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFocusInViewport); \
	DECLARE_FUNCTION(execClearOverlayWidget); \
	DECLARE_FUNCTION(execSetOverlayWidget); \
	DECLARE_FUNCTION(execSetToolPanelToolHeaderWidget); \
	DECLARE_FUNCTION(execAddTriangleSet); \
	DECLARE_FUNCTION(execGetDefaultTriangleSet); \
	DECLARE_FUNCTION(execAddPointSet); \
	DECLARE_FUNCTION(execGetDefaultPointSet); \
	DECLARE_FUNCTION(execAddLineSet); \
	DECLARE_FUNCTION(execGetDefaultLineSet); \
	DECLARE_FUNCTION(execGetDrawableGeometryActor); \
	DECLARE_FUNCTION(execGetToolTargets); \
	DECLARE_FUNCTION(execClearUserMessages); \
	DECLARE_FUNCTION(execDisplayUserWarningMessage); \
	DECLARE_FUNCTION(execDisplayUserHelpMessage); \
	DECLARE_FUNCTION(execAddLogMessage); \
	DECLARE_FUNCTION(execGetGizmoTransform); \
	DECLARE_FUNCTION(execSetGizmoTransform); \
	DECLARE_FUNCTION(execSetGizmoVisible); \
	DECLARE_FUNCTION(execDestroyTRSGizmo); \
	DECLARE_FUNCTION(execCreateTRSGizmo); \
	DECLARE_FUNCTION(execWatchProperty); \
	DECLARE_FUNCTION(execWatchObjectProperty); \
	DECLARE_FUNCTION(execWatchNameProperty); \
	DECLARE_FUNCTION(execWatchStringProperty); \
	DECLARE_FUNCTION(execWatchEnumProperty); \
	DECLARE_FUNCTION(execWatchBoolProperty); \
	DECLARE_FUNCTION(execWatchIntProperty); \
	DECLARE_FUNCTION(execWatchFloatProperty); \
	DECLARE_FUNCTION(execSavePropertySetSettings); \
	DECLARE_FUNCTION(execRestorePropertySetSettings); \
	DECLARE_FUNCTION(execForcePropertySetUpdateByName); \
	DECLARE_FUNCTION(execSetPropertySetVisibleByName); \
	DECLARE_FUNCTION(execRemovePropertySetByName); \
	DECLARE_FUNCTION(execAddPropertySetOfType); \
	DECLARE_FUNCTION(execGetToolWorld); \
	DECLARE_FUNCTION(execRequestToolShutdown); \
	DECLARE_FUNCTION(execOnScriptCanAccept);


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_319_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UScriptableInteractiveTool_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableInteractiveTool_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_319_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableInteractiveTool(); \
	friend struct ::Z_Construct_UClass_UScriptableInteractiveTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableInteractiveTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableInteractiveTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableInteractiveTool_NoRegister) \
	DECLARE_SERIALIZER(UScriptableInteractiveTool)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_319_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableInteractiveTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableInteractiveTool(UScriptableInteractiveTool&&) = delete; \
	UScriptableInteractiveTool(const UScriptableInteractiveTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableInteractiveTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableInteractiveTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptableInteractiveTool) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableInteractiveTool();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_316_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_319_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_319_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_319_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_319_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_319_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableInteractiveTool;

// ********** End Class UScriptableInteractiveTool *************************************************

// ********** Begin Class UScriptableToolsUtilityLibrary *******************************************
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_967_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeInputRayHit); \
	DECLARE_FUNCTION(execMakeInputRayHit_MaxDepth); \
	DECLARE_FUNCTION(execMakeInputRayHit_Miss);


struct Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics;
SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolsUtilityLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_967_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolsUtilityLibrary(); \
	friend struct ::Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UScriptableToolsUtilityLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolsUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), Z_Construct_UClass_UScriptableToolsUtilityLibrary_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolsUtilityLibrary)


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_967_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolsUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolsUtilityLibrary(UScriptableToolsUtilityLibrary&&) = delete; \
	UScriptableToolsUtilityLibrary(const UScriptableToolsUtilityLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSFRAMEWORK_API, UScriptableToolsUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolsUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolsUtilityLibrary) \
	SCRIPTABLETOOLSFRAMEWORK_API virtual ~UScriptableToolsUtilityLibrary();


#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_964_PROLOG
#define FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_967_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_967_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_967_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_967_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolsUtilityLibrary;

// ********** End Class UScriptableToolsUtilityLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h

// ********** Begin Enum EToolsFrameworkOutcomePins ************************************************
#define FOREACH_ENUM_ETOOLSFRAMEWORKOUTCOMEPINS(op) \
	op(EToolsFrameworkOutcomePins::Success) \
	op(EToolsFrameworkOutcomePins::Failure) 

enum class EToolsFrameworkOutcomePins : uint8;
template<> struct TIsUEnumClass<EToolsFrameworkOutcomePins> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolsFrameworkOutcomePins>();
// ********** End Enum EToolsFrameworkOutcomePins **************************************************

// ********** Begin Enum EScriptableToolShutdownType ***********************************************
#define FOREACH_ENUM_ESCRIPTABLETOOLSHUTDOWNTYPE(op) \
	op(EScriptableToolShutdownType::Complete) \
	op(EScriptableToolShutdownType::AcceptCancel) 

enum class EScriptableToolShutdownType : uint8;
template<> struct TIsUEnumClass<EScriptableToolShutdownType> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptableToolShutdownType>();
// ********** End Enum EScriptableToolShutdownType *************************************************

// ********** Begin Enum EScriptableToolGizmoMode **************************************************
#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOMODE(op) \
	op(EScriptableToolGizmoMode::TranslationOnly) \
	op(EScriptableToolGizmoMode::RotationOnly) \
	op(EScriptableToolGizmoMode::ScaleOnly) \
	op(EScriptableToolGizmoMode::Combined) \
	op(EScriptableToolGizmoMode::FromViewportSettings) 

enum class EScriptableToolGizmoMode : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoMode> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptableToolGizmoMode>();
// ********** End Enum EScriptableToolGizmoMode ****************************************************

// ********** Begin Enum EScriptableToolGizmoCoordinateSystem **************************************
#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOCOORDINATESYSTEM(op) \
	op(EScriptableToolGizmoCoordinateSystem::World) \
	op(EScriptableToolGizmoCoordinateSystem::Local) \
	op(EScriptableToolGizmoCoordinateSystem::FromViewportSettings) 

enum class EScriptableToolGizmoCoordinateSystem : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoCoordinateSystem> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptableToolGizmoCoordinateSystem>();
// ********** End Enum EScriptableToolGizmoCoordinateSystem ****************************************

// ********** Begin Enum EScriptableToolGizmoStateChangeType ***************************************
#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOSTATECHANGETYPE(op) \
	op(EScriptableToolGizmoStateChangeType::BeginTransform) \
	op(EScriptableToolGizmoStateChangeType::EndTransform) \
	op(EScriptableToolGizmoStateChangeType::UndoRedo) 

enum class EScriptableToolGizmoStateChangeType : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoStateChangeType> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptableToolGizmoStateChangeType>();
// ********** End Enum EScriptableToolGizmoStateChangeType *****************************************

// ********** Begin Enum EScriptableToolGizmoTranslation *******************************************
#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOTRANSLATION(op) \
	op(EScriptableToolGizmoTranslation::None) \
	op(EScriptableToolGizmoTranslation::TranslateAxisX) \
	op(EScriptableToolGizmoTranslation::TranslateAxisY) \
	op(EScriptableToolGizmoTranslation::TranslateAxisZ) \
	op(EScriptableToolGizmoTranslation::TranslatePlaneXY) \
	op(EScriptableToolGizmoTranslation::TranslatePlaneXZ) \
	op(EScriptableToolGizmoTranslation::TranslatePlaneYZ) \
	op(EScriptableToolGizmoTranslation::FreeTranslate) \
	op(EScriptableToolGizmoTranslation::All) 

enum class EScriptableToolGizmoTranslation : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoTranslation> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptableToolGizmoTranslation>();
// ********** End Enum EScriptableToolGizmoTranslation *********************************************

// ********** Begin Enum EScriptableToolGizmoRotation **********************************************
#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOROTATION(op) \
	op(EScriptableToolGizmoRotation::None) \
	op(EScriptableToolGizmoRotation::RotateAxisX) \
	op(EScriptableToolGizmoRotation::RotateAxisY) \
	op(EScriptableToolGizmoRotation::RotateAxisZ) \
	op(EScriptableToolGizmoRotation::FreeRotate) \
	op(EScriptableToolGizmoRotation::All) 

enum class EScriptableToolGizmoRotation : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoRotation> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptableToolGizmoRotation>();
// ********** End Enum EScriptableToolGizmoRotation ************************************************

// ********** Begin Enum EScriptableToolGizmoScale *************************************************
#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOSCALE(op) \
	op(EScriptableToolGizmoScale::None) \
	op(EScriptableToolGizmoScale::ScaleAxisX) \
	op(EScriptableToolGizmoScale::ScaleAxisY) \
	op(EScriptableToolGizmoScale::ScaleAxisZ) \
	op(EScriptableToolGizmoScale::ScalePlaneXY) \
	op(EScriptableToolGizmoScale::ScalePlaneXZ) \
	op(EScriptableToolGizmoScale::ScalePlaneYZ) \
	op(EScriptableToolGizmoScale::ScaleUniform) \
	op(EScriptableToolGizmoScale::All) 

enum class EScriptableToolGizmoScale : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoScale> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptableToolGizmoScale>();
// ********** End Enum EScriptableToolGizmoScale ***************************************************

// ********** Begin Enum EScriptableToolStartupRequirements ****************************************
#define FOREACH_ENUM_ESCRIPTABLETOOLSTARTUPREQUIREMENTS(op) \
	op(EScriptableToolStartupRequirements::None) \
	op(EScriptableToolStartupRequirements::ToolTarget) \
	op(EScriptableToolStartupRequirements::Custom) 

enum class EScriptableToolStartupRequirements : uint8;
template<> struct TIsUEnumClass<EScriptableToolStartupRequirements> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptableToolStartupRequirements>();
// ********** End Enum EScriptableToolStartupRequirements ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
