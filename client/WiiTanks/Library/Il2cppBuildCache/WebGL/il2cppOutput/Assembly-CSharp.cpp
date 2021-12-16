#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<PlayerPositionMessage>
struct Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// PlayerPositionMessage[]
struct PlayerPositionMessageU5BU5D_t7C561429CF83D900D57974AFCD9D983BDBAEFA16;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724;
// BulletMessage
struct BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// System.Exception
struct Exception_t;
// FindNewMatch
struct FindNewMatch_tC9BA84B269FB3F95303C8D424EBD623C03DAE196;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// GameMessage
struct GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Loading
struct Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuButton
struct MenuButton_t9F2253D1B9D9400F6AC1F4878893041C8A932FD7;
// MenuPlayerController
struct MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43;
// MenuShooting
struct MenuShooting_t46EC8571ECC4DF9D165DE5D3D3AE0DF4E5912365;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// PlayerPositionMessage
struct PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B;
// PositionManager
struct PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Shooting
struct Shooting_tC245E9F3DD4640EC16DB7F8ABE94957B8FF477C5;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// StartText
struct StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC;
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
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Track
struct Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityMainThreadHelper
struct UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NativeWebSocket.WebSocket
struct WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743;
// WebSocketService
struct WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// WebSocketService/<>c
struct U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral25D74BC981E6316A5E3CAEEA0BAF3C438F5C94DA;
IL2CPP_EXTERN_C String_t* _stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9;
IL2CPP_EXTERN_C String_t* _stringLiteral2FA46CD57C19B93C4A91B06F45533BF77D8B5018;
IL2CPP_EXTERN_C String_t* _stringLiteral3719A12CE3D4CB872A68B58FA16D30463FA55458;
IL2CPP_EXTERN_C String_t* _stringLiteral37E4D9717D4F65640D4D604FDCADCA3A42C8047B;
IL2CPP_EXTERN_C String_t* _stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B;
IL2CPP_EXTERN_C String_t* _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38;
IL2CPP_EXTERN_C String_t* _stringLiteral60A09CDCF43F709AAED3C395930DB9F2E4AE559C;
IL2CPP_EXTERN_C String_t* _stringLiteral66159C9E50E876C7975694528FFF15BD6AB054D0;
IL2CPP_EXTERN_C String_t* _stringLiteral7BFA33A11F0B12AF1B7FA1D9BA996EAE1EF77B49;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726;
IL2CPP_EXTERN_C String_t* _stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC;
IL2CPP_EXTERN_C String_t* _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE8F78A2209F845310E2ADD7CA75E30B88D050D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D;
IL2CPP_EXTERN_C String_t* _stringLiteral8EA8B20EDD69893CF1CEBDDBAF0C6049C9F2D64E;
IL2CPP_EXTERN_C String_t* _stringLiteral9687FA828BB566201E8DB82DA670BD0F497C6AF7;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F994A61C5B0E83FDA3716A4260541F80048DA2;
IL2CPP_EXTERN_C String_t* _stringLiteralA72FBABDDB1D1FF549FA5036D51CB34ACAE2A541;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542;
IL2CPP_EXTERN_C String_t* _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC;
IL2CPP_EXTERN_C String_t* _stringLiteralD5CE345142BA508093F573A71F797B6A49373D56;
IL2CPP_EXTERN_C String_t* _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331;
IL2CPP_EXTERN_C String_t* _stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99;
IL2CPP_EXTERN_C String_t* _stringLiteralF233FEA1AB02A75497B7EBE5CBC2A52091A24B56;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m26DB4FFCCAB3CCAA08D8702343EBEE78DD76D9EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_m6D5076B05B8ACA0BF338FF6160D782A52865DE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_mF009C045178E7F9D890EE8AF498262795325400A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m222573B9171DC19CC9ABBA84B74DBB64269E8B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m558274562DE1B32E8F3F142CFAAD80B6525090A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_mA7E6DE25D54AE2A6FEDC05852F27600A585E98C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_m619C104D9B49B0106971200A2D9DAD98FE26AA05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m59D79F975B96A6C07C7D8D561ADF4CBDC1EBE262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC_m9F29DB2D1A3F74AA0C842702E56D722630379E22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_m63389AE35ACCA57315F8D5986E26AB48D2B943E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisBulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F_m2E4ACA5CFFEFCDA0FEF19742B52F201ED704812E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_mA1A470F019B0F63BA2ABD85CBAF76257520F1F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_m2C9C410026AEC95EA83632D3F2B0A756FF4D65AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m6370790D95F13816C7B24E4F0DD0BF65C63DB8AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mDBFA7832063BE5AB30300E1823C40282F95D0650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m71B3C746A5960FD4F6FDD82FA35BA71D3497E8AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m811AEB6D85B295D5930CE1E8F32F4E3B2DF77DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetupWebsocketCallbacksU3Eb__22_3_m52A098EAF71FA69C918C05C07667B0EED5142A46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_0_m743E6EA58DD7F55399622A32020E216930376200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_1_mC8A56517D37C0EF740917C7F726B0115C687C71C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_2_m356772A47DDCC682E7AD6E6DA99877410FA08B8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_4_mAAF59A70C716BCD47CF0D8855C9E32E376AEEFB4_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


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


// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____array_0)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__array_0() const { return ____array_0; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<PlayerPositionMessage>
struct Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	PlayerPositionMessageU5BU5D_t7C561429CF83D900D57974AFCD9D983BDBAEFA16* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0, ____array_0)); }
	inline PlayerPositionMessageU5BU5D_t7C561429CF83D900D57974AFCD9D983BDBAEFA16* get__array_0() const { return ____array_0; }
	inline PlayerPositionMessageU5BU5D_t7C561429CF83D900D57974AFCD9D983BDBAEFA16** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(PlayerPositionMessageU5BU5D_t7C561429CF83D900D57974AFCD9D983BDBAEFA16* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// GameMessage
struct GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD  : public RuntimeObject
{
public:
	// System.String GameMessage::uuid
	String_t* ___uuid_0;
	// System.String GameMessage::opcode
	String_t* ___opcode_1;
	// System.String GameMessage::message
	String_t* ___message_2;
	// System.String GameMessage::gameStatus
	String_t* ___gameStatus_3;
	// System.String GameMessage::action
	String_t* ___action_4;
	// System.Double GameMessage::timestamp
	double ___timestamp_5;

public:
	inline static int32_t get_offset_of_uuid_0() { return static_cast<int32_t>(offsetof(GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD, ___uuid_0)); }
	inline String_t* get_uuid_0() const { return ___uuid_0; }
	inline String_t** get_address_of_uuid_0() { return &___uuid_0; }
	inline void set_uuid_0(String_t* value)
	{
		___uuid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uuid_0), (void*)value);
	}

	inline static int32_t get_offset_of_opcode_1() { return static_cast<int32_t>(offsetof(GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD, ___opcode_1)); }
	inline String_t* get_opcode_1() const { return ___opcode_1; }
	inline String_t** get_address_of_opcode_1() { return &___opcode_1; }
	inline void set_opcode_1(String_t* value)
	{
		___opcode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___opcode_1), (void*)value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}

	inline static int32_t get_offset_of_gameStatus_3() { return static_cast<int32_t>(offsetof(GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD, ___gameStatus_3)); }
	inline String_t* get_gameStatus_3() const { return ___gameStatus_3; }
	inline String_t** get_address_of_gameStatus_3() { return &___gameStatus_3; }
	inline void set_gameStatus_3(String_t* value)
	{
		___gameStatus_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameStatus_3), (void*)value);
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD, ___action_4)); }
	inline String_t* get_action_4() const { return ___action_4; }
	inline String_t** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(String_t* value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}

	inline static int32_t get_offset_of_timestamp_5() { return static_cast<int32_t>(offsetof(GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD, ___timestamp_5)); }
	inline double get_timestamp_5() const { return ___timestamp_5; }
	inline double* get_address_of_timestamp_5() { return &___timestamp_5; }
	inline void set_timestamp_5(double value)
	{
		___timestamp_5 = value;
	}
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


// WebSocketService/<>c
struct U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_StaticFields
{
public:
	// WebSocketService/<>c WebSocketService/<>c::<>9
	U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 * ___U3CU3E9_0;
	// NativeWebSocket.WebSocketErrorEventHandler WebSocketService/<>c::<>9__22_3
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * ___U3CU3E9__22_3_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_3_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_StaticFields, ___U3CU3E9__22_3_1)); }
	inline WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * get_U3CU3E9__22_3_1() const { return ___U3CU3E9__22_3_1; }
	inline WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 ** get_address_of_U3CU3E9__22_3_1() { return &___U3CU3E9__22_3_1; }
	inline void set_U3CU3E9__22_3_1(WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * value)
	{
		___U3CU3E9__22_3_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_3_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// SerializableQuaternion
struct SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 
{
public:
	// System.Single SerializableQuaternion::x
	float ___x_0;
	// System.Single SerializableQuaternion::y
	float ___y_1;
	// System.Single SerializableQuaternion::z
	float ___z_2;
	// System.Single SerializableQuaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// SerializableVector3
struct SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 
{
public:
	// System.String SerializableVector3::x
	String_t* ___x_0;
	// System.String SerializableVector3::y
	String_t* ___y_1;
	// System.String SerializableVector3::z
	String_t* ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4, ___x_0)); }
	inline String_t* get_x_0() const { return ___x_0; }
	inline String_t** get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(String_t* value)
	{
		___x_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_0), (void*)value);
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4, ___y_1)); }
	inline String_t* get_y_1() const { return ___y_1; }
	inline String_t** get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(String_t* value)
	{
		___y_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___y_1), (void*)value);
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4, ___z_2)); }
	inline String_t* get_z_2() const { return ___z_2; }
	inline String_t** get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(String_t* value)
	{
		___z_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___z_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of SerializableVector3
struct SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshaled_pinvoke
{
	char* ___x_0;
	char* ___y_1;
	char* ___z_2;
};
// Native definition for COM marshalling of SerializableVector3
struct SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshaled_com
{
	Il2CppChar* ___x_0;
	Il2CppChar* ___y_1;
	Il2CppChar* ___z_2;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// BulletMessage
struct BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F  : public GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD
{
public:
	// SerializableQuaternion BulletMessage::gunDir
	SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ___gunDir_6;
	// SerializableVector3 BulletMessage::firePoint
	SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ___firePoint_7;

public:
	inline static int32_t get_offset_of_gunDir_6() { return static_cast<int32_t>(offsetof(BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F, ___gunDir_6)); }
	inline SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  get_gunDir_6() const { return ___gunDir_6; }
	inline SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 * get_address_of_gunDir_6() { return &___gunDir_6; }
	inline void set_gunDir_6(SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  value)
	{
		___gunDir_6 = value;
	}

	inline static int32_t get_offset_of_firePoint_7() { return static_cast<int32_t>(offsetof(BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F, ___firePoint_7)); }
	inline SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  get_firePoint_7() const { return ___firePoint_7; }
	inline SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 * get_address_of_firePoint_7() { return &___firePoint_7; }
	inline void set_firePoint_7(SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  value)
	{
		___firePoint_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firePoint_7))->___x_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firePoint_7))->___y_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firePoint_7))->___z_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.ContactPoint2D
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Point_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Normal_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_RelativeVelocity_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
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

// UnityEngine.ForceMode2D
struct ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// PlayerPositionMessage
struct PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B  : public GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD
{
public:
	// SerializableQuaternion PlayerPositionMessage::gunRot
	SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ___gunRot_6;
	// SerializableQuaternion PlayerPositionMessage::currentRot
	SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ___currentRot_7;
	// SerializableVector3 PlayerPositionMessage::currentPos
	SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ___currentPos_8;
	// SerializableVector3 PlayerPositionMessage::enemyPos
	SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ___enemyPos_9;
	// System.Int32 PlayerPositionMessage::seq
	int32_t ___seq_10;
	// System.String PlayerPositionMessage::player
	String_t* ___player_11;
	// System.String PlayerPositionMessage::moving
	String_t* ___moving_12;

public:
	inline static int32_t get_offset_of_gunRot_6() { return static_cast<int32_t>(offsetof(PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B, ___gunRot_6)); }
	inline SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  get_gunRot_6() const { return ___gunRot_6; }
	inline SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 * get_address_of_gunRot_6() { return &___gunRot_6; }
	inline void set_gunRot_6(SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  value)
	{
		___gunRot_6 = value;
	}

	inline static int32_t get_offset_of_currentRot_7() { return static_cast<int32_t>(offsetof(PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B, ___currentRot_7)); }
	inline SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  get_currentRot_7() const { return ___currentRot_7; }
	inline SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 * get_address_of_currentRot_7() { return &___currentRot_7; }
	inline void set_currentRot_7(SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  value)
	{
		___currentRot_7 = value;
	}

	inline static int32_t get_offset_of_currentPos_8() { return static_cast<int32_t>(offsetof(PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B, ___currentPos_8)); }
	inline SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  get_currentPos_8() const { return ___currentPos_8; }
	inline SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 * get_address_of_currentPos_8() { return &___currentPos_8; }
	inline void set_currentPos_8(SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  value)
	{
		___currentPos_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentPos_8))->___x_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentPos_8))->___y_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentPos_8))->___z_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_enemyPos_9() { return static_cast<int32_t>(offsetof(PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B, ___enemyPos_9)); }
	inline SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  get_enemyPos_9() const { return ___enemyPos_9; }
	inline SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 * get_address_of_enemyPos_9() { return &___enemyPos_9; }
	inline void set_enemyPos_9(SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  value)
	{
		___enemyPos_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enemyPos_9))->___x_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enemyPos_9))->___y_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enemyPos_9))->___z_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_seq_10() { return static_cast<int32_t>(offsetof(PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B, ___seq_10)); }
	inline int32_t get_seq_10() const { return ___seq_10; }
	inline int32_t* get_address_of_seq_10() { return &___seq_10; }
	inline void set_seq_10(int32_t value)
	{
		___seq_10 = value;
	}

	inline static int32_t get_offset_of_player_11() { return static_cast<int32_t>(offsetof(PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B, ___player_11)); }
	inline String_t* get_player_11() const { return ___player_11; }
	inline String_t** get_address_of_player_11() { return &___player_11; }
	inline void set_player_11(String_t* value)
	{
		___player_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_11), (void*)value);
	}

	inline static int32_t get_offset_of_moving_12() { return static_cast<int32_t>(offsetof(PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B, ___moving_12)); }
	inline String_t* get_moving_12() const { return ___moving_12; }
	inline String_t** get_address_of_moving_12() { return &___moving_12; }
	inline void set_moving_12(String_t* value)
	{
		___moving_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moving_12), (void*)value);
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

// WebSocketService/<FindMatch>d__23
struct U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 
{
public:
	// System.Int32 WebSocketService/<FindMatch>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebSocketService/<FindMatch>d__23::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebSocketService WebSocketService/<FindMatch>d__23::<>4__this
	WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WebSocketService/<FindMatch>d__23::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2, ___U3CU3E4__this_2)); }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebSocketService/<OnApplicationQuit>d__28
struct U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 
{
public:
	// System.Int32 WebSocketService/<OnApplicationQuit>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebSocketService/<OnApplicationQuit>d__28::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebSocketService WebSocketService/<OnApplicationQuit>d__28::<>4__this
	WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WebSocketService/<OnApplicationQuit>d__28::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1, ___U3CU3E4__this_2)); }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebSocketService/<QuitGame>d__29
struct U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 
{
public:
	// System.Int32 WebSocketService/<QuitGame>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebSocketService/<QuitGame>d__29::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebSocketService WebSocketService/<QuitGame>d__29::<>4__this
	WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WebSocketService/<QuitGame>d__29::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6, ___U3CU3E4__this_2)); }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// WebSocketService/<SendWebSocketMessage>d__27
