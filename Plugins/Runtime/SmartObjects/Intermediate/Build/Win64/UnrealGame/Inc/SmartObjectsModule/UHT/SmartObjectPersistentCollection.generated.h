// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectPersistentCollection.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectPersistentCollection_generated_h
#error "SmartObjectPersistentCollection.generated.h already included, missing '#pragma once' in SmartObjectPersistentCollection.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectPersistentCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSmartObjectCollectionEntry ***************************************
struct Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectCollectionEntry;
// ********** End ScriptStruct FSmartObjectCollectionEntry *****************************************

// ********** Begin ScriptStruct FSmartObjectContainer *********************************************
struct Z_Construct_UScriptStruct_FSmartObjectContainer_Statics;
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSmartObjectContainer_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct();


struct FSmartObjectContainer;
// ********** End ScriptStruct FSmartObjectContainer ***********************************************

// ********** Begin Class ASmartObjectPersistentCollection *****************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_257_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRebuildCollection); \
	DECLARE_FUNCTION(execClearCollection);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_257_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_ASmartObjectPersistentCollection_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ASmartObjectPersistentCollection_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_257_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmartObjectPersistentCollection(); \
	friend struct ::Z_Construct_UClass_ASmartObjectPersistentCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_ASmartObjectPersistentCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(ASmartObjectPersistentCollection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_ASmartObjectPersistentCollection_NoRegister) \
	DECLARE_SERIALIZER(ASmartObjectPersistentCollection)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_257_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASmartObjectPersistentCollection(ASmartObjectPersistentCollection&&) = delete; \
	ASmartObjectPersistentCollection(const ASmartObjectPersistentCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, ASmartObjectPersistentCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartObjectPersistentCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmartObjectPersistentCollection) \
	SMARTOBJECTSMODULE_API virtual ~ASmartObjectPersistentCollection();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_254_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_257_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_257_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_257_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_257_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASmartObjectPersistentCollection;

// ********** End Class ASmartObjectPersistentCollection *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
