// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeLabVR_UE4/VRCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacter() {}
// Cross Module References
	GELABVR_UE4_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	GELABVR_UE4_API UClass* Z_Construct_UClass_AVRCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GeLabVR_UE4();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
// End Cross Module References
	void AVRCharacter::StaticRegisterNativesAVRCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRCharacter);
	UClass* Z_Construct_UClass_AVRCharacter_NoRegister()
	{
		return AVRCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVRCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VRRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GeLabVR_UE4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRCharacter.h" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot = { "VRRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, VRRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftController_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftController = { "LeftController", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, LeftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightController_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightController = { "RightController", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, RightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "Comment", "//For the interaction for the hand mounted UI\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
		{ "ToolTip", "For the interaction for the hand mounted UI" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, InteractionComponent), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_InteractionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_InteractionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_InteractionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRCharacter_Statics::ClassParams = {
		&AVRCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRCharacter()
	{
		if (!Z_Registration_Info_UClass_AVRCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRCharacter.OuterSingleton, Z_Construct_UClass_AVRCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRCharacter.OuterSingleton;
	}
	template<> GELABVR_UE4_API UClass* StaticClass<AVRCharacter>()
	{
		return AVRCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCharacter);
	struct Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_VRCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_VRCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRCharacter, AVRCharacter::StaticClass, TEXT("AVRCharacter"), &Z_Registration_Info_UClass_AVRCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRCharacter), 1098774327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_VRCharacter_h_3152152810(TEXT("/Script/GeLabVR_UE4"),
		Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_VRCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeLabVR_UE_5_0_Source_GeLabVR_UE4_VRCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
