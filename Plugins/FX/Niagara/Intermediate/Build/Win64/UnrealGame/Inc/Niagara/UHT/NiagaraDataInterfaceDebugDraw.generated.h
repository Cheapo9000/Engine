// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceDebugDraw.h"

#ifdef NIAGARA_NiagaraDataInterfaceDebugDraw_generated_h
#error "NiagaraDataInterfaceDebugDraw.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceDebugDraw.h"
#endif
#define NIAGARA_NiagaraDataInterfaceDebugDraw_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNiagaraDataInterfaceDebugDraw *******************************************
struct Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceDebugDraw(); \
	friend struct ::Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceDebugDraw, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraDataInterfaceDebugDraw_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceDebugDraw)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceDebugDraw(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceDebugDraw) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceDebugDraw); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceDebugDraw); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceDebugDraw(UNiagaraDataInterfaceDebugDraw&&) = delete; \
	UNiagaraDataInterfaceDebugDraw(const UNiagaraDataInterfaceDebugDraw&) = delete; \
	NIAGARA_API virtual ~UNiagaraDataInterfaceDebugDraw();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_15_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_18_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceDebugDraw;

// ********** End Class UNiagaraDataInterfaceDebugDraw *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDebugDraw_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
