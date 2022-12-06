// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Perlin_Noise/Public/Perlin_NoiseBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerlin_NoiseBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PERLIN_NOISE_API UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary();
	PERLIN_NOISE_API UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Perlin_Noise();
// End Cross Module References
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execSetSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPerlin_NoiseBPLibrary::SetSeed(Z_Param_seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execFourD_Perlin_Fractal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_w);
		P_GET_PROPERTY(FIntProperty,Z_Param_levels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::FourD_Perlin_Fractal(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execThreeD_Perlin_Fractal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FIntProperty,Z_Param_levels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::ThreeD_Perlin_Fractal(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execTwoD_Perlin_Fractal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FIntProperty,Z_Param_levels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::TwoD_Perlin_Fractal(Z_Param_x,Z_Param_y,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execOneD_Perlin_Fractal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_levels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::OneD_Perlin_Fractal(Z_Param_x,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execFourD_Perlin_Noise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_w);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::FourD_Perlin_Noise(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_scale,Z_Param_amplitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execThreeD_Perlin_Noise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::ThreeD_Perlin_Noise(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_scale,Z_Param_amplitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execTwoD_Perlin_Noise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::TwoD_Perlin_Noise(Z_Param_x,Z_Param_y,Z_Param_scale,Z_Param_amplitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execOneD_Perlin_Noise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::OneD_Perlin_Noise(Z_Param_x,Z_Param_scale,Z_Param_amplitude);
		P_NATIVE_END;
	}
	void UPerlin_NoiseBPLibrary::StaticRegisterNativesUPerlin_NoiseBPLibrary()
	{
		UClass* Class = UPerlin_NoiseBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FourD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execFourD_Perlin_Fractal },
			{ "FourD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execFourD_Perlin_Noise },
			{ "OneD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execOneD_Perlin_Fractal },
			{ "OneD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execOneD_Perlin_Noise },
			{ "SetSeed", &UPerlin_NoiseBPLibrary::execSetSeed },
			{ "ThreeD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execThreeD_Perlin_Fractal },
			{ "ThreeD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execThreeD_Perlin_Noise },
			{ "TwoD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execTwoD_Perlin_Fractal },
			{ "TwoD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execTwoD_Perlin_Noise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics
	{
		struct Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms
		{
			float x;
			float y;
			float z;
			float w;
			int32 levels;
			float scale;
			float amplitude;
			float ScaleFade;
			float AmpFade;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_levels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, w), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "7" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "4D Perlin Fractal" },
		{ "Keywords", "Four 4D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 4D fractal perlin noise at the given X,Y,Z,W coordinate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "FourD_Perlin_Fractal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics
	{
		struct Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms
		{
			float x;
			float y;
			float z;
			float w;
			float scale;
			float amplitude;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, w), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "4D Perlin Noise" },
		{ "Keywords", "Four 4D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 4D perlin noise at the given X,Y,Z,W coordinate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "FourD_Perlin_Noise", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics
	{
		struct Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms
		{
			float x;
			int32 levels;
			float scale;
			float amplitude;
			float ScaleFade;
			float AmpFade;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_levels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "1D Perlin Fractal" },
		{ "Keywords", "One 1D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 1D fractal perlin noise at the given X coordinate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "OneD_Perlin_Fractal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics
	{
		struct Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms
		{
			float x;
			float scale;
			float amplitude;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "1D Perlin Noise" },
		{ "Keywords", "One 1D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 1D perlin noise at the given X coordinate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "OneD_Perlin_Noise", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics
	{
		struct Perlin_NoiseBPLibrary_eventSetSeed_Parms
		{
			int32 seed;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_seed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventSetSeed_Parms, seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::NewProp_seed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "DisplayName", "Set Noise Seed" },
		{ "Keywords", "Set_Seed seed set seed" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Set the seed for noise generation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "SetSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Perlin_NoiseBPLibrary_eventSetSeed_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics
	{
		struct Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms
		{
			float x;
			float y;
			float z;
			int32 levels;
			float scale;
			float amplitude;
			float ScaleFade;
			float AmpFade;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_levels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "3D Perlin Fractal" },
		{ "Keywords", "Three 3D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 3D fractal perlin noise at the given X,Y,Z coordinate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "ThreeD_Perlin_Fractal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics
	{
		struct Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms
		{
			float x;
			float y;
			float z;
			float scale;
			float amplitude;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "3D Perlin Noise" },
		{ "Keywords", "Three 3D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 3D perlin noise at the given X,Y,Z coordinate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "ThreeD_Perlin_Noise", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics
	{
		struct Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms
		{
			float x;
			float y;
			int32 levels;
			float scale;
			float amplitude;
			float ScaleFade;
			float AmpFade;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_levels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "2D Perlin Fractal" },
		{ "Keywords", "Two 2D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 2D fractal perlin noise at the given X,Y coordinate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "TwoD_Perlin_Fractal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics
	{
		struct Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms
		{
			float x;
			float y;
			float scale;
			float amplitude;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "2D Perlin Noise" },
		{ "Keywords", "Two 2D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 2D perlin noise at the given X,Y coordinate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "TwoD_Perlin_Noise", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerlin_NoiseBPLibrary);
	UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary_NoRegister()
	{
		return UPerlin_NoiseBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Perlin_Noise,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal, "FourD_Perlin_Fractal" }, // 3116913238
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise, "FourD_Perlin_Noise" }, // 1240029768
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal, "OneD_Perlin_Fractal" }, // 2512771288
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise, "OneD_Perlin_Noise" }, // 3637092537
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed, "SetSeed" }, // 2050694097
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal, "ThreeD_Perlin_Fractal" }, // 1937232761
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise, "ThreeD_Perlin_Noise" }, // 3437697205
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal, "TwoD_Perlin_Fractal" }, // 3665221796
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise, "TwoD_Perlin_Noise" }, // 2684694313
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "Perlin_NoiseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerlin_NoiseBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::ClassParams = {
		&UPerlin_NoiseBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UPerlin_NoiseBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerlin_NoiseBPLibrary.OuterSingleton, Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPerlin_NoiseBPLibrary.OuterSingleton;
	}
	template<> PERLIN_NOISE_API UClass* StaticClass<UPerlin_NoiseBPLibrary>()
	{
		return UPerlin_NoiseBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerlin_NoiseBPLibrary);
	UPerlin_NoiseBPLibrary::~UPerlin_NoiseBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPerlin_NoiseBPLibrary, UPerlin_NoiseBPLibrary::StaticClass, TEXT("UPerlin_NoiseBPLibrary"), &Z_Registration_Info_UClass_UPerlin_NoiseBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerlin_NoiseBPLibrary), 664209980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_1570864257(TEXT("/Script/Perlin_Noise"),
		Z_CompiledInDeferFile_FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_UE5_ThirdTest_ThirdTest_Plugins_Perlin_Noise_Source_Perlin_Noise_Public_Perlin_NoiseBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
