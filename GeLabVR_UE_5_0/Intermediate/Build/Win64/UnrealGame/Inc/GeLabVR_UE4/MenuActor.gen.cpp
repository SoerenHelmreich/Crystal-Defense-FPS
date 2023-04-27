// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeLabVR_UE4/MenuActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuActor() {}
// Cross Module References
	GELABVR_UE4_API UClass* Z_Construct_UClass_AMenuActor_NoRegister();
	GELABVR_UE4_API UClass* Z_Construct_UClass_AMenuActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeLabVR_UE4();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void AMenuActor::StaticRegisterNativesAMenuActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMenuActor);
	UClass* Z_Construct_UClass_AMenuActor_NoRegister()
	{
		return AMenuActor::StaticClass();
	}
	struct Z_Construct_UClass_AMenuActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactiveMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_interactiveMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeLabVR_UE4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MenuActor.h" },
		{ "ModuleRelativePath", "MenuActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuActor_Statics::NewProp_interactiveMenu_MetaData[] = {
		{ "Category", "MenuActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMenuActor_Statics::NewProp_interactiveMenu = { "interactiveMenu", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMenuActor, interactiveMenu), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMenuActor_Statics::NewProp_interactiveMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuActor_Statics::NewProp_interactiveMenu_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMenuActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMenuActor_Statics::NewProp_interactiveMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMenuActor_Statics::ClassParams = {
		&AMenuActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMenuActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMenuActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMenuActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuActor()
	{
		if (!Z_Registration_Info_UClass_AMenuActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMenuActor.OuterSingleton, Z_Construct_UClass_AMenuActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMenuActor.OuterSingleton;
	}
	template<> GELABVR_UE4_API UClass* StaticClass<AMenuActor>()
	{
		return AMenuActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuActor);
	struct Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_MenuActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_MenuActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMenuActor, AMenuActor::StaticClass, TEXT("AMenuActor"), &Z_Registration_Info_UClass_AMenuActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMenuActor), 829315220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_MenuActor_h_642557967(TEXT("/Script/GeLabVR_UE4"),
		Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_MenuActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_MenuActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
