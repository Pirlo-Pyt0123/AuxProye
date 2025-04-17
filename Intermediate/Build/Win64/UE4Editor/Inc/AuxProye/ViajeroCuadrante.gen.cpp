// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AuxProye/ViajeroCuadrante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViajeroCuadrante() {}
// Cross Module References
	AUXPROYE_API UClass* Z_Construct_UClass_AViajeroCuadrante_NoRegister();
	AUXPROYE_API UClass* Z_Construct_UClass_AViajeroCuadrante();
	AUXPROYE_API UClass* Z_Construct_UClass_AHuman();
	UPackage* Z_Construct_UPackage__Script_AuxProye();
// End Cross Module References
	void AViajeroCuadrante::StaticRegisterNativesAViajeroCuadrante()
	{
	}
	UClass* Z_Construct_UClass_AViajeroCuadrante_NoRegister()
	{
		return AViajeroCuadrante::StaticClass();
	}
	struct Z_Construct_UClass_AViajeroCuadrante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AViajeroCuadrante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHuman,
		(UObject* (*)())Z_Construct_UPackage__Script_AuxProye,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AViajeroCuadrante_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ViajeroCuadrante.h" },
		{ "ModuleRelativePath", "ViajeroCuadrante.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AViajeroCuadrante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AViajeroCuadrante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AViajeroCuadrante_Statics::ClassParams = {
		&AViajeroCuadrante::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AViajeroCuadrante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AViajeroCuadrante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AViajeroCuadrante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AViajeroCuadrante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AViajeroCuadrante, 1552264955);
	template<> AUXPROYE_API UClass* StaticClass<AViajeroCuadrante>()
	{
		return AViajeroCuadrante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AViajeroCuadrante(Z_Construct_UClass_AViajeroCuadrante, &AViajeroCuadrante::StaticClass, TEXT("/Script/AuxProye"), TEXT("AViajeroCuadrante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AViajeroCuadrante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
