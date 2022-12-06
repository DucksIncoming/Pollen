// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bloom_CSProject/Public/PerlinGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerlinGenerator() {}
// Cross Module References
	BLOOM_CSPROJECT_API UClass* Z_Construct_UClass_APerlinGenerator_NoRegister();
	BLOOM_CSPROJECT_API UClass* Z_Construct_UClass_APerlinGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bloom_CSProject();
// End Cross Module References
	DEFINE_FUNCTION(APerlinGenerator::execparameters)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_nodeHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->parameters(Z_Param_Out_nodeHeight,Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	void APerlinGenerator::StaticRegisterNativesAPerlinGenerator()
	{
		UClass* Class = APerlinGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "parameters", &APerlinGenerator::execparameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APerlinGenerator_parameters_Statics
	{
		struct PerlinGenerator_eventparameters_Parms
		{
			float nodeHeight;
			int32 x;
			int32 y;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_nodeHeight;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_y;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_nodeHeight = { "nodeHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerlinGenerator_eventparameters_Parms, nodeHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerlinGenerator_eventparameters_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerlinGenerator_eventparameters_Parms, y), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PerlinGenerator_eventparameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PerlinGenerator_eventparameters_Parms), &Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APerlinGenerator_parameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_nodeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APerlinGenerator_parameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APerlinGenerator_parameters_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_x", "0" },
		{ "CPP_Default_y", "0" },
		{ "ModuleRelativePath", "Public/PerlinGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APerlinGenerator_parameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APerlinGenerator, nullptr, "parameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_APerlinGenerator_parameters_Statics::PerlinGenerator_eventparameters_Parms), Z_Construct_UFunction_APerlinGenerator_parameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APerlinGenerator_parameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APerlinGenerator_parameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APerlinGenerator_parameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APerlinGenerator_parameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APerlinGenerator_parameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APerlinGenerator);
	UClass* Z_Construct_UClass_APerlinGenerator_NoRegister()
	{
		return APerlinGenerator::StaticClass();
	}
	struct Z_Construct_UClass_APerlinGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APerlinGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bloom_CSProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APerlinGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APerlinGenerator_parameters, "parameters" }, // 211735532
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APerlinGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerlinGenerator.h" },
		{ "ModuleRelativePath", "Public/PerlinGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APerlinGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APerlinGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APerlinGenerator_Statics::ClassParams = {
		&APerlinGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APerlinGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APerlinGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APerlinGenerator()
	{
		if (!Z_Registration_Info_UClass_APerlinGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APerlinGenerator.OuterSingleton, Z_Construct_UClass_APerlinGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APerlinGenerator.OuterSingleton;
	}
	template<> BLOOM_CSPROJECT_API UClass* StaticClass<APerlinGenerator>()
	{
		return APerlinGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APerlinGenerator);
	struct Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_PerlinGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_PerlinGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APerlinGenerator, APerlinGenerator::StaticClass, TEXT("APerlinGenerator"), &Z_Registration_Info_UClass_APerlinGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APerlinGenerator), 4050994777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_PerlinGenerator_h_640058225(TEXT("/Script/Bloom_CSProject"),
		Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_PerlinGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_PerlinGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
