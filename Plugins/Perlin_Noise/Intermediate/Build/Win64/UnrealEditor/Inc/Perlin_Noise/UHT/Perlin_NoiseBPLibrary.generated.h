// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perlin_NoiseBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERLIN_NOISE_Perlin_NoiseBPLibrary_generated_h
#error "Perlin_NoiseBPLibrary.generated.h already included, missing '#pragma once' in Perlin_NoiseBPLibrary.h"
#endif
#define PERLIN_NOISE_Perlin_NoiseBPLibrary_generated_h

#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_SPARSE_DATA
#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execFourD_Perlin_Fractal); \
	DECLARE_FUNCTION(execThreeD_Perlin_Fractal); \
	DECLARE_FUNCTION(execTwoD_Perlin_Fractal); \
	DECLARE_FUNCTION(execOneD_Perlin_Fractal); \
	DECLARE_FUNCTION(execFourD_Perlin_Noise); \
	DECLARE_FUNCTION(execThreeD_Perlin_Noise); \
	DECLARE_FUNCTION(execTwoD_Perlin_Noise); \
	DECLARE_FUNCTION(execOneD_Perlin_Noise);


#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execFourD_Perlin_Fractal); \
	DECLARE_FUNCTION(execThreeD_Perlin_Fractal); \
	DECLARE_FUNCTION(execTwoD_Perlin_Fractal); \
	DECLARE_FUNCTION(execOneD_Perlin_Fractal); \
	DECLARE_FUNCTION(execFourD_Perlin_Noise); \
	DECLARE_FUNCTION(execThreeD_Perlin_Noise); \
	DECLARE_FUNCTION(execTwoD_Perlin_Noise); \
	DECLARE_FUNCTION(execOneD_Perlin_Noise);


#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_ACCESSORS
#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerlin_NoiseBPLibrary(); \
	friend struct Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPerlin_NoiseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Perlin_Noise"), NO_API) \
	DECLARE_SERIALIZER(UPerlin_NoiseBPLibrary)


#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPerlin_NoiseBPLibrary(); \
	friend struct Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPerlin_NoiseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Perlin_Noise"), NO_API) \
	DECLARE_SERIALIZER(UPerlin_NoiseBPLibrary)


#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerlin_NoiseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerlin_NoiseBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerlin_NoiseBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerlin_NoiseBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerlin_NoiseBPLibrary(UPerlin_NoiseBPLibrary&&); \
	NO_API UPerlin_NoiseBPLibrary(const UPerlin_NoiseBPLibrary&); \
public: \
	NO_API virtual ~UPerlin_NoiseBPLibrary();


#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerlin_NoiseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerlin_NoiseBPLibrary(UPerlin_NoiseBPLibrary&&); \
	NO_API UPerlin_NoiseBPLibrary(const UPerlin_NoiseBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerlin_NoiseBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerlin_NoiseBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerlin_NoiseBPLibrary) \
	NO_API virtual ~UPerlin_NoiseBPLibrary();


#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_25_PROLOG
#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_SPARSE_DATA \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_RPC_WRAPPERS \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_ACCESSORS \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_INCLASS \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_SPARSE_DATA \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_ACCESSORS \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Perlin_NoiseBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERLIN_NOISE_API UClass* StaticClass<class UPerlin_NoiseBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