struct U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 
{
public:
	// System.Int32 WebSocketService/<SendWebSocketMessage>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WebSocketService/<SendWebSocketMessage>d__27::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// WebSocketService WebSocketService/<SendWebSocketMessage>d__27::<>4__this
	WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * ___U3CU3E4__this_2;
	// System.String WebSocketService/<SendWebSocketMessage>d__27::message
	String_t* ___message_3;
	// System.Runtime.CompilerServices.TaskAwaiter WebSocketService/<SendWebSocketMessage>d__27::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158, ___U3CU3E4__this_2)); }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Bullet
struct Bullet_tF95A945B732B2B929938FB1028878BFBC0081724  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Bullet::maxHits
	int32_t ___maxHits_4;
	// UnityEngine.Rigidbody2D Bullet::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_5;
	// UnityEngine.GameObject Bullet::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_6;
	// UnityEngine.GameObject Bullet::explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explosion_7;
	// System.Single Bullet::force
	float ___force_8;
	// System.Single Bullet::maxDist
	float ___maxDist_9;
	// System.Int32 Bullet::numHits
	int32_t ___numHits_10;

public:
	inline static int32_t get_offset_of_maxHits_4() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___maxHits_4)); }
	inline int32_t get_maxHits_4() const { return ___maxHits_4; }
	inline int32_t* get_address_of_maxHits_4() { return &___maxHits_4; }
	inline void set_maxHits_4(int32_t value)
	{
		___maxHits_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___rb_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_bullet_6() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___bullet_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_6() const { return ___bullet_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_6() { return &___bullet_6; }
	inline void set_bullet_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_6), (void*)value);
	}

	inline static int32_t get_offset_of_explosion_7() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___explosion_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explosion_7() const { return ___explosion_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explosion_7() { return &___explosion_7; }
	inline void set_explosion_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explosion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosion_7), (void*)value);
	}

	inline static int32_t get_offset_of_force_8() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___force_8)); }
	inline float get_force_8() const { return ___force_8; }
	inline float* get_address_of_force_8() { return &___force_8; }
	inline void set_force_8(float value)
	{
		___force_8 = value;
	}

	inline static int32_t get_offset_of_maxDist_9() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___maxDist_9)); }
	inline float get_maxDist_9() const { return ___maxDist_9; }
	inline float* get_address_of_maxDist_9() { return &___maxDist_9; }
	inline void set_maxDist_9(float value)
	{
		___maxDist_9 = value;
	}

	inline static int32_t get_offset_of_numHits_10() { return static_cast<int32_t>(offsetof(Bullet_tF95A945B732B2B929938FB1028878BFBC0081724, ___numHits_10)); }
	inline int32_t get_numHits_10() const { return ___numHits_10; }
	inline int32_t* get_address_of_numHits_10() { return &___numHits_10; }
	inline void set_numHits_10(int32_t value)
	{
		___numHits_10 = value;
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Enemy::enemy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy_4;
	// UnityEngine.GameObject Enemy::Body
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Body_5;
	// UnityEngine.GameObject Enemy::Gun
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Gun_6;
	// UnityEngine.GameObject Enemy::explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explosion_7;
	// Track Enemy::trackLeft
	Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * ___trackLeft_8;
	// Track Enemy::trackRight
	Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * ___trackRight_9;
	// System.Collections.Generic.Queue`1<PlayerPositionMessage> Enemy::enemyPositionMessageQueue
	Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * ___enemyPositionMessageQueue_10;
	// UnityEngine.Vector3 Enemy::desiredPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___desiredPosition_11;
	// UnityEngine.Quaternion Enemy::desiredRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___desiredRotation_12;
	// UnityEngine.Quaternion Enemy::desiredGunRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___desiredGunRotation_13;
	// System.Boolean Enemy::moving
	bool ___moving_14;
	// System.Int32 Enemy::seq
	int32_t ___seq_15;
	// System.Single Enemy::maxSpeed
	float ___maxSpeed_16;
	// System.Single Enemy::rotationSpeed
	float ___rotationSpeed_17;

public:
	inline static int32_t get_offset_of_enemy_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemy_4() const { return ___enemy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemy_4() { return &___enemy_4; }
	inline void set_enemy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_4), (void*)value);
	}

	inline static int32_t get_offset_of_Body_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___Body_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Body_5() const { return ___Body_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Body_5() { return &___Body_5; }
	inline void set_Body_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Body_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Body_5), (void*)value);
	}

	inline static int32_t get_offset_of_Gun_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___Gun_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Gun_6() const { return ___Gun_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Gun_6() { return &___Gun_6; }
	inline void set_Gun_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Gun_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gun_6), (void*)value);
	}

	inline static int32_t get_offset_of_explosion_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___explosion_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explosion_7() const { return ___explosion_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explosion_7() { return &___explosion_7; }
	inline void set_explosion_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explosion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosion_7), (void*)value);
	}

	inline static int32_t get_offset_of_trackLeft_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___trackLeft_8)); }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * get_trackLeft_8() const { return ___trackLeft_8; }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E ** get_address_of_trackLeft_8() { return &___trackLeft_8; }
	inline void set_trackLeft_8(Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * value)
	{
		___trackLeft_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackLeft_8), (void*)value);
	}

	inline static int32_t get_offset_of_trackRight_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___trackRight_9)); }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * get_trackRight_9() const { return ___trackRight_9; }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E ** get_address_of_trackRight_9() { return &___trackRight_9; }
	inline void set_trackRight_9(Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * value)
	{
		___trackRight_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackRight_9), (void*)value);
	}

	inline static int32_t get_offset_of_enemyPositionMessageQueue_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyPositionMessageQueue_10)); }
	inline Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * get_enemyPositionMessageQueue_10() const { return ___enemyPositionMessageQueue_10; }
	inline Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 ** get_address_of_enemyPositionMessageQueue_10() { return &___enemyPositionMessageQueue_10; }
	inline void set_enemyPositionMessageQueue_10(Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * value)
	{
		___enemyPositionMessageQueue_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPositionMessageQueue_10), (void*)value);
	}

	inline static int32_t get_offset_of_desiredPosition_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___desiredPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_desiredPosition_11() const { return ___desiredPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_desiredPosition_11() { return &___desiredPosition_11; }
	inline void set_desiredPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___desiredPosition_11 = value;
	}

	inline static int32_t get_offset_of_desiredRotation_12() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___desiredRotation_12)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_desiredRotation_12() const { return ___desiredRotation_12; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_desiredRotation_12() { return &___desiredRotation_12; }
	inline void set_desiredRotation_12(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___desiredRotation_12 = value;
	}

	inline static int32_t get_offset_of_desiredGunRotation_13() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___desiredGunRotation_13)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_desiredGunRotation_13() const { return ___desiredGunRotation_13; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_desiredGunRotation_13() { return &___desiredGunRotation_13; }
	inline void set_desiredGunRotation_13(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___desiredGunRotation_13 = value;
	}

	inline static int32_t get_offset_of_moving_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___moving_14)); }
	inline bool get_moving_14() const { return ___moving_14; }
	inline bool* get_address_of_moving_14() { return &___moving_14; }
	inline void set_moving_14(bool value)
	{
		___moving_14 = value;
	}

	inline static int32_t get_offset_of_seq_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___seq_15)); }
	inline int32_t get_seq_15() const { return ___seq_15; }
	inline int32_t* get_address_of_seq_15() { return &___seq_15; }
	inline void set_seq_15(int32_t value)
	{
		___seq_15 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_16() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___maxSpeed_16)); }
	inline float get_maxSpeed_16() const { return ___maxSpeed_16; }
	inline float* get_address_of_maxSpeed_16() { return &___maxSpeed_16; }
	inline void set_maxSpeed_16(float value)
	{
		___maxSpeed_16 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_17() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___rotationSpeed_17)); }
	inline float get_rotationSpeed_17() const { return ___rotationSpeed_17; }
	inline float* get_address_of_rotationSpeed_17() { return &___rotationSpeed_17; }
	inline void set_rotationSpeed_17(float value)
	{
		___rotationSpeed_17 = value;
	}
};


// FindNewMatch
struct FindNewMatch_tC9BA84B269FB3F95303C8D424EBD623C03DAE196  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Loading
struct Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Loading::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_4;
	// System.Single Loading::newDotTime
	float ___newDotTime_5;
	// System.Int32 Loading::maxDots
	int32_t ___maxDots_6;
	// System.Single Loading::timeSinceLastDot
	float ___timeSinceLastDot_7;
	// System.Int32 Loading::numDots
	int32_t ___numDots_8;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_4() const { return ___text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_newDotTime_5() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___newDotTime_5)); }
	inline float get_newDotTime_5() const { return ___newDotTime_5; }
	inline float* get_address_of_newDotTime_5() { return &___newDotTime_5; }
	inline void set_newDotTime_5(float value)
	{
		___newDotTime_5 = value;
	}

	inline static int32_t get_offset_of_maxDots_6() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___maxDots_6)); }
	inline int32_t get_maxDots_6() const { return ___maxDots_6; }
	inline int32_t* get_address_of_maxDots_6() { return &___maxDots_6; }
	inline void set_maxDots_6(int32_t value)
	{
		___maxDots_6 = value;
	}

	inline static int32_t get_offset_of_timeSinceLastDot_7() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___timeSinceLastDot_7)); }
	inline float get_timeSinceLastDot_7() const { return ___timeSinceLastDot_7; }
	inline float* get_address_of_timeSinceLastDot_7() { return &___timeSinceLastDot_7; }
	inline void set_timeSinceLastDot_7(float value)
	{
		___timeSinceLastDot_7 = value;
	}

	inline static int32_t get_offset_of_numDots_8() { return static_cast<int32_t>(offsetof(Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7, ___numDots_8)); }
	inline int32_t get_numDots_8() const { return ___numDots_8; }
	inline int32_t* get_address_of_numDots_8() { return &___numDots_8; }
	inline void set_numDots_8(int32_t value)
	{
		___numDots_8 = value;
	}
};


// MenuButton
struct MenuButton_t9F2253D1B9D9400F6AC1F4878893041C8A932FD7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MenuPlayerController
struct MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Track MenuPlayerController::trackLeft
	Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * ___trackLeft_4;
	// Track MenuPlayerController::trackRight
	Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * ___trackRight_5;
	// UnityEngine.GameObject MenuPlayerController::Gun
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Gun_6;
	// UnityEngine.GameObject MenuPlayerController::Body
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Body_7;
	// System.String MenuPlayerController::keyMoveForward
	String_t* ___keyMoveForward_8;
	// System.String MenuPlayerController::keyMoveReverse
	String_t* ___keyMoveReverse_9;
	// System.String MenuPlayerController::keyMoveRight
	String_t* ___keyMoveRight_10;
	// System.String MenuPlayerController::keyMoveLeft
	String_t* ___keyMoveLeft_11;
	// System.Single MenuPlayerController::maxSpeed
	float ___maxSpeed_12;
	// System.Single MenuPlayerController::rotationSpeed
	float ___rotationSpeed_13;
	// System.Single MenuPlayerController::acceleration
	float ___acceleration_14;
	// System.Single MenuPlayerController::deceleration
	float ___deceleration_15;
	// System.Single MenuPlayerController::speed
	float ___speed_16;
	// UnityEngine.Vector3 MenuPlayerController::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_17;

public:
	inline static int32_t get_offset_of_trackLeft_4() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___trackLeft_4)); }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * get_trackLeft_4() const { return ___trackLeft_4; }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E ** get_address_of_trackLeft_4() { return &___trackLeft_4; }
	inline void set_trackLeft_4(Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * value)
	{
		___trackLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_trackRight_5() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___trackRight_5)); }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * get_trackRight_5() const { return ___trackRight_5; }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E ** get_address_of_trackRight_5() { return &___trackRight_5; }
	inline void set_trackRight_5(Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * value)
	{
		___trackRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackRight_5), (void*)value);
	}

	inline static int32_t get_offset_of_Gun_6() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___Gun_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Gun_6() const { return ___Gun_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Gun_6() { return &___Gun_6; }
	inline void set_Gun_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Gun_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gun_6), (void*)value);
	}

	inline static int32_t get_offset_of_Body_7() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___Body_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Body_7() const { return ___Body_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Body_7() { return &___Body_7; }
	inline void set_Body_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Body_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Body_7), (void*)value);
	}

	inline static int32_t get_offset_of_keyMoveForward_8() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___keyMoveForward_8)); }
	inline String_t* get_keyMoveForward_8() const { return ___keyMoveForward_8; }
	inline String_t** get_address_of_keyMoveForward_8() { return &___keyMoveForward_8; }
	inline void set_keyMoveForward_8(String_t* value)
	{
		___keyMoveForward_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyMoveForward_8), (void*)value);
	}

	inline static int32_t get_offset_of_keyMoveReverse_9() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___keyMoveReverse_9)); }
	inline String_t* get_keyMoveReverse_9() const { return ___keyMoveReverse_9; }
	inline String_t** get_address_of_keyMoveReverse_9() { return &___keyMoveReverse_9; }
	inline void set_keyMoveReverse_9(String_t* value)
	{
		___keyMoveReverse_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyMoveReverse_9), (void*)value);
	}

	inline static int32_t get_offset_of_keyMoveRight_10() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___keyMoveRight_10)); }
	inline String_t* get_keyMoveRight_10() const { return ___keyMoveRight_10; }
	inline String_t** get_address_of_keyMoveRight_10() { return &___keyMoveRight_10; }
	inline void set_keyMoveRight_10(String_t* value)
	{
		___keyMoveRight_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyMoveRight_10), (void*)value);
	}

	inline static int32_t get_offset_of_keyMoveLeft_11() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___keyMoveLeft_11)); }
	inline String_t* get_keyMoveLeft_11() const { return ___keyMoveLeft_11; }
	inline String_t** get_address_of_keyMoveLeft_11() { return &___keyMoveLeft_11; }
	inline void set_keyMoveLeft_11(String_t* value)
	{
		___keyMoveLeft_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyMoveLeft_11), (void*)value);
	}

	inline static int32_t get_offset_of_maxSpeed_12() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___maxSpeed_12)); }
	inline float get_maxSpeed_12() const { return ___maxSpeed_12; }
	inline float* get_address_of_maxSpeed_12() { return &___maxSpeed_12; }
	inline void set_maxSpeed_12(float value)
	{
		___maxSpeed_12 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_13() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___rotationSpeed_13)); }
	inline float get_rotationSpeed_13() const { return ___rotationSpeed_13; }
	inline float* get_address_of_rotationSpeed_13() { return &___rotationSpeed_13; }
	inline void set_rotationSpeed_13(float value)
	{
		___rotationSpeed_13 = value;
	}

	inline static int32_t get_offset_of_acceleration_14() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___acceleration_14)); }
	inline float get_acceleration_14() const { return ___acceleration_14; }
	inline float* get_address_of_acceleration_14() { return &___acceleration_14; }
	inline void set_acceleration_14(float value)
	{
		___acceleration_14 = value;
	}

	inline static int32_t get_offset_of_deceleration_15() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___deceleration_15)); }
	inline float get_deceleration_15() const { return ___deceleration_15; }
	inline float* get_address_of_deceleration_15() { return &___deceleration_15; }
	inline void set_deceleration_15(float value)
	{
		___deceleration_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}

	inline static int32_t get_offset_of_velocity_17() { return static_cast<int32_t>(offsetof(MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43, ___velocity_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_17() const { return ___velocity_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_17() { return &___velocity_17; }
	inline void set_velocity_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_17 = value;
	}
};


// MenuShooting
struct MenuShooting_t46EC8571ECC4DF9D165DE5D3D3AE0DF4E5912365  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform MenuShooting::firePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___firePoint_4;
	// UnityEngine.GameObject MenuShooting::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_5;

public:
	inline static int32_t get_offset_of_firePoint_4() { return static_cast<int32_t>(offsetof(MenuShooting_t46EC8571ECC4DF9D165DE5D3D3AE0DF4E5912365, ___firePoint_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_firePoint_4() const { return ___firePoint_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_firePoint_4() { return &___firePoint_4; }
	inline void set_firePoint_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___firePoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_5() { return static_cast<int32_t>(offsetof(MenuShooting_t46EC8571ECC4DF9D165DE5D3D3AE0DF4E5912365, ___bulletPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_5() const { return ___bulletPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_5() { return &___bulletPrefab_5; }
	inline void set_bulletPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_5), (void*)value);
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Track PlayerController::trackLeft
	Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * ___trackLeft_4;
	// Track PlayerController::trackRight
	Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * ___trackRight_5;
	// UnityEngine.GameObject PlayerController::Gun
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Gun_6;
	// UnityEngine.GameObject PlayerController::Body
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Body_7;
	// UnityEngine.GameObject PlayerController::manager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___manager_8;
	// UnityEngine.GameObject PlayerController::explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explosion_9;
	// UnityEngine.Transform PlayerController::firePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___firePoint_10;
	// UnityEngine.GameObject PlayerController::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_11;
	// System.String PlayerController::keyMoveForward
	String_t* ___keyMoveForward_12;
	// System.String PlayerController::keyMoveReverse
	String_t* ___keyMoveReverse_13;
	// System.String PlayerController::keyMoveRight
	String_t* ___keyMoveRight_14;
	// System.String PlayerController::keyMoveLeft
	String_t* ___keyMoveLeft_15;
	// System.Single PlayerController::maxSpeed
	float ___maxSpeed_16;
	// System.Single PlayerController::rotationSpeed
	float ___rotationSpeed_17;
	// System.Single PlayerController::acceleration
	float ___acceleration_18;
	// System.Single PlayerController::deceleration
	float ___deceleration_19;
	// System.Boolean PlayerController::canMove
	bool ___canMove_20;
	// System.Single PlayerController::speed
	float ___speed_21;
	// UnityEngine.Vector3 PlayerController::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_22;
	// System.Int32 PlayerController::seq
	int32_t ___seq_23;

public:
	inline static int32_t get_offset_of_trackLeft_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___trackLeft_4)); }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * get_trackLeft_4() const { return ___trackLeft_4; }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E ** get_address_of_trackLeft_4() { return &___trackLeft_4; }
	inline void set_trackLeft_4(Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * value)
	{
		___trackLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_trackRight_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___trackRight_5)); }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * get_trackRight_5() const { return ___trackRight_5; }
	inline Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E ** get_address_of_trackRight_5() { return &___trackRight_5; }
	inline void set_trackRight_5(Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * value)
	{
		___trackRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackRight_5), (void*)value);
	}

	inline static int32_t get_offset_of_Gun_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Gun_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Gun_6() const { return ___Gun_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Gun_6() { return &___Gun_6; }
	inline void set_Gun_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Gun_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gun_6), (void*)value);
	}

	inline static int32_t get_offset_of_Body_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Body_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Body_7() const { return ___Body_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Body_7() { return &___Body_7; }
	inline void set_Body_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Body_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Body_7), (void*)value);
	}

	inline static int32_t get_offset_of_manager_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___manager_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_manager_8() const { return ___manager_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_manager_8() { return &___manager_8; }
	inline void set_manager_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___manager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_8), (void*)value);
	}

	inline static int32_t get_offset_of_explosion_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___explosion_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explosion_9() const { return ___explosion_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explosion_9() { return &___explosion_9; }
	inline void set_explosion_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explosion_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosion_9), (void*)value);
	}

	inline static int32_t get_offset_of_firePoint_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___firePoint_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_firePoint_10() const { return ___firePoint_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_firePoint_10() { return &___firePoint_10; }
	inline void set_firePoint_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___firePoint_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_10), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___bulletPrefab_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_11() const { return ___bulletPrefab_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_11() { return &___bulletPrefab_11; }
	inline void set_bulletPrefab_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_keyMoveForward_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___keyMoveForward_12)); }
	inline String_t* get_keyMoveForward_12() const { return ___keyMoveForward_12; }
	inline String_t** get_address_of_keyMoveForward_12() { return &___keyMoveForward_12; }
	inline void set_keyMoveForward_12(String_t* value)
	{
		___keyMoveForward_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyMoveForward_12), (void*)value);
	}

	inline static int32_t get_offset_of_keyMoveReverse_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___keyMoveReverse_13)); }
	inline String_t* get_keyMoveReverse_13() const { return ___keyMoveReverse_13; }
	inline String_t** get_address_of_keyMoveReverse_13() { return &___keyMoveReverse_13; }
	inline void set_keyMoveReverse_13(String_t* value)
	{
		___keyMoveReverse_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyMoveReverse_13), (void*)value);
	}

	inline static int32_t get_offset_of_keyMoveRight_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___keyMoveRight_14)); }
	inline String_t* get_keyMoveRight_14() const { return ___keyMoveRight_14; }
	inline String_t** get_address_of_keyMoveRight_14() { return &___keyMoveRight_14; }
	inline void set_keyMoveRight_14(String_t* value)
	{
		___keyMoveRight_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyMoveRight_14), (void*)value);
	}

	inline static int32_t get_offset_of_keyMoveLeft_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___keyMoveLeft_15)); }
	inline String_t* get_keyMoveLeft_15() const { return ___keyMoveLeft_15; }
	inline String_t** get_address_of_keyMoveLeft_15() { return &___keyMoveLeft_15; }
	inline void set_keyMoveLeft_15(String_t* value)
	{
		___keyMoveLeft_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyMoveLeft_15), (void*)value);
	}

	inline static int32_t get_offset_of_maxSpeed_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___maxSpeed_16)); }
	inline float get_maxSpeed_16() const { return ___maxSpeed_16; }
	inline float* get_address_of_maxSpeed_16() { return &___maxSpeed_16; }
	inline void set_maxSpeed_16(float value)
	{
		___maxSpeed_16 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___rotationSpeed_17)); }
	inline float get_rotationSpeed_17() const { return ___rotationSpeed_17; }
	inline float* get_address_of_rotationSpeed_17() { return &___rotationSpeed_17; }
	inline void set_rotationSpeed_17(float value)
	{
		___rotationSpeed_17 = value;
	}

	inline static int32_t get_offset_of_acceleration_18() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___acceleration_18)); }
	inline float get_acceleration_18() const { return ___acceleration_18; }
	inline float* get_address_of_acceleration_18() { return &___acceleration_18; }
	inline void set_acceleration_18(float value)
	{
		___acceleration_18 = value;
	}

	inline static int32_t get_offset_of_deceleration_19() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___deceleration_19)); }
	inline float get_deceleration_19() const { return ___deceleration_19; }
	inline float* get_address_of_deceleration_19() { return &___deceleration_19; }
	inline void set_deceleration_19(float value)
	{
		___deceleration_19 = value;
	}

	inline static int32_t get_offset_of_canMove_20() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___canMove_20)); }
	inline bool get_canMove_20() const { return ___canMove_20; }
	inline bool* get_address_of_canMove_20() { return &___canMove_20; }
	inline void set_canMove_20(bool value)
	{
		___canMove_20 = value;
	}

	inline static int32_t get_offset_of_speed_21() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___speed_21)); }
	inline float get_speed_21() const { return ___speed_21; }
	inline float* get_address_of_speed_21() { return &___speed_21; }
	inline void set_speed_21(float value)
	{
		___speed_21 = value;
	}

	inline static int32_t get_offset_of_velocity_22() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___velocity_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_22() const { return ___velocity_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_22() { return &___velocity_22; }
	inline void set_velocity_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_22 = value;
	}

	inline static int32_t get_offset_of_seq_23() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___seq_23)); }
	inline int32_t get_seq_23() const { return ___seq_23; }
	inline int32_t* get_address_of_seq_23() { return &___seq_23; }
	inline void set_seq_23(int32_t value)
	{
		___seq_23 = value;
	}
};


