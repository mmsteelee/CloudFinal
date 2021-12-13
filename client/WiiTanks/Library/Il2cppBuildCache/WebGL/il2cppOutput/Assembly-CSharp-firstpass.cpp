#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>
struct Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,NativeWebSocket.WebSocket>
struct KeyCollection_t49A6199FDB433417B74D3DDE5717776AF2AAA530;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,NativeWebSocket.WebSocket>
struct ValueCollection_t5CAC2DAA82F1C242D2A4719A3DE075CB9F7E28AB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,NativeWebSocket.WebSocket>[]
struct EntryU5BU5D_t08B0F46F6370BFB2BA7C88B0AA3F3566FFCCC46D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// MainThreadUtil
struct MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_tA08EC9BAB965B59C3C68FDC5CD7C4C67D16D02A6;
// WaitForUpdate
struct WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE;
// NativeWebSocket.WebSocket
struct WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3;
// NativeWebSocket.WebSocketException
struct WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C;
// NativeWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F;
// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743;
// NativeWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141;
// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842;
// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2;
// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A;
// NativeWebSocket.WebSocketFactory/OnCloseCallback
struct OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B;
// NativeWebSocket.WebSocketFactory/OnErrorCallback
struct OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B;
// NativeWebSocket.WebSocketFactory/OnMessageCallback
struct OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC;
// NativeWebSocket.WebSocketFactory/OnOpenCallback
struct OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseCode_t6ADEA11DF30940C2C35E854B790FF2CE97C5BCA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B;
IL2CPP_EXTERN_C String_t* _stringLiteral1742337439BBC66D76773857596C8E79F12FE929;
IL2CPP_EXTERN_C String_t* _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69;
IL2CPP_EXTERN_C String_t* _stringLiteral479625953694FC0583C3D8F93F44332026972846;
IL2CPP_EXTERN_C String_t* _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A;
IL2CPP_EXTERN_C String_t* _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612;
IL2CPP_EXTERN_C String_t* _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48;
IL2CPP_EXTERN_C String_t* _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB7CB317B102BB1CEE5C5A9D8148C44B28DC4DAF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m8AE1736AACC65534ECD07D8653648694DEB59A7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA69BFA477C1E51C118C48E4649E8BB0F2614707B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_m418FFF3010626E15508E3798942CB64F6BBC9497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m730CE72BE73B5B79D73A2895645B8DC25DC06907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m6ED0C383FFACB26D23F3E519DB371DD285AAB9F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m9E84A6F6CD4B6460C3C94F32D77AB6B988F1FB62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnCloseEvent_mEBD77EF6039ED9DBAA0AB19C76EF033CA6B0E930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnErrorEvent_m2BFABE6F9F13AADDC331E2C8B29DE94D1372E997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnMessageEvent_mCDCF899B140488BCEA383FB2F4E1FB69E62CE309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnOpenEvent_mC6D40F7036251AC4AB1C9210450F31D914FF1B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Close_mF67DE0E6137D1B6AB7E237BE2C4135A903F9FC46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Connect_m7E2E576BBD0B0DB1E024C6D0BE3CEF170635BE4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_SendText_m29F8B764DFAB1435F66E3D7982996D50E1F8D169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Send_m9BD755D0923E3F71DC030F594D2365037BE6279F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_get_State_m59AC9A094AC30B55E691F7E59CC23D63E4782C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebSocketCloseCode_t6ADEA11DF30940C2C35E854B790FF2CE97C5BCA8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>
struct Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t08B0F46F6370BFB2BA7C88B0AA3F3566FFCCC46D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t49A6199FDB433417B74D3DDE5717776AF2AAA530 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5CAC2DAA82F1C242D2A4719A3DE075CB9F7E28AB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ___entries_1)); }
	inline EntryU5BU5D_t08B0F46F6370BFB2BA7C88B0AA3F3566FFCCC46D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t08B0F46F6370BFB2BA7C88B0AA3F3566FFCCC46D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t08B0F46F6370BFB2BA7C88B0AA3F3566FFCCC46D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ___keys_7)); }
	inline KeyCollection_t49A6199FDB433417B74D3DDE5717776AF2AAA530 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t49A6199FDB433417B74D3DDE5717776AF2AAA530 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t49A6199FDB433417B74D3DDE5717776AF2AAA530 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ___values_8)); }
	inline ValueCollection_t5CAC2DAA82F1C242D2A4719A3DE075CB9F7E28AB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5CAC2DAA82F1C242D2A4719A3DE075CB9F7E28AB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5CAC2DAA82F1C242D2A4719A3DE075CB9F7E28AB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_tA08EC9BAB965B59C3C68FDC5CD7C4C67D16D02A6  : public RuntimeObject
{
public:

public:
};


// NativeWebSocket.WebSocket
struct WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012  : public RuntimeObject
{
public:
	// System.Int32 NativeWebSocket.WebSocket::instanceId
	int32_t ___instanceId_0;
	// NativeWebSocket.WebSocketOpenEventHandler NativeWebSocket.WebSocket::OnOpen
	WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * ___OnOpen_1;
	// NativeWebSocket.WebSocketMessageEventHandler NativeWebSocket.WebSocket::OnMessage
	WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * ___OnMessage_2;
	// NativeWebSocket.WebSocketErrorEventHandler NativeWebSocket.WebSocket::OnError
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * ___OnError_3;
	// NativeWebSocket.WebSocketCloseEventHandler NativeWebSocket.WebSocket::OnClose
	WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * ___OnClose_4;

public:
	inline static int32_t get_offset_of_instanceId_0() { return static_cast<int32_t>(offsetof(WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012, ___instanceId_0)); }
	inline int32_t get_instanceId_0() const { return ___instanceId_0; }
	inline int32_t* get_address_of_instanceId_0() { return &___instanceId_0; }
	inline void set_instanceId_0(int32_t value)
	{
		___instanceId_0 = value;
	}

	inline static int32_t get_offset_of_OnOpen_1() { return static_cast<int32_t>(offsetof(WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012, ___OnOpen_1)); }
	inline WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * get_OnOpen_1() const { return ___OnOpen_1; }
	inline WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 ** get_address_of_OnOpen_1() { return &___OnOpen_1; }
	inline void set_OnOpen_1(WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * value)
	{
		___OnOpen_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOpen_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessage_2() { return static_cast<int32_t>(offsetof(WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012, ___OnMessage_2)); }
	inline WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * get_OnMessage_2() const { return ___OnMessage_2; }
	inline WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 ** get_address_of_OnMessage_2() { return &___OnMessage_2; }
	inline void set_OnMessage_2(WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * value)
	{
		___OnMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_3() { return static_cast<int32_t>(offsetof(WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012, ___OnError_3)); }
	inline WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * get_OnError_3() const { return ___OnError_3; }
	inline WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 ** get_address_of_OnError_3() { return &___OnError_3; }
	inline void set_OnError_3(WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * value)
	{
		___OnError_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnClose_4() { return static_cast<int32_t>(offsetof(WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012, ___OnClose_4)); }
	inline WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * get_OnClose_4() const { return ___OnClose_4; }
	inline WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 ** get_address_of_OnClose_4() { return &___OnClose_4; }
	inline void set_OnClose_4(WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * value)
	{
		___OnClose_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClose_4), (void*)value);
	}
};


// NativeWebSocket.WebSocketFactory
struct WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF  : public RuntimeObject
{
public:

public:
};

struct WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket> NativeWebSocket.WebSocketFactory::instances
	Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * ___instances_0;
	// System.Boolean NativeWebSocket.WebSocketFactory::isInitialized
	bool ___isInitialized_1;

public:
	inline static int32_t get_offset_of_instances_0() { return static_cast<int32_t>(offsetof(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields, ___instances_0)); }
	inline Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * get_instances_0() const { return ___instances_0; }
	inline Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 ** get_address_of_instances_0() { return &___instances_0; }
	inline void set_instances_0(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * value)
	{
		___instances_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instances_0), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_1() { return static_cast<int32_t>(offsetof(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields, ___isInitialized_1)); }
	inline bool get_isInitialized_1() const { return ___isInitialized_1; }
	inline bool* get_address_of_isInitialized_1() { return &___isInitialized_1; }
	inline void set_isInitialized_1(bool value)
	{
		___isInitialized_1 = value;
	}
};


