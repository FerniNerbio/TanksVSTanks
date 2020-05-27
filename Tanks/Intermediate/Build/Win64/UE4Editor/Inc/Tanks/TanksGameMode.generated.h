// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_TanksGameMode_generated_h
#error "TanksGameMode.generated.h already included, missing '#pragma once' in TanksGameMode.h"
#endif
#define TANKS_TanksGameMode_generated_h

#define Tanks_Source_Tanks_TanksGameMode_h_12_SPARSE_DATA
#define Tanks_Source_Tanks_TanksGameMode_h_12_RPC_WRAPPERS
#define Tanks_Source_Tanks_TanksGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Tanks_Source_Tanks_TanksGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATanksGameMode(); \
	friend struct Z_Construct_UClass_ATanksGameMode_Statics; \
public: \
	DECLARE_CLASS(ATanksGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), TANKS_API) \
	DECLARE_SERIALIZER(ATanksGameMode)


#define Tanks_Source_Tanks_TanksGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATanksGameMode(); \
	friend struct Z_Construct_UClass_ATanksGameMode_Statics; \
public: \
	DECLARE_CLASS(ATanksGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), TANKS_API) \
	DECLARE_SERIALIZER(ATanksGameMode)


#define Tanks_Source_Tanks_TanksGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANKS_API ATanksGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATanksGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANKS_API, ATanksGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATanksGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANKS_API ATanksGameMode(ATanksGameMode&&); \
	TANKS_API ATanksGameMode(const ATanksGameMode&); \
public:


#define Tanks_Source_Tanks_TanksGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANKS_API ATanksGameMode(ATanksGameMode&&); \
	TANKS_API ATanksGameMode(const ATanksGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANKS_API, ATanksGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATanksGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATanksGameMode)


#define Tanks_Source_Tanks_TanksGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Tanks_Source_Tanks_TanksGameMode_h_9_PROLOG
#define Tanks_Source_Tanks_TanksGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_TanksGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_TanksGameMode_h_12_SPARSE_DATA \
	Tanks_Source_Tanks_TanksGameMode_h_12_RPC_WRAPPERS \
	Tanks_Source_Tanks_TanksGameMode_h_12_INCLASS \
	Tanks_Source_Tanks_TanksGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_TanksGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_TanksGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_TanksGameMode_h_12_SPARSE_DATA \
	Tanks_Source_Tanks_TanksGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_TanksGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Tanks_Source_Tanks_TanksGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class ATanksGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_TanksGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
