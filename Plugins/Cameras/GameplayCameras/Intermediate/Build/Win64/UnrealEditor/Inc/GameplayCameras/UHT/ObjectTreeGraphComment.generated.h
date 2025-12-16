// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/ObjectTreeGraphComment.h"

#ifdef GAMEPLAYCAMERAS_ObjectTreeGraphComment_generated_h
#error "ObjectTreeGraphComment.generated.h already included, missing '#pragma once' in ObjectTreeGraphComment.h"
#endif
#define GAMEPLAYCAMERAS_ObjectTreeGraphComment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectTreeGraphComment **************************************************
struct Z_Construct_UClass_UObjectTreeGraphComment_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphComment_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectTreeGraphComment(); \
	friend struct ::Z_Construct_UClass_UObjectTreeGraphComment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UObjectTreeGraphComment_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectTreeGraphComment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UObjectTreeGraphComment_NoRegister) \
	DECLARE_SERIALIZER(UObjectTreeGraphComment) \
	virtual UObject* _getUObject() const override { return const_cast<UObjectTreeGraphComment*>(this); }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectTreeGraphComment(UObjectTreeGraphComment&&) = delete; \
	UObjectTreeGraphComment(const UObjectTreeGraphComment&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UObjectTreeGraphComment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTreeGraphComment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTreeGraphComment) \
	GAMEPLAYCAMERAS_API virtual ~UObjectTreeGraphComment();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectTreeGraphComment;

// ********** End Class UObjectTreeGraphComment ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
