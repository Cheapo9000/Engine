// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositingElements/CompositingElementInputs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCompositingInputInterfaceProxy;
class UTexture;
#ifdef COMPOSURE_CompositingElementInputs_generated_h
#error "CompositingElementInputs.generated.h already included, missing '#pragma once' in CompositingElementInputs.h"
#endif
#define COMPOSURE_CompositingElementInputs_generated_h

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingMediaInput(); \
	friend struct Z_Construct_UClass_UCompositingMediaInput_Statics; \
public: \
	DECLARE_CLASS(UCompositingMediaInput, UCompositingElementInput, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingMediaInput)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositingMediaInput(UCompositingMediaInput&&); \
	UCompositingMediaInput(const UCompositingMediaInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingMediaInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingMediaInput); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCompositingMediaInput) \
	NO_API virtual ~UCompositingMediaInput();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_15_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingMediaInput>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaTextureCompositingInput(); \
	friend struct Z_Construct_UClass_UMediaTextureCompositingInput_Statics; \
public: \
	DECLARE_CLASS(UMediaTextureCompositingInput, UCompositingMediaInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UMediaTextureCompositingInput)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMediaTextureCompositingInput(UMediaTextureCompositingInput&&); \
	UMediaTextureCompositingInput(const UMediaTextureCompositingInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaTextureCompositingInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaTextureCompositingInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMediaTextureCompositingInput) \
	NO_API virtual ~UMediaTextureCompositingInput();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_74_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UMediaTextureCompositingInput>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_RPC_WRAPPERS \
	virtual void OnFrameEnd_Implementation(UCompositingInputInterfaceProxy* Proxy) {}; \
	virtual UTexture* GenerateInput_Implementation(UCompositingInputInterfaceProxy* Proxy) { return NULL; }; \
	virtual void OnFrameBegin_Implementation(UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame) {}; \
	DECLARE_FUNCTION(execOnFrameEnd); \
	DECLARE_FUNCTION(execGenerateInput); \
	DECLARE_FUNCTION(execOnFrameBegin);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSURE_API UCompositingInputInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingInputInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UCompositingInputInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingInputInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositingInputInterface(UCompositingInputInterface&&); \
	UCompositingInputInterface(const UCompositingInputInterface&); \
public: \
	COMPOSURE_API virtual ~UCompositingInputInterface();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCompositingInputInterface(); \
	friend struct Z_Construct_UClass_UCompositingInputInterface_Statics; \
public: \
	DECLARE_CLASS(UCompositingInputInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Composure"), COMPOSURE_API) \
	DECLARE_SERIALIZER(UCompositingInputInterface)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_INCLASS_IINTERFACE \
protected: \
	virtual ~ICompositingInputInterface() {} \
public: \
	typedef UCompositingInputInterface UClassType; \
	typedef ICompositingInputInterface ThisClass; \
	static UTexture* Execute_GenerateInput(UObject* O, UCompositingInputInterfaceProxy* Proxy); \
	static void Execute_OnFrameBegin(UObject* O, UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame); \
	static void Execute_OnFrameEnd(UObject* O, UCompositingInputInterfaceProxy* Proxy); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_93_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_96_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingInputInterface>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingInputInterfaceProxy(); \
	friend struct Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics; \
public: \
	DECLARE_CLASS(UCompositingInputInterfaceProxy, UCompositingElementInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingInputInterfaceProxy)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingInputInterfaceProxy(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositingInputInterfaceProxy(UCompositingInputInterfaceProxy&&); \
	UCompositingInputInterfaceProxy(const UCompositingInputInterfaceProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingInputInterfaceProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingInputInterfaceProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositingInputInterfaceProxy) \
	NO_API virtual ~UCompositingInputInterfaceProxy();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_114_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingInputInterfaceProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
