// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_GT_Game_GTGameMode_generated_h
#error "Game_GTGameMode.generated.h already included, missing '#pragma once' in Game_GTGameMode.h"
#endif
#define GAME_GT_Game_GTGameMode_generated_h

#define Game_GT_Source_Game_GT_Game_GTGameMode_h_9_RPC_WRAPPERS
#define Game_GT_Source_Game_GT_Game_GTGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_GT_Source_Game_GT_Game_GTGameMode_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAGame_GTGameMode(); \
	friend GAME_GT_API class UClass* Z_Construct_UClass_AGame_GTGameMode(); \
	public: \
	DECLARE_CLASS(AGame_GTGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Game_GT, GAME_GT_API) \
	DECLARE_SERIALIZER(AGame_GTGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AGame_GTGameMode*>(this); }


#define Game_GT_Source_Game_GT_Game_GTGameMode_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAGame_GTGameMode(); \
	friend GAME_GT_API class UClass* Z_Construct_UClass_AGame_GTGameMode(); \
	public: \
	DECLARE_CLASS(AGame_GTGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Game_GT, GAME_GT_API) \
	DECLARE_SERIALIZER(AGame_GTGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AGame_GTGameMode*>(this); }


#define Game_GT_Source_Game_GT_Game_GTGameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAME_GT_API AGame_GTGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGame_GTGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAME_GT_API, AGame_GTGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGame_GTGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	GAME_GT_API AGame_GTGameMode(const AGame_GTGameMode& InCopy); \
public:


#define Game_GT_Source_Game_GT_Game_GTGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	GAME_GT_API AGame_GTGameMode(const AGame_GTGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAME_GT_API, AGame_GTGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGame_GTGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGame_GTGameMode)


#define Game_GT_Source_Game_GT_Game_GTGameMode_h_6_PROLOG
#define Game_GT_Source_Game_GT_Game_GTGameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_GT_Source_Game_GT_Game_GTGameMode_h_9_RPC_WRAPPERS \
	Game_GT_Source_Game_GT_Game_GTGameMode_h_9_INCLASS \
	Game_GT_Source_Game_GT_Game_GTGameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_GT_Source_Game_GT_Game_GTGameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_GT_Source_Game_GT_Game_GTGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_GT_Source_Game_GT_Game_GTGameMode_h_9_INCLASS_NO_PURE_DECLS \
	Game_GT_Source_Game_GT_Game_GTGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_GT_Source_Game_GT_Game_GTGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
