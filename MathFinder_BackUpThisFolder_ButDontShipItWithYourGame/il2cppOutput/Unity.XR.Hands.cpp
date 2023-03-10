#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2;
// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C;
// UnityEngine.XR.Hands.XRHandSubsystemDescriptor
struct XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73;
// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider
struct XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;
// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater
struct SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandJointTrackingState_tFAA84D8000155CA6945B5402532B00365379D6DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323;
IL2CPP_EXTERN_C String_t* _stringLiteral31BB3EC5D6944153A600CDD2230D820AB0081B59;
IL2CPP_EXTERN_C String_t* _stringLiteral516E58D11955F78EABB94B79869883CE0CAE54EE;
IL2CPP_EXTERN_C String_t* _stringLiteral69936452E9395972D64386DBAE62E5A9998E1AFF;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EF93597679C277BA32488A121B6CDAD517FEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralEFC91683EF460A3E29CBB90BB1304E5887E3963B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemUpdater_U3CStartU3Eb__1_0_m009D2083697D415FE96B0F05E5F11E3747E9D1C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRHandJointIDUtility_GetBackJointID_m944463FBA57D581AFBF5A68F7CA59FC1673F386F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC1F478E06582CFBF0D40EB4B361000CF11FF8F60 
{
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.XR.Hands.XRHandJointIDUtility
struct XRHandJointIDUtility_tAA70C8FC6984E60821DF9999C04458CFEA1D6C27  : public RuntimeObject
{
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility
struct XRHandProviderUtility_t12641A6A290B7BC65F27A285274DCEE6E42C07FC  : public RuntimeObject
{
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater
struct SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548  : public RuntimeObject
{
	// UnityEngine.XR.Hands.XRHandSubsystem UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::m_Subsystem
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___m_Subsystem_0;
};

// Unity.Collections.NativeArray`1<System.Boolean>
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>
struct NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* ___U3CproviderU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
struct Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 
{
	// System.String UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
struct Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
struct Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater/XRHandSubsystemPlayerLoopRunnerUpdateSystem
struct XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D 
{
	union
	{
		struct
		{
		};
		uint8_t XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor
struct XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73  : public SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD
{
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider
struct XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996  : public SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 
{
	// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint> UnityEngine.XR.Hands.XRHand::m_Joints
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::m_RootPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::m_Handedness
	int32_t ___m_Handedness_2;
};

// UnityEngine.XR.Hands.XRHandJoint
struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 
{
	// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJoint::m_Id
	int32_t ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHandJoint::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// System.Single UnityEngine.XR.Hands.XRHandJoint::m_Radius
	float ___m_Radius_2;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_LinearVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LinearVelocity_3;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_4;
	// UnityEngine.XR.Hands.XRHandJointTrackingState UnityEngine.XR.Hands.XRHandJoint::m_TrackingState
	int32_t ___m_TrackingState_5;
};

struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_StaticFields
{
	// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.XRHandJoint::willNeverBeValid
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___willNeverBeValid_6;
};

// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C  : public SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2
{
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_LeftHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_LeftHand_4;
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_RightHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_RightHand_5;
	// Unity.Collections.NativeArray`1<System.Boolean> UnityEngine.XR.Hands.XRHandSubsystem::m_JointsInLayout
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___m_JointsInLayout_6;
	// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::handsUpdated
	Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* ___handsUpdated_7;
};

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F m_Items[1];

	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
};


// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_gshared (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_gshared (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_gshared (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mF6BE8B768C3DA33BE3281D8F143C0FB02E720366_gshared_inline (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Boolean>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_gshared (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3_OnDestroy_m02737870B41A7EFE924EE780772C07819FCEEF53_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_gshared (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.LowLevel.PlayerLoopSystem>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_gshared (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;

// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.Hands.XRHandJointIDUtility::ToIndex(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02 (int32_t ___jointId0, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.XRHand::GetJoint(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___id0, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::get_rootPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::get_handedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.Hands.XRHand::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRHand_ToString_m16E035580DC75AAFAE5A68574F546AD7976B5508 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void UnityEngine.XR.Hands.XRHand::.ctor(UnityEngine.XR.Hands.Handedness,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___handedness0, int32_t ___allocator1, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7 (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::Dispose()
inline void NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27 (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*, const RuntimeMethod*))NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Hands.XRHand::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJoint::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394_inline (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointTrackingState UnityEngine.XR.Hands.XRHandJoint::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696_inline (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetRadius(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetRadius_m992C3DC67D51BCF5F949503D98178BE191D2526D (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, float* ___radius0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetLinearVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___linearVelocity0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___angularVelocity0, const RuntimeMethod* method) ;
// System.String UnityEngine.Pose::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pose_ToString_m8C3203B81EB15980F16E07C63B6FBBEECE50A6EF (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.Hands.XRHandJoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRHandJoint_ToString_m1DB56DCD567E7C649706D8E217B9D554C3F218F5 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>::.ctor()
inline void SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7 (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2*, const RuntimeMethod*))SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared)(__this, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>::get_provider()
inline XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_inline (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2* __this, const RuntimeMethod* method)
{
	return ((  XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* (*) (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// System.Void System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>::Invoke(T1,T2)
inline void Action_2_Invoke_m7A623BC79543095CAEA9BFBF393C402551C5744E_inline (Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF*, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_mF6BE8B768C3DA33BE3281D8F143C0FB02E720366_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Boolean>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86 (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::FromIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E (int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>::OnDestroy()
inline void SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6 (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2*, const RuntimeMethod*))SubsystemWithProvider_3_OnDestroy_m02737870B41A7EFE924EE780772C07819FCEEF53_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Boolean>::Dispose()
inline void NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344 (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*, const RuntimeMethod*))NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor::.ctor(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemDescriptor__ctor_m1562A286279394BEF901F8EDBA7D5D2A611AFB31 (XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___cinfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8 (SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mAC2CF52DB8305CFB37D76942147668EF627C2B34 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD5D6A70EE41012FFB1C5887F641572915F9E4DF0 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.LowLevel.PlayerLoopSystem UnityEngine.LowLevel.PlayerLoop::GetCurrentPlayerLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F PlayerLoop_GetCurrentPlayerLoop_mDC8CBE388799E9CF78200030C101875B1ABD4BA3 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LowLevel.PlayerLoop::SetPlayerLoop(UnityEngine.LowLevel.PlayerLoopSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoop_SetPlayerLoop_m7D2DB1287D886B0AC17C24F86C897C82A813D01B (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___loop0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.LowLevel.PlayerLoopSystem>(T[]&,System.Int32)
inline void Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6 (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D**, int32_t, const RuntimeMethod*))Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_gshared)(___array0, ___newSize1, method);
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Stop_m8AFC122B06A8C7E35BB7B534081B48F7F96FFA2A (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_OnUpdate_m8A13E22290DF48E9B736EC4C6BB8DAE0AA9464E3 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.Hands.XRHandSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2 (SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.Hands.XRHandJointIDUtility::ToIndex(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02 (int32_t ___jointId0, const RuntimeMethod* method) 
{
	{
		// public static int ToIndex(this XRHandJointID jointId) => (int)jointId - 1;
		int32_t L_0 = ___jointId0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1));
	}
}
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::FromIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E (int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// public static XRHandJointID FromIndex(int index) => (XRHandJointID)(index + 1);
		int32_t L_0 = ___index0;
		return (int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1)));
	}
}
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::GetFrontJointID(UnityEngine.XR.Hands.XRHandFingerID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313 (int32_t ___fingerId0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___fingerId0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0020;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0026;
			}
		}
	}
	{
		goto IL_0029;
	}

IL_001c:
	{
		// return XRHandJointID.ThumbMetacarpal;
		return (int32_t)(3);
	}

IL_001e:
	{
		// return XRHandJointID.IndexMetacarpal;
		return (int32_t)(7);
	}

IL_0020:
	{
		// return XRHandJointID.MiddleMetacarpal;
		return (int32_t)(((int32_t)12));
	}

IL_0023:
	{
		// return XRHandJointID.RingMetacarpal;
		return (int32_t)(((int32_t)17));
	}

IL_0026:
	{
		// return XRHandJointID.LittleMetacarpal;
		return (int32_t)(((int32_t)22));
	}

IL_0029:
	{
		// throw new ArgumentException(nameof(fingerId) + " must be a valid value!");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral516E58D11955F78EABB94B79869883CE0CAE54EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::GetBackJointID(UnityEngine.XR.Hands.XRHandFingerID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_GetBackJointID_m944463FBA57D581AFBF5A68F7CA59FC1673F386F (int32_t ___fingerId0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___fingerId0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0021;
			}
			case 3:
			{
				goto IL_0024;
			}
			case 4:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_002a;
	}

IL_001c:
	{
		// return XRHandJointID.ThumbTip;
		return (int32_t)(6);
	}

IL_001e:
	{
		// return XRHandJointID.IndexTip;
		return (int32_t)(((int32_t)11));
	}

IL_0021:
	{
		// return XRHandJointID.MiddleTip;
		return (int32_t)(((int32_t)16));
	}

IL_0024:
	{
		// return XRHandJointID.RingTip;
		return (int32_t)(((int32_t)21));
	}

IL_0027:
	{
		// return XRHandJointID.LittleTip;
		return (int32_t)(((int32_t)26));
	}

IL_002a:
	{
		// throw new ArgumentException(nameof(fingerId) + " must be a valid value!");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral516E58D11955F78EABB94B79869883CE0CAE54EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRHandJointIDUtility_GetBackJointID_m944463FBA57D581AFBF5A68F7CA59FC1673F386F_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.XRHand::GetJoint(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	{
		// public XRHandJoint GetJoint(XRHandJointID id) => m_Joints[id.ToIndex()];
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_0 = (&__this->___m_Joints_0);
		int32_t L_1 = ___id0;
		int32_t L_2;
		L_2 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(L_1, NULL);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, (L_0)->___m_Buffer_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035_AdjustorThunk (RuntimeObject* __this, int32_t ___id0, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 _returnValue;
	_returnValue = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035(_thisAdjusted, ___id0, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::get_rootPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Pose rootPose => m_RootPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_RootPose_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::get_handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness handedness => m_Handedness;
		int32_t L_0 = __this->___m_Handedness_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.Hands.XRHand::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRHand_ToString_m16E035580DC75AAFAE5A68574F546AD7976B5508 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69936452E9395972D64386DBAE62E5A9998E1AFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Handedness + " XRHand";
		int32_t* L_0 = (&__this->___m_Handedness_2);
		Il2CppFakeBox<int32_t> L_1(Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral69936452E9395972D64386DBAE62E5A9998E1AFF, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* XRHand_ToString_m16E035580DC75AAFAE5A68574F546AD7976B5508_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRHand_ToString_m16E035580DC75AAFAE5A68574F546AD7976B5508(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHand::.ctor(UnityEngine.XR.Hands.Handedness,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___handedness0, int32_t ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RootPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		__this->___m_RootPose_1 = L_0;
		// m_Handedness = handedness;
		int32_t L_1 = ___handedness0;
		__this->___m_Handedness_2 = L_1;
		// m_Joints = new NativeArray<XRHandJoint>(XRHandJointID.EndMarker.ToIndex(), allocator);
		int32_t L_2;
		L_2 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		int32_t L_3 = ___allocator1;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B((&L_4), L_2, L_3, 1, /*hidden argument*/NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_RuntimeMethod_var);
		__this->___m_Joints_0 = L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933_AdjustorThunk (RuntimeObject* __this, int32_t ___handedness0, int32_t ___allocator1, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933(_thisAdjusted, ___handedness0, ___allocator1, method);
}
// System.Void UnityEngine.XR.Hands.XRHand::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Joints.IsCreated)
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_0 = (&__this->___m_Joints_0);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7(L_0, NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// m_Joints.Dispose();
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_2 = (&__this->___m_Joints_0);
		NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27(L_2, NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJoint::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	{
		// public XRHandJointID id => m_Id;
		int32_t L_0 = __this->___m_Id_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.Hands.XRHandJointTrackingState UnityEngine.XR.Hands.XRHandJoint::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	{
		// public XRHandJointTrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetRadius(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetRadius_m992C3DC67D51BCF5F949503D98178BE191D2526D (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, float* ___radius0, const RuntimeMethod* method) 
{
	{
		// if ((m_TrackingState & XRHandJointTrackingState.Radius) == XRHandJointTrackingState.None)
		int32_t L_0 = __this->___m_TrackingState_5;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_0013;
		}
	}
	{
		// radius = 0.0f;
		float* L_1 = ___radius0;
		*((float*)L_1) = (float)(0.0f);
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// radius = m_Radius;
		float* L_2 = ___radius0;
		float L_3 = __this->___m_Radius_2;
		*((float*)L_2) = (float)L_3;
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XRHandJoint_TryGetRadius_m992C3DC67D51BCF5F949503D98178BE191D2526D_AdjustorThunk (RuntimeObject* __this, float* ___radius0, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRHandJoint_TryGetRadius_m992C3DC67D51BCF5F949503D98178BE191D2526D(_thisAdjusted, ___radius0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((m_TrackingState & XRHandJointTrackingState.Pose) == XRHandJointTrackingState.None)
		int32_t L_0 = __this->___m_TrackingState_5;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_0017;
		}
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___pose0;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_1 = L_2;
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// pose = m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___pose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = __this->___m_Pose_1;
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_3 = L_4;
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E(_thisAdjusted, ___pose0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetLinearVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___linearVelocity0, const RuntimeMethod* method) 
{
	{
		// if ((m_TrackingState & XRHandJointTrackingState.LinearVelocity) == XRHandJointTrackingState.None)
		int32_t L_0 = __this->___m_TrackingState_5;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_0017;
		}
	}
	{
		// linearVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___linearVelocity0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_1 = L_2;
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// linearVelocity = m_LinearVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___linearVelocity0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_LinearVelocity_3;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_4;
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___linearVelocity0, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B(_thisAdjusted, ___linearVelocity0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___angularVelocity0, const RuntimeMethod* method) 
{
	{
		// if ((m_TrackingState & XRHandJointTrackingState.AngularVelocity) == XRHandJointTrackingState.None)
		int32_t L_0 = __this->___m_TrackingState_5;
		if (((int32_t)((int32_t)L_0&8)))
		{
			goto IL_0017;
		}
	}
	{
		// angularVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___angularVelocity0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_1 = L_2;
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// angularVelocity = m_AngularVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___angularVelocity0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_AngularVelocity_4;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_4;
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___angularVelocity0, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63(_thisAdjusted, ___angularVelocity0, method);
	return _returnValue;
}
// System.String UnityEngine.XR.Hands.XRHandJoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRHandJoint_ToString_m1DB56DCD567E7C649706D8E217B9D554C3F218F5 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointTrackingState_tFAA84D8000155CA6945B5402532B00365379D6DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31BB3EC5D6944153A600CDD2230D820AB0081B59);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(
		//     "[XRHandJoint ID: {0}] Pose: ({1}) Radius: {2} | Linear Velocity: {3}, Angular Velocity: {4} | Tracking State: {5}",
		//     m_Id, m_Pose.ToString("F4"), m_Radius.ToString("F4"), m_LinearVelocity.ToString("F4"), m_AngularVelocity.ToString("F4"), m_TrackingState);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___m_Id_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = (&__this->___m_Pose_1);
		String_t* L_7;
		L_7 = Pose_ToString_m8C3203B81EB15980F16E07C63B6FBBEECE50A6EF(L_6, _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		float* L_9 = (&__this->___m_Radius_2);
		String_t* L_10;
		L_10 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_9, _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___m_LinearVelocity_3);
		String_t* L_13;
		L_13 = Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1(L_12, _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___m_AngularVelocity_4);
		String_t* L_16;
		L_16 = Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1(L_15, _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		int32_t L_18 = __this->___m_TrackingState_5;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(XRHandJointTrackingState_tFAA84D8000155CA6945B5402532B00365379D6DA_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral31BB3EC5D6944153A600CDD2230D820AB0081B59, L_17, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* XRHandJoint_ToString_m1DB56DCD567E7C649706D8E217B9D554C3F218F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRHandJoint_ToString_m1DB56DCD567E7C649706D8E217B9D554C3F218F5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHandJoint::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandJoint__cctor_mD32441FE0136BAC4C20AC3DA5425DD05AE777D16 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static XRHandJoint() => willNeverBeValid = new XRHandJoint
		// {
		//     m_TrackingState = XRHandJointTrackingState.WillNeverBeValid
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783));
		(&V_0)->___m_TrackingState_5 = ((int32_t)16);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_0 = V_0;
		((XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_StaticFields*)il2cpp_codegen_static_fields_for(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var))->___willNeverBeValid_6 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Hands.XRHandSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystem__ctor_m426A5EE809B86700F493D593F066DCF77FB39ABA (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRHandSubsystem()
		SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7(__this, SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_leftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97 (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand leftHand => m_LeftHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_LeftHand_4;
		return L_0;
	}
}
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_rightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand rightHand => m_RightHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_RightHand_5;
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<System.Boolean> UnityEngine.XR.Hands.XRHandSubsystem::get_jointsInLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB XRHandSubsystem_get_jointsInLayout_m4C3FFC2BE1D371669B3A0EE43E496D69AA20952A (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public NativeArray<bool> jointsInLayout => m_JointsInLayout;
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_0 = __this->___m_JointsInLayout_6;
		return L_0;
	}
}
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandSubsystem_TryUpdateHands_mC1614F031312013D3E5873B99881A75AEC936923 (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, int32_t ___updateType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!running)
		bool L_0;
		L_0 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return UpdateSuccessFlags.None;
		return (int32_t)(0);
	}

IL_000a:
	{
		// var flags = provider.TryUpdateHands(
		//     updateType,
		//     ref m_LeftHand.m_RootPose,
		//     m_LeftHand.m_Joints,
		//     ref m_RightHand.m_RootPose,
		//     m_RightHand.m_Joints);
		XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* L_1;
		L_1 = SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_inline(__this, SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var);
		int32_t L_2 = ___updateType0;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_3 = (&__this->___m_LeftHand_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&L_3->___m_RootPose_1);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_5 = (&__this->___m_LeftHand_4);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_6 = L_5->___m_Joints_0;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_7 = (&__this->___m_RightHand_5);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = (&L_7->___m_RootPose_1);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_9 = (&__this->___m_RightHand_5);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_10 = L_9->___m_Joints_0;
		NullCheck(L_1);
		int32_t L_11;
		L_11 = VirtualFuncInvoker5< int32_t, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 >::Invoke(9 /* UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider::TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType,UnityEngine.Pose&,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>,UnityEngine.Pose&,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>) */, L_1, L_2, L_4, L_6, L_8, L_10);
		V_0 = L_11;
		// if (handsUpdated != null)
		Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* L_12 = __this->___handsUpdated_7;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// handsUpdated.Invoke(flags, updateType);
		Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* L_13 = __this->___handsUpdated_7;
		int32_t L_14 = V_0;
		int32_t L_15 = ___updateType0;
		NullCheck(L_13);
		Action_2_Invoke_m7A623BC79543095CAEA9BFBF393C402551C5744E_inline(L_13, L_14, L_15, NULL);
	}

IL_0058:
	{
		// return flags;
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystem::OnCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystem_OnCreate_m35A20B2AB7863D483252327A1769F674743F4359 (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// m_JointsInLayout = new NativeArray<bool>(XRHandJointID.EndMarker.ToIndex(), Allocator.Persistent);
		int32_t L_0;
		L_0 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86((&L_1), L_0, 4, 1, /*hidden argument*/NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_RuntimeMethod_var);
		__this->___m_JointsInLayout_6 = L_1;
		// provider.GetHandLayout(m_JointsInLayout);
		XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* L_2;
		L_2 = SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_inline(__this, SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var);
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_3 = __this->___m_JointsInLayout_6;
		NullCheck(L_2);
		VirtualActionInvoker1< NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB >::Invoke(8 /* System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider::GetHandLayout(Unity.Collections.NativeArray`1<System.Boolean>) */, L_2, L_3);
		// m_LeftHand = new XRHand(Handedness.Left, Allocator.Persistent);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_4;
		memset((&L_4), 0, sizeof(L_4));
		XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933((&L_4), 1, 4, /*hidden argument*/NULL);
		__this->___m_LeftHand_4 = L_4;
		// m_RightHand = new XRHand(Handedness.Right, Allocator.Persistent);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_5;
		memset((&L_5), 0, sizeof(L_5));
		XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933((&L_5), 2, 4, /*hidden argument*/NULL);
		__this->___m_RightHand_5 = L_5;
		// for (int jointIndex = XRHandJointID.BeginMarker.ToIndex(); jointIndex < XRHandJointID.EndMarker.ToIndex(); ++jointIndex)
		int32_t L_6;
		L_6 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(1, NULL);
		V_0 = L_6;
		goto IL_0091;
	}

IL_0048:
	{
		// if (!m_JointsInLayout[jointIndex])
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_7 = (&__this->___m_JointsInLayout_6);
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(bool, (L_7)->___m_Buffer_0, L_8);
		if (L_9)
		{
			goto IL_008d;
		}
	}
	{
		// var joint = XRHandJoint.willNeverBeValid;
		il2cpp_codegen_runtime_class_init_inline(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_10 = ((XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_StaticFields*)il2cpp_codegen_static_fields_for(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var))->___willNeverBeValid_6;
		V_1 = L_10;
		// joint.m_Id = XRHandJointIDUtility.FromIndex(jointIndex);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E(L_11, NULL);
		(&V_1)->___m_Id_0 = L_12;
		// m_LeftHand.m_Joints[jointIndex] = joint;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_13 = (&__this->___m_LeftHand_4);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_14 = (&L_13->___m_Joints_0);
		int32_t L_15 = V_0;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_16 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, (L_14)->___m_Buffer_0, L_15, (L_16));
		// m_RightHand.m_Joints[jointIndex] = joint;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_17 = (&__this->___m_RightHand_5);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_18 = (&L_17->___m_Joints_0);
		int32_t L_19 = V_0;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_20 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, (L_18)->___m_Buffer_0, L_19, (L_20));
	}

IL_008d:
	{
		// for (int jointIndex = XRHandJointID.BeginMarker.ToIndex(); jointIndex < XRHandJointID.EndMarker.ToIndex(); ++jointIndex)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0091:
	{
		// for (int jointIndex = XRHandJointID.BeginMarker.ToIndex(); jointIndex < XRHandJointID.EndMarker.ToIndex(); ++jointIndex)
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0048;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystem_OnDestroy_m69D4CA97F814CE1DE89EE54107DB6E94335F1B90 (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDestroy();
		SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6(__this, SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6_RuntimeMethod_var);
		// m_LeftHand.Dispose();
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_0 = (&__this->___m_LeftHand_4);
		XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5(L_0, NULL);
		// m_RightHand.Dispose();
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_1 = (&__this->___m_RightHand_5);
		XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5(L_1, NULL);
		// m_JointsInLayout.Dispose();
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_2 = (&__this->___m_JointsInLayout_6);
		NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344(L_2, NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor::Register(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemDescriptor_Register_m9C6273F6EAA053F684929058B9A1113261DFF95F (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRHandSubsystemDescriptor(cinfo));
		Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 L_0 = ___cinfo0;
		XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* L_1 = (XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73*)il2cpp_codegen_object_new(XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRHandSubsystemDescriptor__ctor_m1562A286279394BEF901F8EDBA7D5D2A611AFB31(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor::.ctor(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemDescriptor__ctor_m1562A286279394BEF901F8EDBA7D5D2A611AFB31 (XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRHandSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8(__this, SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline((&___cinfo0), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline((&___cinfo0), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline((&___cinfo0), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_pinvoke(const Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81& unmarshaled, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_pinvoke_back(const Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_pinvoke& marshaled, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_pinvoke_cleanup(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_com(const Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81& unmarshaled, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_com_back(const Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_com& marshaled, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_com_cleanup(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mAC2CF52DB8305CFB37D76942147668EF627C2B34 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		// int hashCode = id != null ? id.GetHashCode() : 0;
		String_t* L_0;
		L_0 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		String_t* L_1;
		L_1 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		// hashCode = hashCode * 486187739 + (providerType != null ? providerType.GetHashCode() : 0);
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, (Type_t*)NULL, NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(G_B3_0, ((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply(G_B3_0, ((int32_t)486187739)));
			goto IL_002d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_002d:
	{
		Type_t* L_5;
		L_5 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hashCode = hashCode * 486187739 + (subsystemTypeOverride != null ? subsystemTypeOverride.GetHashCode() : 0);
		Type_t* L_7;
		L_7 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, (Type_t*)NULL, NULL);
		G_B7_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(G_B6_1, G_B6_0)), ((int32_t)486187739)));
		if (L_8)
		{
			G_B8_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(G_B6_1, G_B6_0)), ((int32_t)486187739)));
			goto IL_0050;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_005b;
	}

IL_0050:
	{
		Type_t* L_9;
		L_9 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline(__this, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_9);
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
	}

IL_005b:
	{
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add(G_B9_1, G_B9_0));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mAC2CF52DB8305CFB37D76942147668EF627C2B34_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mAC2CF52DB8305CFB37D76942147668EF627C2B34(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return id == other.id &&
		//     providerType == other.providerType &&
		//     subsystemTypeOverride == other.subsystemTypeOverride;
		String_t* L_0;
		L_0 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline((&___other0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline(__this, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline(__this, NULL);
		Type_t* L_7;
		L_7 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_7, NULL);
		return L_8;
	}

IL_003b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985_AdjustorThunk (RuntimeObject* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___other0, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD5D6A70EE41012FFB1C5887F641572915F9E4DF0 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985(__this, ((*(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*)((Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*)(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*)UnBox(L_1, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mD5D6A70EE41012FFB1C5887F641572915F9E4DF0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_mD5D6A70EE41012FFB1C5887F641572915F9E4DF0(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo,UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m61389941533DB73A7548C2A2BDAC0782BFA10F42 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___lhs0, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static bool operator==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985((&___lhs0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo,UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mA91A989AC6CE5100F879B29DD0BE17EC64F0FCBF (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___lhs0, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static bool operator!=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985((&___lhs0), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility::CreateJoint(UnityEngine.XR.Hands.XRHandJointTrackingState,UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Pose,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHandProviderUtility_CreateJoint_m3DDFE9C41E64DD6EAA51C050A2FC3BC191A30371 (int32_t ___trackingState0, int32_t ___id1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose2, float ___radius3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linearVelocity4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity5, const RuntimeMethod* method) 
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new XRHandJoint
		// {
		//     m_TrackingState = trackingState,
		//     m_Id = id,
		//     m_Pose = pose,
		//     m_Radius = radius,
		//     m_LinearVelocity = linearVelocity,
		//     m_AngularVelocity = angularVelocity,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783));
		int32_t L_0 = ___trackingState0;
		(&V_0)->___m_TrackingState_5 = L_0;
		int32_t L_1 = ___id1;
		(&V_0)->___m_Id_0 = L_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___pose2;
		(&V_0)->___m_Pose_1 = L_2;
		float L_3 = ___radius3;
		(&V_0)->___m_Radius_2 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___linearVelocity4;
		(&V_0)->___m_LinearVelocity_3 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___angularVelocity5;
		(&V_0)->___m_AngularVelocity_4 = L_5;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::.ctor(UnityEngine.XR.Hands.XRHandSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater__ctor_mDFF3EED82E3F9CA7181F9C12537F4313D9A306C1 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___subsystem0, const RuntimeMethod* method) 
{
	{
		// public SubsystemUpdater(XRHandSubsystem subsystem) => m_Subsystem = subsystem;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public SubsystemUpdater(XRHandSubsystem subsystem) => m_Subsystem = subsystem;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = ___subsystem0;
		__this->___m_Subsystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystem_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Start_mEC50F9FCA9412717D6599F92D2A68A925C393ADD (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemUpdater_U3CStartU3Eb__1_0_m009D2083697D415FE96B0F05E5F11E3747E9D1C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7EF93597679C277BA32488A121B6CDAD517FEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC91683EF460A3E29CBB90BB1304E5887E3963B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* V_3 = NULL;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* V_7 = NULL;
	int32_t V_8 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B23_0 = 0;
	{
		// int earlyUpdateStepIndex = -1;
		V_0 = (-1);
		// var playerLoop = UnityEngine.LowLevel.PlayerLoop.GetCurrentPlayerLoop();
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_0;
		L_0 = PlayerLoop_GetCurrentPlayerLoop_mDC8CBE388799E9CF78200030C101875B1ABD4BA3(NULL);
		V_1 = L_0;
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		V_5 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		// if (playerLoop.subSystemList[subSystemIndex].type == typeof(UnityEngine.PlayerLoop.EarlyUpdate))
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_1 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_2 = L_1.___subSystemList_1;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		Type_t* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// earlyUpdateStepIndex = subSystemIndex;
		int32_t L_8 = V_5;
		V_0 = L_8;
		// break;
		goto IL_0047;
	}

IL_0035:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003b:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		int32_t L_10 = V_5;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_11 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_12 = L_11.___subSystemList_1;
		NullCheck(L_12);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000d;
		}
	}

IL_0047:
	{
		// if (earlyUpdateStepIndex < 0)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// Debug.LogError("Couldn't find PlayerLoop.EarlyUpdate step - XRHandSubsystem will not automatically update!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC7EF93597679C277BA32488A121B6CDAD517FEAA, NULL);
		// return;
		return;
	}

IL_0056:
	{
		// int xrUpdateIndex = -1;
		V_2 = (-1);
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		V_6 = 0;
		goto IL_0096;
	}

IL_005d:
	{
		// if (playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[subSystemIndex].type == typeof(UnityEngine.PlayerLoop.EarlyUpdate.XRUpdate))
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_14 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_15 = L_14.___subSystemList_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___subSystemList_1;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		Type_t* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_0090;
		}
	}
	{
		// xrUpdateIndex = subSystemIndex;
		int32_t L_23 = V_6;
		V_2 = L_23;
		// break;
		goto IL_00ad;
	}

IL_0090:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0096:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		int32_t L_25 = V_6;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_26 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_27 = L_26.___subSystemList_1;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___subSystemList_1;
		NullCheck(L_29);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_005d;
		}
	}

IL_00ad:
	{
		// if (xrUpdateIndex < 0)
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		// Debug.LogError("Couldn't find PlayerLoop.EarlyUpdate.XRUpdate step - XRHandSubsystem will not automatically update!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEFC91683EF460A3E29CBB90BB1304E5887E3963B, NULL);
		// return;
		return;
	}

IL_00bc:
	{
		// var systems = playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[xrUpdateIndex].subSystemList;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_31 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_32 = L_31.___subSystemList_1;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___subSystemList_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___subSystemList_1;
		V_3 = L_36;
		// if (systems != null)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_37 = V_3;
		if (!L_37)
		{
			goto IL_0112;
		}
	}
	{
		// foreach (var system in systems)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_38 = V_3;
		V_7 = L_38;
		V_8 = 0;
		goto IL_010a;
	}

IL_00e4:
	{
		// foreach (var system in systems)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_39 = V_7;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		// if (system.type == typeof(XRHandSubsystemPlayerLoopRunnerUpdateSystem))
		Type_t* L_43 = L_42.___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0104;
		}
	}
	{
		// return;
		return;
	}

IL_0104:
	{
		int32_t L_47 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_010a:
	{
		// foreach (var system in systems)
		int32_t L_48 = V_8;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_49 = V_7;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_00e4;
		}
	}

IL_0112:
	{
		// var updatedSystems = new UnityEngine.LowLevel.PlayerLoopSystem[systems != null ? systems.Length + 1 : 1];
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_50 = V_3;
		if (L_50)
		{
			goto IL_0118;
		}
	}
	{
		G_B23_0 = 1;
		goto IL_011d;
	}

IL_0118:
	{
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_51 = V_3;
		NullCheck(L_51);
		G_B23_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_51)->max_length)), 1));
	}

IL_011d:
	{
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_52 = (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)(PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)SZArrayNew(PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D_il2cpp_TypeInfo_var, (uint32_t)G_B23_0);
		V_4 = L_52;
		// if (systems != null)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_53 = V_3;
		if (!L_53)
		{
			goto IL_0134;
		}
	}
	{
		// Array.Copy(systems, 0, updatedSystems, 1, systems.Length);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_54 = V_3;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_55 = V_4;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_56 = V_3;
		NullCheck(L_56);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_54, 0, (RuntimeArray*)L_55, 1, ((int32_t)(((RuntimeArray*)L_56)->max_length)), NULL);
	}

IL_0134:
	{
		// updatedSystems[0] = new UnityEngine.LowLevel.PlayerLoopSystem
		// {
		//     type = typeof(XRHandSubsystemPlayerLoopRunnerUpdateSystem),
		//     updateDelegate = () => OnUpdate()
		// };
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_57 = V_4;
		il2cpp_codegen_initobj((&V_9), sizeof(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		(&V_9)->___type_0 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_9)->___type_0), (void*)L_59);
		UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* L_60 = (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4*)il2cpp_codegen_object_new(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B(L_60, __this, (intptr_t)((void*)SubsystemUpdater_U3CStartU3Eb__1_0_m009D2083697D415FE96B0F05E5F11E3747E9D1C6_RuntimeMethod_var), NULL);
		(&V_9)->___updateDelegate_2 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_9)->___updateDelegate_2), (void*)L_60);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_61 = V_9;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F)L_61);
		// Application.onBeforeRender += OnBeforeRender;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_62 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_62, __this, (intptr_t)((void*)SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var), NULL);
		Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394(L_62, NULL);
		// playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[xrUpdateIndex].subSystemList = updatedSystems;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_63 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_64 = L_63.___subSystemList_1;
		int32_t L_65 = V_0;
		NullCheck(L_64);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___subSystemList_1;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_68 = V_4;
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___subSystemList_1 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___subSystemList_1), (void*)L_68);
		// UnityEngine.LowLevel.PlayerLoop.SetPlayerLoop(playerLoop);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_69 = V_1;
		PlayerLoop_SetPlayerLoop_m7D2DB1287D886B0AC17C24F86C897C82A813D01B(L_69, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Stop_m8AFC122B06A8C7E35BB7B534081B48F7F96FFA2A (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// Application.onBeforeRender -= OnBeforeRender;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var), NULL);
		Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24(L_0, NULL);
		// var playerLoop = UnityEngine.LowLevel.PlayerLoop.GetCurrentPlayerLoop();
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_1;
		L_1 = PlayerLoop_GetCurrentPlayerLoop_mDC8CBE388799E9CF78200030C101875B1ABD4BA3(NULL);
		V_0 = L_1;
		// int earlyUpdateStepIndex = -1;
		V_1 = (-1);
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		V_5 = 0;
		goto IL_004c;
	}

IL_001e:
	{
		// if (playerLoop.subSystemList[subSystemIndex].type == typeof(UnityEngine.PlayerLoop.EarlyUpdate))
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_2 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_3 = L_2.___subSystemList_1;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		Type_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// earlyUpdateStepIndex = subSystemIndex;
		int32_t L_9 = V_5;
		V_1 = L_9;
		// break;
		goto IL_0058;
	}

IL_0046:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		int32_t L_10 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004c:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		int32_t L_11 = V_5;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_12 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_13 = L_12.___subSystemList_1;
		NullCheck(L_13);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001e;
		}
	}

IL_0058:
	{
		// if (earlyUpdateStepIndex < 0)
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		// return;
		return;
	}

IL_005d:
	{
		// int xrUpdateIndex = -1;
		V_2 = (-1);
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		V_6 = 0;
		goto IL_009d;
	}

IL_0064:
	{
		// if (playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[subSystemIndex].type == typeof(UnityEngine.PlayerLoop.EarlyUpdate.XRUpdate))
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_15 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_16 = L_15.___subSystemList_1;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___subSystemList_1;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		Type_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		// xrUpdateIndex = subSystemIndex;
		int32_t L_24 = V_6;
		V_2 = L_24;
		// break;
		goto IL_00b4;
	}

IL_0097:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009d:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		int32_t L_26 = V_6;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_27 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_28 = L_27.___subSystemList_1;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___subSystemList_1;
		NullCheck(L_30);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0064;
		}
	}

IL_00b4:
	{
		// if (xrUpdateIndex < 0)
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00b9;
		}
	}
	{
		// return;
		return;
	}

IL_00b9:
	{
		// int indexOfOurType = -1;
		V_3 = (-1);
		// var systems = playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[xrUpdateIndex].subSystemList;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_32 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_33 = L_32.___subSystemList_1;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___subSystemList_1;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___subSystemList_1;
		V_4 = L_37;
		// if (systems == null)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_38 = V_4;
		if (L_38)
		{
			goto IL_00de;
		}
	}
	{
		// return;
		return;
	}

IL_00de:
	{
		// for (int systemIndex = 0; systemIndex < systems.Length; ++systemIndex)
		V_7 = 0;
		goto IL_010d;
	}

IL_00e3:
	{
		// if (systems[systemIndex].type == typeof(XRHandSubsystemPlayerLoopRunnerUpdateSystem))
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_39 = V_4;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		Type_t* L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0107;
		}
	}
	{
		// indexOfOurType = systemIndex;
		int32_t L_45 = V_7;
		V_3 = L_45;
		// break;
		goto IL_0115;
	}

IL_0107:
	{
		// for (int systemIndex = 0; systemIndex < systems.Length; ++systemIndex)
		int32_t L_46 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_010d:
	{
		// for (int systemIndex = 0; systemIndex < systems.Length; ++systemIndex)
		int32_t L_47 = V_7;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_48 = V_4;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_00e3;
		}
	}

IL_0115:
	{
		// if (indexOfOurType < 0)
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		// return;
		return;
	}

IL_011a:
	{
		// if (indexOfOurType == 0 && systems.Length == 1)
		int32_t L_50 = V_3;
		if (L_50)
		{
			goto IL_0129;
		}
	}
	{
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_51 = V_4;
		NullCheck(L_51);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0129;
		}
	}
	{
		// systems = null;
		V_4 = (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)NULL;
		goto IL_0147;
	}

IL_0129:
	{
		// else if (indexOfOurType < systems.Length - 1)
		int32_t L_52 = V_3;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_53 = V_4;
		NullCheck(L_53);
		if ((((int32_t)L_52) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_53)->max_length)), 1)))))
		{
			goto IL_0147;
		}
	}
	{
		// Array.Copy(systems, indexOfOurType + 1, systems, indexOfOurType, systems.Length - indexOfOurType - 1);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_54 = V_4;
		int32_t L_55 = V_3;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_56 = V_4;
		int32_t L_57 = V_3;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_58 = V_4;
		NullCheck(L_58);
		int32_t L_59 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_54, ((int32_t)il2cpp_codegen_add(L_55, 1)), (RuntimeArray*)L_56, L_57, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_58)->max_length)), L_59)), 1)), NULL);
	}

IL_0147:
	{
		// if (systems != null)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_60 = V_4;
		if (!L_60)
		{
			goto IL_0158;
		}
	}
	{
		// Array.Resize(ref systems, systems.Length - 1);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_61 = V_4;
		NullCheck(L_61);
		Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6((&V_4), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_61)->max_length)), 1)), Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_RuntimeMethod_var);
	}

IL_0158:
	{
		// playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[xrUpdateIndex].subSystemList = systems;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_62 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_63 = L_62.___subSystemList_1;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___subSystemList_1;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_67 = V_4;
		((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___subSystemList_1 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___subSystemList_1), (void*)L_67);
		// UnityEngine.LowLevel.PlayerLoop.SetPlayerLoop(playerLoop);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_68 = V_0;
		PlayerLoop_SetPlayerLoop_m7D2DB1287D886B0AC17C24F86C897C82A813D01B(L_68, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Destroy_mBC988E2883F74DF50B81AEEDA2A7C32AFDEC85A5 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	{
		// Stop();
		SubsystemUpdater_Stop_m8AFC122B06A8C7E35BB7B534081B48F7F96FFA2A(__this, NULL);
		// m_Subsystem = null;
		__this->___m_Subsystem_0 = (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystem_0), (void*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_OnUpdate_m8A13E22290DF48E9B736EC4C6BB8DAE0AA9464E3 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	{
		// void OnUpdate() => m_Subsystem.TryUpdateHands(XRHandSubsystem.UpdateType.Dynamic);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(14 /* UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType) */, L_0, 0);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::OnBeforeRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	{
		// void OnBeforeRender() => m_Subsystem.TryUpdateHands(XRHandSubsystem.UpdateType.BeforeRender);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(14 /* UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType) */, L_0, 1);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::<Start>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_U3CStartU3Eb__1_0_m009D2083697D415FE96B0F05E5F11E3747E9D1C6 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	{
		// updateDelegate = () => OnUpdate()
		SubsystemUpdater_OnUpdate_m8A13E22290DF48E9B736EC4C6BB8DAE0AA9464E3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemProvider__ctor_m404D9375A7F7A0C10412F8E63AA11453C0A6EFDD (XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2(__this, SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Pose rootPose => m_RootPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_RootPose_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness handedness => m_Handedness;
		int32_t L_0 = __this->___m_Handedness_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394_inline (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	{
		// public XRHandJointID id => m_Id;
		int32_t L_0 = __this->___m_Id_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696_inline (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	{
		// public XRHandJointTrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrunningU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mF6BE8B768C3DA33BE3281D8F143C0FB02E720366_gshared_inline (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, int32_t ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
