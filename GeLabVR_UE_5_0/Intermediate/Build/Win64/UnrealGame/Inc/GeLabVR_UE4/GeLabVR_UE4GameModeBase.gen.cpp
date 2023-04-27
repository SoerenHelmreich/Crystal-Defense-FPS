// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeLabVR_UE4/GeLabVR_UE4GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeLabVR_UE4GameModeBase() {}
// Cross Module References
	GELABVR_UE4_API UClass* Z_Construct_UClass_AGeLabVR_UE4GameModeBase_NoRegister();
	GELABVR_UE4_API UClass* Z_Construct_UClass_AGeLabVR_UE4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GeLabVR_UE4();
// End Cross Module References
	void AGeLabVR_UE4GameModeBase::StaticRegisterNativesAGeLabVR_UE4GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeLabVR_UE4GameModeBase);
	UClass* Z_Construct_UClass_AGeLabVR_UE4GameModeBase_NoRegister()
	{
		return AGeLabVR_UE4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGeLabVR_UE4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeLabVR_UE4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GeLabVR_UE4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeLabVR_UE4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GeLabVR_UE4GameModeBase.h" },
		{ "ModuleRelativePath", "GeLabVR_UE4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeLabVR_UE4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeLabVR_UE4GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeLabVR_UE4GameModeBase_Statics::ClassParams = {
		&AGeLabVR_UE4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGeLabVR_UE4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeLabVR_UE4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeLabVR_UE4GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGeLabVR_UE4GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeLabVR_UE4GameModeBase.OuterSingleton, Z_Construct_UClass_AGeLabVR_UE4GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeLabVR_UE4GameModeBase.OuterSingleton;
	}
	template<> GELABVR_UE4_API UClass* StaticClass<AGeLabVR_UE4GameModeBase>()
	{
		return AGeLabVR_UE4GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeLabVR_UE4GameModeBase);
	struct Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_GeLabVR_UE4GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_GeLabVR_UE4GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeLabVR_UE4GameModeBase, AGeLabVR_UE4GameModeBase::StaticClass, TEXT("AGeLabVR_UE4GameModeBase"), &Z_Registration_Info_UClass_AGeLabVR_UE4GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeLabVR_UE4GameModeBase), 2741872518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_GeLabVR_UE4GameModeBase_h_3855197170(TEXT("/Script/GeLabVR_UE4"),
		Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_GeLabVR_UE4GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_GeLabVR_UE4GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
