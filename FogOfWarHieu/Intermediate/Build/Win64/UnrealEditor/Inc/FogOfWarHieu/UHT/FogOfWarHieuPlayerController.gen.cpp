// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FogOfWarHieu/FogOfWarHieuPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFogOfWarHieuPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FOGOFWARHIEU_API UClass* Z_Construct_UClass_AFogOfWarHieuPlayerController();
FOGOFWARHIEU_API UClass* Z_Construct_UClass_AFogOfWarHieuPlayerController_NoRegister();
FOGOFWARHIEU_API UClass* Z_Construct_UClass_AMyCanvas_NoRegister();
FOGOFWARHIEU_API UScriptStruct* Z_Construct_UScriptStruct_FMiniEle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_FogOfWarHieu();
// End Cross Module References

// Begin ScriptStruct FMiniEle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MiniEle;
class UScriptStruct* FMiniEle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MiniEle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MiniEle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniEle, (UObject*)Z_Construct_UPackage__Script_FogOfWarHieu(), TEXT("MiniEle"));
	}
	return Z_Registration_Info_UScriptStruct_MiniEle.OuterSingleton;
}
template<> FOGOFWARHIEU_API UScriptStruct* StaticStruct<FMiniEle>()
{
	return FMiniEle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMiniEle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniEle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniEle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FogOfWarHieu,
	nullptr,
	&NewStructOps,
	"MiniEle",
	nullptr,
	0,
	sizeof(FMiniEle),
	alignof(FMiniEle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniEle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMiniEle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMiniEle()
{
	if (!Z_Registration_Info_UScriptStruct_MiniEle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MiniEle.InnerSingleton, Z_Construct_UScriptStruct_FMiniEle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MiniEle.InnerSingleton;
}
// End ScriptStruct FMiniEle

// Begin Class AFogOfWarHieuPlayerController
void AFogOfWarHieuPlayerController::StaticRegisterNativesAFogOfWarHieuPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFogOfWarHieuPlayerController);
UClass* Z_Construct_UClass_AFogOfWarHieuPlayerController_NoRegister()
{
	return AFogOfWarHieuPlayerController::StaticClass();
}
struct Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FogOfWarHieuPlayerController.h" },
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedSize_MetaData[] = {
		{ "Category", "FogOfWarHieuPlayerController" },
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyCanvass_MetaData[] = {
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTexture_MetaData[] = {
		{ "Category", "FogOfWarHieuPlayerController" },
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackTexture_MetaData[] = {
		{ "Category", "FogOfWarHieuPlayerController" },
		{ "ModuleRelativePath", "FogOfWarHieuPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCanvass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFogOfWarHieuPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarHieuPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarHieuPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarHieuPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarHieuPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationClickAction_MetaData), NewProp_SetDestinationClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarHieuPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationTouchAction_MetaData), NewProp_SetDestinationTouchAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_FixedSize = { "FixedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarHieuPlayerController, FixedSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedSize_MetaData), NewProp_FixedSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_MyCanvass = { "MyCanvass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarHieuPlayerController, MyCanvass), Z_Construct_UClass_AMyCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyCanvass_MetaData), NewProp_MyCanvass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_WhiteTexture = { "WhiteTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarHieuPlayerController, WhiteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteTexture_MetaData), NewProp_WhiteTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_BlackTexture = { "BlackTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarHieuPlayerController, BlackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackTexture_MetaData), NewProp_BlackTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_SetDestinationClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_SetDestinationTouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_FixedSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_MyCanvass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_WhiteTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::NewProp_BlackTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_FogOfWarHieu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::ClassParams = {
	&AFogOfWarHieuPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFogOfWarHieuPlayerController()
{
	if (!Z_Registration_Info_UClass_AFogOfWarHieuPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFogOfWarHieuPlayerController.OuterSingleton, Z_Construct_UClass_AFogOfWarHieuPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFogOfWarHieuPlayerController.OuterSingleton;
}
template<> FOGOFWARHIEU_API UClass* StaticClass<AFogOfWarHieuPlayerController>()
{
	return AFogOfWarHieuPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFogOfWarHieuPlayerController);
AFogOfWarHieuPlayerController::~AFogOfWarHieuPlayerController() {}
// End Class AFogOfWarHieuPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuPlayerController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMiniEle::StaticStruct, Z_Construct_UScriptStruct_FMiniEle_Statics::NewStructOps, TEXT("MiniEle"), &Z_Registration_Info_UScriptStruct_MiniEle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMiniEle), 2411824144U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFogOfWarHieuPlayerController, AFogOfWarHieuPlayerController::StaticClass, TEXT("AFogOfWarHieuPlayerController"), &Z_Registration_Info_UClass_AFogOfWarHieuPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFogOfWarHieuPlayerController), 3136907965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuPlayerController_h_3911450154(TEXT("/Script/FogOfWarHieu"),
	Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuPlayerController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuPlayerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_FogOfWarHieuPlayerController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
