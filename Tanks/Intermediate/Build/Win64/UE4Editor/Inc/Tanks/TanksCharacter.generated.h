// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_TanksCharacter_generated_h
#error "TanksCharacter.generated.h already included, missing '#pragma once' in TanksCharacter.h"
#endif
#define TANKS_TanksCharacter_generated_h

#define Tanks_Source_Tanks_TanksCharacter_h_12_SPARSE_DATA
#define Tanks_Source_Tanks_TanksCharacter_h_12_RPC_WRAPPERS
#define Tanks_Source_Tanks_TanksCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Tanks_Source_Tanks_TanksCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATanksCharacter(); \
	friend struct Z_Construct_UClass_ATanksCharacter_Statics; \
public: \
	DECLARE_CLASS(ATanksCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATanksCharacter)


#define Tanks_Source_Tanks_TanksCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATanksCharacter(); \
	friend struct Z_Construct_UClass_ATanksCharacter_Statics; \
public: \
	DECLARE_CLASS(ATanksCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATanksCharacter)


#define Tanks_Source_Tanks_TanksCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATanksCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATanksCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATanksCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATanksCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATanksCharacter(ATanksCharacter&&); \
	NO_API ATanksCharacter(const ATanksCharacter&); \
public:


#define Tanks_Source_Tanks_TanksCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATanksCharacter(ATanksCharacter&&); \
	NO_API ATanksCharacter(const ATanksCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATanksCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATanksCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATanksCharacter)


#define Tanks_Source_Tanks_TanksCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATanksCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATanksCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATanksCharacter, CursorToWorld); }


#define Tanks_Source_Tanks_TanksCharacter_h_9_PROLOG
#define Tanks_Source_Tanks_TanksCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_TanksCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_TanksCharacter_h_12_SPARSE_DATA \
	Tanks_Source_Tanks_TanksCharacter_h_12_RPC_WRAPPERS \
	Tanks_Source_Tanks_TanksCharacter_h_12_INCLASS \
	Tanks_Source_Tanks_TanksCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_TanksCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_TanksCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_TanksCharacter_h_12_SPARSE_DATA \
	Tanks_Source_Tanks_TanksCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_TanksCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Tanks_Source_Tanks_TanksCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class ATanksCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_TanksCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
