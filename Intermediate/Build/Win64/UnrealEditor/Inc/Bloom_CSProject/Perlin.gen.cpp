// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bloom_CSProject/Public/Perlin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerlin() {}
// Cross Module References
	BLOOM_CSPROJECT_API UClass* Z_Construct_UClass_APerlin_NoRegister();
	BLOOM_CSPROJECT_API UClass* Z_Construct_UClass_APerlin();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bloom_CSProject();
// End Cross Module References
	void APerlin::StaticRegisterNativesAPerlin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APerlin);
	UClass* Z_Construct_UClass_APerlin_NoRegister()
	{
		return APerlin::StaticClass();
	}
	struct Z_Construct_UClass_APerlin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APerlin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bloom_CSProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APerlin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Perlin.h" },
		{ "ModuleRelativePath", "Public/Perlin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APerlin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APerlin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APerlin_Statics::ClassParams = {
		&APerlin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APerlin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APerlin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APerlin()
	{
		if (!Z_Registration_Info_UClass_APerlin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APerlin.OuterSingleton, Z_Construct_UClass_APerlin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APerlin.OuterSingleton;
	}
	template<> BLOOM_CSPROJECT_API UClass* StaticClass<APerlin>()
	{
		return APerlin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APerlin);
	struct Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_Perlin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_Perlin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APerlin, APerlin::StaticClass, TEXT("APerlin"), &Z_Registration_Info_UClass_APerlin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APerlin), 823522164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_Perlin_h_1790890404(TEXT("/Script/Bloom_CSProject"),
		Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_Perlin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pollen_Source_Bloom_CSProject_Public_Perlin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