// NativeWebSocket.WebSocketHelpers
struct WebSocketHelpers_tC3DBACDEF74C19C8B5B9B498B05E60C89AADE905  : public RuntimeObject
{
public:

public:
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator MainThreadUtil/<>c__DisplayClass9_0::waitForUpdate
	RuntimeObject* ___waitForUpdate_0;

public:
	inline static int32_t get_offset_of_waitForUpdate_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863, ___waitForUpdate_0)); }
	inline RuntimeObject* get_waitForUpdate_0() const { return ___waitForUpdate_0; }
	inline RuntimeObject** get_address_of_waitForUpdate_0() { return &___waitForUpdate_0; }
	inline void set_waitForUpdate_0(RuntimeObject* value)
	{
		___waitForUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForUpdate_0), (void*)value);
	}
};


// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_StaticFields
{
public:
	// NativeWebSocket.WaitForBackgroundThread/<>c NativeWebSocket.WaitForBackgroundThread/<>c::<>9
	U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 * ___U3CU3E9_0;
	// System.Action NativeWebSocket.WaitForBackgroundThread/<>c::<>9__0_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2  : public RuntimeObject
{
public:
	// System.Int32 WaitForUpdate/<CoroutineWrapper>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WaitForUpdate/<CoroutineWrapper>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Collections.IEnumerator WaitForUpdate/<CoroutineWrapper>d__4::theWorker
	RuntimeObject* ___theWorker_2;
	// WaitForUpdate/MainThreadAwaiter WaitForUpdate/<CoroutineWrapper>d__4::awaiter
	MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * ___awaiter_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_theWorker_2() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2, ___theWorker_2)); }
	inline RuntimeObject* get_theWorker_2() const { return ___theWorker_2; }
	inline RuntimeObject** get_address_of_theWorker_2() { return &___theWorker_2; }
	inline void set_theWorker_2(RuntimeObject* value)
	{
		___theWorker_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theWorker_2), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_3() { return static_cast<int32_t>(offsetof(U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2, ___awaiter_3)); }
	inline MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * get_awaiter_3() const { return ___awaiter_3; }
	inline MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A ** get_address_of_awaiter_3() { return &___awaiter_3; }
	inline void set_awaiter_3(MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * value)
	{
		___awaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_3), (void*)value);
	}
};


// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A  : public RuntimeObject
{
public:
	// System.Action WaitForUpdate/MainThreadAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_0;
	// System.Boolean WaitForUpdate/MainThreadAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_continuation_0() { return static_cast<int32_t>(offsetof(MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A, ___continuation_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_0() const { return ___continuation_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_0() { return &___continuation_0; }
	inline void set_continuation_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A, ___U3CIsCompletedU3Ek__BackingField_1)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_1() const { return ___U3CIsCompletedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_1() { return &___U3CIsCompletedU3Ek__BackingField_1; }
	inline void set_U3CIsCompletedU3Ek__BackingField_1(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// WaitForUpdate
struct WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:

public:
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_com
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com ___m_configuredTaskAwaiter_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.SynchronizationContextProperties
struct SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// NativeWebSocket.WebSocketCloseCode
struct WebSocketCloseCode_t6ADEA11DF30940C2C35E854B790FF2CE97C5BCA8 
{
public:
	// System.Int32 NativeWebSocket.WebSocketCloseCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketCloseCode_t6ADEA11DF30940C2C35E854B790FF2CE97C5BCA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeWebSocket.WebSocketState
struct WebSocketState_t1A017C8026BA55D4E7E6C5CBC7D2D70D69F354B1 
{
public:
	// System.Int32 NativeWebSocket.WebSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_t1A017C8026BA55D4E7E6C5CBC7D2D70D69F354B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// NativeWebSocket.WebSocketException
struct WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C  : public Exception_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F  : public WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C
{
public:

public:
};


// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716  : public WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C
{
public:

public:
};


// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141  : public WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C
{
public:

public:
};


// NativeWebSocket.WebSocketFactory/OnCloseCallback
struct OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketFactory/OnErrorCallback
struct OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketFactory/OnMessageCallback
struct OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC  : public MulticastDelegate_t
{
public:

public:
};


// NativeWebSocket.WebSocketFactory/OnOpenCallback
struct OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// MainThreadUtil
struct MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields
{
public:
	// MainThreadUtil MainThreadUtil::<Instance>k__BackingField
	MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * ___U3CInstanceU3Ek__BackingField_4;
	// System.Threading.SynchronizationContext MainThreadUtil::<synchronizationContext>k__BackingField
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___U3CsynchronizationContextU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsynchronizationContextU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields, ___U3CsynchronizationContextU3Ek__BackingField_5)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_U3CsynchronizationContextU3Ek__BackingField_5() const { return ___U3CsynchronizationContextU3Ek__BackingField_5; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_U3CsynchronizationContextU3Ek__BackingField_5() { return &___U3CsynchronizationContextU3Ek__BackingField_5; }
	inline void set_U3CsynchronizationContextU3Ek__BackingField_5(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___U3CsynchronizationContextU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsynchronizationContextU3Ek__BackingField_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);

// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<MainThreadUtil>()
inline MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * GameObject_AddComponent_TisMainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_m418FFF3010626E15508E3798942CB64F6BBC9497 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mC1A230D76904DD086A216D0D017DA04AE8381FE2_inline (MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * ___value0, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942 (const RuntimeMethod* method);
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m86C4D287608682A004B9478795BD55ABDAC4347D_inline (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method);
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m741BFA95BF53625A53B46DB231790932607FC3A3 (U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863 * __this, const RuntimeMethod* method);
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * MainThreadUtil_get_synchronizationContext_mB305E6A4A211D1E76EC86448725DFC9E8ED55361_inline (const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_m5752A2EEF07D444641B2CBA0BF69C43BCCC44532 (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m3EEE04725ED8D82D6471EC3070A897F2849F14E6 (RuntimeObject* ___theWorker0, MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * ___awaiter1, const RuntimeMethod* method);
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_mEAFEBB1CD3846CCF7BF05717135D197700EC3783 (RuntimeObject* ___waitForUpdate0, const RuntimeMethod* method);
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_m731954C1F56DDD99809DE2E7F892EA0A8408248C (U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_m686DA74231A6A08B8C47C0CCD3F5381A3C539497 (const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_mCA97A5C8BC01DF4854F25B2857F4F42D2309DEDF (String_t* ___url0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::Add(!0,!1)
inline void Dictionary_2_Add_mB7CB317B102BB1CEE5C5A9D8148C44B28DC4DAF4 (Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * __this, int32_t ___key0, WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 *, int32_t, WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void NativeWebSocket.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_m102DCD3C0028BEA266A41A267F5B1443EA148B8F (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_m679D7CA49E81A35FE0B11DB3B43A3F8E97F0CA59 (int32_t ___instanceId0, const RuntimeMethod* method);
// NativeWebSocket.WebSocketException NativeWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * WebSocketHelpers_GetErrorMessageFromCode_mE11239ECA67BBDE30004F3CC52EDB76D49C1B5B8 (int32_t ___errorCode0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D (const RuntimeMethod* method);
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m59AC9A094AC30B55E691F7E59CC23D63E4782C33 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Close_mF67DE0E6137D1B6AB7E237BE2C4135A903F9FC46 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, int32_t ___code0, String_t* ___reason1, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_m15D79B8B46B2A3120F67001852B1AECC36E6B8A9 (int32_t ___instanceId0, int32_t ___code1, String_t* ___reason2, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m623D8BB2D658A6260A485A90B1BCCB7DF1E7CEF2 (int32_t ___instanceId0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataPtr1, int32_t ___dataLength2, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketSendText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSendText_m653A2D1A96608CE69018156B53E2953CB11B09E2 (int32_t ___instanceId0, String_t* ___message1, const RuntimeMethod* method);
// System.Int32 NativeWebSocket.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_mD3B63AD9AA324E9FDD06027386B30B9C78800217 (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m909BF8788D4D7F787FDC8246E439F05FE23801C5 (WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_mF034E473BD03B6D0FBE20C23A205E2B4F8406D94 (WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mCB73D90D6DA9E980EAF7E6E23F2A95F30836EEF9 (WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * __this, String_t* ___errorMsg0, const RuntimeMethod* method);
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_mF97AB9421C1CEDA834E8EB125940E551F5E3AEA7 (int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m610B3497894EA2B28A7ADC22B6C70ED3E5261B0B (WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * __this, int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_mC6D40F7036251AC4AB1C9210450F31D914FF1B86 (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_mCDCF899B140488BCEA383FB2F4E1FB69E62CE309 (int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_m2BFABE6F9F13AADDC331E2C8B29DE94D1372E997 (int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_mEBD77EF6039ED9DBAA0AB19C76EF033CA6B0E930 (int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_m105D1B008C0E21E78B03CB1CCA97A342F86AB67F (OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnOpen(NativeWebSocket.WebSocketFactory/OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_mA3DCD960B3F093B9CBF047AC2224A2AA10C3686B (OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 * ___callback0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_mC004F01E4EF78020DFD85BE92462E4E7C9E773B1 (OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnMessage(NativeWebSocket.WebSocketFactory/OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_m8EEA5C35DF93B836E78933C9D62867053F9EE377 (OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC * ___callback0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_mE7C3DC081220AFFD5AAECB0157D9B3110BACBD3C (OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnError(NativeWebSocket.WebSocketFactory/OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m289A4D574B84672C5CDD058209E35C2814B5F70F (OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B * ___callback0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_m445F49FCCEB7873BC9B88BADC72DC06260CD694D (OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnClose(NativeWebSocket.WebSocketFactory/OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_m6F5576211CA923113A5BF6D654237875BE7B9C09 (OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B * ___callback0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::Remove(!0)
inline bool Dictionary_2_Remove_m8AE1736AACC65534ECD07D8653648694DEB59A7A (Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_m9543BCA1E47F1DFA7F7BE28915F3A2AA74890081 (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF (Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * __this, int32_t ___key0, WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 *, int32_t, WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void NativeWebSocket.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_mEB59715DD1B44F915F6591FDF51048969EBAA822 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_m1FE25673919B50F0171129133C7174B819A038AF (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m03AED23D0E1564F91E42B6240C60E8BC7F4EA6B2 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_mEB78680FF177E0C52B8F60D99E5A62E91AFFCEE0 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, String_t* ___errorMsg0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_m3B6082519F9E0735E22C63FE0FEB069057A97562 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m872CB20817CBB5F78609C18BC357AEAD02A6C0E3 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, String_t* ___url0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::.ctor()
inline void Dictionary_2__ctor_mA69BFA477C1E51C118C48E4649E8BB0F2614707B (Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m7492D982228514652A6F2D2250F473A94D7231C3 (WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m209C944E78281B2E9344302A734EB24F874766F8 (WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m723B7AD8E280DB741F4FD5E2CAE8F4CEC4756807 (WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m9BACB4634A72A5E05AF3E8AF618B19765D1E46A6 (WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * __this, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m38C67A8798A661B1A433CD51AFC206F5D6C80D77 (WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m4B72F0ECEF6A0FD60862A8AED8D50FBB7550530E (WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * MainThreadUtil_get_Instance_mF13771663CC152011D3F3FAA4DDFB85F670DBC8B_inline (const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7735663260F8639AC7493225C1F0A68ABAC0454C (U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 * __this, const RuntimeMethod* method);
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_mB2B34C5B7112CA5656ABFD76A18AEFDDAEAEEBF9 (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_mE30F4162F49BADF7CFFD11193175ACC77D4AF3CB_inline (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketConnect(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketClose(int32_t, int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketSendText(int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketGetState(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketAllocate(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketFree(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnOpen(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnMessage(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnError(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnClose(Il2CppMethodPointer);
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
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * MainThreadUtil_get_Instance_mF13771663CC152011D3F3FAA4DDFB85F670DBC8B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * L_0 = ((MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mC1A230D76904DD086A216D0D017DA04AE8381FE2 (MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * L_0 = ___value0;
		((MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * MainThreadUtil_get_synchronizationContext_mB305E6A4A211D1E76EC86448725DFC9E8ED55361 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ((MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var))->get_U3CsynchronizationContextU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m86C4D287608682A004B9478795BD55ABDAC4347D (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ___value0;
		((MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var))->set_U3CsynchronizationContextU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void MainThreadUtil::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Setup_mE3CF45C0FBA9D33BB7D24FC6F8E401A5A334C6F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_m418FFF3010626E15508E3798942CB64F6BBC9497_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral479625953694FC0583C3D8F93F44332026972846);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = new GameObject("MainThreadUtil")
		//     .AddComponent<MainThreadUtil>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral479625953694FC0583C3D8F93F44332026972846, /*hidden argument*/NULL);
		MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * L_1;
		L_1 = GameObject_AddComponent_TisMainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_m418FFF3010626E15508E3798942CB64F6BBC9497(L_0, /*hidden argument*/GameObject_AddComponent_TisMainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_m418FFF3010626E15508E3798942CB64F6BBC9497_RuntimeMethod_var);
		MainThreadUtil_set_Instance_mC1A230D76904DD086A216D0D017DA04AE8381FE2_inline(L_1, /*hidden argument*/NULL);
		// synchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_2;
		L_2 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		MainThreadUtil_set_synchronizationContext_m86C4D287608682A004B9478795BD55ABDAC4347D_inline(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_mEAFEBB1CD3846CCF7BF05717135D197700EC3783 (RuntimeObject* ___waitForUpdate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m9E84A6F6CD4B6460C3C94F32D77AB6B988F1FB62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863 * L_0 = (U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_m741BFA95BF53625A53B46DB231790932607FC3A3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863 * L_1 = V_0;
		RuntimeObject* L_2 = ___waitForUpdate0;
		L_1->set_waitForUpdate_0(L_2);
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3;
		L_3 = MainThreadUtil_get_synchronizationContext_mB305E6A4A211D1E76EC86448725DFC9E8ED55361_inline(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863 * L_4 = V_0;
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_5 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m9E84A6F6CD4B6460C3C94F32D77AB6B988F1FB62_RuntimeMethod_var), /*hidden argument*/NULL);
		VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Awake_m00CBC631C3935DD842B4BB431A7D3B338A5794C4 (MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.hideFlags = HideFlags.HideAndDontSave;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_0, ((int32_t)61), /*hidden argument*/NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil__ctor_mCD476776890C4632AF26C65D862DEA3D4EBF9E8D (MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter NativeWebSocket.WaitForBackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  WaitForBackgroundThread_GetAwaiter_m2AA5ADA3504CDC3F708007A2967DD1298188342F (WaitForBackgroundThread_tA08EC9BAB965B59C3C68FDC5CD7C4C67D16D02A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m6ED0C383FFACB26D23F3E519DB371DD285AAB9F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var);
		U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 * L_2 = ((U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m6ED0C383FFACB26D23F3E519DB371DD285AAB9F0_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
		((U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(G_B2_0, /*hidden argument*/NULL);
		ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_6;
		L_6 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_7;
		L_7 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_0), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForBackgroundThread__ctor_mB5E91CD78949BF4D0010AE275DC70F9278A24C0B (WaitForBackgroundThread_tA08EC9BAB965B59C3C68FDC5CD7C4C67D16D02A6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean WaitForUpdate::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForUpdate_get_keepWaiting_m7BAB00B5A06B2D32CDCC008759DAD77028E7A5C3 (WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// WaitForUpdate/MainThreadAwaiter WaitForUpdate::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * WaitForUpdate_GetAwaiter_mE94A53231654D7924CFF20FBE59A1F50AA491D83 (WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * V_0 = NULL;
	{
		// var awaiter = new MainThreadAwaiter();
		MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * L_0 = (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A *)il2cpp_codegen_object_new(MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A_il2cpp_TypeInfo_var);
		MainThreadAwaiter__ctor_m5752A2EEF07D444641B2CBA0BF69C43BCCC44532(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// MainThreadUtil.Run(CoroutineWrapper(this, awaiter));
		MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = WaitForUpdate_CoroutineWrapper_m3EEE04725ED8D82D6471EC3070A897F2849F14E6(__this, L_1, /*hidden argument*/NULL);
		MainThreadUtil_Run_mEAFEBB1CD3846CCF7BF05717135D197700EC3783(L_2, /*hidden argument*/NULL);
		// return awaiter;
		MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m3EEE04725ED8D82D6471EC3070A897F2849F14E6 (RuntimeObject* ___theWorker0, MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * ___awaiter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * L_0 = (U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 *)il2cpp_codegen_object_new(U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2_il2cpp_TypeInfo_var);
		U3CCoroutineWrapperU3Ed__4__ctor_m731954C1F56DDD99809DE2E7F892EA0A8408248C(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * L_1 = L_0;
		RuntimeObject* L_2 = ___theWorker0;
		L_1->set_theWorker_2(L_2);
		U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * L_3 = L_1;
		MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * L_4 = ___awaiter1;
		L_3->set_awaiter_3(L_4);
		return L_3;
	}
}
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_mB0E8597403591912547D7DA55C2AF73D614E2306 (WaitForUpdate_tEE358F504633F6A0F289D3805036C26DEE2715AE * __this, const RuntimeMethod* method)
{
	{
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
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
// System.Int32 NativeWebSocket.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_m679D7CA49E81A35FE0B11DB3B43A3F8E97F0CA59 (int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketConnect)(___instanceId0);

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_m15D79B8B46B2A3120F67001852B1AECC36E6B8A9 (int32_t ___instanceId0, int32_t ___code1, String_t* ___reason2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, char*);

	// Marshaling of parameter '___reason2' to native representation
	char* ____reason2_marshaled = NULL;
	____reason2_marshaled = il2cpp_codegen_marshal_string(___reason2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketClose)(___instanceId0, ___code1, ____reason2_marshaled);

	// Marshaling cleanup of parameter '___reason2' native representation
	il2cpp_codegen_marshal_free(____reason2_marshaled);
	____reason2_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m623D8BB2D658A6260A485A90B1BCCB7DF1E7CEF2 (int32_t ___instanceId0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataPtr1, int32_t ___dataLength2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___dataPtr1' to native representation
	uint8_t* ____dataPtr1_marshaled = NULL;
	if (___dataPtr1 != NULL)
	{
		____dataPtr1_marshaled = reinterpret_cast<uint8_t*>((___dataPtr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketSend)(___instanceId0, ____dataPtr1_marshaled, ___dataLength2);

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketSendText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSendText_m653A2D1A96608CE69018156B53E2953CB11B09E2 (int32_t ___instanceId0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketSendText)(___instanceId0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_mD3B63AD9AA324E9FDD06027386B30B9C78800217 (int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketGetState)(___instanceId0);

	return returnValue;
}
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mD9939050E60A6C1E6CE5EEA72AE2DC2C185D5477 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * V_0 = NULL;
	WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * V_1 = NULL;
	WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * V_2 = NULL;
	{
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_0 = __this->get_OnOpen_1();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_2 = V_1;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 *)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 ** L_5 = __this->get_address_of_OnOpen_1();
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_6 = V_2;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_7 = V_1;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 *>((WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_9 = V_0;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 *)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnOpen_m25A1F6AEBA62A173BB329FD6A34AF9282927673E (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * V_0 = NULL;
	WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * V_1 = NULL;
	WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * V_2 = NULL;
	{
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_0 = __this->get_OnOpen_1();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_2 = V_1;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 *)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 ** L_5 = __this->get_address_of_OnOpen_1();
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_6 = V_2;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_7 = V_1;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 *>((WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_9 = V_0;
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 *)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m6BE396A6ED1DB43D1920E600FDA91C02DE589C68 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * V_0 = NULL;
	WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * V_1 = NULL;
	WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * V_2 = NULL;
	{
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_0 = __this->get_OnMessage_2();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_2 = V_1;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 *)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 ** L_5 = __this->get_address_of_OnMessage_2();
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_6 = V_2;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_7 = V_1;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 *>((WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_9 = V_0;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 *)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnMessage_m6558BD2C8B0284DCCB401FA024AC25A1171C0431 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * V_0 = NULL;
	WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * V_1 = NULL;
	WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * V_2 = NULL;
	{
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_0 = __this->get_OnMessage_2();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_2 = V_1;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 *)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 ** L_5 = __this->get_address_of_OnMessage_2();
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_6 = V_2;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_7 = V_1;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 *>((WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_9 = V_0;
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 *)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_m6E023A4B59828FAF55089BBA1B0BBE36B1796BAD (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * V_0 = NULL;
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * V_1 = NULL;
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * V_2 = NULL;
	{
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_0 = __this->get_OnError_3();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_2 = V_1;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 *)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 ** L_5 = __this->get_address_of_OnError_3();
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_6 = V_2;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_7 = V_1;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 *>((WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_9 = V_0;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 *)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnError_mAE7A90097335008AA6339E52C866BE255B0C1EE0 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * V_0 = NULL;
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * V_1 = NULL;
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * V_2 = NULL;
	{
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_0 = __this->get_OnError_3();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_2 = V_1;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 *)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 ** L_5 = __this->get_address_of_OnError_3();
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_6 = V_2;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_7 = V_1;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 *>((WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_9 = V_0;
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 *)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m9920C8E00FFF1F6FA11B26E86C6A4BD5E1888CB6 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * V_0 = NULL;
	WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * V_1 = NULL;
	WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * V_2 = NULL;
	{
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_0 = __this->get_OnClose_4();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_2 = V_1;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 *)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 ** L_5 = __this->get_address_of_OnClose_4();
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_6 = V_2;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_7 = V_1;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 *>((WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_9 = V_0;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 *)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnClose_m8F1E92658F3C1CCD956A97C1C56C973A1DF31D11 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * V_0 = NULL;
	WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * V_1 = NULL;
	WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * V_2 = NULL;
	{
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_0 = __this->get_OnClose_4();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_2 = V_1;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 *)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 ** L_5 = __this->get_address_of_OnClose_4();
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_6 = V_2;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_7 = V_1;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 *>((WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_9 = V_0;
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 *)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m872CB20817CBB5F78609C18BC357AEAD02A6C0E3 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, String_t* ___url0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB7CB317B102BB1CEE5C5A9D8148C44B28DC4DAF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public WebSocket (string url, Dictionary<string, string> headers = null) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (!WebSocketFactory.isInitialized) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		bool L_0 = ((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->get_isInitialized_1();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// WebSocketFactory.Initialize ();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		WebSocketFactory_Initialize_m686DA74231A6A08B8C47C0CCD3F5381A3C539497(/*hidden argument*/NULL);
	}

IL_0012:
	{
		// int instanceId = WebSocketFactory.WebSocketAllocate (url);
		String_t* L_1 = ___url0;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = WebSocketFactory_WebSocketAllocate_mCA97A5C8BC01DF4854F25B2857F4F42D2309DEDF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// WebSocketFactory.instances.Add (instanceId, this);
		Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * L_3 = ((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_4 = V_0;
		Dictionary_2_Add_mB7CB317B102BB1CEE5C5A9D8148C44B28DC4DAF4(L_3, L_4, __this, /*hidden argument*/Dictionary_2_Add_mB7CB317B102BB1CEE5C5A9D8148C44B28DC4DAF4_RuntimeMethod_var);
		// this.instanceId = instanceId;
		int32_t L_5 = V_0;
		__this->set_instanceId_0(L_5);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Finalize_mA99F56BEE9E4F85497B440D9B55973B1DED39263 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// WebSocketFactory.HandleInstanceDestroy (this.instanceId);
		int32_t L_0 = __this->get_instanceId_0();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		WebSocketFactory_HandleInstanceDestroy_m102DCD3C0028BEA266A41A267F5B1443EA148B8F(L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Int32 NativeWebSocket.WebSocket::GetInstanceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_GetInstanceId_m573D581D302CDC7B388DC9CC4BDF7666A653913E (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method)
{
	{
		// return this.instanceId;
		int32_t L_0 = __this->get_instanceId_0();
		return L_0;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Connect_m7E2E576BBD0B0DB1E024C6D0BE3CEF170635BE4C (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketConnect (this.instanceId);
		int32_t L_0 = __this->get_instanceId_0();
		int32_t L_1;
		L_1 = WebSocket_WebSocketConnect_m679D7CA49E81A35FE0B11DB3B43A3F8E97F0CA59(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (ret < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_3 = V_0;
		WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * L_4;
		L_4 = WebSocketHelpers_GetErrorMessageFromCode_mE11239ECA67BBDE30004F3CC52EDB76D49C1B5B8(L_3, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Connect_m7E2E576BBD0B0DB1E024C6D0BE3CEF170635BE4C_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void NativeWebSocket.WebSocket::CancelConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_CancelConnection_m72E8D6DC84B00E1AF8B5988D5FC43A5982B15586 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method)
{
	{
		// if (State == WebSocketState.Open)
		int32_t L_0;
		L_0 = WebSocket_get_State_m59AC9A094AC30B55E691F7E59CC23D63E4782C33(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		// Close (WebSocketCloseCode.Abnormal);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = WebSocket_Close_mF67DE0E6137D1B6AB7E237BE2C4135A903F9FC46(__this, ((int32_t)1006), (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Close_mF67DE0E6137D1B6AB7E237BE2C4135A903F9FC46 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, int32_t ___code0, String_t* ___reason1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketClose (this.instanceId, (int) code, reason);
		int32_t L_0 = __this->get_instanceId_0();
		int32_t L_1 = ___code0;
		String_t* L_2 = ___reason1;
		int32_t L_3;
		L_3 = WebSocket_WebSocketClose_m15D79B8B46B2A3120F67001852B1AECC36E6B8A9(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (ret < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_5 = V_0;
		WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * L_6;
		L_6 = WebSocketHelpers_GetErrorMessageFromCode_mE11239ECA67BBDE30004F3CC52EDB76D49C1B5B8(L_5, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Close_mF67DE0E6137D1B6AB7E237BE2C4135A903F9FC46_RuntimeMethod_var)));
	}

IL_001a:
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Send_m9BD755D0923E3F71DC030F594D2365037BE6279F (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketSend (this.instanceId, data, data.Length);
		int32_t L_0 = __this->get_instanceId_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		int32_t L_3;
		L_3 = WebSocket_WebSocketSend_m623D8BB2D658A6260A485A90B1BCCB7DF1E7CEF2(L_0, L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (ret < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_5 = V_0;
		WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * L_6;
		L_6 = WebSocketHelpers_GetErrorMessageFromCode_mE11239ECA67BBDE30004F3CC52EDB76D49C1B5B8(L_5, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Send_m9BD755D0923E3F71DC030F594D2365037BE6279F_RuntimeMethod_var)));
	}

IL_001c:
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_SendText_m29F8B764DFAB1435F66E3D7982996D50E1F8D169 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketSendText (this.instanceId, message);
		int32_t L_0 = __this->get_instanceId_0();
		String_t* L_1 = ___message0;
		int32_t L_2;
		L_2 = WebSocket_WebSocketSendText_m653A2D1A96608CE69018156B53E2953CB11B09E2(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (ret < 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_4 = V_0;
		WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * L_5;
		L_5 = WebSocketHelpers_GetErrorMessageFromCode_mE11239ECA67BBDE30004F3CC52EDB76D49C1B5B8(L_4, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_SendText_m29F8B764DFAB1435F66E3D7982996D50E1F8D169_RuntimeMethod_var)));
	}

IL_0019:
	{
		// return Task.CompletedTask;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_6;
	}
}
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m59AC9A094AC30B55E691F7E59CC23D63E4782C33 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int state = WebSocketGetState (this.instanceId);
		int32_t L_0 = __this->get_instanceId_0();
		int32_t L_1;
		L_1 = WebSocket_WebSocketGetState_mD3B63AD9AA324E9FDD06027386B30B9C78800217(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (state < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (state, null);
		int32_t L_3 = V_0;
		WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * L_4;
		L_4 = WebSocketHelpers_GetErrorMessageFromCode_mE11239ECA67BBDE30004F3CC52EDB76D49C1B5B8(L_3, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_get_State_m59AC9A094AC30B55E691F7E59CC23D63E4782C33_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_0030:
	{
		// return WebSocketState.Connecting;
		return (int32_t)(0);
	}

IL_0032:
	{
		// return WebSocketState.Open;
		return (int32_t)(1);
	}

IL_0034:
	{
		// return WebSocketState.Closing;
		return (int32_t)(2);
	}

IL_0036:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}

IL_0038:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_mEB59715DD1B44F915F6591FDF51048969EBAA822 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method)
{
	WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * G_B2_0 = NULL;
	WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * G_B1_0 = NULL;
	{
		// this.OnOpen?.Invoke ();
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_0 = __this->get_OnOpen_1();
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebSocketOpenEventHandler_Invoke_m909BF8788D4D7F787FDC8246E439F05FE23801C5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_m1FE25673919B50F0171129133C7174B819A038AF (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * G_B2_0 = NULL;
	WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * G_B1_0 = NULL;
	{
		// this.OnMessage?.Invoke (data);
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_0 = __this->get_OnMessage_2();
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		WebSocketMessageEventHandler_Invoke_mF034E473BD03B6D0FBE20C23A205E2B4F8406D94(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_mEB78680FF177E0C52B8F60D99E5A62E91AFFCEE0 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * G_B2_0 = NULL;
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * G_B1_0 = NULL;
	{
		// this.OnError?.Invoke (errorMsg);
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_0 = __this->get_OnError_3();
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___errorMsg0;
		WebSocketErrorEventHandler_Invoke_mCB73D90D6DA9E980EAF7E6E23F2A95F30836EEF9(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_m3B6082519F9E0735E22C63FE0FEB069057A97562 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * G_B2_0 = NULL;
	WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * G_B1_0 = NULL;
	{
		// this.OnClose?.Invoke (WebSocketHelpers.ParseCloseCodeEnum (closeCode));
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_0 = __this->get_OnClose_4();
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___closeCode0;
		int32_t L_3;
		L_3 = WebSocketHelpers_ParseCloseCodeEnum_mF97AB9421C1CEDA834E8EB125940E551F5E3AEA7(L_2, /*hidden argument*/NULL);
		WebSocketCloseEventHandler_Invoke_m610B3497894EA2B28A7ADC22B6C70ED3E5261B0B(G_B2_0, L_3, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 (WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___closeCode0);

}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_m371B05DEE7C1CA86F1ECEAA05C370A84F670D457 (WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m610B3497894EA2B28A7ADC22B6C70ED3E5261B0B (WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___closeCode0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___closeCode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___closeCode0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___closeCode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___closeCode0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___closeCode0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___closeCode0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___closeCode0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketCloseEventHandler::BeginInvoke(NativeWebSocket.WebSocketCloseCode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketCloseEventHandler_BeginInvoke_mC3CA30DB7A282A6491807D9B7A5028C97E6F6681 (WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * __this, int32_t ___closeCode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_t6ADEA11DF30940C2C35E854B790FF2CE97C5BCA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebSocketCloseCode_t6ADEA11DF30940C2C35E854B790FF2CE97C5BCA8_il2cpp_TypeInfo_var, &___closeCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_EndInvoke_m22A5E3FF0685967E4758A6373D90EF293B2A7D1E (WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 (WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___errorMsg0' to native representation
	char* ____errorMsg0_marshaled = NULL;
	____errorMsg0_marshaled = il2cpp_codegen_marshal_string(___errorMsg0);

	// Native function invocation
	il2cppPInvokeFunc(____errorMsg0_marshaled);

	// Marshaling cleanup of parameter '___errorMsg0' native representation
	il2cpp_codegen_marshal_free(____errorMsg0_marshaled);
	____errorMsg0_marshaled = NULL;

}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_mE4260E4AF3F33DC56BF0C37052979EBE1BF60D66 (WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mCB73D90D6DA9E980EAF7E6E23F2A95F30836EEF9 (WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorMsg0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___errorMsg0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___errorMsg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___errorMsg0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___errorMsg0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___errorMsg0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___errorMsg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorMsg0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorMsg0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorMsg0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketErrorEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketErrorEventHandler_BeginInvoke_m61640265F2B83E70FEE42D75D3CA96444F6941FE (WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * __this, String_t* ___errorMsg0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorMsg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_EndInvoke_m09D3C91F1343444B6C112867D0BBD284D7633B61 (WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m9BACB4634A72A5E05AF3E8AF618B19765D1E46A6 (WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException() { }
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		// public WebSocketException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m38C67A8798A661B1A433CD51AFC206F5D6C80D77 (WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m4B72F0ECEF6A0FD60862A8AED8D50FBB7550530E (WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketException(string message, Exception inner) : base(message, inner) { }
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnOpenEvent_mC6D40F7036251AC4AB1C9210450F31D914FF1B86(int32_t ___instanceId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnOpenEvent_mC6D40F7036251AC4AB1C9210450F31D914FF1B86(___instanceId0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnMessageEvent_mCDCF899B140488BCEA383FB2F4E1FB69E62CE309(int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnMessageEvent_mCDCF899B140488BCEA383FB2F4E1FB69E62CE309(___instanceId0, ___msgPtr1, ___msgSize2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnErrorEvent_m2BFABE6F9F13AADDC331E2C8B29DE94D1372E997(int32_t ___instanceId0, intptr_t ___errorPtr1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnErrorEvent_m2BFABE6F9F13AADDC331E2C8B29DE94D1372E997(___instanceId0, ___errorPtr1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnCloseEvent_mEBD77EF6039ED9DBAA0AB19C76EF033CA6B0E930(int32_t ___instanceId0, int32_t ___closeCode1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnCloseEvent_mEBD77EF6039ED9DBAA0AB19C76EF033CA6B0E930(___instanceId0, ___closeCode1, NULL);

}
// System.Int32 NativeWebSocket.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_mCA97A5C8BC01DF4854F25B2857F4F42D2309DEDF (String_t* ___url0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketAllocate)(____url0_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	return returnValue;
}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_m9543BCA1E47F1DFA7F7BE28915F3A2AA74890081 (int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketFree)(___instanceId0);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnOpen(NativeWebSocket.WebSocketFactory/OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_mA3DCD960B3F093B9CBF047AC2224A2AA10C3686B (OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnOpen)(____callback0_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnMessage(NativeWebSocket.WebSocketFactory/OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_m8EEA5C35DF93B836E78933C9D62867053F9EE377 (OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnMessage)(____callback0_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnError(NativeWebSocket.WebSocketFactory/OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m289A4D574B84672C5CDD058209E35C2814B5F70F (OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnError)(____callback0_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnClose(NativeWebSocket.WebSocketFactory/OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_m6F5576211CA923113A5BF6D654237875BE7B9C09 (OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnClose)(____callback0_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_m686DA74231A6A08B8C47C0CCD3F5381A3C539497 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnCloseEvent_mEBD77EF6039ED9DBAA0AB19C76EF033CA6B0E930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnErrorEvent_m2BFABE6F9F13AADDC331E2C8B29DE94D1372E997_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnMessageEvent_mCDCF899B140488BCEA383FB2F4E1FB69E62CE309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnOpenEvent_mC6D40F7036251AC4AB1C9210450F31D914FF1B86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocketSetOnOpen (DelegateOnOpenEvent);
		OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 * L_0 = (OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 *)il2cpp_codegen_object_new(OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68_il2cpp_TypeInfo_var);
		OnOpenCallback__ctor_m105D1B008C0E21E78B03CB1CCA97A342F86AB67F(L_0, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnOpenEvent_mC6D40F7036251AC4AB1C9210450F31D914FF1B86_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		WebSocketFactory_WebSocketSetOnOpen_mA3DCD960B3F093B9CBF047AC2224A2AA10C3686B(L_0, /*hidden argument*/NULL);
		// WebSocketSetOnMessage (DelegateOnMessageEvent);
		OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC * L_1 = (OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC *)il2cpp_codegen_object_new(OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC_il2cpp_TypeInfo_var);
		OnMessageCallback__ctor_mC004F01E4EF78020DFD85BE92462E4E7C9E773B1(L_1, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnMessageEvent_mCDCF899B140488BCEA383FB2F4E1FB69E62CE309_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketFactory_WebSocketSetOnMessage_m8EEA5C35DF93B836E78933C9D62867053F9EE377(L_1, /*hidden argument*/NULL);
		// WebSocketSetOnError (DelegateOnErrorEvent);
		OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B * L_2 = (OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B *)il2cpp_codegen_object_new(OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B_il2cpp_TypeInfo_var);
		OnErrorCallback__ctor_mE7C3DC081220AFFD5AAECB0157D9B3110BACBD3C(L_2, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnErrorEvent_m2BFABE6F9F13AADDC331E2C8B29DE94D1372E997_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketFactory_WebSocketSetOnError_m289A4D574B84672C5CDD058209E35C2814B5F70F(L_2, /*hidden argument*/NULL);
		// WebSocketSetOnClose (DelegateOnCloseEvent);
		OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B * L_3 = (OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B *)il2cpp_codegen_object_new(OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B_il2cpp_TypeInfo_var);
		OnCloseCallback__ctor_m445F49FCCEB7873BC9B88BADC72DC06260CD694D(L_3, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnCloseEvent_mEBD77EF6039ED9DBAA0AB19C76EF033CA6B0E930_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketFactory_WebSocketSetOnClose_m6F5576211CA923113A5BF6D654237875BE7B9C09(L_3, /*hidden argument*/NULL);
		// isInitialized = true;
		((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->set_isInitialized_1((bool)1);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_m102DCD3C0028BEA266A41A267F5B1443EA148B8F (int32_t ___instanceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m8AE1736AACC65534ECD07D8653648694DEB59A7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Remove (instanceId);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * L_0 = ((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_Remove_m8AE1736AACC65534ECD07D8653648694DEB59A7A(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m8AE1736AACC65534ECD07D8653648694DEB59A7A_RuntimeMethod_var);
		// WebSocketFree (instanceId);
		int32_t L_3 = ___instanceId0;
		WebSocketFactory_WebSocketFree_m9543BCA1E47F1DFA7F7BE28915F3A2AA74890081(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_mC6D40F7036251AC4AB1C9210450F31D914FF1B86 (int32_t ___instanceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * V_0 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * L_0 = ((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF(L_0, L_1, (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// instanceRef.DelegateOnOpenEvent ();
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_3 = V_0;
		WebSocket_DelegateOnOpenEvent_mEB59715DD1B44F915F6591FDF51048969EBAA822(L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_mCDCF899B140488BCEA383FB2F4E1FB69E62CE309 (int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * L_0 = ((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF(L_0, L_1, (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// byte[] msg = new byte[msgSize];
		int32_t L_3 = ___msgSize2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// Marshal.Copy (msgPtr, msg, 0, msgSize);
		intptr_t L_5 = ___msgPtr1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		int32_t L_7 = ___msgSize2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_5, L_6, 0, L_7, /*hidden argument*/NULL);
		// instanceRef.DelegateOnMessageEvent (msg);
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		WebSocket_DelegateOnMessageEvent_m1FE25673919B50F0171129133C7174B819A038AF(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_m2BFABE6F9F13AADDC331E2C8B29DE94D1372E997 (int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * L_0 = ((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF(L_0, L_1, (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// string errorMsg = Marshal.PtrToStringAuto (errorPtr);
		intptr_t L_3 = ___errorPtr1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Marshal_PtrToStringAuto_m03AED23D0E1564F91E42B6240C60E8BC7F4EA6B2((intptr_t)L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// instanceRef.DelegateOnErrorEvent (errorMsg);
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_5 = V_0;
		String_t* L_6 = V_1;
		WebSocket_DelegateOnErrorEvent_mEB78680FF177E0C52B8F60D99E5A62E91AFFCEE0(L_5, L_6, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_mEBD77EF6039ED9DBAA0AB19C76EF033CA6B0E930 (int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * V_0 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * L_0 = ((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF(L_0, L_1, (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5950948234557A1656393784CBB4601829311FCF_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// instanceRef.DelegateOnCloseEvent (closeCode);
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_3 = V_0;
		int32_t L_4 = ___closeCode1;
		WebSocket_DelegateOnCloseEvent_m3B6082519F9E0735E22C63FE0FEB069057A97562(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// NativeWebSocket.WebSocket NativeWebSocket.WebSocketFactory::CreateInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * WebSocketFactory_CreateInstance_mF7B516F8729DCA27C8129B5C696FEF4B730ABED4 (String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WebSocket(url);
		String_t* L_0 = ___url0;
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_1 = (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 *)il2cpp_codegen_object_new(WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012_il2cpp_TypeInfo_var);
		WebSocket__ctor_m872CB20817CBB5F78609C18BC357AEAD02A6C0E3(L_1, L_0, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory__cctor_m578AA5B508FAE8E9595E7EB119242B1977237CF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA69BFA477C1E51C118C48E4649E8BB0F2614707B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<Int32, WebSocket> instances = new Dictionary<Int32, WebSocket> ();
		Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 * L_0 = (Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8 *)il2cpp_codegen_object_new(Dictionary_2_tCCA57D07461FC3C3CDE21DA471569E1A55E0DFE8_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA69BFA477C1E51C118C48E4649E8BB0F2614707B(L_0, /*hidden argument*/Dictionary_2__ctor_mA69BFA477C1E51C118C48E4649E8BB0F2614707B_RuntimeMethod_var);
		((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->set_instances_0(L_0);
		// public static bool isInitialized = false;
		((WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tC98DCCA9AA9826EAEA7FF8E71D137F3317B02AFF_il2cpp_TypeInfo_var))->set_isInitialized_1((bool)0);
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
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_mF97AB9421C1CEDA834E8EB125940E551F5E3AEA7 (int32_t ___closeCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_t6ADEA11DF30940C2C35E854B790FF2CE97C5BCA8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebSocketCloseCode.IsDefined(typeof(WebSocketCloseCode), closeCode))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (WebSocketCloseCode_t6ADEA11DF30940C2C35E854B790FF2CE97C5BCA8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___closeCode0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (WebSocketCloseCode)closeCode;
		int32_t L_6 = ___closeCode0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return WebSocketCloseCode.Undefined;
		return (int32_t)(((int32_t)1004));
	}
}
// NativeWebSocket.WebSocketException NativeWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_tB9A100C004C4DC275F1BD23805728FAA5A3B555C * WebSocketHelpers_GetErrorMessageFromCode_mE11239ECA67BBDE30004F3CC52EDB76D49C1B5B8 (int32_t ___errorCode0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1742337439BBC66D76773857596C8E79F12FE929);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)-7))))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_003f;
			}
			case 5:
			{
				goto IL_0033;
			}
			case 6:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_0027:
	{
		// return new WebSocketUnexpectedException("WebSocket instance not found.", inner);
		Exception_t * L_1 = ___inner1;
		WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141 * L_2 = (WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141 *)il2cpp_codegen_object_new(WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141_il2cpp_TypeInfo_var);
		WebSocketUnexpectedException__ctor_m7492D982228514652A6F2D2250F473A94D7231C3(L_2, _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0033:
	{
		// return new WebSocketInvalidStateException("WebSocket is already connected or in connecting state.", inner);
		Exception_t * L_3 = ___inner1;
		WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 * L_4 = (WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m209C944E78281B2E9344302A734EB24F874766F8(L_4, _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_003f:
	{
		// return new WebSocketInvalidStateException("WebSocket is not connected.", inner);
		Exception_t * L_5 = ___inner1;
		WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 * L_6 = (WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m209C944E78281B2E9344302A734EB24F874766F8(L_6, _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_004b:
	{
		// return new WebSocketInvalidStateException("WebSocket is already closing.", inner);
		Exception_t * L_7 = ___inner1;
		WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 * L_8 = (WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m209C944E78281B2E9344302A734EB24F874766F8(L_8, _stringLiteral1742337439BBC66D76773857596C8E79F12FE929, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0057:
	{
		// return new WebSocketInvalidStateException("WebSocket is already closed.", inner);
		Exception_t * L_9 = ___inner1;
		WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 * L_10 = (WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m209C944E78281B2E9344302A734EB24F874766F8(L_10, _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0063:
	{
		// return new WebSocketInvalidStateException("WebSocket is not in open state.", inner);
		Exception_t * L_11 = ___inner1;
		WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 * L_12 = (WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m209C944E78281B2E9344302A734EB24F874766F8(L_12, _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_006f:
	{
		// return new WebSocketInvalidArgumentException("Cannot close WebSocket. An invalid code was specified or reason is too long.", inner);
		Exception_t * L_13 = ___inner1;
		WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F * L_14 = (WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F *)il2cpp_codegen_object_new(WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F_il2cpp_TypeInfo_var);
		WebSocketInvalidArgumentException__ctor_m723B7AD8E280DB741F4FD5E2CAE8F4CEC4756807(L_14, _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_007b:
	{
		// return new WebSocketUnexpectedException("Unknown error.", inner);
		Exception_t * L_15 = ___inner1;
		WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141 * L_16 = (WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141 *)il2cpp_codegen_object_new(WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141_il2cpp_TypeInfo_var);
		WebSocketUnexpectedException__ctor_m7492D982228514652A6F2D2250F473A94D7231C3(L_16, _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D, L_15, /*hidden argument*/NULL);
		return L_16;
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
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_mF425CE319CB63DA2D0769261719688434F660094 (WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F * __this, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidArgumentException() { }
		WebSocketException__ctor_m9BACB4634A72A5E05AF3E8AF618B19765D1E46A6(__this, /*hidden argument*/NULL);
		// public WebSocketInvalidArgumentException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m920027D103D269029F37FC4D653363587CFCCD08 (WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m38C67A8798A661B1A433CD51AFC206F5D6C80D77(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m723B7AD8E280DB741F4FD5E2CAE8F4CEC4756807 (WebSocketInvalidArgumentException_t18D3249E377CCA8CCA866527EAE29889D4E3873F * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		WebSocketException__ctor_m4B72F0ECEF6A0FD60862A8AED8D50FBB7550530E(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
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
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mF80029FA47D7EB2F98FC5CAFAFA9548CB347D1F6 (WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 * __this, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidStateException() { }
		WebSocketException__ctor_m9BACB4634A72A5E05AF3E8AF618B19765D1E46A6(__this, /*hidden argument*/NULL);
		// public WebSocketInvalidStateException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m02DC54069A958EBF6B1FC1B492496D61C429B121 (WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidStateException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m38C67A8798A661B1A433CD51AFC206F5D6C80D77(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketInvalidStateException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m209C944E78281B2E9344302A734EB24F874766F8 (WebSocketInvalidStateException_t4DC258876EFD6D8B848EA28BA2FEF23544F1C716 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		WebSocketException__ctor_m4B72F0ECEF6A0FD60862A8AED8D50FBB7550530E(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 (WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_mD0F3B091413932ED22FC108C658F953EA665A8A9 (WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_mF034E473BD03B6D0FBE20C23A205E2B4F8406D94 (WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketMessageEventHandler::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketMessageEventHandler_BeginInvoke_mFA93766E6E0553B8609E82D20022939AC090E4A6 (WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_EndInvoke_m7A190B950545968A128F5711661739FC2F90AB8D (WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 (WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m325ED7AC2AA203CE001F34771CF44E2967789233 (WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m909BF8788D4D7F787FDC8246E439F05FE23801C5 (WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketOpenEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketOpenEventHandler_BeginInvoke_m9B69B92E91A13469E8B8DF4135FC8FA2D2B67EF0 (WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_EndInvoke_m637FF3C7A0AFBB0CF4627A2067B08A6CEEE0D852 (WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m9AF11354325F32B64FCCAC33C1CB97BA1B0F69D0 (WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141 * __this, const RuntimeMethod* method)
{
	{
		// public WebSocketUnexpectedException() { }
		WebSocketException__ctor_m9BACB4634A72A5E05AF3E8AF618B19765D1E46A6(__this, /*hidden argument*/NULL);
		// public WebSocketUnexpectedException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mA42D6DA6DEF24BE01EDBFB6C52D4035075579B47 (WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public WebSocketUnexpectedException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m38C67A8798A661B1A433CD51AFC206F5D6C80D77(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketUnexpectedException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m7492D982228514652A6F2D2250F473A94D7231C3 (WebSocketUnexpectedException_tBDCDBB4FC3AFAC1EB3B4512147D1562C47C11141 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		WebSocketException__ctor_m4B72F0ECEF6A0FD60862A8AED8D50FBB7550530E(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) { }
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
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m741BFA95BF53625A53B46DB231790932607FC3A3 (U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainThreadUtil/<>c__DisplayClass9_0::<Run>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m9E84A6F6CD4B6460C3C94F32D77AB6B988F1FB62 (U3CU3Ec__DisplayClass9_0_t62EF724D772F04CEBD3CFF3F0486C5966D3DC863 * __this, RuntimeObject * ____0, const RuntimeMethod* method)
{
	{
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * L_0;
		L_0 = MainThreadUtil_get_Instance_mF13771663CC152011D3F3FAA4DDFB85F670DBC8B_inline(/*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_waitForUpdate_0();
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB05E27656B9EB83ED2F63574B2A20C1B957B7C57 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 * L_0 = (U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 *)il2cpp_codegen_object_new(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7735663260F8639AC7493225C1F0A68ABAC0454C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7735663260F8639AC7493225C1F0A68ABAC0454C (U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::<GetAwaiter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CGetAwaiterU3Eb__0_0_m6ED0C383FFACB26D23F3E519DB371DD285AAB9F0 (U3CU3Ec_tF551083CB057E872E3485B67010CA24964994842 * __this, const RuntimeMethod* method)
{
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
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
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_m731954C1F56DDD99809DE2E7F892EA0A8408248C (U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_IDisposable_Dispose_m395A6955E70F094D1FF110D2545C747AFB521618 (U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WaitForUpdate/<CoroutineWrapper>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutineWrapperU3Ed__4_MoveNext_m5F94E3027533F7420640F11F59226AF813EAC866 (U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return theWorker;
		RuntimeObject* L_3 = __this->get_theWorker_2();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// awaiter.Complete();
		MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * L_4 = __this->get_awaiter_3();
		MainThreadAwaiter_Complete_mB2B34C5B7112CA5656ABFD76A18AEFDDAEAEEBF9(L_4, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineWrapperU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6E8C9BEAA66F17B8FE88F5B37BF7DA39C6F9DAA0 (U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m730CE72BE73B5B79D73A2895645B8DC25DC06907 (U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m730CE72BE73B5B79D73A2895645B8DC25DC06907_RuntimeMethod_var)));
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_get_Current_m555F358EF2AEA0DE480E7B13E46E89828FD01632 (U3CCoroutineWrapperU3Ed__4_tBC7B9AB57BC61501A94A985E5988B73CC2C041A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Boolean WaitForUpdate/MainThreadAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_mB9672D917A3EAA038BC5988C067B538757CB7C77 (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_mE30F4162F49BADF7CFFD11193175ACC77D4AF3CB (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsCompletedU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_GetResult_m1264B53D9A2FCC570E38641B3F4FF33DEDF89D7E (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, const RuntimeMethod* method)
{
	{
		// public void GetResult() { }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_mB2B34C5B7112CA5656ABFD76A18AEFDDAEAEEBF9 (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// IsCompleted = true;
		MainThreadAwaiter_set_IsCompleted_mE30F4162F49BADF7CFFD11193175ACC77D4AF3CB_inline(__this, (bool)1, /*hidden argument*/NULL);
		// continuation?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_continuation_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m11899706DF20D92E1B110E91607B654114ED986E (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		// this.continuation = continuation;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___continuation0;
		__this->set_continuation_0(L_0);
		// }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_m5752A2EEF07D444641B2CBA0BF69C43BCCC44532 (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B (OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B * __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___closeCode1);

}
// System.Void NativeWebSocket.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_m445F49FCCEB7873BC9B88BADC72DC06260CD694D (OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketFactory/OnCloseCallback::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_Invoke_m7802CF389E8B38D2767C9545EBC2DCA78A9EED8F (OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B * __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, ___closeCode1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___closeCode1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___closeCode1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___closeCode1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0, ___closeCode1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0, ___closeCode1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___closeCode1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory/OnCloseCallback::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCloseCallback_BeginInvoke_m8A858BCFBA030976D1324A4D15C72F8F58A1F46D (OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B * __this, int32_t ___instanceId0, int32_t ___closeCode1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___closeCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void NativeWebSocket.WebSocketFactory/OnCloseCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_EndInvoke_mDF094DB7691CE291996A048CEDE1B3F6C798FC2C (OnCloseCallback_tCEF538AF48A3C9CB14737D7D5AAB5C6C0F6C7B9B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B (OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B * __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___errorPtr1);

}
// System.Void NativeWebSocket.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_mE7C3DC081220AFFD5AAECB0157D9B3110BACBD3C (OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketFactory/OnErrorCallback::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_Invoke_m4054F2BFF364E9D371E127CBC13394F0A1197667 (OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B * __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, ___errorPtr1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___errorPtr1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___errorPtr1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___errorPtr1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0, ___errorPtr1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0, ___errorPtr1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___errorPtr1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory/OnErrorCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnErrorCallback_BeginInvoke_m30ED5CA97A575C1AD2623FBA00E2C1280EF9BB42 (OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B * __this, int32_t ___instanceId0, intptr_t ___errorPtr1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___errorPtr1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void NativeWebSocket.WebSocketFactory/OnErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_EndInvoke_mC7D0F2556886CC618C2DED338869385E10A0E33D (OnErrorCallback_t9B87BD7BB3FA3630970949CEEB71EDE56FC27F3B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC (OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC * __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___msgPtr1, ___msgSize2);

}
// System.Void NativeWebSocket.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_mC004F01E4EF78020DFD85BE92462E4E7C9E773B1 (OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketFactory/OnMessageCallback::Invoke(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_Invoke_m1C235537CA539302C6AD6EFDC0255185797F48D0 (OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC * __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, ___msgPtr1, ___msgSize2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___msgPtr1, ___msgSize2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
					else
						GenericVirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
					else
						VirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___msgPtr1, ___msgSize2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory/OnMessageCallback::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMessageCallback_BeginInvoke_m214FD77299FF0573A62AF8C14F6D5AD6260744FF (OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC * __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msgPtr1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___msgSize2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void NativeWebSocket.WebSocketFactory/OnMessageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_EndInvoke_m70CE830D4DE64449862993F4E110EAFAE00229AA (OnMessageCallback_t48F03AAD9F0BE10E33F5D8423E20B5C3B54A3CBC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 (OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 * __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0);

}
// System.Void NativeWebSocket.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_m105D1B008C0E21E78B03CB1CCA97A342F86AB67F (OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeWebSocket.WebSocketFactory/OnOpenCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_Invoke_mE7613918CD26192AE830F7D6E78681BEAADE47A3 (OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 * __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___instanceId0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___instanceId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory/OnOpenCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOpenCallback_BeginInvoke_mDB5B4CEA91FF854CA887E49CE8464C19C129E435 (OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 * __this, int32_t ___instanceId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeWebSocket.WebSocketFactory/OnOpenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_EndInvoke_mCC293F0F67329DB5C76F035FB6852DCDE8E4C6BB (OnOpenCallback_tE035553A3CF3F934A9797C2BC72D7CAD28B4CB68 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mC1A230D76904DD086A216D0D017DA04AE8381FE2_inline (MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * L_0 = ___value0;
		((MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_m86C4D287608682A004B9478795BD55ABDAC4347D_inline (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ___value0;
		((MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var))->set_U3CsynchronizationContextU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * MainThreadUtil_get_synchronizationContext_mB305E6A4A211D1E76EC86448725DFC9E8ED55361_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0 = ((MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var))->get_U3CsynchronizationContextU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * MainThreadUtil_get_Instance_mF13771663CC152011D3F3FAA4DDFB85F670DBC8B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C * L_0 = ((MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_t22DD1B51EC54E1AF266BA6E2AA8EE429C382F24C_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_mE30F4162F49BADF7CFFD11193175ACC77D4AF3CB_inline (MainThreadAwaiter_t70304751698982F76525BC8FB7D4BCE76476280A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsCompletedU3Ek__BackingField_1(L_0);
		return;
	}
}