// PositionManager
struct PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PositionManager::enemy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy_4;
	// UnityEngine.GameObject PositionManager::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;
	// UnityEngine.GameObject PositionManager::playerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerPrefab_6;
	// UnityEngine.GameObject PositionManager::enemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyPrefab_7;
	// UnityEngine.GameObject PositionManager::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_8;
	// UnityEngine.UI.Text PositionManager::startText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___startText_9;

public:
	inline static int32_t get_offset_of_enemy_4() { return static_cast<int32_t>(offsetof(PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB, ___enemy_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemy_4() const { return ___enemy_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemy_4() { return &___enemy_4; }
	inline void set_enemy_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerPrefab_6() { return static_cast<int32_t>(offsetof(PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB, ___playerPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerPrefab_6() const { return ___playerPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerPrefab_6() { return &___playerPrefab_6; }
	inline void set_playerPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemyPrefab_7() { return static_cast<int32_t>(offsetof(PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB, ___enemyPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyPrefab_7() const { return ___enemyPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyPrefab_7() { return &___enemyPrefab_7; }
	inline void set_enemyPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_8() { return static_cast<int32_t>(offsetof(PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB, ___bulletPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_8() const { return ___bulletPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_8() { return &___bulletPrefab_8; }
	inline void set_bulletPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_startText_9() { return static_cast<int32_t>(offsetof(PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB, ___startText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_startText_9() const { return ___startText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_startText_9() { return &___startText_9; }
	inline void set_startText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___startText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startText_9), (void*)value);
	}
};


// Shooting
struct Shooting_tC245E9F3DD4640EC16DB7F8ABE94957B8FF477C5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Shooting::firePoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___firePoint_4;
	// UnityEngine.GameObject Shooting::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;
	// System.Single Shooting::coolDown
	float ___coolDown_6;
	// System.Single Shooting::timeSinceShot
	float ___timeSinceShot_7;

public:
	inline static int32_t get_offset_of_firePoint_4() { return static_cast<int32_t>(offsetof(Shooting_tC245E9F3DD4640EC16DB7F8ABE94957B8FF477C5, ___firePoint_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_firePoint_4() const { return ___firePoint_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_firePoint_4() { return &___firePoint_4; }
	inline void set_firePoint_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___firePoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firePoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(Shooting_tC245E9F3DD4640EC16DB7F8ABE94957B8FF477C5, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_coolDown_6() { return static_cast<int32_t>(offsetof(Shooting_tC245E9F3DD4640EC16DB7F8ABE94957B8FF477C5, ___coolDown_6)); }
	inline float get_coolDown_6() const { return ___coolDown_6; }
	inline float* get_address_of_coolDown_6() { return &___coolDown_6; }
	inline void set_coolDown_6(float value)
	{
		___coolDown_6 = value;
	}

	inline static int32_t get_offset_of_timeSinceShot_7() { return static_cast<int32_t>(offsetof(Shooting_tC245E9F3DD4640EC16DB7F8ABE94957B8FF477C5, ___timeSinceShot_7)); }
	inline float get_timeSinceShot_7() const { return ___timeSinceShot_7; }
	inline float* get_address_of_timeSinceShot_7() { return &___timeSinceShot_7; }
	inline void set_timeSinceShot_7(float value)
	{
		___timeSinceShot_7 = value;
	}
};


// StartText
struct StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text StartText::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_4;
	// UnityEngine.GameObject StartText::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;
	// System.Int32 StartText::totalTime
	int32_t ___totalTime_6;
	// System.Single StartText::curTime
	float ___curTime_7;
	// System.Int32 StartText::curNum
	int32_t ___curNum_8;
	// System.Boolean StartText::counting
	bool ___counting_9;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC, ___text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_4() const { return ___text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_totalTime_6() { return static_cast<int32_t>(offsetof(StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC, ___totalTime_6)); }
	inline int32_t get_totalTime_6() const { return ___totalTime_6; }
	inline int32_t* get_address_of_totalTime_6() { return &___totalTime_6; }
	inline void set_totalTime_6(int32_t value)
	{
		___totalTime_6 = value;
	}

	inline static int32_t get_offset_of_curTime_7() { return static_cast<int32_t>(offsetof(StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC, ___curTime_7)); }
	inline float get_curTime_7() const { return ___curTime_7; }
	inline float* get_address_of_curTime_7() { return &___curTime_7; }
	inline void set_curTime_7(float value)
	{
		___curTime_7 = value;
	}

	inline static int32_t get_offset_of_curNum_8() { return static_cast<int32_t>(offsetof(StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC, ___curNum_8)); }
	inline int32_t get_curNum_8() const { return ___curNum_8; }
	inline int32_t* get_address_of_curNum_8() { return &___curNum_8; }
	inline void set_curNum_8(int32_t value)
	{
		___curNum_8 = value;
	}

	inline static int32_t get_offset_of_counting_9() { return static_cast<int32_t>(offsetof(StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC, ___counting_9)); }
	inline bool get_counting_9() const { return ___counting_9; }
	inline bool* get_address_of_counting_9() { return &___counting_9; }
	inline void set_counting_9(bool value)
	{
		___counting_9 = value;
	}
};


// Track
struct Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator Track::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_4;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E, ___animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_4() const { return ___animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityMainThreadHelper
struct UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Queue`1<System.Action> UnityMainThreadHelper::jobs
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___jobs_5;

public:
	inline static int32_t get_offset_of_jobs_5() { return static_cast<int32_t>(offsetof(UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C, ___jobs_5)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_jobs_5() const { return ___jobs_5; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_jobs_5() { return &___jobs_5; }
	inline void set_jobs_5(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___jobs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jobs_5), (void*)value);
	}
};

struct UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C_StaticFields
{
public:
	// UnityMainThreadHelper UnityMainThreadHelper::wkr
	UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C * ___wkr_4;

public:
	inline static int32_t get_offset_of_wkr_4() { return static_cast<int32_t>(offsetof(UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C_StaticFields, ___wkr_4)); }
	inline UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C * get_wkr_4() const { return ___wkr_4; }
	inline UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C ** get_address_of_wkr_4() { return &___wkr_4; }
	inline void set_wkr_4(UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C * value)
	{
		___wkr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wkr_4), (void*)value);
	}
};


// WebSocketService
struct WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// NativeWebSocket.WebSocket WebSocketService::webSocket
	WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * ___webSocket_5;
	// System.Boolean WebSocketService::intentionalClose
	bool ___intentionalClose_6;
	// System.String WebSocketService::matchId
	String_t* ___matchId_7;
	// System.Boolean WebSocketService::matchInitialized
	bool ___matchInitialized_8;
	// System.String WebSocketService::playerNum
	String_t* ___playerNum_9;
	// System.String WebSocketService::enemyNum
	String_t* ___enemyNum_10;
	// UnityEngine.GameObject WebSocketService::loadScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loadScreen_11;
	// UnityEngine.UI.Text WebSocketService::loadScreenText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___loadScreenText_12;
	// PositionManager WebSocketService::positionManager
	PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * ___positionManager_13;
	// GameManager WebSocketService::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_14;
	// System.String WebSocketService::webSocketDns
	String_t* ___webSocketDns_15;

public:
	inline static int32_t get_offset_of_webSocket_5() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___webSocket_5)); }
	inline WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * get_webSocket_5() const { return ___webSocket_5; }
	inline WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 ** get_address_of_webSocket_5() { return &___webSocket_5; }
	inline void set_webSocket_5(WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * value)
	{
		___webSocket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webSocket_5), (void*)value);
	}

	inline static int32_t get_offset_of_intentionalClose_6() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___intentionalClose_6)); }
	inline bool get_intentionalClose_6() const { return ___intentionalClose_6; }
	inline bool* get_address_of_intentionalClose_6() { return &___intentionalClose_6; }
	inline void set_intentionalClose_6(bool value)
	{
		___intentionalClose_6 = value;
	}

	inline static int32_t get_offset_of_matchId_7() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___matchId_7)); }
	inline String_t* get_matchId_7() const { return ___matchId_7; }
	inline String_t** get_address_of_matchId_7() { return &___matchId_7; }
	inline void set_matchId_7(String_t* value)
	{
		___matchId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matchId_7), (void*)value);
	}

	inline static int32_t get_offset_of_matchInitialized_8() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___matchInitialized_8)); }
	inline bool get_matchInitialized_8() const { return ___matchInitialized_8; }
	inline bool* get_address_of_matchInitialized_8() { return &___matchInitialized_8; }
	inline void set_matchInitialized_8(bool value)
	{
		___matchInitialized_8 = value;
	}

	inline static int32_t get_offset_of_playerNum_9() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___playerNum_9)); }
	inline String_t* get_playerNum_9() const { return ___playerNum_9; }
	inline String_t** get_address_of_playerNum_9() { return &___playerNum_9; }
	inline void set_playerNum_9(String_t* value)
	{
		___playerNum_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerNum_9), (void*)value);
	}

	inline static int32_t get_offset_of_enemyNum_10() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___enemyNum_10)); }
	inline String_t* get_enemyNum_10() const { return ___enemyNum_10; }
	inline String_t** get_address_of_enemyNum_10() { return &___enemyNum_10; }
	inline void set_enemyNum_10(String_t* value)
	{
		___enemyNum_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyNum_10), (void*)value);
	}

	inline static int32_t get_offset_of_loadScreen_11() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___loadScreen_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loadScreen_11() const { return ___loadScreen_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loadScreen_11() { return &___loadScreen_11; }
	inline void set_loadScreen_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loadScreen_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadScreen_11), (void*)value);
	}

	inline static int32_t get_offset_of_loadScreenText_12() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___loadScreenText_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_loadScreenText_12() const { return ___loadScreenText_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_loadScreenText_12() { return &___loadScreenText_12; }
	inline void set_loadScreenText_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___loadScreenText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadScreenText_12), (void*)value);
	}

	inline static int32_t get_offset_of_positionManager_13() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___positionManager_13)); }
	inline PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * get_positionManager_13() const { return ___positionManager_13; }
	inline PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB ** get_address_of_positionManager_13() { return &___positionManager_13; }
	inline void set_positionManager_13(PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * value)
	{
		___positionManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_14() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___gameManager_14)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_14() const { return ___gameManager_14; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_14() { return &___gameManager_14; }
	inline void set_gameManager_14(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_14), (void*)value);
	}

	inline static int32_t get_offset_of_webSocketDns_15() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D, ___webSocketDns_15)); }
	inline String_t* get_webSocketDns_15() const { return ___webSocketDns_15; }
	inline String_t** get_address_of_webSocketDns_15() { return &___webSocketDns_15; }
	inline void set_webSocketDns_15(String_t* value)
	{
		___webSocketDns_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webSocketDns_15), (void*)value);
	}
};

struct WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_StaticFields
{
public:
	// WebSocketService WebSocketService::inst
	WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * ___inst_4;

public:
	inline static int32_t get_offset_of_inst_4() { return static_cast<int32_t>(offsetof(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_StaticFields, ___inst_4)); }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * get_inst_4() const { return ___inst_4; }
	inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D ** get_address_of_inst_4() { return &___inst_4; }
	inline void set_inst_4(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * value)
	{
		___inst_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  m_Items[1];

public:
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<FindMatch>d__23>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m558274562DE1B32E8F3F142CFAAD80B6525090A7_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<SendWebSocketMessage>d__27>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m59D79F975B96A6C07C7D8D561ADF4CBDC1EBE262_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<OnApplicationQuit>d__28>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_mA7E6DE25D54AE2A6FEDC05852F27600A585E98C2_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<QuitGame>d__29>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_m619C104D9B49B0106971200A2D9DAD98FE26AA05_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<FindMatch>d__23>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m26DB4FFCCAB3CCAA08D8702343EBEE78DD76D9EF_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<OnApplicationQuit>d__28>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_m6D5076B05B8ACA0BF338FF6160D782A52865DE7B_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<QuitGame>d__29>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_mF009C045178E7F9D890EE8AF498262795325400A_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<SendWebSocketMessage>d__27>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m222573B9171DC19CC9ABBA84B74DBB64269E8B77_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * ___stateMachine1, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* Collision2D_get_contacts_m81A37C7FA34C8DE0B0C71F0C586F13BFACC1BFF5 (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.ContactPoint2D::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ContactPoint2D_get_normal_mC001581D9A15A2E6DA20B96C05482385621EF8DB (ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void GameMessage::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage__ctor_mF00F60366C2B7158614C55D51E3BFFA7CCCB7CDA (GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * __this, String_t* ___actionIn0, String_t* ___opcodeIn1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<PlayerPositionMessage>::.ctor()
inline void Queue_1__ctor_m71B3C746A5960FD4F6FDD82FA35BA71D3497E8AB (Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// WebSocketService WebSocketService::instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * WebSocketService_instance_m3E262BB51ECCD536CA6B8877E15B6A3A7DC1265F (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<PlayerPositionMessage>::get_Count()
inline int32_t Queue_1_get_Count_m811AEB6D85B295D5930CE1E8F32F4E3B2DF77DBC_inline (Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<PlayerPositionMessage>::Dequeue()
inline PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * Queue_1_Dequeue_m6370790D95F13816C7B24E4F0DD0BF65C63DB8AB (Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * __this, const RuntimeMethod* method)
{
	return ((  PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * (*) (Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// UnityEngine.Vector3 SerializableVector3::op_Implicit(SerializableVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SerializableVector3_op_Implicit_m24A5A84E8040CE77EC0BB2BC24BC0AD6A08233FD (SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ___rValue0, const RuntimeMethod* method);
// UnityEngine.Quaternion SerializableQuaternion::op_Implicit(SerializableQuaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SerializableQuaternion_op_Implicit_m0E31AA68124EF0ECDC1F80564F70CE3B016E91AB (SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ___rValue0, const RuntimeMethod* method);
// System.Void Enemy::SetTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_SetTransform_mF5C6641C63BE765CB8B13F476C1D6EF16DCB029F (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Enemy::trackStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_trackStart_m2699620469A30445F2B81C35499E5E9875FD31E8 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::trackStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_trackStop_m756296B3A6D676F708039EEC423AC51DD36D54FE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<PlayerPositionMessage>::Enqueue(!0)
inline void Queue_1_Enqueue_mDBFA7832063BE5AB30300E1823C40282F95D0650 (Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * __this, PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 *, PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void MenuPlayerController::PlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPlayerController_PlayerMove_mE5D547A106D116605465831C5006607F31E11D57 (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C (String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void MenuPlayerController::trackStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPlayerController_trackStart_m9032954C85397E8ACE57A54EEE071317DFC9963D (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// System.Void MenuPlayerController::trackStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPlayerController_trackStop_m2C35C4141AD966B3133F0CC7CE8D7A392C14383E (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToViewportPoint_m0300D4845234BDBE1A1D08CF493966C57F6D4D8A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single MenuPlayerController::AngleBetweenTwoPoints(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MenuPlayerController_AngleBetweenTwoPoints_m688DA7409828B941A5003753E34767A45F5CDA5F (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void MenuShooting::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuShooting_Shoot_mD4D1A9B24EEEAFE77B9EF2617F60E42C22875339 (MenuShooting_t46EC8571ECC4DF9D165DE5D3D3AE0DF4E5912365 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Void WebSocketService::SendEndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendEndGame_m99873362FCA5B199283DDF20BD9B6D9933D02896 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method);
// System.Void PlayerController::PlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_PlayerMove_m43C108D8FED1F1B81F90EA89108BD7CCB817B08A (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::trackStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_trackStart_m3A356AF584301DF0751B1F89AD385B94D3F2ADE3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::trackStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_trackStop_mD306D7452D332B275190F301C8A59C7BEC0391D6 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void WebSocketService::SendPosition(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendPosition_m6CF48BAE0106DB3ACF15EDFBCE784AED3F1F82E5 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___gunRot2, String_t* ___moving3, int32_t ___seq4, const RuntimeMethod* method);
// System.Single PlayerController::AngleBetweenTwoPoints(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_AngleBetweenTwoPoints_m6E698EE9B505034C339D82C969EECE5C5AADAAE3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// SerializableVector3 SerializableVector3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  SerializableVector3_op_Implicit_m00DCEF3FFD4570A07610C14D89EDEDC1C56B870A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rValue0, const RuntimeMethod* method);
// SerializableQuaternion SerializableQuaternion::op_Implicit(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  SerializableQuaternion_op_Implicit_m3853822162CBFC9729BD2511D7646A20B5F4DD9F (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rValue0, const RuntimeMethod* method);
// System.Void WebSocketService::SendShoot(SerializableVector3,SerializableQuaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendShoot_m570E5642565F00AD63CE7206742FA280F5AD1988 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ___pos0, SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ___rot1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<StartText>()
inline StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC * Component_GetComponent_TisStartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC_m9F29DB2D1A3F74AA0C842702E56D722630379E22 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void StartText::StartCountDown(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartText_StartCountDown_mEE136C2686953CF1C21D5AA86118E10BE145C8E4 (StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____player0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void PlayerController::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Explode_m06457470F8D68A302AB37EAA5C3B9A34BB90532A (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Enemy::BufferState(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_BufferState_mBE4B6345B25D4237A301384027BCA9CCFA87CBB6 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * ___state0, const RuntimeMethod* method);
// System.Void SerializableQuaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableQuaternion__ctor_m3CBB6D6F8E96D951B27F90D7082B5E32F0415612 (SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String SerializableQuaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableQuaternion_ToString_m3F2E6507367BBA0B8048EF1DFCBDB4D456CFDDCB (SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void SerializableVector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector3__ctor_m0E28702EE219C78D26170284BE294180B9EA8B1D (SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 * __this, float ___rX0, float ___rY1, float ___rZ2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String SerializableVector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableVector3_ToString_mED609B686A182780B5DEEC21E7F41B9772868B4D (SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 * __this, const RuntimeMethod* method);
// System.Single SerializableVector3::NullCheckParse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SerializableVector3_NullCheckParse_mE52A526C77D8DAC938C5D5D3B1C22D355522AE00 (String_t* ___valueToCheck0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Void PlayerController::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Shoot_m5CB8DCC4363201A5461EA10BD9A248642A2676D8 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(!0)
inline void Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<WebSocketService>()
inline WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * GameObject_GetComponent_TisWebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_m63389AE35ACCA57315F8D5986E26AB48D2B943E6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<GameMessage>(System.String)
inline GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * JsonUtility_FromJson_TisGameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_mA1A470F019B0F63BA2ABD85CBAF76257520F1F55 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<PlayerPositionMessage>(System.String)
inline PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * JsonUtility_FromJson_TisPlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_m2C9C410026AEC95EA83632D3F2B0A756FF4D65AC (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void PositionManager::initPlayers(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionManager_initPlayers_m42C597CA9EA9AAEF9E0EEEC6A6BC17FC14837ACE (PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * __this, PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * ___message0, const RuntimeMethod* method);
// System.Void PositionManager::updateEnemy(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionManager_updateEnemy_mA7B016B7875FEB926DD1623ADDB8811A780A5A49 (PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * __this, PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<BulletMessage>(System.String)
inline BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * JsonUtility_FromJson_TisBulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F_m2E4ACA5CFFEFCDA0FEF19742B52F201ED704812E (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void PositionManager::fireBullet(BulletMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionManager_fireBullet_mF48B8D699C75ED38C33C23640BD0913BD25FFB2C (PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * __this, BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * ___message0, const RuntimeMethod* method);
// System.Void GameManager::GameOver(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m213AEA5D6E5D8DFB5C44F022B0B21170965D2AAA (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___result0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m325ED7AC2AA203CE001F34771CF44E2967789233 (WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mD9939050E60A6C1E6CE5EEA72AE2DC2C185D5477 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * ___value0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_m371B05DEE7C1CA86F1ECEAA05C370A84F670D457 (WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m9920C8E00FFF1F6FA11B26E86C6A4BD5E1888CB6 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * ___value0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_mD0F3B091413932ED22FC108C658F953EA665A8A9 (WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m6BE396A6ED1DB43D1920E600FDA91C02DE589C68 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * ___value0, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_mE4260E4AF3F33DC56BF0C37052979EBE1BF60D66 (WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_m6E023A4B59828FAF55089BBA1B0BBE36B1796BAD (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * ___value0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<FindMatch>d__23>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m558274562DE1B32E8F3F142CFAAD80B6525090A7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m558274562DE1B32E8F3F142CFAAD80B6525090A7_gshared)(__this, ___stateMachine0, method);
}
// System.Void PlayerPositionMessage::.ctor(System.String,System.String,SerializableQuaternion,SerializableQuaternion,SerializableVector3,SerializableVector3,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPositionMessage__ctor_mF09C95BB2F1DD755F202D93C6E00D12CDDD1C513 (PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * __this, String_t* ___actionIn0, String_t* ___opcodeIn1, SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ____gunRot2, SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ____currentRot3, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ____currentPos4, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ____enemyPos5, String_t* ___playerIn6, String_t* ____moving7, int32_t ____seq8, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void WebSocketService::SendWebSocketMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendWebSocketMessage_mEC4FC0D418E2805EC2B6EA419E7A93D16E2F6413 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void BulletMessage::.ctor(System.String,System.String,SerializableQuaternion,SerializableVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletMessage__ctor_mA7CCC9D3233CF50879927B4E34395E19A8BA16EE (BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * __this, String_t* ___actionIn0, String_t* ___opcodeIn1, SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ____gunDir2, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ____firepoint3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<SendWebSocketMessage>d__27>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m59D79F975B96A6C07C7D8D561ADF4CBDC1EBE262 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m59D79F975B96A6C07C7D8D561ADF4CBDC1EBE262_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<OnApplicationQuit>d__28>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_mA7E6DE25D54AE2A6FEDC05852F27600A585E98C2 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_mA7E6DE25D54AE2A6FEDC05852F27600A585E98C2_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WebSocketService/<QuitGame>d__29>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_m619C104D9B49B0106971200A2D9DAD98FE26AA05 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_m619C104D9B49B0106971200A2D9DAD98FE26AA05_gshared)(__this, ___stateMachine0, method);
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m872CB20817CBB5F78609C18BC357AEAD02A6C0E3 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, String_t* ___url0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, const RuntimeMethod* method);
// System.Void WebSocketService::SetupWebsocketCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SetupWebsocketCallbacks_m747101C5896674122C0AC425AD1C03F41586AAF9 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method);
// System.Void WebSocketService::FindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_FindMatch_m29E6345CB0231E5FEF95234AC0D39F98A823D8A3 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityMainThreadHelper::AddJob(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper_AddJob_m0CA145632BBFE36177E0F9B11C219F4A23B806C6 (UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___newJob0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void WebSocketService::ProcessReceivedMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_ProcessReceivedMessage_m25C80EDF85AC359F6F3B6E6E4BC0A6642807B240 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void WebSocketService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m35A2EBA42DDBA2FFA07EAA907AA9538A215ED292 (U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Connect_m7E2E576BBD0B0DB1E024C6D0BE3CEF170635BE4C (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<FindMatch>d__23>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m26DB4FFCCAB3CCAA08D8702343EBEE78DD76D9EF (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m26DB4FFCCAB3CCAA08D8702343EBEE78DD76D9EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void WebSocketService/<FindMatch>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMatchU3Ed__23_MoveNext_mCDDD1D5D7BA2BFE5E7CBCB1D6EA1354B029FE262 (U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void WebSocketService/<FindMatch>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMatchU3Ed__23_SetStateMachine_mF10886E43ECBE1CCDD97931F740B42485DDC69BA (U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_Close_mF67DE0E6137D1B6AB7E237BE2C4135A903F9FC46 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, int32_t ___code0, String_t* ___reason1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<OnApplicationQuit>d__28>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_m6D5076B05B8ACA0BF338FF6160D782A52865DE7B (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_m6D5076B05B8ACA0BF338FF6160D782A52865DE7B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebSocketService/<OnApplicationQuit>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__28_MoveNext_mCB2FBF7A249A5B29556914290A24D7311C37CA49 (U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * __this, const RuntimeMethod* method);
// System.Void WebSocketService/<OnApplicationQuit>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__28_SetStateMachine_m160B78D7DD9576492DA0BBF43A5ACD8E97AC02C9 (U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<QuitGame>d__29>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_mF009C045178E7F9D890EE8AF498262795325400A (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_mF009C045178E7F9D890EE8AF498262795325400A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebSocketService/<QuitGame>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuitGameU3Ed__29_MoveNext_m910173F4D316CB3E8A146943FB4E8354514A75DA (U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * __this, const RuntimeMethod* method);
// System.Void WebSocketService/<QuitGame>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuitGameU3Ed__29_SetStateMachine_m26C35127E96BE0FA588C678E15AC59F2F601AB83 (U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m59AC9A094AC30B55E691F7E59CC23D63E4782C33 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WebSocket_SendText_m29F8B764DFAB1435F66E3D7982996D50E1F8D169 (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WebSocketService/<SendWebSocketMessage>d__27>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m222573B9171DC19CC9ABBA84B74DBB64269E8B77 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m222573B9171DC19CC9ABBA84B74DBB64269E8B77_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void WebSocketService/<SendWebSocketMessage>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebSocketMessageU3Ed__27_MoveNext_m1A7B7C37137EA011323B584DF336103FA4E8DDC6 (U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * __this, const RuntimeMethod* method);
// System.Void WebSocketService/<SendWebSocketMessage>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebSocketMessageU3Ed__27_SetStateMachine_mF1EF2AA425059DE285A847A375531B36416003A5 (U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Void Bullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Start_m58181B46F80FE1ABECE1AFF455C253B51B7EB0E4 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// rb.AddForce(transform.up * force, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_force_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_0, L_5, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Update_mB82408CA535D8533168045E7C0321090448B596B (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (transform.position.magnitude > maxDist)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_3 = __this->get_maxDist_9();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(bullet);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_bullet_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Bullet::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_OnCollisionEnter2D_m4CC80D190EE3A6B6E2EDA524A121942D0285D0A9 (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (numHits == maxHits || collision.gameObject.tag == "Bullet" || collision.gameObject.tag == "Tank")
		int32_t L_0 = __this->get_numHits_10();
		int32_t L_1 = __this->get_maxHits_4();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_003c;
		}
	}
	{
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_2 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_6 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral8E34B6D1A15C712D6743BB63178D85EBE9EE182D, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0073;
		}
	}

IL_003c:
	{
		// GameObject exp = Instantiate(explosion, transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_explosion_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_12, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(exp, 0.5f);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_15, (0.5f), /*hidden argument*/NULL);
		// Destroy(bullet);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_bullet_6();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0073:
	{
		// Vector3 norm = collision.contacts[0].normal;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_17 = ___collision0;
		ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* L_18;
		L_18 = Collision2D_get_contacts_m81A37C7FA34C8DE0B0C71F0C586F13BFACC1BFF5(L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = ContactPoint2D_get_normal_mC001581D9A15A2E6DA20B96C05482385621EF8DB((ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 *)((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		// rb.AddForce(norm.normalized * (force - 5), ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_21 = __this->get_rb_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_23 = __this->get_force_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, ((float)il2cpp_codegen_subtract((float)L_23, (float)(5.0f))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_24, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_21, L_25, 1, /*hidden argument*/NULL);
		// ++numHits;
		int32_t L_26 = __this->get_numHits_10();
		__this->set_numHits_10(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mC7D931FE508342F413FBA79525A4819D4114B3EC (Bullet_tF95A945B732B2B929938FB1028878BFBC0081724 * __this, const RuntimeMethod* method)
{
	{
		// public int maxHits = 2;
		__this->set_maxHits_4(2);
		// public float force = 30f;
		__this->set_force_8((30.0f));
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
// System.Void BulletMessage::.ctor(System.String,System.String,SerializableQuaternion,SerializableVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletMessage__ctor_mA7CCC9D3233CF50879927B4E34395E19A8BA16EE (BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * __this, String_t* ___actionIn0, String_t* ___opcodeIn1, SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ____gunDir2, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ____firepoint3, const RuntimeMethod* method)
{
	{
		// : base(actionIn, opcodeIn)
		String_t* L_0 = ___actionIn0;
		String_t* L_1 = ___opcodeIn1;
		GameMessage__ctor_mF00F60366C2B7158614C55D51E3BFFA7CCCB7CDA(__this, L_0, L_1, /*hidden argument*/NULL);
		// gunDir = _gunDir;
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_2 = ____gunDir2;
		__this->set_gunDir_6(L_2);
		// firePoint = _firepoint;
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_3 = ____firepoint3;
		__this->set_firePoint_7(L_3);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m71B3C746A5960FD4F6FDD82FA35BA71D3497E8AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3719A12CE3D4CB872A68B58FA16D30463FA55458);
		s_Il2CppMethodInitialized = true;
	}
	{
		// seq = 0;
		__this->set_seq_15(0);
		// enemyPositionMessageQueue = new Queue<PlayerPositionMessage>();
		Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * L_0 = (Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 *)il2cpp_codegen_object_new(Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0_il2cpp_TypeInfo_var);
		Queue_1__ctor_m71B3C746A5960FD4F6FDD82FA35BA71D3497E8AB(L_0, /*hidden argument*/Queue_1__ctor_m71B3C746A5960FD4F6FDD82FA35BA71D3497E8AB_RuntimeMethod_var);
		__this->set_enemyPositionMessageQueue_10(L_0);
		// desiredPosition = enemy.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_enemy_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		__this->set_desiredPosition_11(L_3);
		// desiredRotation = Body.transform.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Body_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		__this->set_desiredRotation_12(L_6);
		// desiredGunRotation = Gun.transform.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_Gun_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		__this->set_desiredGunRotation_13(L_9);
		// Debug.Log("Enemy start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3719A12CE3D4CB872A68B58FA16D30463FA55458, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Explode_m1E89D7718EB085DB196A639953F8C8AA6263AFC9 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 expPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// expPos.z = -6;
		(&V_0)->set_z_4((-6.0f));
		// GameObject exp = Instantiate(explosion, expPos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_explosion_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_2, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Body.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Body_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// Gun.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_Gun_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// exp.transform.localScale = new Vector3(10, 10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_9), (10.0f), (10.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FixedUpdate_m66DA7C35B28A130AF6359CE888D789DC85FF18FE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m6370790D95F13816C7B24E4F0DD0BF65C63DB8AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m811AEB6D85B295D5930CE1E8F32F4E3B2DF77DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331);
		s_Il2CppMethodInitialized = true;
	}
	PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * V_0 = NULL;
	{
		// if (WebSocketService.instance().matchInitialized && enemyPositionMessageQueue != null)
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_0;
		L_0 = WebSocketService_instance_m3E262BB51ECCD536CA6B8877E15B6A3A7DC1265F(/*hidden argument*/NULL);
		bool L_1 = L_0->get_matchInitialized_8();
		if (!L_1)
		{
			goto IL_009c;
		}
	}
	{
		Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * L_2 = __this->get_enemyPositionMessageQueue_10();
		if (!L_2)
		{
			goto IL_009c;
		}
	}
	{
		// if (enemyPositionMessageQueue.Count != 0)
		Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * L_3 = __this->get_enemyPositionMessageQueue_10();
		int32_t L_4;
		L_4 = Queue_1_get_Count_m811AEB6D85B295D5930CE1E8F32F4E3B2DF77DBC_inline(L_3, /*hidden argument*/Queue_1_get_Count_m811AEB6D85B295D5930CE1E8F32F4E3B2DF77DBC_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0096;
		}
	}
	{
		// PlayerPositionMessage enemyPositionToRender = enemyPositionMessageQueue.Dequeue();
		Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * L_5 = __this->get_enemyPositionMessageQueue_10();
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_6;
		L_6 = Queue_1_Dequeue_m6370790D95F13816C7B24E4F0DD0BF65C63DB8AB(L_5, /*hidden argument*/Queue_1_Dequeue_m6370790D95F13816C7B24E4F0DD0BF65C63DB8AB_RuntimeMethod_var);
		V_0 = L_6;
		// if (enemyPositionToRender.seq >= seq)
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_7 = V_0;
		int32_t L_8 = L_7->get_seq_10();
		int32_t L_9 = __this->get_seq_15();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0096;
		}
	}
	{
		// desiredPosition = enemyPositionToRender.currentPos;
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_10 = V_0;
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_11 = L_10->get_currentPos_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = SerializableVector3_op_Implicit_m24A5A84E8040CE77EC0BB2BC24BC0AD6A08233FD(L_11, /*hidden argument*/NULL);
		__this->set_desiredPosition_11(L_12);
		// desiredRotation = enemyPositionToRender.currentRot;
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_13 = V_0;
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_14 = L_13->get_currentRot_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = SerializableQuaternion_op_Implicit_m0E31AA68124EF0ECDC1F80564F70CE3B016E91AB(L_14, /*hidden argument*/NULL);
		__this->set_desiredRotation_12(L_15);
		// desiredGunRotation = enemyPositionToRender.gunRot;
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_16 = V_0;
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_17 = L_16->get_gunRot_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = SerializableQuaternion_op_Implicit_m0E31AA68124EF0ECDC1F80564F70CE3B016E91AB(L_17, /*hidden argument*/NULL);
		__this->set_desiredGunRotation_13(L_18);
		// moving = enemyPositionToRender.moving == "yes";
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_19 = V_0;
		String_t* L_20 = L_19->get_moving_12();
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331, /*hidden argument*/NULL);
		__this->set_moving_14(L_21);
		// seq = enemyPositionToRender.seq;
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_22 = V_0;
		int32_t L_23 = L_22->get_seq_10();
		__this->set_seq_15(L_23);
	}

IL_0096:
	{
		// SetTransform();
		Enemy_SetTransform_mF5C6641C63BE765CB8B13F476C1D6EF16DCB029F(__this, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void Enemy::SetTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_SetTransform_mF5C6641C63BE765CB8B13F476C1D6EF16DCB029F (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// Gun.transform.rotation = desiredGunRotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Gun_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = __this->get_desiredGunRotation_13();
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_1, L_2, /*hidden argument*/NULL);
		// enemy.transform.position = Vector3.Lerp(enemy.transform.position, desiredPosition, maxSpeed * Time.fixedDeltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_enemy_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_enemy_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_desiredPosition_11();
		float L_9 = __this->get_maxSpeed_16();
		float L_10;
		L_10 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_7, L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_11, /*hidden argument*/NULL);
		// Body.transform.rotation = Quaternion.Lerp(Body.transform.rotation, desiredRotation, rotationSpeed * Time.fixedDeltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_Body_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Body_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = __this->get_desiredRotation_12();
		float L_18 = __this->get_rotationSpeed_17();
		float L_19;
		L_19 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_16, L_17, ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_13, L_20, /*hidden argument*/NULL);
		// if (moving)
		bool L_21 = __this->get_moving_14();
		if (!L_21)
		{
			goto IL_0093;
		}
	}
	{
		// trackStart();
		Enemy_trackStart_m2699620469A30445F2B81C35499E5E9875FD31E8(__this, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_0093:
	{
		// trackStop();
		Enemy_trackStop_m756296B3A6D676F708039EEC423AC51DD36D54FE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::trackStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_trackStart_m2699620469A30445F2B81C35499E5E9875FD31E8 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackLeft.animator.SetBool("isMoving", true);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_0 = __this->get_trackLeft_8();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = L_0->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)1, /*hidden argument*/NULL);
		// trackRight.animator.SetBool("isMoving", true);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_2 = __this->get_trackRight_9();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = L_2->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::trackStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_trackStop_m756296B3A6D676F708039EEC423AC51DD36D54FE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackLeft.animator.SetBool("isMoving", false);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_0 = __this->get_trackLeft_8();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = L_0->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, /*hidden argument*/NULL);
		// trackRight.animator.SetBool("isMoving", false);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_2 = __this->get_trackRight_9();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = L_2->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::BufferState(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_BufferState_mBE4B6345B25D4237A301384027BCA9CCFA87CBB6 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mDBFA7832063BE5AB30300E1823C40282F95D0650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state.opcode == WebSocketService.OpponentPositionOp)
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_0 = ___state0;
		String_t* L_1 = ((GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD *)L_0)->get_opcode_1();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// enemyPositionMessageQueue.Enqueue(state);
		Queue_1_t3D283DAA1C1028C7921E2980C43E9E15E2AA7EE0 * L_3 = __this->get_enemyPositionMessageQueue_10();
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_4 = ___state0;
		Queue_1_Enqueue_mDBFA7832063BE5AB30300E1823C40282F95D0650(L_3, L_4, /*hidden argument*/Queue_1_Enqueue_mDBFA7832063BE5AB30300E1823C40282F95D0650_RuntimeMethod_var);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
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
// System.Void FindNewMatch::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindNewMatch_PlayGame_m08FC967C522A1803E36B467C8611C60102458ACB (FindNewMatch_tC9BA84B269FB3F95303C8D424EBD623C03DAE196 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA8B20EDD69893CF1CEBDDBAF0C6049C9F2D64E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Button Pressed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8EA8B20EDD69893CF1CEBDDBAF0C6049C9F2D64E, /*hidden argument*/NULL);
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FindNewMatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindNewMatch__ctor_m171A1B0E7E06ED066B9C47AD56209EF6DE02AD15 (FindNewMatch_tC9BA84B269FB3F95303C8D424EBD623C03DAE196 * __this, const RuntimeMethod* method)
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
// System.Void GameManager::GameOver(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m213AEA5D6E5D8DFB5C44F022B0B21170965D2AAA (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (result == WIN)
		int32_t L_0 = ___result0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_000a:
	{
		// else if (result == LOST)
		int32_t L_1 = ___result0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// SceneManager.LoadScene(3);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(3, /*hidden argument*/NULL);
		// } else if (result == DISCONNECT)
		return;
	}

IL_0015:
	{
		// } else if (result == DISCONNECT)
		int32_t L_2 = ___result0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		// SceneManager.LoadScene(4);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(4, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
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
// System.Void GameMessage::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage__ctor_mF00F60366C2B7158614C55D51E3BFFA7CCCB7CDA (GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * __this, String_t* ___actionIn0, String_t* ___opcodeIn1, const RuntimeMethod* method)
{
	{
		// public GameMessage(string actionIn, string opcodeIn)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// action = actionIn;
		String_t* L_0 = ___actionIn0;
		__this->set_action_4(L_0);
		// opcode = opcodeIn;
		String_t* L_1 = ___opcodeIn1;
		__this->set_opcode_1(L_1);
		// }
		return;
	}
}
// System.Void GameMessage::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMessage__ctor_m98198442DF70F5E536B9DDABF72E569E9AB2204C (GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * __this, String_t* ___actionIn0, String_t* ___opcodeIn1, String_t* ___messageIn2, const RuntimeMethod* method)
{
	{
		// public GameMessage(string actionIn, string opcodeIn, string messageIn)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// action = actionIn;
		String_t* L_0 = ___actionIn0;
		__this->set_action_4(L_0);
		// opcode = opcodeIn;
		String_t* L_1 = ___opcodeIn1;
		__this->set_opcode_1(L_1);
		// message = messageIn;
		String_t* L_2 = ___messageIn2;
		__this->set_message_2(L_2);
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
// System.Void Loading::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading_Update_m3387E377C5F2EB1A36FF2B0DD0ABE39E29368E93 (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeSinceLastDot > newDotTime)
		float L_0 = __this->get_timeSinceLastDot_7();
		float L_1 = __this->get_newDotTime_5();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_006a;
		}
	}
	{
		// timeSinceLastDot = 0;
		__this->set_timeSinceLastDot_7((0.0f));
		// if (numDots < maxDots)
		int32_t L_2 = __this->get_numDots_8();
		int32_t L_3 = __this->get_maxDots_6();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0044;
		}
	}
	{
		// text.text += ".";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_text_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4;
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// }
		goto IL_005b;
	}

IL_0044:
	{
		// numDots = 0;
		__this->set_numDots_8(0);
		// text.text = ".";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_text_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
	}

IL_005b:
	{
		// ++numDots;
		int32_t L_9 = __this->get_numDots_8();
		__this->set_numDots_8(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// }
		return;
	}

IL_006a:
	{
		// timeSinceLastDot += Time.deltaTime;
		float L_10 = __this->get_timeSinceLastDot_7();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeSinceLastDot_7(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		// }
		return;
	}
}
// System.Void Loading::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loading__ctor_mE163CCF6BD5A7EDA90F61A352261F32C2DE99FFB (Loading_t542C355848D80D69A1FC83B830887C7DE5C8A7A7 * __this, const RuntimeMethod* method)
{
	{
		// int numDots = 1;
		__this->set_numDots_8(1);
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
// System.Void MenuButton::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButton_PlayGame_m225F63D7EFE5D4E9CC3CAB705BCB57D66E4854CA (MenuButton_t9F2253D1B9D9400F6AC1F4878893041C8A932FD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA8B20EDD69893CF1CEBDDBAF0C6049C9F2D64E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Button Pressed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8EA8B20EDD69893CF1CEBDDBAF0C6049C9F2D64E, /*hidden argument*/NULL);
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButton__ctor_m811F6AFA6ACAF846AE821A670D8222920A070B05 (MenuButton_t9F2253D1B9D9400F6AC1F4878893041C8A932FD7 * __this, const RuntimeMethod* method)
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
// System.Void MenuPlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPlayerController_FixedUpdate_mEA327E5AB7940AE84089CF9E8662ECCE758D5A6F (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, const RuntimeMethod* method)
{
	{
		// PlayerMove();
		MenuPlayerController_PlayerMove_mE5D547A106D116605465831C5006607F31E11D57(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuPlayerController::trackStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPlayerController_trackStart_m9032954C85397E8ACE57A54EEE071317DFC9963D (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackLeft.animator.SetBool("isMoving", true);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_0 = __this->get_trackLeft_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = L_0->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)1, /*hidden argument*/NULL);
		// trackRight.animator.SetBool("isMoving", true);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_2 = __this->get_trackRight_5();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = L_2->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuPlayerController::trackStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPlayerController_trackStop_m2C35C4141AD966B3133F0CC7CE8D7A392C14383E (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackLeft.animator.SetBool("isMoving", false);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_0 = __this->get_trackLeft_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = L_0->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, /*hidden argument*/NULL);
		// trackRight.animator.SetBool("isMoving", false);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_2 = __this->get_trackRight_5();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = L_2->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuPlayerController::PlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPlayerController_PlayerMove_mE5D547A106D116605465831C5006607F31E11D57 (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * G_B10_0 = NULL;
	MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * G_B11_1 = NULL;
	{
		// Vector3 newDirection = new Vector3(0f, 0f, 0f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// bool acc = false;
		V_1 = (bool)0;
		// if (Input.GetKey(keyMoveForward))
		String_t* L_0 = __this->get_keyMoveForward_8();
		bool L_1;
		L_1 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// newDirection.y += 1;
		float* L_2 = (&V_0)->get_address_of_y_3();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		*((float*)L_3) = (float)((float)il2cpp_codegen_add((float)L_4, (float)(1.0f)));
		// acc = true;
		V_1 = (bool)1;
	}

IL_0037:
	{
		// if (Input.GetKey(keyMoveReverse))
		String_t* L_5 = __this->get_keyMoveReverse_9();
		bool L_6;
		L_6 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// newDirection.y -= 1;
		float* L_7 = (&V_0)->get_address_of_y_3();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_subtract((float)L_9, (float)(1.0f)));
		// acc = true;
		V_1 = (bool)1;
	}

IL_0056:
	{
		// if (Input.GetKey(keyMoveLeft))
		String_t* L_10 = __this->get_keyMoveLeft_11();
		bool L_11;
		L_11 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		// newDirection.x -= 1;
		float* L_12 = (&V_0)->get_address_of_x_2();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		*((float*)L_13) = (float)((float)il2cpp_codegen_subtract((float)L_14, (float)(1.0f)));
		// acc = true;
		V_1 = (bool)1;
	}

IL_0075:
	{
		// if (Input.GetKey(keyMoveRight))
		String_t* L_15 = __this->get_keyMoveRight_10();
		bool L_16;
		L_16 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		// newDirection.x += 1;
		float* L_17 = (&V_0)->get_address_of_x_2();
		float* L_18 = L_17;
		float L_19 = *((float*)L_18);
		*((float*)L_18) = (float)((float)il2cpp_codegen_add((float)L_19, (float)(1.0f)));
		// acc = true;
		V_1 = (bool)1;
	}

IL_0094:
	{
		// speed = Mathf.Clamp(acc ? speed + acceleration : speed - deceleration, 0f, maxSpeed);
		bool L_20 = V_1;
		G_B9_0 = __this;
		if (L_20)
		{
			G_B10_0 = __this;
			goto IL_00a7;
		}
	}
	{
		float L_21 = __this->get_speed_16();
		float L_22 = __this->get_deceleration_15();
		G_B11_0 = ((float)il2cpp_codegen_subtract((float)L_21, (float)L_22));
		G_B11_1 = G_B9_0;
		goto IL_00b4;
	}

IL_00a7:
	{
		float L_23 = __this->get_speed_16();
		float L_24 = __this->get_acceleration_14();
		G_B11_0 = ((float)il2cpp_codegen_add((float)L_23, (float)L_24));
		G_B11_1 = G_B10_0;
	}

IL_00b4:
	{
		float L_25 = __this->get_maxSpeed_12();
		float L_26;
		L_26 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(G_B11_0, (0.0f), L_25, /*hidden argument*/NULL);
		G_B11_1->set_speed_16(L_26);
		// newDirection.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// velocity = newDirection * speed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		float L_28 = __this->get_speed_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		__this->set_velocity_17(L_29);
		// transform.position += velocity * Time.fixedDeltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = L_30;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_velocity_17();
		float L_34;
		L_34 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_35, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_36, /*hidden argument*/NULL);
		// if (velocity != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_velocity_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_39;
		L_39 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0188;
		}
	}
	{
		// trackStart();
		MenuPlayerController_trackStart_m9032954C85397E8ACE57A54EEE071317DFC9963D(__this, /*hidden argument*/NULL);
		// float a = Mathf.Atan2(velocity.y, velocity.x) * Mathf.Rad2Deg - 90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_40 = __this->get_address_of_velocity_17();
		float L_41 = L_40->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = __this->get_address_of_velocity_17();
		float L_43 = L_42->get_x_2();
		float L_44;
		L_44 = atan2f(L_41, L_43);
		// Quaternion rotation = Quaternion.AngleAxis(a, Vector3.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_46;
		L_46 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_44, (float)(57.2957802f))), (float)(90.0f))), L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		// Body.transform.rotation = Quaternion.Lerp(Body.transform.rotation, rotation, rotationSpeed * Time.fixedDeltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_Body_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_Body_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_50, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_52 = V_5;
		float L_53 = __this->get_rotationSpeed_13();
		float L_54;
		L_54 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_51, L_52, ((float)il2cpp_codegen_multiply((float)L_53, (float)L_54)), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_48, L_55, /*hidden argument*/NULL);
		// }
		goto IL_018e;
	}

IL_0188:
	{
		// trackStop();
		MenuPlayerController_trackStop_m2C35C4141AD966B3133F0CC7CE8D7A392C14383E(__this, /*hidden argument*/NULL);
	}

IL_018e:
	{
		// Vector2 positionOnScreen = Camera.main.WorldToViewportPoint(transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_56;
		L_56 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D(L_56, L_58, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60;
		L_60 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_59, /*hidden argument*/NULL);
		V_2 = L_60;
		// Vector2 mouseOnScreen = (Vector2)Camera.main.ScreenToViewportPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_61;
		L_61 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Camera_ScreenToViewportPoint_m0300D4845234BDBE1A1D08CF493966C57F6D4D8A(L_61, L_62, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_63, /*hidden argument*/NULL);
		V_3 = L_64;
		// float angle = AngleBetweenTwoPoints(positionOnScreen, mouseOnScreen);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_65, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_67, /*hidden argument*/NULL);
		float L_69;
		L_69 = MenuPlayerController_AngleBetweenTwoPoints_m688DA7409828B941A5003753E34767A45F5CDA5F(__this, L_66, L_68, /*hidden argument*/NULL);
		V_4 = L_69;
		// Gun.transform.rotation = Quaternion.Euler(new Vector3(0f, 0f, angle + 90f));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = __this->get_Gun_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_70, /*hidden argument*/NULL);
		float L_72 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_73), (0.0f), (0.0f), ((float)il2cpp_codegen_add((float)L_72, (float)(90.0f))), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_74;
		L_74 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_73, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_71, L_74, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single MenuPlayerController::AngleBetweenTwoPoints(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MenuPlayerController_AngleBetweenTwoPoints_m688DA7409828B941A5003753E34767A45F5CDA5F (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	{
		// return Mathf.Atan2(a.y - b.y, a.x - b.x) * Mathf.Rad2Deg;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_x_2();
		float L_8;
		L_8 = atan2f(((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)));
		return ((float)il2cpp_codegen_multiply((float)L_8, (float)(57.2957802f)));
	}
}
// System.Void MenuPlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuPlayerController__ctor_m3D6DCD7425DFFF281FCA892DEDEC76DBB9026871 (MenuPlayerController_tE265CBCB258648A4D5051C54C524E1417D7C4E43 * __this, const RuntimeMethod* method)
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
// System.Void MenuShooting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuShooting_Update_m62C342424C0E8ECD3B6DE39AF715B43BEEABA2F9 (MenuShooting_t46EC8571ECC4DF9D165DE5D3D3AE0DF4E5912365 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Mouse0))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)323), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Shoot();
		MenuShooting_Shoot_mD4D1A9B24EEEAFE77B9EF2617F60E42C22875339(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void MenuShooting::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuShooting_Shoot_mD4D1A9B24EEEAFE77B9EF2617F60E42C22875339 (MenuShooting_t46EC8571ECC4DF9D165DE5D3D3AE0DF4E5912365 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_bulletPrefab_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_firePoint_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_firePoint_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MenuShooting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuShooting__ctor_m78A9A387442333EF52E915816EF1D2ED6D6B3886 (MenuShooting_t46EC8571ECC4DF9D165DE5D3D3AE0DF4E5912365 * __this, const RuntimeMethod* method)
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// seq = 0;
		__this->set_seq_23(0);
		// canMove = false;
		__this->set_canMove_20((bool)0);
		// manager = GameObject.Find("GameManager");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		__this->set_manager_8(L_0);
		// }
		return;
	}
}
// System.Void PlayerController::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Explode_m06457470F8D68A302AB37EAA5C3B9A34BB90532A (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 expPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// expPos.z = -6;
		(&V_0)->set_z_4((-6.0f));
		// GameObject exp = Instantiate(explosion, expPos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_explosion_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_2, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Body.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Body_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// Gun.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_Gun_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// exp.transform.localScale = new Vector3(10, 10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_9), (10.0f), (10.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m9A113567D03E9BFF74D8D1959B8C88124E03BBDE (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (collision.gameObject.tag == "Bullet")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007b;
		}
	}
	{
		// WebSocketService.instance().SendEndGame();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_4;
		L_4 = WebSocketService_instance_m3E262BB51ECCD536CA6B8877E15B6A3A7DC1265F(/*hidden argument*/NULL);
		WebSocketService_SendEndGame_m99873362FCA5B199283DDF20BD9B6D9933D02896(L_4, /*hidden argument*/NULL);
		// Vector3 expPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// expPos.z = -6;
		(&V_0)->set_z_4((-6.0f));
		// GameObject exp = Instantiate(explosion, expPos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_explosion_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_7, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Body.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_Body_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// Gun.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_Gun_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// exp.transform.localScale = new Vector3(10, 10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_14), (10.0f), (10.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_13, L_14, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m54EE3ADAA7597303B1F69849B233D1A68D880B14 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// if (canMove)
		bool L_0 = __this->get_canMove_20();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// PlayerMove();
		PlayerController_PlayerMove_m43C108D8FED1F1B81F90EA89108BD7CCB817B08A(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void PlayerController::trackStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_trackStart_m3A356AF584301DF0751B1F89AD385B94D3F2ADE3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackLeft.animator.SetBool("isMoving", true);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_0 = __this->get_trackLeft_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = L_0->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)1, /*hidden argument*/NULL);
		// trackRight.animator.SetBool("isMoving", true);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_2 = __this->get_trackRight_5();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = L_2->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::trackStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_trackStop_mD306D7452D332B275190F301C8A59C7BEC0391D6 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackLeft.animator.SetBool("isMoving", false);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_0 = __this->get_trackLeft_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = L_0->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, /*hidden argument*/NULL);
		// trackRight.animator.SetBool("isMoving", false);
		Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * L_2 = __this->get_trackRight_5();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = L_2->get_animator_4();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::PlayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_PlayerMove_m43C108D8FED1F1B81F90EA89108BD7CCB817B08A (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BFA33A11F0B12AF1B7FA1D9BA996EAE1EF77B49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B10_0 = NULL;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B11_1 = NULL;
	{
		// Vector3 newDirection = new Vector3(0f, 0f, 0f);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// bool acc = false;
		V_1 = (bool)0;
		// if (Input.GetKey(keyMoveForward))
		String_t* L_0 = __this->get_keyMoveForward_12();
		bool L_1;
		L_1 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// newDirection.y += 1;
		float* L_2 = (&V_0)->get_address_of_y_3();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		*((float*)L_3) = (float)((float)il2cpp_codegen_add((float)L_4, (float)(1.0f)));
		// acc = true;
		V_1 = (bool)1;
	}

IL_0037:
	{
		// if (Input.GetKey(keyMoveReverse))
		String_t* L_5 = __this->get_keyMoveReverse_13();
		bool L_6;
		L_6 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// newDirection.y -= 1;
		float* L_7 = (&V_0)->get_address_of_y_3();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_subtract((float)L_9, (float)(1.0f)));
		// acc = true;
		V_1 = (bool)1;
	}

IL_0056:
	{
		// if (Input.GetKey(keyMoveLeft))
		String_t* L_10 = __this->get_keyMoveLeft_15();
		bool L_11;
		L_11 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		// newDirection.x -= 1;
		float* L_12 = (&V_0)->get_address_of_x_2();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		*((float*)L_13) = (float)((float)il2cpp_codegen_subtract((float)L_14, (float)(1.0f)));
		// acc = true;
		V_1 = (bool)1;
	}

IL_0075:
	{
		// if (Input.GetKey(keyMoveRight))
		String_t* L_15 = __this->get_keyMoveRight_14();
		bool L_16;
		L_16 = Input_GetKey_m77E2F3719EC63690632731872A691FF6A27C589C(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		// newDirection.x += 1;
		float* L_17 = (&V_0)->get_address_of_x_2();
		float* L_18 = L_17;
		float L_19 = *((float*)L_18);
		*((float*)L_18) = (float)((float)il2cpp_codegen_add((float)L_19, (float)(1.0f)));
		// acc = true;
		V_1 = (bool)1;
	}

IL_0094:
	{
		// speed = Mathf.Clamp(acc ? speed + acceleration : speed - deceleration, 0f, maxSpeed);
		bool L_20 = V_1;
		G_B9_0 = __this;
		if (L_20)
		{
			G_B10_0 = __this;
			goto IL_00a7;
		}
	}
	{
		float L_21 = __this->get_speed_21();
		float L_22 = __this->get_deceleration_19();
		G_B11_0 = ((float)il2cpp_codegen_subtract((float)L_21, (float)L_22));
		G_B11_1 = G_B9_0;
		goto IL_00b4;
	}

IL_00a7:
	{
		float L_23 = __this->get_speed_21();
		float L_24 = __this->get_acceleration_18();
		G_B11_0 = ((float)il2cpp_codegen_add((float)L_23, (float)L_24));
		G_B11_1 = G_B10_0;
	}

IL_00b4:
	{
		float L_25 = __this->get_maxSpeed_16();
		float L_26;
		L_26 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(G_B11_0, (0.0f), L_25, /*hidden argument*/NULL);
		G_B11_1->set_speed_21(L_26);
		// newDirection.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// velocity = newDirection * speed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		float L_28 = __this->get_speed_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		__this->set_velocity_22(L_29);
		// transform.position += velocity * Time.fixedDeltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = L_30;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_velocity_22();
		float L_34;
		L_34 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_35, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_36, /*hidden argument*/NULL);
		// string isMoving = "no";
		V_2 = _stringLiteral7BFA33A11F0B12AF1B7FA1D9BA996EAE1EF77B49;
		// if (velocity != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_velocity_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_39;
		L_39 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0194;
		}
	}
	{
		// trackStart();
		PlayerController_trackStart_m3A356AF584301DF0751B1F89AD385B94D3F2ADE3(__this, /*hidden argument*/NULL);
		// isMoving = "yes";
		V_2 = _stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331;
		// float a = Mathf.Atan2(velocity.y, velocity.x) * Mathf.Rad2Deg - 90;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_40 = __this->get_address_of_velocity_22();
		float L_41 = L_40->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = __this->get_address_of_velocity_22();
		float L_43 = L_42->get_x_2();
		float L_44;
		L_44 = atan2f(L_41, L_43);
		// Quaternion rotation = Quaternion.AngleAxis(a, Vector3.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_46;
		L_46 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_44, (float)(57.2957802f))), (float)(90.0f))), L_45, /*hidden argument*/NULL);
		V_6 = L_46;
		// Body.transform.rotation = Quaternion.Lerp(Body.transform.rotation, rotation, rotationSpeed * Time.fixedDeltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_Body_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_Body_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_50, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_52 = V_6;
		float L_53 = __this->get_rotationSpeed_17();
		float L_54;
		L_54 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_51, L_52, ((float)il2cpp_codegen_multiply((float)L_53, (float)L_54)), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_48, L_55, /*hidden argument*/NULL);
		// }
		goto IL_019a;
	}

IL_0194:
	{
		// trackStop();
		PlayerController_trackStop_mD306D7452D332B275190F301C8A59C7BEC0391D6(__this, /*hidden argument*/NULL);
	}

IL_019a:
	{
		// if (seq % 2 == 0)
		int32_t L_56 = __this->get_seq_23();
		if (((int32_t)((int32_t)L_56%(int32_t)2)))
		{
			goto IL_01e0;
		}
	}
	{
		// WebSocketService.instance().SendPosition(transform.position, Body.transform.rotation, Gun.transform.rotation, isMoving, seq);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_57;
		L_57 = WebSocketService_instance_m3E262BB51ECCD536CA6B8877E15B6A3A7DC1265F(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_58, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = __this->get_Body_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_60, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62;
		L_62 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_61, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63 = __this->get_Gun_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_63, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_65;
		L_65 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_64, /*hidden argument*/NULL);
		String_t* L_66 = V_2;
		int32_t L_67 = __this->get_seq_23();
		WebSocketService_SendPosition_m6CF48BAE0106DB3ACF15EDFBCE784AED3F1F82E5(L_57, L_59, L_62, L_65, L_66, L_67, /*hidden argument*/NULL);
	}

IL_01e0:
	{
		// ++seq;
		int32_t L_68 = __this->get_seq_23();
		__this->set_seq_23(((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)));
		// Vector2 positionOnScreen = Camera.main.WorldToViewportPoint(transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_69;
		L_69 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_70, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D(L_69, L_71, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73;
		L_73 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_72, /*hidden argument*/NULL);
		V_3 = L_73;
		// Vector2 mouseOnScreen = (Vector2)Camera.main.ScreenToViewportPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_74;
		L_74 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Camera_ScreenToViewportPoint_m0300D4845234BDBE1A1D08CF493966C57F6D4D8A(L_74, L_75, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77;
		L_77 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_76, /*hidden argument*/NULL);
		V_4 = L_77;
		// float angle = AngleBetweenTwoPoints(positionOnScreen, mouseOnScreen);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_78 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_78, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_80, /*hidden argument*/NULL);
		float L_82;
		L_82 = PlayerController_AngleBetweenTwoPoints_m6E698EE9B505034C339D82C969EECE5C5AADAAE3(__this, L_79, L_81, /*hidden argument*/NULL);
		V_5 = L_82;
		// Gun.transform.rotation = Quaternion.Euler(new Vector3(0f, 0f, angle + 90f));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = __this->get_Gun_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_83, /*hidden argument*/NULL);
		float L_85 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		memset((&L_86), 0, sizeof(L_86));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_86), (0.0f), (0.0f), ((float)il2cpp_codegen_add((float)L_85, (float)(90.0f))), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_87;
		L_87 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_86, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_84, L_87, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single PlayerController::AngleBetweenTwoPoints(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_AngleBetweenTwoPoints_m6E698EE9B505034C339D82C969EECE5C5AADAAE3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	{
		// return Mathf.Atan2(a.y - b.y, a.x - b.x) * Mathf.Rad2Deg;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_x_2();
		float L_8;
		L_8 = atan2f(((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)));
		return ((float)il2cpp_codegen_multiply((float)L_8, (float)(57.2957802f)));
	}
}
// System.Void PlayerController::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Shoot_m5CB8DCC4363201A5461EA10BD9A248642A2676D8 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_bulletPrefab_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_firePoint_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_firePoint_10();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// WebSocketService.instance().SendShoot(firePoint.position, firePoint.rotation);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_6;
		L_6 = WebSocketService_instance_m3E262BB51ECCD536CA6B8877E15B6A3A7DC1265F(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_firePoint_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_9;
		L_9 = SerializableVector3_op_Implicit_m00DCEF3FFD4570A07610C14D89EDEDC1C56B870A(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_firePoint_10();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_12;
		L_12 = SerializableQuaternion_op_Implicit_m3853822162CBFC9729BD2511D7646A20B5F4DD9F(L_11, /*hidden argument*/NULL);
		WebSocketService_SendShoot_m570E5642565F00AD63CE7206742FA280F5AD1988(L_6, L_9, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
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
// System.Void PlayerPositionMessage::.ctor(System.String,System.String,SerializableQuaternion,SerializableQuaternion,SerializableVector3,SerializableVector3,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPositionMessage__ctor_mF09C95BB2F1DD755F202D93C6E00D12CDDD1C513 (PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * __this, String_t* ___actionIn0, String_t* ___opcodeIn1, SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ____gunRot2, SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ____currentRot3, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ____currentPos4, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ____enemyPos5, String_t* ___playerIn6, String_t* ____moving7, int32_t ____seq8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(actionIn, opcodeIn)
		String_t* L_0 = ___actionIn0;
		String_t* L_1 = ___opcodeIn1;
		GameMessage__ctor_mF00F60366C2B7158614C55D51E3BFFA7CCCB7CDA(__this, L_0, L_1, /*hidden argument*/NULL);
		// gunRot = _gunRot;
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_2 = ____gunRot2;
		__this->set_gunRot_6(L_2);
		// currentRot = _currentRot;
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_3 = ____currentRot3;
		__this->set_currentRot_7(L_3);
		// player = playerIn;
		String_t* L_4 = ___playerIn6;
		__this->set_player_11(L_4);
		// enemyPos = _enemyPos;
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_5 = ____enemyPos5;
		__this->set_enemyPos_9(L_5);
		// currentPos = _currentPos;
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_6 = ____currentPos4;
		__this->set_currentPos_8(L_6);
		// moving = '\"'+ _moving + '\"';
		String_t* L_7 = ____moving7;
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		__this->set_moving_12(L_8);
		// seq = _seq;
		int32_t L_9 = ____seq8;
		__this->set_seq_10(L_9);
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
// System.Void PositionManager::initPlayers(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionManager_initPlayers_m42C597CA9EA9AAEF9E0EEEC6A6BC17FC14837ACE (PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * __this, PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC_m9F29DB2D1A3F74AA0C842702E56D722630379E22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = Instantiate(playerPrefab, message.currentPos, message.currentRot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_playerPrefab_6();
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_1 = ___message0;
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_2 = L_1->get_currentPos_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = SerializableVector3_op_Implicit_m24A5A84E8040CE77EC0BB2BC24BC0AD6A08233FD(L_2, /*hidden argument*/NULL);
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_4 = ___message0;
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_5 = L_4->get_currentRot_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = SerializableQuaternion_op_Implicit_m0E31AA68124EF0ECDC1F80564F70CE3B016E91AB(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_player_5(L_7);
		// enemy = Instantiate(enemyPrefab, message.enemyPos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_enemyPrefab_7();
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_9 = ___message0;
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_10 = L_9->get_enemyPos_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = SerializableVector3_op_Implicit_m24A5A84E8040CE77EC0BB2BC24BC0AD6A08233FD(L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_8, L_11, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_enemy_4(L_13);
		// startText.GetComponent<StartText>().StartCountDown(player);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_startText_9();
		StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC * L_15;
		L_15 = Component_GetComponent_TisStartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC_m9F29DB2D1A3F74AA0C842702E56D722630379E22(L_14, /*hidden argument*/Component_GetComponent_TisStartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC_m9F29DB2D1A3F74AA0C842702E56D722630379E22_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_player_5();
		StartText_StartCountDown_mEE136C2686953CF1C21D5AA86118E10BE145C8E4(L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PositionManager::Explode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionManager_Explode_mF4DF1B052946EBB51BDFA900C56221987F28960E (PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * __this, String_t* ____player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_player == "player")
		String_t* L_0 = ____player0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// player.GetComponent<PlayerController>().Explode();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_player_5();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_3;
		L_3 = GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		PlayerController_Explode_m06457470F8D68A302AB37EAA5C3B9A34BB90532A(L_3, /*hidden argument*/NULL);
		// } else if (_player == "enemy")
		return;
	}

IL_001e:
	{
		// } else if (_player == "enemy")
		String_t* L_4 = ____player0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PositionManager::updateEnemy(PlayerPositionMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionManager_updateEnemy_mA7B016B7875FEB926DD1623ADDB8811A780A5A49 (PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * __this, PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemy.GetComponent<Enemy>().BufferState(message);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemy_4();
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1;
		L_1 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_0, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_2 = ___message0;
		Enemy_BufferState_mBE4B6345B25D4237A301384027BCA9CCFA87CBB6(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PositionManager::fireBullet(BulletMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionManager_fireBullet_mF48B8D699C75ED38C33C23640BD0913BD25FFB2C (PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * __this, BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(bulletPrefab, message.firePoint, message.gunDir);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_bulletPrefab_8();
		BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * L_1 = ___message0;
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_2 = L_1->get_firePoint_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = SerializableVector3_op_Implicit_m24A5A84E8040CE77EC0BB2BC24BC0AD6A08233FD(L_2, /*hidden argument*/NULL);
		BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * L_4 = ___message0;
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_5 = L_4->get_gunDir_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = SerializableQuaternion_op_Implicit_m0E31AA68124EF0ECDC1F80564F70CE3B016E91AB(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PositionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionManager__ctor_m0F8D084175F8CFB5A753472989BA00155E1A8A41 (PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * __this, const RuntimeMethod* method)
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
// System.Void SerializableQuaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableQuaternion__ctor_m3CBB6D6F8E96D951B27F90D7082B5E32F0415612 (SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		// x = rX;
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		// y = rY;
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		// z = rZ;
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		// w = rW;
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SerializableQuaternion__ctor_m3CBB6D6F8E96D951B27F90D7082B5E32F0415612_AdjustorThunk (RuntimeObject * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 * _thisAdjusted = reinterpret_cast<SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 *>(__this + _offset);
	SerializableQuaternion__ctor_m3CBB6D6F8E96D951B27F90D7082B5E32F0415612(_thisAdjusted, ___rX0, ___rY1, ___rZ2, ___rW3, method);
}
// System.String SerializableQuaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableQuaternion_ToString_m3F2E6507367BBA0B8048EF1DFCBDB4D456CFDDCB (SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA72FBABDDB1D1FF549FA5036D51CB34ACAE2A541);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return String.Format("[{0}, {1}, {2}, {3}]", x, y, z, w);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_3);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_7);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		float L_10 = __this->get_z_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		float L_14 = __this->get_w_3();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17;
		L_17 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralA72FBABDDB1D1FF549FA5036D51CB34ACAE2A541, L_13, /*hidden argument*/NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* SerializableQuaternion_ToString_m3F2E6507367BBA0B8048EF1DFCBDB4D456CFDDCB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 * _thisAdjusted = reinterpret_cast<SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SerializableQuaternion_ToString_m3F2E6507367BBA0B8048EF1DFCBDB4D456CFDDCB(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Quaternion SerializableQuaternion::op_Implicit(SerializableQuaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SerializableQuaternion_op_Implicit_m0E31AA68124EF0ECDC1F80564F70CE3B016E91AB (SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ___rValue0, const RuntimeMethod* method)
{
	{
		// return new Quaternion(rValue.x, rValue.y, rValue.z, rValue.w);
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_0 = ___rValue0;
		float L_1 = L_0.get_x_0();
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_2 = ___rValue0;
		float L_3 = L_2.get_y_1();
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_4 = ___rValue0;
		float L_5 = L_4.get_z_2();
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_6 = ___rValue0;
		float L_7 = L_6.get_w_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// SerializableQuaternion SerializableQuaternion::op_Implicit(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  SerializableQuaternion_op_Implicit_m3853822162CBFC9729BD2511D7646A20B5F4DD9F (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rValue0, const RuntimeMethod* method)
{
	{
		// return new SerializableQuaternion(rValue.x, rValue.y, rValue.z, rValue.w);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___rValue0;
		float L_1 = L_0.get_x_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___rValue0;
		float L_3 = L_2.get_y_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___rValue0;
		float L_5 = L_4.get_z_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = ___rValue0;
		float L_7 = L_6.get_w_3();
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_8;
		memset((&L_8), 0, sizeof(L_8));
		SerializableQuaternion__ctor_m3CBB6D6F8E96D951B27F90D7082B5E32F0415612((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
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
// Conversion methods for marshalling of: SerializableVector3
IL2CPP_EXTERN_C void SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshal_pinvoke(const SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4& unmarshaled, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshaled_pinvoke& marshaled)
{
	marshaled.___x_0 = il2cpp_codegen_marshal_string(unmarshaled.get_x_0());
	marshaled.___y_1 = il2cpp_codegen_marshal_string(unmarshaled.get_y_1());
	marshaled.___z_2 = il2cpp_codegen_marshal_string(unmarshaled.get_z_2());
}
IL2CPP_EXTERN_C void SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshal_pinvoke_back(const SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshaled_pinvoke& marshaled, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4& unmarshaled)
{
	unmarshaled.set_x_0(il2cpp_codegen_marshal_string_result(marshaled.___x_0));
	unmarshaled.set_y_1(il2cpp_codegen_marshal_string_result(marshaled.___y_1));
	unmarshaled.set_z_2(il2cpp_codegen_marshal_string_result(marshaled.___z_2));
}
// Conversion method for clean up from marshalling of: SerializableVector3
IL2CPP_EXTERN_C void SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshal_pinvoke_cleanup(SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___x_0);
	marshaled.___x_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___y_1);
	marshaled.___y_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___z_2);
	marshaled.___z_2 = NULL;
}
// Conversion methods for marshalling of: SerializableVector3
IL2CPP_EXTERN_C void SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshal_com(const SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4& unmarshaled, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshaled_com& marshaled)
{
	marshaled.___x_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_x_0());
	marshaled.___y_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_y_1());
	marshaled.___z_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_z_2());
}
IL2CPP_EXTERN_C void SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshal_com_back(const SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshaled_com& marshaled, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4& unmarshaled)
{
	unmarshaled.set_x_0(il2cpp_codegen_marshal_bstring_result(marshaled.___x_0));
	unmarshaled.set_y_1(il2cpp_codegen_marshal_bstring_result(marshaled.___y_1));
	unmarshaled.set_z_2(il2cpp_codegen_marshal_bstring_result(marshaled.___z_2));
}
// Conversion method for clean up from marshalling of: SerializableVector3
IL2CPP_EXTERN_C void SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshal_com_cleanup(SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___x_0);
	marshaled.___x_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___y_1);
	marshaled.___y_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___z_2);
	marshaled.___z_2 = NULL;
}
// System.Void SerializableVector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector3__ctor_m0E28702EE219C78D26170284BE294180B9EA8B1D (SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 * __this, float ___rX0, float ___rY1, float ___rZ2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// x = rX.ToString("f3");
		String_t* L_0;
		L_0 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___rX0), _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		__this->set_x_0(L_0);
		// y = rY.ToString("f3");
		String_t* L_1;
		L_1 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___rY1), _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		__this->set_y_1(L_1);
		// z = rZ.ToString("f3");
		String_t* L_2;
		L_2 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___rZ2), _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, /*hidden argument*/NULL);
		__this->set_z_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SerializableVector3__ctor_m0E28702EE219C78D26170284BE294180B9EA8B1D_AdjustorThunk (RuntimeObject * __this, float ___rX0, float ___rY1, float ___rZ2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 * _thisAdjusted = reinterpret_cast<SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 *>(__this + _offset);
	SerializableVector3__ctor_m0E28702EE219C78D26170284BE294180B9EA8B1D(_thisAdjusted, ___rX0, ___rY1, ___rZ2, method);
}
// System.String SerializableVector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableVector3_ToString_mED609B686A182780B5DEEC21E7F41B9772868B4D (SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F994A61C5B0E83FDA3716A4260541F80048DA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return String.Format("[{0}, {1}, {2}]", x, y, z);
		String_t* L_0 = __this->get_x_0();
		String_t* L_1 = __this->get_y_1();
		String_t* L_2 = __this->get_z_2();
		String_t* L_3;
		L_3 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralA2F994A61C5B0E83FDA3716A4260541F80048DA2, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* SerializableVector3_ToString_mED609B686A182780B5DEEC21E7F41B9772868B4D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 * _thisAdjusted = reinterpret_cast<SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SerializableVector3_ToString_mED609B686A182780B5DEEC21E7F41B9772868B4D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 SerializableVector3::op_Implicit(SerializableVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SerializableVector3_op_Implicit_m24A5A84E8040CE77EC0BB2BC24BC0AD6A08233FD (SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ___rValue0, const RuntimeMethod* method)
{
	{
		// return new Vector3(NullCheckParse(rValue.x), NullCheckParse(rValue.y), NullCheckParse(rValue.z));
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_0 = ___rValue0;
		String_t* L_1 = L_0.get_x_0();
		float L_2;
		L_2 = SerializableVector3_NullCheckParse_mE52A526C77D8DAC938C5D5D3B1C22D355522AE00(L_1, /*hidden argument*/NULL);
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_3 = ___rValue0;
		String_t* L_4 = L_3.get_y_1();
		float L_5;
		L_5 = SerializableVector3_NullCheckParse_mE52A526C77D8DAC938C5D5D3B1C22D355522AE00(L_4, /*hidden argument*/NULL);
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_6 = ___rValue0;
		String_t* L_7 = L_6.get_z_2();
		float L_8;
		L_8 = SerializableVector3_NullCheckParse_mE52A526C77D8DAC938C5D5D3B1C22D355522AE00(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// SerializableVector3 SerializableVector3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  SerializableVector3_op_Implicit_m00DCEF3FFD4570A07610C14D89EDEDC1C56B870A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rValue0, const RuntimeMethod* method)
{
	{
		// return new SerializableVector3(rValue.x, rValue.y, rValue.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___rValue0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rValue0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___rValue0;
		float L_5 = L_4.get_z_4();
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_6;
		memset((&L_6), 0, sizeof(L_6));
		SerializableVector3__ctor_m0E28702EE219C78D26170284BE294180B9EA8B1D((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Single SerializableVector3::NullCheckParse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SerializableVector3_NullCheckParse_mE52A526C77D8DAC938C5D5D3B1C22D355522AE00 (String_t* ___valueToCheck0, const RuntimeMethod* method)
{
	{
		// if (valueToCheck == null)
		String_t* L_0 = ___valueToCheck0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_0009:
	{
		// return float.Parse(valueToCheck);
		String_t* L_1 = ___valueToCheck0;
		float L_2;
		L_2 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Shooting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shooting_Start_m7C48E3A24AB837ADD3A9E86986F9639462E46540 (Shooting_tC245E9F3DD4640EC16DB7F8ABE94957B8FF477C5 * __this, const RuntimeMethod* method)
{
	{
		// timeSinceShot = coolDown;
		float L_0 = __this->get_coolDown_6();
		__this->set_timeSinceShot_7(L_0);
		// }
		return;
	}
}
// System.Void Shooting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shooting_Update_m3DE10F35E67DDC3F48C8594B036FAB02F27A91B1 (Shooting_tC245E9F3DD4640EC16DB7F8ABE94957B8FF477C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!player.GetComponent<PlayerController>().canMove)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_5();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1;
		L_1 = GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		bool L_2 = L_1->get_canMove_20();
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// if (Input.GetMouseButtonUp(0) && timeSinceShot > coolDown)
		bool L_3;
		L_3 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		float L_4 = __this->get_timeSinceShot_7();
		float L_5 = __this->get_coolDown_6();
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_003a;
		}
	}
	{
		// player.GetComponent<PlayerController>().Shoot();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_player_5();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_7;
		L_7 = GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8(L_6, /*hidden argument*/GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		PlayerController_Shoot_m5CB8DCC4363201A5461EA10BD9A248642A2676D8(L_7, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_003a:
	{
		// timeSinceShot += Time.deltaTime;
		float L_8 = __this->get_timeSinceShot_7();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeSinceShot_7(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		// }
		return;
	}
}
// System.Void Shooting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shooting__ctor_mC97AD183FE6EE3C93F1690AB24CD7ED1252CCE46 (Shooting_tC245E9F3DD4640EC16DB7F8ABE94957B8FF477C5 * __this, const RuntimeMethod* method)
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
// System.Void StartText::StartCountDown(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartText_StartCountDown_mEE136C2686953CF1C21D5AA86118E10BE145C8E4 (StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____player0, const RuntimeMethod* method)
{
	{
		// curTime = 0f;
		__this->set_curTime_7((0.0f));
		// curNum = totalTime;
		int32_t L_0 = __this->get_totalTime_6();
		__this->set_curNum_8(L_0);
		// player = _player;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ____player0;
		__this->set_player_5(L_1);
		// counting = true;
		__this->set_counting_9((bool)1);
		// text.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_text_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartText_Update_mA7198F68FCEA52AC0B3186A1267082DE2FAD878F (StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37E4D9717D4F65640D4D604FDCADCA3A42C8047B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (counting)
		bool L_0 = __this->get_counting_9();
		if (!L_0)
		{
			goto IL_00ae;
		}
	}
	{
		// if (curNum == 0)
		int32_t L_1 = __this->get_curNum_8();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// text.text = "GO!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_text_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral37E4D9717D4F65640D4D604FDCADCA3A42C8047B);
		// } else if (curNum > 0) {
		goto IL_0044;
	}

IL_0025:
	{
		// } else if (curNum > 0) {
		int32_t L_3 = __this->get_curNum_8();
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// text.text = curNum.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_text_4();
		int32_t* L_5 = __this->get_address_of_curNum_8();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
	}

IL_0044:
	{
		// curTime += Time.deltaTime;
		float L_7 = __this->get_curTime_7();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_curTime_7(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// if (curTime > 1f)
		float L_9 = __this->get_curTime_7();
		if ((!(((float)L_9) > ((float)(1.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		// curTime = 0f;
		__this->set_curTime_7((0.0f));
		// curNum -= 1;
		int32_t L_10 = __this->get_curNum_8();
		__this->set_curNum_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		// if (curNum < 0)
		int32_t L_11 = __this->get_curNum_8();
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		// text.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_text_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
		// counting = false;
		__this->set_counting_9((bool)0);
		// player.GetComponent<PlayerController>().canMove = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_player_5();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_15;
		L_15 = GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8(L_14, /*hidden argument*/GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		L_15->set_canMove_20((bool)1);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void StartText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartText__ctor_mB4112C4983C1306619ED2F131E94147534EC4AB3 (StartText_tDDEA6E2E91234AD55816F81AF65BD2C3770F95DC * __this, const RuntimeMethod* method)
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
// System.Void Track::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Track__ctor_m7E3ECAB59EDA045466C058E025391FE8C7B9625C (Track_tA7F55E613F87FD55CDBB4F0BCB2966C1B6D3167E * __this, const RuntimeMethod* method)
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
// System.Void UnityMainThreadHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper_Awake_m36151AF8DD3F46AAF00EA3145863BD126207864D (UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wkr = this;
		((UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C_il2cpp_TypeInfo_var))->set_wkr_4(__this);
		// }
		return;
	}
}
// System.Void UnityMainThreadHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper_Update_mBFB1ACF86745928D3079E182E11477B8A530FD4B (UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0012;
	}

IL_0002:
	{
		// jobs.Dequeue().Invoke();
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = __this->get_jobs_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1;
		L_1 = Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5(L_0, /*hidden argument*/Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// while (jobs.Count > 0)
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_2 = __this->get_jobs_5();
		int32_t L_3;
		L_3 = Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline(L_2, /*hidden argument*/Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityMainThreadHelper::AddJob(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper_AddJob_m0CA145632BBFE36177E0F9B11C219F4A23B806C6 (UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___newJob0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jobs.Enqueue(newJob);
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = __this->get_jobs_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___newJob0;
		Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09(L_0, L_1, /*hidden argument*/Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityMainThreadHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadHelper__ctor_mBFE79A239FC793335C521E2242D8C1EE65A66E17 (UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue<Action> jobs = new Queue<Action>();
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *)il2cpp_codegen_object_new(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4(L_0, /*hidden argument*/Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		__this->set_jobs_5(L_0);
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
// WebSocketService WebSocketService::instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * WebSocketService_instance_m3E262BB51ECCD536CA6B8877E15B6A3A7DC1265F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_m63389AE35ACCA57315F8D5986E26AB48D2B943E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF233FEA1AB02A75497B7EBE5CBC2A52091A24B56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inst == null)
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_0 = ((WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var))->get_inst_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// inst = GameObject.Find("WebSocket").GetComponent<WebSocketService>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralF233FEA1AB02A75497B7EBE5CBC2A52091A24B56, /*hidden argument*/NULL);
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_3;
		L_3 = GameObject_GetComponent_TisWebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_m63389AE35ACCA57315F8D5986E26AB48D2B943E6(L_2, /*hidden argument*/GameObject_GetComponent_TisWebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_m63389AE35ACCA57315F8D5986E26AB48D2B943E6_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		((WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var))->set_inst_4(L_3);
	}

IL_0021:
	{
		// return inst;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var);
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_4 = ((WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D_il2cpp_TypeInfo_var))->get_inst_4();
		return L_4;
	}
}
// System.Void WebSocketService::ProcessReceivedMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_ProcessReceivedMessage_m25C80EDF85AC359F6F3B6E6E4BC0A6642807B240 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisBulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F_m2E4ACA5CFFEFCDA0FEF19742B52F201ED704812E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_mA1A470F019B0F63BA2ABD85CBAF76257520F1F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_m2C9C410026AEC95EA83632D3F2B0A756FF4D65AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9687FA828BB566201E8DB82DA670BD0F497C6AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CE345142BA508093F573A71F797B6A49373D56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * V_0 = NULL;
	PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * V_1 = NULL;
	PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * V_2 = NULL;
	BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * V_3 = NULL;
	{
		// GameMessage gameMessage = JsonUtility.FromJson<GameMessage>(message);
		String_t* L_0 = ___message0;
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_1;
		L_1 = JsonUtility_FromJson_TisGameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_mA1A470F019B0F63BA2ABD85CBAF76257520F1F55(L_0, /*hidden argument*/JsonUtility_FromJson_TisGameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_mA1A470F019B0F63BA2ABD85CBAF76257520F1F55_RuntimeMethod_var);
		V_0 = L_1;
		// if (gameMessage.opcode == PlayingOp)
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_2 = V_0;
		String_t* L_3 = L_2->get_opcode_1();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0096;
		}
	}
	{
		// Debug.Log("Playing op code received: player 2 joined, game started");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD5CE345142BA508093F573A71F797B6A49373D56, /*hidden argument*/NULL);
		// matchId = gameMessage.uuid;
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_5 = V_0;
		String_t* L_6 = L_5->get_uuid_0();
		__this->set_matchId_7(L_6);
		// PlayerPositionMessage posMessage = JsonUtility.FromJson<PlayerPositionMessage>(message);
		String_t* L_7 = ___message0;
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_8;
		L_8 = JsonUtility_FromJson_TisPlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_m2C9C410026AEC95EA83632D3F2B0A756FF4D65AC(L_7, /*hidden argument*/JsonUtility_FromJson_TisPlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_m2C9C410026AEC95EA83632D3F2B0A756FF4D65AC_RuntimeMethod_var);
		V_1 = L_8;
		// playerNum = posMessage.player;
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_9 = V_1;
		String_t* L_10 = L_9->get_player_11();
		__this->set_playerNum_9(L_10);
		// if (playerNum == "1")
		String_t* L_11 = __this->get_playerNum_9();
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		// enemyNum = "2";
		__this->set_enemyNum_10(_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		// }
		goto IL_006c;
	}

IL_0061:
	{
		// enemyNum = "1";
		__this->set_enemyNum_10(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
	}

IL_006c:
	{
		// Debug.Log("Turning loading screen off");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9687FA828BB566201E8DB82DA670BD0F497C6AF7, /*hidden argument*/NULL);
		// loadScreen.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_loadScreen_11();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
		// matchInitialized = true;
		__this->set_matchInitialized_8((bool)1);
		// positionManager.initPlayers(posMessage);
		PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * L_14 = __this->get_positionManager_13();
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_15 = V_1;
		PositionManager_initPlayers_m42C597CA9EA9AAEF9E0EEEC6A6BC17FC14837ACE(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0096:
	{
		// else if (gameMessage.opcode == OpponentPositionOp)
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_16 = V_0;
		String_t* L_17 = L_16->get_opcode_1();
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00bc;
		}
	}
	{
		// PlayerPositionMessage posMessage = JsonUtility.FromJson<PlayerPositionMessage>(message);
		String_t* L_19 = ___message0;
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_20;
		L_20 = JsonUtility_FromJson_TisPlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_m2C9C410026AEC95EA83632D3F2B0A756FF4D65AC(L_19, /*hidden argument*/JsonUtility_FromJson_TisPlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_m2C9C410026AEC95EA83632D3F2B0A756FF4D65AC_RuntimeMethod_var);
		V_2 = L_20;
		// positionManager.updateEnemy(posMessage);
		PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * L_21 = __this->get_positionManager_13();
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_22 = V_2;
		PositionManager_updateEnemy_mA7B016B7875FEB926DD1623ADDB8811A780A5A49(L_21, L_22, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00bc:
	{
		// else if (gameMessage.opcode == BulletOp)
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_23 = V_0;
		String_t* L_24 = L_23->get_opcode_1();
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00e2;
		}
	}
	{
		// BulletMessage bulMessage = JsonUtility.FromJson<BulletMessage>(message);
		String_t* L_26 = ___message0;
		BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * L_27;
		L_27 = JsonUtility_FromJson_TisBulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F_m2E4ACA5CFFEFCDA0FEF19742B52F201ED704812E(L_26, /*hidden argument*/JsonUtility_FromJson_TisBulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F_m2E4ACA5CFFEFCDA0FEF19742B52F201ED704812E_RuntimeMethod_var);
		V_3 = L_27;
		// positionManager.fireBullet(bulMessage);
		PositionManager_tA16752D915CCE4D680DAB9E74DA1D66AAF022DBB * L_28 = __this->get_positionManager_13();
		BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * L_29 = V_3;
		PositionManager_fireBullet_mF48B8D699C75ED38C33C23640BD0913BD25FFB2C(L_28, L_29, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00e2:
	{
		// else if (gameMessage.opcode == YouWonOp)
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_30 = V_0;
		String_t* L_31 = L_30->get_opcode_1();
		bool L_32;
		L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0108;
		}
	}
	{
		// intentionalClose = true;
		__this->set_intentionalClose_6((bool)1);
		// gameManager.GameOver(GameManager.WIN);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_33 = __this->get_gameManager_14();
		GameManager_GameOver_m213AEA5D6E5D8DFB5C44F022B0B21170965D2AAA(L_33, 0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0108:
	{
		// else if (gameMessage.opcode == YouLostOp)
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_34 = V_0;
		String_t* L_35 = L_34->get_opcode_1();
		bool L_36;
		L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_012e;
		}
	}
	{
		// intentionalClose = true;
		__this->set_intentionalClose_6((bool)1);
		// gameManager.GameOver(GameManager.LOST);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_37 = __this->get_gameManager_14();
		GameManager_GameOver_m213AEA5D6E5D8DFB5C44F022B0B21170965D2AAA(L_37, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_012e:
	{
		// else if (gameMessage.opcode == FirstToJoinOp)
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_38 = V_0;
		String_t* L_39 = L_38->get_opcode_1();
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_014c;
		}
	}
	{
		// matchId = gameMessage.uuid;
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_41 = V_0;
		String_t* L_42 = L_41->get_uuid_0();
		__this->set_matchId_7(L_42);
	}

IL_014c:
	{
		// }
		return;
	}
}
// System.Void WebSocketService::SetupWebsocketCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SetupWebsocketCallbacks_m747101C5896674122C0AC425AD1C03F41586AAF9 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetupWebsocketCallbacksU3Eb__22_3_m52A098EAF71FA69C918C05C07667B0EED5142A46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_0_m743E6EA58DD7F55399622A32020E216930376200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_1_mC8A56517D37C0EF740917C7F726B0115C687C71C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_2_m356772A47DDCC682E7AD6E6DA99877410FA08B8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * G_B2_0 = NULL;
	WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * G_B2_1 = NULL;
	WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * G_B1_0 = NULL;
	WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * G_B1_1 = NULL;
	{
		// webSocket.OnOpen += () =>
		// {
		//     Debug.Log("Connection open!");
		//     intentionalClose = false;
		//     GameMessage startRequest = new GameMessage("OnMessage", RequestStartOp);
		//     SendWebSocketMessage(JsonUtility.ToJson(startRequest));
		// };
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_0 = __this->get_webSocket_5();
		WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 * L_1 = (WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743 *)il2cpp_codegen_object_new(WebSocketOpenEventHandler_t83182EEEEF73B5055F6014F3828B86D483C90743_il2cpp_TypeInfo_var);
		WebSocketOpenEventHandler__ctor_m325ED7AC2AA203CE001F34771CF44E2967789233(L_1, __this, (intptr_t)((intptr_t)WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_0_m743E6EA58DD7F55399622A32020E216930376200_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocket_add_OnOpen_mD9939050E60A6C1E6CE5EEA72AE2DC2C185D5477(L_0, L_1, /*hidden argument*/NULL);
		// webSocket.OnClose += (e) =>
		// {
		//     Debug.Log("Connection closed!");
		// 
		//     // only do this if someone quit the game session, and not for a game ending event
		//     if (!intentionalClose)
		//     {
		//         UnityMainThreadHelper.wkr.AddJob(() =>
		//         {
		//             gameManager.GameOver(GameManager.DISCONNECT);
		//         });
		//     }
		// };
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_2 = __this->get_webSocket_5();
		WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 * L_3 = (WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246 *)il2cpp_codegen_object_new(WebSocketCloseEventHandler_t207FFC70FF3F0FFA4DCE7D3F81EE219A6D6D3246_il2cpp_TypeInfo_var);
		WebSocketCloseEventHandler__ctor_m371B05DEE7C1CA86F1ECEAA05C370A84F670D457(L_3, __this, (intptr_t)((intptr_t)WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_1_mC8A56517D37C0EF740917C7F726B0115C687C71C_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocket_add_OnClose_m9920C8E00FFF1F6FA11B26E86C6A4BD5E1888CB6(L_2, L_3, /*hidden argument*/NULL);
		// webSocket.OnMessage += (bytes) =>
		// {
		//     Debug.Log("OnMessage!");
		//     string message = System.Text.Encoding.UTF8.GetString(bytes);
		//     Debug.Log(message.ToString());
		// 
		//     ProcessReceivedMessage(message);
		// };
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_4 = __this->get_webSocket_5();
		WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 * L_5 = (WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323 *)il2cpp_codegen_object_new(WebSocketMessageEventHandler_tEE15850BA179D571E2DE5910C04F2927F9C7A323_il2cpp_TypeInfo_var);
		WebSocketMessageEventHandler__ctor_mD0F3B091413932ED22FC108C658F953EA665A8A9(L_5, __this, (intptr_t)((intptr_t)WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_2_m356772A47DDCC682E7AD6E6DA99877410FA08B8F_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocket_add_OnMessage_m6BE396A6ED1DB43D1920E600FDA91C02DE589C68(L_4, L_5, /*hidden argument*/NULL);
		// webSocket.OnError += (e) =>
		// {
		//     Debug.Log("Error! " + e);
		// };
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_6 = __this->get_webSocket_5();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var);
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_7 = ((U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var))->get_U3CU3E9__22_3_1();
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_6;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_6;
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var);
		U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 * L_9 = ((U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_10 = (WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 *)il2cpp_codegen_object_new(WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3_il2cpp_TypeInfo_var);
		WebSocketErrorEventHandler__ctor_mE4260E4AF3F33DC56BF0C37052979EBE1BF60D66(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CSetupWebsocketCallbacksU3Eb__22_3_m52A098EAF71FA69C918C05C07667B0EED5142A46_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketErrorEventHandler_tF7A348901C477EE60804A3843574D369F2D0AFA3 * L_11 = L_10;
		((U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var))->set_U3CU3E9__22_3_1(L_11);
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
	}

IL_006a:
	{
		WebSocket_add_OnError_m6E023A4B59828FAF55089BBA1B0BBE36B1796BAD(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebSocketService::FindMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_FindMatch_m29E6345CB0231E5FEF95234AC0D39F98A823D8A3 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m558274562DE1B32E8F3F142CFAAD80B6525090A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m558274562DE1B32E8F3F142CFAAD80B6525090A7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m558274562DE1B32E8F3F142CFAAD80B6525090A7_RuntimeMethod_var);
		return;
	}
}
// System.Void WebSocketService::SendPosition(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendPosition_m6CF48BAE0106DB3ACF15EDFBCE784AED3F1F82E5 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___gunRot2, String_t* ___moving3, int32_t ___seq4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * V_0 = NULL;
	SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GameMessage posMessage = new PlayerPositionMessage("OnMessage", OpponentPositionOp, gunRot, rot, pos, new SerializableVector3(), "", moving, seq);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___gunRot2;
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_1;
		L_1 = SerializableQuaternion_op_Implicit_m3853822162CBFC9729BD2511D7646A20B5F4DD9F(L_0, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___rot1;
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_3;
		L_3 = SerializableQuaternion_op_Implicit_m3853822162CBFC9729BD2511D7646A20B5F4DD9F(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___pos0;
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_5;
		L_5 = SerializableVector3_op_Implicit_m00DCEF3FFD4570A07610C14D89EDEDC1C56B870A(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4 ));
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_6 = V_1;
		String_t* L_7 = ___moving3;
		int32_t L_8 = ___seq4;
		PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B * L_9 = (PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B *)il2cpp_codegen_object_new(PlayerPositionMessage_t28C46F2259770DEC77918C7574E41F71CA67A85B_il2cpp_TypeInfo_var);
		PlayerPositionMessage__ctor_mF09C95BB2F1DD755F202D93C6E00D12CDDD1C513(L_9, _stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726, _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE, L_1, L_3, L_5, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// posMessage.uuid = matchId;
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_10 = V_0;
		String_t* L_11 = __this->get_matchId_7();
		L_10->set_uuid_0(L_11);
		// SendWebSocketMessage(JsonUtility.ToJson(posMessage));
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_12 = V_0;
		String_t* L_13;
		L_13 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_12, /*hidden argument*/NULL);
		WebSocketService_SendWebSocketMessage_mEC4FC0D418E2805EC2B6EA419E7A93D16E2F6413(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebSocketService::SendShoot(SerializableVector3,SerializableQuaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendShoot_m570E5642565F00AD63CE7206742FA280F5AD1988 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  ___pos0, SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  ___rot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		s_Il2CppMethodInitialized = true;
	}
	BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * V_0 = NULL;
	{
		// BulletMessage message = new BulletMessage("OnMessage", BulletOp, rot, pos);
		SerializableQuaternion_tDBAA32E950A92ABB7846EDAA1516BC8BBD008CA5  L_0 = ___rot1;
		SerializableVector3_tC03630458986A52A23E44BC65FE350A9EE2A03D4  L_1 = ___pos0;
		BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * L_2 = (BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F *)il2cpp_codegen_object_new(BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F_il2cpp_TypeInfo_var);
		BulletMessage__ctor_mA7CCC9D3233CF50879927B4E34395E19A8BA16EE(L_2, _stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726, _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// message.uuid = matchId;
		BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * L_3 = V_0;
		String_t* L_4 = __this->get_matchId_7();
		((GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD *)L_3)->set_uuid_0(L_4);
		// SendWebSocketMessage(JsonUtility.ToJson(message));
		BulletMessage_t40B624D01696B2531C59FE68CDF4ED97419CEA6F * L_5 = V_0;
		String_t* L_6;
		L_6 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_5, /*hidden argument*/NULL);
		WebSocketService_SendWebSocketMessage_mEC4FC0D418E2805EC2B6EA419E7A93D16E2F6413(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebSocketService::SendEndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendEndGame_m99873362FCA5B199283DDF20BD9B6D9933D02896 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D74BC981E6316A5E3CAEEA0BAF3C438F5C94DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726);
		s_Il2CppMethodInitialized = true;
	}
	GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * V_0 = NULL;
	{
		// GameMessage message = new GameMessage("OnMessage", BulletHitOp);
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_0 = (GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD *)il2cpp_codegen_object_new(GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_il2cpp_TypeInfo_var);
		GameMessage__ctor_mF00F60366C2B7158614C55D51E3BFFA7CCCB7CDA(L_0, _stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726, _stringLiteral25D74BC981E6316A5E3CAEEA0BAF3C438F5C94DA, /*hidden argument*/NULL);
		V_0 = L_0;
		// message.uuid = matchId;
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_1 = V_0;
		String_t* L_2 = __this->get_matchId_7();
		L_1->set_uuid_0(L_2);
		// SendWebSocketMessage(JsonUtility.ToJson(message));
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_3 = V_0;
		String_t* L_4;
		L_4 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_3, /*hidden argument*/NULL);
		WebSocketService_SendWebSocketMessage_mEC4FC0D418E2805EC2B6EA419E7A93D16E2F6413(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebSocketService::SendWebSocketMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_SendWebSocketMessage_mEC4FC0D418E2805EC2B6EA419E7A93D16E2F6413 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m59D79F975B96A6C07C7D8D561ADF4CBDC1EBE262_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		String_t* L_0 = ___message0;
		(&V_0)->set_message_3(L_0);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_1;
		L_1 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158  L_2 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m59D79F975B96A6C07C7D8D561ADF4CBDC1EBE262((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m59D79F975B96A6C07C7D8D561ADF4CBDC1EBE262_RuntimeMethod_var);
		return;
	}
}
// System.Void WebSocketService::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_OnApplicationQuit_mB7F7E2E78489E66C7A73A51ACCB140B4EE8A83C3 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_mA7E6DE25D54AE2A6FEDC05852F27600A585E98C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_mA7E6DE25D54AE2A6FEDC05852F27600A585E98C2((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_mA7E6DE25D54AE2A6FEDC05852F27600A585E98C2_RuntimeMethod_var);
		return;
	}
}
// System.Void WebSocketService::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_QuitGame_m254F2C21921C1EDF72B23B1E5CBA8A3AA9D2E68F (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_m619C104D9B49B0106971200A2D9DAD98FE26AA05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_m619C104D9B49B0106971200A2D9DAD98FE26AA05((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_m619C104D9B49B0106971200A2D9DAD98FE26AA05_RuntimeMethod_var);
		return;
	}
}
// System.Void WebSocketService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_Start_m6A19E8874FF5AFABDEB38BFFDA04B0830955F0F0 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DE8F78A2209F845310E2ADD7CA75E30B88D050D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Websocket start");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8DE8F78A2209F845310E2ADD7CA75E30B88D050D, /*hidden argument*/NULL);
		// intentionalClose = false;
		__this->set_intentionalClose_6((bool)0);
		// webSocket = new WebSocket(webSocketDns);
		String_t* L_0 = __this->get_webSocketDns_15();
		WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_1 = (WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 *)il2cpp_codegen_object_new(WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012_il2cpp_TypeInfo_var);
		WebSocket__ctor_m872CB20817CBB5F78609C18BC357AEAD02A6C0E3(L_1, L_0, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, /*hidden argument*/NULL);
		__this->set_webSocket_5(L_1);
		// SetupWebsocketCallbacks();
		WebSocketService_SetupWebsocketCallbacks_m747101C5896674122C0AC425AD1C03F41586AAF9(__this, /*hidden argument*/NULL);
		// FindMatch();
		WebSocketService_FindMatch_m29E6345CB0231E5FEF95234AC0D39F98A823D8A3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebSocketService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_Update_m365D0B3EA26129EC30B29FA7EF4D6D981BF3C9DB (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WebSocketService::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_init_m5E287F6BEB8E4727F6226775168E09A264D33B0E (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	{
		// public void init() { }
		return;
	}
}
// System.Void WebSocketService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService__ctor_m2C5BAB31EE17C12FF168800D9CD31AD2076706D4 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66159C9E50E876C7975694528FFF15BD6AB054D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string webSocketDns = "wss://1phlog4lg0.execute-api.us-east-1.amazonaws.com/Demo";
		__this->set_webSocketDns_15(_stringLiteral66159C9E50E876C7975694528FFF15BD6AB054D0);
		// protected WebSocketService() {}
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// protected WebSocketService() {}
		return;
	}
}
// System.Void WebSocketService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService__cctor_m083CE35AF6C91C433FBC0493ED40DF5AA56C643F (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebSocketService::<SetupWebsocketCallbacks>b__22_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_0_m743E6EA58DD7F55399622A32020E216930376200 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A09CDCF43F709AAED3C395930DB9F2E4AE559C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * V_0 = NULL;
	{
		// Debug.Log("Connection open!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral60A09CDCF43F709AAED3C395930DB9F2E4AE559C, /*hidden argument*/NULL);
		// intentionalClose = false;
		__this->set_intentionalClose_6((bool)0);
		// GameMessage startRequest = new GameMessage("OnMessage", RequestStartOp);
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_0 = (GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD *)il2cpp_codegen_object_new(GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD_il2cpp_TypeInfo_var);
		GameMessage__ctor_mF00F60366C2B7158614C55D51E3BFFA7CCCB7CDA(L_0, _stringLiteral7EAD7DE45F441D63E42CEBA61071184BECF60726, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		V_0 = L_0;
		// SendWebSocketMessage(JsonUtility.ToJson(startRequest));
		GameMessage_t47D37E43737789A1DD01D88516468C89D855A0CD * L_1 = V_0;
		String_t* L_2;
		L_2 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_1, /*hidden argument*/NULL);
		WebSocketService_SendWebSocketMessage_mEC4FC0D418E2805EC2B6EA419E7A93D16E2F6413(__this, L_2, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void WebSocketService::<SetupWebsocketCallbacks>b__22_1(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_1_mC8A56517D37C0EF740917C7F726B0115C687C71C (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, int32_t ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_4_mAAF59A70C716BCD47CF0D8855C9E32E376AEEFB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Connection closed!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B, /*hidden argument*/NULL);
		// if (!intentionalClose)
		bool L_0 = __this->get_intentionalClose_6();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// UnityMainThreadHelper.wkr.AddJob(() =>
		// {
		//     gameManager.GameOver(GameManager.DISCONNECT);
		// });
		UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C * L_1 = ((UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadHelper_t844449D05545DBD2C5B1A4EDF8B80D366172173C_il2cpp_TypeInfo_var))->get_wkr_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_4_mAAF59A70C716BCD47CF0D8855C9E32E376AEEFB4_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityMainThreadHelper_AddJob_m0CA145632BBFE36177E0F9B11C219F4A23B806C6(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// };
		return;
	}
}
// System.Void WebSocketService::<SetupWebsocketCallbacks>b__22_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_4_mAAF59A70C716BCD47CF0D8855C9E32E376AEEFB4 (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, const RuntimeMethod* method)
{
	{
		// gameManager.GameOver(GameManager.DISCONNECT);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_14();
		GameManager_GameOver_m213AEA5D6E5D8DFB5C44F022B0B21170965D2AAA(L_0, 2, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void WebSocketService::<SetupWebsocketCallbacks>b__22_2(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketService_U3CSetupWebsocketCallbacksU3Eb__22_2_m356772A47DDCC682E7AD6E6DA99877410FA08B8F (WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FA46CD57C19B93C4A91B06F45533BF77D8B5018);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// Debug.Log("OnMessage!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2FA46CD57C19B93C4A91B06F45533BF77D8B5018, /*hidden argument*/NULL);
		// string message = System.Text.Encoding.UTF8.GetString(bytes);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		V_0 = L_2;
		// Debug.Log(message.ToString());
		String_t* L_3 = V_0;
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// ProcessReceivedMessage(message);
		String_t* L_5 = V_0;
		WebSocketService_ProcessReceivedMessage_m25C80EDF85AC359F6F3B6E6E4BC0A6642807B240(__this, L_5, /*hidden argument*/NULL);
		// };
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
// System.Void WebSocketService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m54A935F8EBC634C55D2D8F0ADA6648BEE2F6128C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 * L_0 = (U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 *)il2cpp_codegen_object_new(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m35A2EBA42DDBA2FFA07EAA907AA9538A215ED292(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WebSocketService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m35A2EBA42DDBA2FFA07EAA907AA9538A215ED292 (U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketService/<>c::<SetupWebsocketCallbacks>b__22_3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSetupWebsocketCallbacksU3Eb__22_3_m52A098EAF71FA69C918C05C07667B0EED5142A46 (U3CU3Ec_t1AB8918EA8A18A854B057ACC7FDC56F8160ADCE9 * __this, String_t* ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Error! " + e);
		String_t* L_0 = ___e0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// };
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
// System.Void WebSocketService/<FindMatch>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMatchU3Ed__23_MoveNext_mCDDD1D5D7BA2BFE5E7CBCB1D6EA1354B029FE262 (U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m26DB4FFCCAB3CCAA08D8702343EBEE78DD76D9EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b;
			}
		}

IL_0011:
		{
			// await webSocket.Connect();
			WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_3 = V_1;
			WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_4 = L_3->get_webSocket_5();
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = WebSocket_Connect_m7E2E576BBD0B0DB1E024C6D0BE3CEF170635BE4C(L_4, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0067;
			}
		}

IL_002b:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m26DB4FFCCAB3CCAA08D8702343EBEE78DD76D9EF((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2_m26DB4FFCCAB3CCAA08D8702343EBEE78DD76D9EF_RuntimeMethod_var);
			goto IL_009a;
		}

IL_004b:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
			V_2 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0067:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_0087;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0070;
		}
		throw e;
	}

CATCH_0070:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009a;
	} // end catch (depth: 1)

IL_0087:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, /*hidden argument*/NULL);
	}

IL_009a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFindMatchU3Ed__23_MoveNext_mCDDD1D5D7BA2BFE5E7CBCB1D6EA1354B029FE262_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * _thisAdjusted = reinterpret_cast<U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 *>(__this + _offset);
	U3CFindMatchU3Ed__23_MoveNext_mCDDD1D5D7BA2BFE5E7CBCB1D6EA1354B029FE262(_thisAdjusted, method);
}
// System.Void WebSocketService/<FindMatch>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMatchU3Ed__23_SetStateMachine_mF10886E43ECBE1CCDD97931F740B42485DDC69BA (U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFindMatchU3Ed__23_SetStateMachine_mF10886E43ECBE1CCDD97931F740B42485DDC69BA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 * _thisAdjusted = reinterpret_cast<U3CFindMatchU3Ed__23_tBCEA505830C477F899D55728EF916CE2257324F2 *>(__this + _offset);
	U3CFindMatchU3Ed__23_SetStateMachine_mF10886E43ECBE1CCDD97931F740B42485DDC69BA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocketService/<OnApplicationQuit>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__28_MoveNext_mCB2FBF7A249A5B29556914290A24D7311C37CA49 (U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_m6D5076B05B8ACA0BF338FF6160D782A52865DE7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051;
			}
		}

IL_0011:
		{
			// await webSocket.Close();
			WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_3 = V_1;
			WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_4 = L_3->get_webSocket_5();
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = WebSocket_Close_mF67DE0E6137D1B6AB7E237BE2C4135A903F9FC46(L_4, ((int32_t)1000), (String_t*)NULL, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_006d;
			}
		}

IL_0031:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_m6D5076B05B8ACA0BF338FF6160D782A52865DE7B((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1_m6D5076B05B8ACA0BF338FF6160D782A52865DE7B_RuntimeMethod_var);
			goto IL_00a0;
		}

IL_0051:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
			V_2 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006d:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_008d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a0;
	} // end catch (depth: 1)

IL_008d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__28_MoveNext_mCB2FBF7A249A5B29556914290A24D7311C37CA49_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * _thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 *>(__this + _offset);
	U3COnApplicationQuitU3Ed__28_MoveNext_mCB2FBF7A249A5B29556914290A24D7311C37CA49(_thisAdjusted, method);
}
// System.Void WebSocketService/<OnApplicationQuit>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__28_SetStateMachine_m160B78D7DD9576492DA0BBF43A5ACD8E97AC02C9 (U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__28_SetStateMachine_m160B78D7DD9576492DA0BBF43A5ACD8E97AC02C9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 * _thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__28_tB496544D47F044CEE10BA3620AAD41031FD874D1 *>(__this + _offset);
	U3COnApplicationQuitU3Ed__28_SetStateMachine_m160B78D7DD9576492DA0BBF43A5ACD8E97AC02C9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocketService/<QuitGame>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuitGameU3Ed__29_MoveNext_m910173F4D316CB3E8A146943FB4E8354514A75DA (U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_mF009C045178E7F9D890EE8AF498262795325400A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005f;
			}
		}

IL_0011:
		{
			// intentionalClose = true;
			WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_3 = V_1;
			L_3->set_intentionalClose_6((bool)1);
			// matchInitialized = false;
			WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_4 = V_1;
			L_4->set_matchInitialized_8((bool)0);
			// await webSocket.Close();
			WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_5 = V_1;
			WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_6 = L_5->get_webSocket_5();
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
			L_7 = WebSocket_Close_mF67DE0E6137D1B6AB7E237BE2C4135A903F9FC46(L_6, ((int32_t)1000), (String_t*)NULL, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8;
			L_8 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_007b;
			}
		}

IL_003f:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = V_2;
			__this->set_U3CU3Eu__1_3(L_11);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_mF009C045178E7F9D890EE8AF498262795325400A((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_12, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6_mF009C045178E7F9D890EE8AF498262795325400A_RuntimeMethod_var);
			goto IL_00ae;
		}

IL_005f:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = __this->get_U3CU3Eu__1_3();
			V_2 = L_13;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_14 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_007b:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0084;
		}
		throw e;
	}

CATCH_0084:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, L_17, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ae;
	} // end catch (depth: 1)

IL_009b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_18, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CQuitGameU3Ed__29_MoveNext_m910173F4D316CB3E8A146943FB4E8354514A75DA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * _thisAdjusted = reinterpret_cast<U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 *>(__this + _offset);
	U3CQuitGameU3Ed__29_MoveNext_m910173F4D316CB3E8A146943FB4E8354514A75DA(_thisAdjusted, method);
}
// System.Void WebSocketService/<QuitGame>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuitGameU3Ed__29_SetStateMachine_m26C35127E96BE0FA588C678E15AC59F2F601AB83 (U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CQuitGameU3Ed__29_SetStateMachine_m26C35127E96BE0FA588C678E15AC59F2F601AB83_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 * _thisAdjusted = reinterpret_cast<U3CQuitGameU3Ed__29_t051F12A0AA3C883403E3F909281C48EC612D67B6 *>(__this + _offset);
	U3CQuitGameU3Ed__29_SetStateMachine_m26C35127E96BE0FA588C678E15AC59F2F601AB83(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocketService/<SendWebSocketMessage>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebSocketMessageU3Ed__27_MoveNext_m1A7B7C37137EA011323B584DF336103FA4E8DDC6 (U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m222573B9171DC19CC9ABBA84B74DBB64269E8B77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0067;
			}
		}

IL_0011:
		{
			// if (webSocket != null && webSocket.State == WebSocketState.Open)
			WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_3 = V_1;
			WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_4 = L_3->get_webSocket_5();
			if (!L_4)
			{
				goto IL_008a;
			}
		}

IL_0019:
		{
			WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_5 = V_1;
			WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_6 = L_5->get_webSocket_5();
			int32_t L_7;
			L_7 = WebSocket_get_State_m59AC9A094AC30B55E691F7E59CC23D63E4782C33(L_6, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_7) == ((uint32_t)1))))
			{
				goto IL_008a;
			}
		}

IL_0027:
		{
			// await webSocket.SendText(message);
			WebSocketService_tE5FDE9A1797A05946058A36A62DF3A6AFB96CE1D * L_8 = V_1;
			WebSocket_t7B36539BBBBAC9F5FF6DFD63930AEEC2631D4012 * L_9 = L_8->get_webSocket_5();
			String_t* L_10 = __this->get_message_3();
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11;
			L_11 = WebSocket_SendText_m29F8B764DFAB1435F66E3D7982996D50E1F8D169(L_9, L_10, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12;
			L_12 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_11, /*hidden argument*/NULL);
			V_2 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0083;
			}
		}

IL_0047:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = V_2;
			__this->set_U3CU3Eu__1_4(L_15);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m222573B9171DC19CC9ABBA84B74DBB64269E8B77((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158_m222573B9171DC19CC9ABBA84B74DBB64269E8B77_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0067:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_17 = __this->get_U3CU3Eu__1_4();
			V_2 = L_17;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_18 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_0083:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		}

IL_008a:
		{
			goto IL_00a3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008c;
		}
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_21 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_22, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendWebSocketMessageU3Ed__27_MoveNext_m1A7B7C37137EA011323B584DF336103FA4E8DDC6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * _thisAdjusted = reinterpret_cast<U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 *>(__this + _offset);
	U3CSendWebSocketMessageU3Ed__27_MoveNext_m1A7B7C37137EA011323B584DF336103FA4E8DDC6(_thisAdjusted, method);
}
// System.Void WebSocketService/<SendWebSocketMessage>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendWebSocketMessageU3Ed__27_SetStateMachine_mF1EF2AA425059DE285A847A375531B36416003A5 (U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendWebSocketMessageU3Ed__27_SetStateMachine_mF1EF2AA425059DE285A847A375531B36416003A5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 * _thisAdjusted = reinterpret_cast<U3CSendWebSocketMessageU3Ed__27_tE47975560FBE05F7E10B706315A45CD5E9073158 *>(__this + _offset);
	U3CSendWebSocketMessageU3Ed__27_SetStateMachine_mF1EF2AA425059DE285A847A375531B36416003A5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
