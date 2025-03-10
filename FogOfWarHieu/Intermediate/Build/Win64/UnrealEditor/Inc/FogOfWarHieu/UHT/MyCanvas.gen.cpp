// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FogOfWarHieu/MyCanvas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCanvas() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
FOGOFWARHIEU_API UClass* Z_Construct_UClass_AMyCanvas();
FOGOFWARHIEU_API UClass* Z_Construct_UClass_AMyCanvas_NoRegister();
UPackage* Z_Construct_UPackage__Script_FogOfWarHieu();
// End Cross Module References

// Begin Class AMyCanvas Function DrawBrush
struct Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics
{
	struct MyCanvas_eventDrawBrush_Parms
	{
		UTexture2D* BrushTexture;
		float BrushSize;
		FVector2D BrushLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BrushLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::NewProp_BrushTexture = { "BrushTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCanvas_eventDrawBrush_Parms, BrushTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCanvas_eventDrawBrush_Parms, BrushSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::NewProp_BrushLocation = { "BrushLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCanvas_eventDrawBrush_Parms, BrushLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::NewProp_BrushTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::NewProp_BrushSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::NewProp_BrushLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCanvas, nullptr, "DrawBrush", nullptr, nullptr, Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::MyCanvas_eventDrawBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::MyCanvas_eventDrawBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCanvas_DrawBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCanvas_DrawBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCanvas::execDrawBrush)
{
	P_GET_OBJECT(UTexture2D,Z_Param_BrushTexture);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BrushSize);
	P_GET_STRUCT(FVector2D,Z_Param_BrushLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawBrush(Z_Param_BrushTexture,Z_Param_BrushSize,Z_Param_BrushLocation);
	P_NATIVE_END;
}
// End Class AMyCanvas Function DrawBrush

// Begin Class AMyCanvas
void AMyCanvas::StaticRegisterNativesAMyCanvas()
{
	UClass* Class = AMyCanvas::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawBrush", &AMyCanvas::execDrawBrush },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCanvas);
UClass* Z_Construct_UClass_AMyCanvas_NoRegister()
{
	return AMyCanvas::StaticClass();
}
struct Z_Construct_UClass_AMyCanvas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCanvas.h" },
		{ "ModuleRelativePath", "MyCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "MyCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Canvas_Material_MetaData[] = {
		{ "Category", "MyCanvas" },
		{ "ModuleRelativePath", "MyCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_Material_MetaData[] = {
		{ "Category", "MyCanvas" },
		{ "ModuleRelativePath", "MyCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "MyCanvas" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushMaterial_MetaData[] = {
		{ "Category", "MyCanvas" },
		{ "ModuleRelativePath", "MyCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCanvas_DrawBrush, "DrawBrush" }, // 740349666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCanvas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCanvas_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCanvas, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCanvas_Statics::NewProp_Canvas_Material = { "Canvas_Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCanvas, Canvas_Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Canvas_Material_MetaData), NewProp_Canvas_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCanvas_Statics::NewProp_Brush_Material = { "Brush_Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCanvas, Brush_Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_Material_MetaData), NewProp_Brush_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCanvas_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCanvas, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCanvas_Statics::NewProp_BrushMaterial = { "BrushMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCanvas, BrushMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushMaterial_MetaData), NewProp_BrushMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCanvas_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCanvas_Statics::NewProp_Canvas_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCanvas_Statics::NewProp_Brush_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCanvas_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCanvas_Statics::NewProp_BrushMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCanvas_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCanvas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FogOfWarHieu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCanvas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCanvas_Statics::ClassParams = {
	&AMyCanvas::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCanvas_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCanvas_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCanvas_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCanvas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCanvas()
{
	if (!Z_Registration_Info_UClass_AMyCanvas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCanvas.OuterSingleton, Z_Construct_UClass_AMyCanvas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCanvas.OuterSingleton;
}
template<> FOGOFWARHIEU_API UClass* StaticClass<AMyCanvas>()
{
	return AMyCanvas::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCanvas);
AMyCanvas::~AMyCanvas() {}
// End Class AMyCanvas

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCanvas, AMyCanvas::StaticClass, TEXT("AMyCanvas"), &Z_Registration_Info_UClass_AMyCanvas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCanvas), 691598208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_1794417216(TEXT("/Script/FogOfWarHieu"),
	Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PearBecomeHuman_Documents_Unreal_Projects_FogOfWarHieu_Source_FogOfWarHieu_MyCanvas_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
