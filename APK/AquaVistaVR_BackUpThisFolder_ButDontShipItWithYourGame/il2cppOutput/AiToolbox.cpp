#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.Int64,System.Object>
struct Action_2_t86B6B55EF9D981C9D41DE3956EE80B83BBCD7012;
// System.Action`2<System.Int64,System.String>
struct Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<AiToolbox.Message>
struct IEnumerable_1_t4BD7AD2DE68401597D1EF1F0577FAA2BD0B86FA7;
// System.Collections.Generic.List`1<AiToolbox.Message>
struct List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<AiToolbox.RequestRecord>
struct List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// AiToolbox.Message[]
struct MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// AiToolbox.RequestRecord[]
struct RequestRecordU5BU5D_t8B87EBDBB6981A2404390CCCA984F49FB2A293F5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// AiToolbox.ChatGpt/ResponseChoice[]
struct ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766;
// AiToolbox.ChatGpt/RoleContentMessage[]
struct RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// AiToolbox.Parameters
struct Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5;
// AiToolbox.RequestRecord
struct RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// AiToolbox.ChatGpt/<>c
struct U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C;
// AiToolbox.ChatGpt/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3;
// AiToolbox.ChatGpt/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836;
// AiToolbox.ChatGpt/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD;
// AiToolbox.ChatGpt/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB;
// AiToolbox.ChatGpt/<GetRemoteConfig>d__8
struct U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87;
// AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5
struct U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F;
// AiToolbox.ChatGpt/<Stream>d__7
struct U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106;
// AiToolbox.ChatGpt/ChatGptContainer
struct ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6;
// AiToolbox.ChatGpt/ResponseChoice
struct ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB;
// AiToolbox.ChatGpt/RoleContentMessage
struct RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Model_t881B444BB4272BC7A334C6C38039150595EDFE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04A5CEBFF3ED0A6560FEFAF94101331D55462F86;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7C882A0686F18C7D203EBB72FA9718B3AAFBD9;
IL2CPP_EXTERN_C String_t* _stringLiteral0F250609427E809ED96F8A015C5F2B319D96E82D;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral183DE467BE4FB42C1B00A41574482B6AC615D229;
IL2CPP_EXTERN_C String_t* _stringLiteral2A233AEA6357E19022D5D5024D474D86CA4CB0E5;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9259D9E68640FDD8144501041197340B046D88;
IL2CPP_EXTERN_C String_t* _stringLiteral555BB7D2791EF47EB2EBA5F615FCC1E8BF2EA45D;
IL2CPP_EXTERN_C String_t* _stringLiteral5900131C6792A1999B0E64BF442DABB86DDAC40A;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA073923D1B3AF77AE7C9CB0FA77E2C976C388F;
IL2CPP_EXTERN_C String_t* _stringLiteral622C0528D86A82D0FD63C00966CCDC09F9A83C53;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral8C0A1E9BF9118A96D440F9C412F1CA49D661D0EE;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralB7014C16CB782AF3CE20442E04CB5F7D882F3E65;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC;
IL2CPP_EXTERN_C String_t* _stringLiteralCB95AC6F5DAF4F3EB9438A7F55847FF126519704;
IL2CPP_EXTERN_C String_t* _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEE372EB1EA108A46266AC9BC3B2D028E5D301B6B;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_mC41CD23655708B9016CC8232020AEF4DD309E194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_m0038BECBE03E2BDE5E104BCBAAEA995B183B0563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatGpt_GetModelName_m07033DC292835F2285119D628C7FC8430F266850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisMessage_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_mD806A7C5D0983F4FA0D1D3F59FB1B2DD8C18D856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_m24C9A81F9B2B4B341685710A09327358D5AA5C9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8017FE57AAB228713967BB10F2047B05E520C9CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m48E26E99DCC2A8CD5EC27CB8F080D9FCBD2F2EBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m41B882E4D390243246208C580DAE4F349ECAFDE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3FAA22B02F0282F3BAA2BEA5F57C4EE73BF33EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRemoteConfigU3Ed__8_System_Collections_IEnumerator_Reset_mCF5F3FFDA8795CF3B7BBDADA027C4E4E4608C574_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CQuickRequestCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m536490AC4591ACE98CD4E63683D0986D2323E747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStreamU3Ed__7_System_Collections_IEnumerator_Reset_m501F315DA741294CF772602EBFD7F108EE46696F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CQuickRequestBlockingU3Eb__6_2_mDE5BC04FA494B9FEFF17AE098F709444FE9D0E1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRequestU3Eb__2_1_m0C11CF7C6969F0998E8583B16CC99375BE4D285C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CRequestU3Eb__0_mB14C2930B06AFABC987802C23A7B178C3D095822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CQuickRequestU3Eg__CancelCallbackU7C0_m1CF9FE1C9C4717D8FF486F967124107C58EA9839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CQuickRequestBlockingU3Eb__0_m0D5F6BD915FD6BAFB652D85E8C3037E4109AE074_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CQuickRequestBlockingU3Eb__1_mCDCE4C1746B028C90A51DA27C1D000E478536973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__0_mD5697EBF244608CC747345B7108F6F7891E40D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__1_m0A55C36F6865983A5FF3619563AFD4F9D4D549D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__2_m52E074EE1406FD960BB391866D8D21051024F17F_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB;;
struct ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com;
struct ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com;;
struct ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke;
struct ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke;;
struct RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5;;
struct RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com;
struct RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com;;
struct RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke;
struct RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke;;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766;
struct RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7E5B04108C0FA1C2DBE3B2AE50E95A413266CDFB 
{
};

// System.Collections.Generic.List`1<AiToolbox.Message>
struct List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<AiToolbox.RequestRecord>
struct List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RequestRecordU5BU5D_t8B87EBDBB6981A2404390CCCA984F49FB2A293F5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// AiToolbox.ChatGpt
struct ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// AiToolbox.Parameters
struct Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5  : public RuntimeObject
{
	// System.String AiToolbox.Parameters::apiKey
	String_t* ___apiKey_0;
	// AiToolbox.ApiKeyEncryption AiToolbox.Parameters::apiKeyEncryption
	int32_t ___apiKeyEncryption_1;
	// System.String AiToolbox.Parameters::apiKeyRemoteConfigKey
	String_t* ___apiKeyRemoteConfigKey_2;
	// System.String AiToolbox.Parameters::apiKeyEncryptionPassword
	String_t* ___apiKeyEncryptionPassword_3;
	// AiToolbox.Model AiToolbox.Parameters::model
	int32_t ___model_4;
	// System.Single AiToolbox.Parameters::temperature
	float ___temperature_5;
	// System.String AiToolbox.Parameters::role
	String_t* ___role_6;
	// System.Int32 AiToolbox.Parameters::timeout
	int32_t ___timeout_7;
	// System.Int32 AiToolbox.Parameters::throttle
	int32_t ___throttle_8;
	// System.Boolean AiToolbox.Parameters::serialized
	bool ___serialized_9;
};

// AiToolbox.RemoteKeyService
struct RemoteKeyService_t2CDF0A924EB2DA44AF20052CFD7D9F88D0693694  : public RuntimeObject
{
};

// AiToolbox.RequestRecord
struct RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216  : public RuntimeObject
{
	// System.Action AiToolbox.RequestRecord::cancelCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cancelCallback_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AiToolbox.ChatGpt/<>c
struct U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C  : public RuntimeObject
{
};

// AiToolbox.ChatGpt/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3  : public RuntimeObject
{
	// System.Collections.IEnumerator AiToolbox.ChatGpt/<>c__DisplayClass2_0::enumerator
	RuntimeObject* ___enumerator_0;
	// AiToolbox.RequestRecord AiToolbox.ChatGpt/<>c__DisplayClass2_0::requestRecord
	RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* ___requestRecord_1;
};

// AiToolbox.ChatGpt/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836  : public RuntimeObject
{
	// System.Collections.IEnumerator AiToolbox.ChatGpt/<>c__DisplayClass4_0::enumerator
	RuntimeObject* ___enumerator_0;
};

// AiToolbox.ChatGpt/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD  : public RuntimeObject
{
	// UnityEngine.Networking.UnityWebRequest AiToolbox.ChatGpt/<>c__DisplayClass6_0::request
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request_0;
	// AiToolbox.RequestRecord AiToolbox.ChatGpt/<>c__DisplayClass6_0::requestRecord
	RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* ___requestRecord_1;
	// System.Action AiToolbox.ChatGpt/<>c__DisplayClass6_0::cancelCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cancelCallback_2;
	// System.Action`2<System.Int64,System.String> AiToolbox.ChatGpt/<>c__DisplayClass6_0::failureCallback
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___failureCallback_3;
	// System.Action`1<System.String> AiToolbox.ChatGpt/<>c__DisplayClass6_0::completeCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___completeCallback_4;
};

// AiToolbox.ChatGpt/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB  : public RuntimeObject
{
	// AiToolbox.Parameters AiToolbox.ChatGpt/<>c__DisplayClass8_0::parameters
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___parameters_0;
	// System.Boolean AiToolbox.ChatGpt/<>c__DisplayClass8_0::apiKeySet
	bool ___apiKeySet_1;
	// System.Action`2<System.Int64,System.String> AiToolbox.ChatGpt/<>c__DisplayClass8_0::failureCallback
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___failureCallback_2;
	// System.Threading.Tasks.Task AiToolbox.ChatGpt/<>c__DisplayClass8_0::task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task_3;
};

// AiToolbox.ChatGpt/<GetRemoteConfig>d__8
struct U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87  : public RuntimeObject
{
	// System.Int32 AiToolbox.ChatGpt/<GetRemoteConfig>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AiToolbox.ChatGpt/<GetRemoteConfig>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AiToolbox.Parameters AiToolbox.ChatGpt/<GetRemoteConfig>d__8::parameters
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___parameters_2;
	// System.Action`2<System.Int64,System.String> AiToolbox.ChatGpt/<GetRemoteConfig>d__8::failureCallback
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___failureCallback_3;
	// AiToolbox.ChatGpt/<>c__DisplayClass8_0 AiToolbox.ChatGpt/<GetRemoteConfig>d__8::<>8__1
	U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* ___U3CU3E8__1_4;
};

// AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5
struct U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F  : public RuntimeObject
{
	// System.Int32 AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AiToolbox.Parameters AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::parameters
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___parameters_2;
	// System.Action`2<System.Int64,System.String> AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::failureCallback
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___failureCallback_3;
	// System.Collections.Generic.IEnumerable`1<AiToolbox.Message> AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::messages
	RuntimeObject* ___messages_4;
	// System.Action`1<System.String> AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::completeCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___completeCallback_5;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// AiToolbox.Message
struct Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 
{
	// System.String AiToolbox.Message::text
	String_t* ___text_0;
	// AiToolbox.Role AiToolbox.Message::role
	int32_t ___role_1;
};
// Native definition for P/Invoke marshalling of AiToolbox.Message
struct Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshaled_pinvoke
{
	char* ___text_0;
	int32_t ___role_1;
};
// Native definition for COM marshalling of AiToolbox.Message
struct Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshaled_com
{
	Il2CppChar* ___text_0;
	int32_t ___role_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// AiToolbox.ChatGpt/RequestMessage
struct RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508 
{
	// System.String AiToolbox.ChatGpt/RequestMessage::model
	String_t* ___model_0;
	// AiToolbox.ChatGpt/RoleContentMessage[] AiToolbox.ChatGpt/RequestMessage::messages
	RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* ___messages_1;
	// System.Single AiToolbox.ChatGpt/RequestMessage::temperature
	float ___temperature_2;
	// System.Boolean AiToolbox.ChatGpt/RequestMessage::stream
	bool ___stream_3;
};
// Native definition for P/Invoke marshalling of AiToolbox.ChatGpt/RequestMessage
struct RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshaled_pinvoke
{
	char* ___model_0;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke* ___messages_1;
	float ___temperature_2;
	int32_t ___stream_3;
};
// Native definition for COM marshalling of AiToolbox.ChatGpt/RequestMessage
struct RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshaled_com
{
	Il2CppChar* ___model_0;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com* ___messages_1;
	float ___temperature_2;
	int32_t ___stream_3;
};

// AiToolbox.ChatGpt/RoleContentMessage
struct RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 
{
	// System.String AiToolbox.ChatGpt/RoleContentMessage::role
	String_t* ___role_0;
	// System.String AiToolbox.ChatGpt/RoleContentMessage::content
	String_t* ___content_1;
};
// Native definition for P/Invoke marshalling of AiToolbox.ChatGpt/RoleContentMessage
struct RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke
{
	char* ___role_0;
	char* ___content_1;
};
// Native definition for COM marshalling of AiToolbox.ChatGpt/RoleContentMessage
struct RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com
{
	Il2CppChar* ___role_0;
	Il2CppChar* ___content_1;
};

// AiToolbox.ChatGpt/Usage
struct Usage_t763250BA59A13A30B75B11CFEC286A86A22BC82A 
{
	// System.Int32 AiToolbox.ChatGpt/Usage::completion_tokens
	int32_t ___completion_tokens_0;
	// System.Int32 AiToolbox.ChatGpt/Usage::prompt_tokens
	int32_t ___prompt_tokens_1;
	// System.Int32 AiToolbox.ChatGpt/Usage::total_tokens
	int32_t ___total_tokens_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// AiToolbox.ChatGpt/<Stream>d__7
struct U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106  : public RuntimeObject
{
	// System.Int32 AiToolbox.ChatGpt/<Stream>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AiToolbox.ChatGpt/<Stream>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AiToolbox.Parameters AiToolbox.ChatGpt/<Stream>d__7::parameters
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___parameters_2;
	// System.Collections.Generic.IEnumerable`1<AiToolbox.Message> AiToolbox.ChatGpt/<Stream>d__7::messages
	RuntimeObject* ___messages_3;
	// System.Action`2<System.Int64,System.String> AiToolbox.ChatGpt/<Stream>d__7::failureCallback
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___failureCallback_4;
	// AiToolbox.RequestRecord AiToolbox.ChatGpt/<Stream>d__7::requestRecord
	RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* ___requestRecord_5;
	// System.Action`1<System.String> AiToolbox.ChatGpt/<Stream>d__7::updateCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___updateCallback_6;
	// System.Action`1<System.String> AiToolbox.ChatGpt/<Stream>d__7::completeCallback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___completeCallback_7;
	// AiToolbox.ChatGpt/RequestMessage AiToolbox.ChatGpt/<Stream>d__7::<requestObject>5__2
	RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508 ___U3CrequestObjectU3E5__2_8;
	// UnityEngine.Networking.UnityWebRequest AiToolbox.ChatGpt/<Stream>d__7::<request>5__3
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__3_9;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation AiToolbox.ChatGpt/<Stream>d__7::<webRequest>5__4
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___U3CwebRequestU3E5__4_10;
	// System.Int32 AiToolbox.ChatGpt/<Stream>d__7::<textLength>5__5
	int32_t ___U3CtextLengthU3E5__5_11;
	// System.String AiToolbox.ChatGpt/<Stream>d__7::<completeText>5__6
	String_t* ___U3CcompleteTextU3E5__6_12;
};

// AiToolbox.ChatGpt/ResponseChoice
struct ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB 
{
	// System.Int32 AiToolbox.ChatGpt/ResponseChoice::index
	int32_t ___index_0;
	// AiToolbox.ChatGpt/RoleContentMessage AiToolbox.ChatGpt/ResponseChoice::delta
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 ___delta_1;
	// AiToolbox.ChatGpt/RoleContentMessage AiToolbox.ChatGpt/ResponseChoice::message
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 ___message_2;
	// System.String AiToolbox.ChatGpt/ResponseChoice::finish_reason
	String_t* ___finish_reason_3;
};
// Native definition for P/Invoke marshalling of AiToolbox.ChatGpt/ResponseChoice
struct ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke
{
	int32_t ___index_0;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke ___delta_1;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke ___message_2;
	char* ___finish_reason_3;
};
// Native definition for COM marshalling of AiToolbox.ChatGpt/ResponseChoice
struct ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com
{
	int32_t ___index_0;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com ___delta_1;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com ___message_2;
	Il2CppChar* ___finish_reason_3;
};

// AiToolbox.ChatGpt/ResponseMessage
struct ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 
{
	// System.String AiToolbox.ChatGpt/ResponseMessage::id
	String_t* ___id_0;
	// System.String AiToolbox.ChatGpt/ResponseMessage::created
	String_t* ___created_1;
	// AiToolbox.ChatGpt/ResponseChoice[] AiToolbox.ChatGpt/ResponseMessage::choices
	ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766* ___choices_2;
	// System.String AiToolbox.ChatGpt/ResponseMessage::model
	String_t* ___model_3;
	// AiToolbox.ChatGpt/Usage AiToolbox.ChatGpt/ResponseMessage::usage
	Usage_t763250BA59A13A30B75B11CFEC286A86A22BC82A ___usage_4;
};
// Native definition for P/Invoke marshalling of AiToolbox.ChatGpt/ResponseMessage
struct ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshaled_pinvoke
{
	char* ___id_0;
	char* ___created_1;
	ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke* ___choices_2;
	char* ___model_3;
	Usage_t763250BA59A13A30B75B11CFEC286A86A22BC82A ___usage_4;
};
// Native definition for COM marshalling of AiToolbox.ChatGpt/ResponseMessage
struct ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshaled_com
{
	Il2CppChar* ___id_0;
	Il2CppChar* ___created_1;
	ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com* ___choices_2;
	Il2CppChar* ___model_3;
	Usage_t763250BA59A13A30B75B11CFEC286A86A22BC82A ___usage_4;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int64,System.Object>
struct Action_2_t86B6B55EF9D981C9D41DE3956EE80B83BBCD7012  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int64,System.String>
struct Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0
struct U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA 
{
	// System.Int32 AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Action`2<System.Int64,System.String> AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0::failureCallback
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___failureCallback_2;
	// System.Runtime.CompilerServices.TaskAwaiter AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AiToolbox.ChatGpt/ChatGptContainer
struct ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<AiToolbox.Message>
struct List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<AiToolbox.Message>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<AiToolbox.RequestRecord>
struct List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RequestRecordU5BU5D_t8B87EBDBB6981A2404390CCCA984F49FB2A293F5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<AiToolbox.RequestRecord>

// AiToolbox.ChatGpt
struct ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields
{
	// System.Collections.Generic.List`1<AiToolbox.RequestRecord> AiToolbox.ChatGpt::_requestRecords
	List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* ____requestRecords_0;
};

// AiToolbox.ChatGpt

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// AiToolbox.Parameters

// AiToolbox.Parameters

// AiToolbox.RemoteKeyService

// AiToolbox.RemoteKeyService

// AiToolbox.RequestRecord

// AiToolbox.RequestRecord

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// AiToolbox.ChatGpt/<>c
struct U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields
{
	// AiToolbox.ChatGpt/<>c AiToolbox.ChatGpt/<>c::<>9
	U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C* ___U3CU3E9_0;
	// System.Action AiToolbox.ChatGpt/<>c::<>9__2_1
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__2_1_1;
	// System.Action AiToolbox.ChatGpt/<>c::<>9__6_2
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__6_2_2;
};

// AiToolbox.ChatGpt/<>c

// AiToolbox.ChatGpt/<>c__DisplayClass2_0

// AiToolbox.ChatGpt/<>c__DisplayClass2_0

// AiToolbox.ChatGpt/<>c__DisplayClass4_0

// AiToolbox.ChatGpt/<>c__DisplayClass4_0

// AiToolbox.ChatGpt/<>c__DisplayClass6_0

// AiToolbox.ChatGpt/<>c__DisplayClass6_0

// AiToolbox.ChatGpt/<>c__DisplayClass8_0

// AiToolbox.ChatGpt/<>c__DisplayClass8_0

// AiToolbox.ChatGpt/<GetRemoteConfig>d__8

// AiToolbox.ChatGpt/<GetRemoteConfig>d__8

// AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5

// AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// AiToolbox.Message

// AiToolbox.Message

// System.Single

// System.Single

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.Void

// System.Void

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// AiToolbox.ChatGpt/RequestMessage

// AiToolbox.ChatGpt/RequestMessage

// AiToolbox.ChatGpt/RoleContentMessage

// AiToolbox.ChatGpt/RoleContentMessage

// AiToolbox.ChatGpt/Usage

// AiToolbox.ChatGpt/Usage

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// AiToolbox.ChatGpt/<Stream>d__7

// AiToolbox.ChatGpt/<Stream>d__7

// AiToolbox.ChatGpt/ResponseChoice

// AiToolbox.ChatGpt/ResponseChoice

// AiToolbox.ChatGpt/ResponseMessage

// AiToolbox.ChatGpt/ResponseMessage

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UploadHandlerRaw

// UnityEngine.Networking.UploadHandlerRaw

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`2<System.Int64,System.Object>

// System.Action`2<System.Int64,System.Object>

// System.Action`2<System.Int64,System.String>

// System.Action`2<System.Int64,System.String>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Action

// System.Action

// System.NotSupportedException

// System.NotSupportedException

// AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0

// AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AiToolbox.ChatGpt/ChatGptContainer
struct ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_StaticFields
{
	// AiToolbox.ChatGpt/ChatGptContainer AiToolbox.ChatGpt/ChatGptContainer::_instance
	ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* ____instance_4;
};

// AiToolbox.ChatGpt/ChatGptContainer
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// AiToolbox.ChatGpt/RoleContentMessage[]
struct RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957  : public RuntimeArray
{
	ALIGN_FIELD (8) RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 m_Items[1];

	inline RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___role_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___content_1), (void*)NULL);
		#endif
	}
	inline RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___role_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___content_1), (void*)NULL);
		#endif
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// AiToolbox.Message[]
struct MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744  : public RuntimeArray
{
	ALIGN_FIELD (8) Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 m_Items[1];

	inline Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text_0), (void*)NULL);
	}
	inline Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text_0), (void*)NULL);
	}
};
// AiToolbox.ChatGpt/ResponseChoice[]
struct ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766  : public RuntimeArray
{
	ALIGN_FIELD (8) ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB m_Items[1];

	inline ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___delta_1))->___role_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___delta_1))->___content_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___message_2))->___role_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___message_2))->___content_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___finish_reason_3), (void*)NULL);
		#endif
	}
	inline ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___delta_1))->___role_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___delta_1))->___content_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___message_2))->___role_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___message_2))->___content_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___finish_reason_3), (void*)NULL);
		#endif
	}
};
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

IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke(const RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5& unmarshaled, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_back(const RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke& marshaled, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5& unmarshaled);
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_cleanup(RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com(const RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5& unmarshaled, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_back(const RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com& marshaled, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5& unmarshaled);
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_cleanup(RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_pinvoke(const ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB& unmarshaled, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_pinvoke_back(const ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke& marshaled, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB& unmarshaled);
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_pinvoke_cleanup(ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_com(const ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB& unmarshaled, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_com_back(const ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com& marshaled, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB& unmarshaled);
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_com_cleanup(ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_gshared (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_gshared_inline (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int64,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m6D4EE4A7513F5283082D1287C738D3DC66EA5673_gshared_inline (Action_2_t86B6B55EF9D981C9D41DE3956EE80B83BBCD7012* __this, int64_t ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<AiToolbox.Message>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* Enumerable_ToArray_TisMessage_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_mD806A7C5D0983F4FA0D1D3F59FB1B2DD8C18D856_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<AiToolbox.ChatGpt/ResponseMessage>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m686F44A9A70B5BB8C72933EE13013A30652756EE_gshared (Action_2_t86B6B55EF9D981C9D41DE3956EE80B83BBCD7012* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_m0038BECBE03E2BDE5E104BCBAAEA995B183B0563_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_mC41CD23655708B9016CC8232020AEF4DD309E194_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* ___1_stateMachine, const RuntimeMethod* method) ;

// System.Void AiToolbox.Message::.ctor(System.String,AiToolbox.Role)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m893CB10C67A22E72AB06DF02FA96D13CB1D16986 (Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8* __this, String_t* ___0_text, int32_t ___1_role, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::.ctor()
inline void List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01*, const RuntimeMethod*))List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::Add(T)
inline void List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_inline (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01*, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8, const RuntimeMethod*))List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_gshared_inline)(__this, ___0_item, method);
}
// System.Action AiToolbox.ChatGpt::Request(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ChatGpt_Request_mF3E73D056AC029EBCA579077AAEFDE1E69084034 (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_updateCallback, const RuntimeMethod* method) ;
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m3CA2EA9546D21617BEA636B3CA620C6DF075BAC1 (U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* __this, const RuntimeMethod* method) ;
// System.Action AiToolbox.ChatGpt::QuickRequest(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ChatGpt_QuickRequest_mC5485DBD000996FB985CB2722B5B7D95546422C4 (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<AiToolbox.RequestRecord>::get_Count()
inline int32_t List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_inline (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int64,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* __this, int64_t ___0_arg1, String_t* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B*, int64_t, String_t*, const RuntimeMethod*))Action_2_Invoke_m6D4EE4A7513F5283082D1287C738D3DC66EA5673_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void AiToolbox.RequestRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestRecord__ctor_m9A1F0EF84799AB2056FD3ABD8436BBBF5048F8C0 (RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AiToolbox.ChatGpt::Stream(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>,AiToolbox.RequestRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatGpt_Stream_m3DA72268DFB6DB4490D61FDAAFE23E59EC248F39 (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_updateCallback, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___3_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___4_failureCallback, RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* ___5_requestRecord, const RuntimeMethod* method) ;
// System.Void AiToolbox.RequestRecord::SetCancelCallback(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestRecord_SetCancelCallback_mAA7F82179B146AB29923C132FC809CD147D56D33_inline (RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_callback, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.RequestRecord>::Add(T)
inline void List_1_Add_m8017FE57AAB228713967BB10F2047B05E520C9CE_inline (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* __this, RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1*, RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// AiToolbox.ChatGpt/ChatGptContainer AiToolbox.ChatGpt/ChatGptContainer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* ChatGptContainer_get_Instance_mECA3713895D5C8D194E1647965FEA36C31BCB136 (const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<AiToolbox.RequestRecord>::get_Item(System.Int32)
inline RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* List_1_get_Item_m3FAA22B02F0282F3BAA2BEA5F57C4EE73BF33EB1 (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* (*) (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void AiToolbox.RequestRecord::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestRecord_Cancel_m6897D192D8727AA4F15C2DF87F47E4AAD7D87AA6 (RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.RequestRecord>::Clear()
inline void List_1_Clear_m48E26E99DCC2A8CD5EC27CB8F080D9FCBD2F2EBD_inline (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mB1EA7B7AB9FA705525B5EB3F7E2312CE076A6DE3 (U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836* __this, const RuntimeMethod* method) ;
// System.Action AiToolbox.ChatGpt::QuickRequestBlocking(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ChatGpt_QuickRequestBlocking_m118AE487DC3C7896BE7E5C2EFA6BFDDFE04EA868 (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AiToolbox.ChatGpt::QuickRequestCoroutine(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatGpt_QuickRequestCoroutine_m094F52980CC7870D0797644E0FCD2B7255964D7B (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, const RuntimeMethod* method) ;
// System.Void AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuickRequestCoroutineU3Ed__5__ctor_m724E96DD79C74D6558246B065C0BAE8A14F0C087 (U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mD076F3A905041B39F5A1872E08C8DB8054485A83 (U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* __this, const RuntimeMethod* method) ;
// System.String AiToolbox.ChatGpt::GetModelName(AiToolbox.Model)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGpt_GetModelName_m07033DC292835F2285119D628C7FC8430F266850 (int32_t ___0_model, const RuntimeMethod* method) ;
// AiToolbox.ChatGpt/RoleContentMessage[] AiToolbox.ChatGpt::ConvertMessages(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* ChatGpt_ConvertMessages_mB20CDF7A0724DF59DDA3C19B005B77C66B723322 (RuntimeObject* ___0_messages, String_t* ___1_role, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest AiToolbox.ChatGpt::GetWebRequest(System.String,AiToolbox.Parameters,System.Action`2<System.Int64,System.String>,AiToolbox.RequestRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ChatGpt_GetWebRequest_m10F7A2CDBA42B135CD79238A59A28A47E4F52271 (String_t* ___0_requestJson, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___2_failureCallback, RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* ___3_requestRecord, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_quitting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void AiToolbox.ChatGpt/<Stream>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamU3Ed__7__ctor_mB6097AE06BB998B77BE9605558B41D3FB2ABE481 (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void AiToolbox.ChatGpt/<GetRemoteConfig>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRemoteConfigU3Ed__8__ctor_m07B4819F7C40383748962E61CDAFE3751774E8AD (U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_url, String_t* ___1_method, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String AiToolbox.Key::B(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_B_m66D6EA9789ED330309F320608B98EB89A4C69D20 (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<AiToolbox.RequestRecord>::Remove(T)
inline bool List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6 (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* __this, RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1*, RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<AiToolbox.Message>(System.Collections.Generic.IEnumerable`1<TSource>)
inline MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* Enumerable_ToArray_TisMessage_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_mD806A7C5D0983F4FA0D1D3F59FB1B2DD8C18D856 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisMessage_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_mD806A7C5D0983F4FA0D1D3F59FB1B2DD8C18D856_gshared)(___0_source, method);
}
// System.Void System.Collections.Generic.List`1<AiToolbox.RequestRecord>::.ctor()
inline void List_1__ctor_m41B882E4D390243246208C580DAE4F349ECAFDE9 (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<AiToolbox.ChatGpt/ChatGptContainer>()
inline ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* GameObject_AddComponent_TisChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_m24C9A81F9B2B4B341685710A09327358D5AA5C9C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void AiToolbox.ChatGpt::CancelAllRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGpt_CancelAllRequests_mBC5F65F52EEB89441AA8A797F1B323399AB927D8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void AiToolbox.ChatGpt/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m117F1DE5DE79F2C230213F6EF6F4B8B9E69B461F (U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AiToolbox.ChatGpt::GetRemoteConfig(AiToolbox.Parameters,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatGpt_GetRemoteConfig_m8B9E4EB6088C9375328C44DB85DFA234E7878764 (Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___0_parameters, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___1_failureCallback, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_quitting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_quitting_m9DC9D4165EDB0FD93AB893655E26BF73566D2C1B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<AiToolbox.ChatGpt/ResponseMessage>(System.String)
inline ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63_gshared)(___0_json, method);
}
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void AiToolbox.ChatGpt/<Stream>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamU3Ed__7_U3CU3Em__Finally1_mE52F2628F50CDDFAA22D273CB0BDD48C04D6B02A (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, const RuntimeMethod* method) ;
// System.Void AiToolbox.ChatGpt/<Stream>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamU3Ed__7_System_IDisposable_Dispose_m78E41E75A65E6458016D28ED2F1F168A35134FC9 (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m195BD92A182C86A51F28B1341D019175FD63C5A4 (U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`2<System.Int64,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m6D7CC9E1EB0AA845B320F46E6E07008C4A4D98E0 (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m686F44A9A70B5BB8C72933EE13013A30652756EE_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task AiToolbox.RemoteKeyService::GetOpenAiKey(System.String,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RemoteKeyService_GetOpenAiKey_m779B75A4D8CEBE8AE6CE97365D2FFC0BE8292E4F (String_t* ___0_remoteConfigKey, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_successCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___2_failureCallback, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_m0038BECBE03E2BDE5E104BCBAAEA995B183B0563 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_m0038BECBE03E2BDE5E104BCBAAEA995B183B0563_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_mC41CD23655708B9016CC8232020AEF4DD309E194 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_mC41CD23655708B9016CC8232020AEF4DD309E194_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOpenAiKeyU3Ed__0_MoveNext_mA7BB49BDB7A16F584773641F81FB2E5AF79A7E73 (U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOpenAiKeyU3Ed__0_SetStateMachine_mB800460FC671579936131E561583CDE273B64921 (U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: AiToolbox.Message
IL2CPP_EXTERN_C void Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshal_pinvoke(const Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8& unmarshaled, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshaled_pinvoke& marshaled)
{
	marshaled.___text_0 = il2cpp_codegen_marshal_string(unmarshaled.___text_0);
	marshaled.___role_1 = unmarshaled.___role_1;
}
IL2CPP_EXTERN_C void Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshal_pinvoke_back(const Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshaled_pinvoke& marshaled, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8& unmarshaled)
{
	unmarshaled.___text_0 = il2cpp_codegen_marshal_string_result(marshaled.___text_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___text_0));
	int32_t unmarshaledrole_temp_1 = 0;
	unmarshaledrole_temp_1 = marshaled.___role_1;
	unmarshaled.___role_1 = unmarshaledrole_temp_1;
}
// Conversion method for clean up from marshalling of: AiToolbox.Message
IL2CPP_EXTERN_C void Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshal_pinvoke_cleanup(Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___text_0);
	marshaled.___text_0 = NULL;
}
// Conversion methods for marshalling of: AiToolbox.Message
IL2CPP_EXTERN_C void Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshal_com(const Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8& unmarshaled, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshaled_com& marshaled)
{
	marshaled.___text_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___text_0);
	marshaled.___role_1 = unmarshaled.___role_1;
}
IL2CPP_EXTERN_C void Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshal_com_back(const Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshaled_com& marshaled, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8& unmarshaled)
{
	unmarshaled.___text_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___text_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___text_0));
	int32_t unmarshaledrole_temp_1 = 0;
	unmarshaledrole_temp_1 = marshaled.___role_1;
	unmarshaled.___role_1 = unmarshaledrole_temp_1;
}
// Conversion method for clean up from marshalling of: AiToolbox.Message
IL2CPP_EXTERN_C void Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshal_com_cleanup(Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___text_0);
	marshaled.___text_0 = NULL;
}
// System.Void AiToolbox.Message::.ctor(System.String,AiToolbox.Role)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m893CB10C67A22E72AB06DF02FA96D13CB1D16986 (Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8* __this, String_t* ___0_text, int32_t ___1_role, const RuntimeMethod* method) 
{
	{
		// this.text = text;
		String_t* L_0 = ___0_text;
		__this->___text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_0), (void*)L_0);
		// this.role = role;
		int32_t L_1 = ___1_role;
		__this->___role_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Message__ctor_m893CB10C67A22E72AB06DF02FA96D13CB1D16986_AdjustorThunk (RuntimeObject* __this, String_t* ___0_text, int32_t ___1_role, const RuntimeMethod* method)
{
	Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8*>(__this + _offset);
	Message__ctor_m893CB10C67A22E72AB06DF02FA96D13CB1D16986(_thisAdjusted, ___0_text, ___1_role, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AiToolbox.RequestRecord::SetCancelCallback(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestRecord_SetCancelCallback_mAA7F82179B146AB29923C132FC809CD147D56D33 (RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_callback, const RuntimeMethod* method) 
{
	{
		// cancelCallback = callback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_callback;
		__this->___cancelCallback_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cancelCallback_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void AiToolbox.RequestRecord::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestRecord_Cancel_m6897D192D8727AA4F15C2DF87F47E4AAD7D87AA6 (RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// cancelCallback?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___cancelCallback_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
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
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void AiToolbox.RequestRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestRecord__ctor_m9A1F0EF84799AB2056FD3ABD8436BBBF5048F8C0 (RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Action AiToolbox.ChatGpt::Request(System.String,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ChatGpt_Request_mE78452B83B2E2CC8B7712F83C114C4CD2EEFDC4F (String_t* ___0_prompt, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_updateCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Request(new List<Message> { new Message { role = Role.User, text = prompt } }, parameters,
		//                completeCallback, failureCallback, updateCallback);
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_0 = (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01*)il2cpp_codegen_object_new(List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF(L_0, List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_RuntimeMethod_var);
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8));
		(&V_0)->___role_1 = 0;
		String_t* L_2 = ___0_prompt;
		(&V_0)->___text_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___text_0), (void*)L_2);
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_3 = V_0;
		NullCheck(L_1);
		List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_inline(L_1, L_3, List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_4 = ___1_parameters;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = ___2_completeCallback;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_6 = ___3_failureCallback;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = ___4_updateCallback;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = ChatGpt_Request_mF3E73D056AC029EBCA579077AAEFDE1E69084034(L_1, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Action AiToolbox.ChatGpt::Request(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ChatGpt_Request_mF3E73D056AC029EBCA579077AAEFDE1E69084034 (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_updateCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8017FE57AAB228713967BB10F2047B05E520C9CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRequestU3Eb__2_1_m0C11CF7C6969F0998E8583B16CC99375BE4D285C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CRequestU3Eb__0_mB14C2930B06AFABC987802C23A7B178C3D095822_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A7C882A0686F18C7D203EBB72FA9718B3AAFBD9);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B8_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B7_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* L_0 = (U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m3CA2EA9546D21617BEA636B3CA620C6DF075BAC1(L_0, NULL);
		V_0 = L_0;
		// if (updateCallback == null) {
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ___4_updateCallback;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return QuickRequest(messages, parameters, completeCallback, failureCallback);
		RuntimeObject* L_2 = ___0_messages;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_3 = ___1_parameters;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___2_completeCallback;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_5 = ___3_failureCallback;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6;
		L_6 = ChatGpt_QuickRequest_mC5485DBD000996FB985CB2722B5B7D95546422C4(L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0014:
	{
		// if (parameters.throttle > 0) {
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_7 = ___1_parameters;
		NullCheck(L_7);
		int32_t L_8 = L_7->___throttle_8;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		// var requestCount = _requestRecords.Count;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_9 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_inline(L_9, List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_RuntimeMethod_var);
		// if (requestCount >= parameters.throttle) {
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_11 = ___1_parameters;
		NullCheck(L_11);
		int32_t L_12 = L_11->___throttle_8;
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_006f;
		}
	}
	{
		// failureCallback?.Invoke((long)ChatGptErrorCodes.ThrottleExceeded,
		//                         $"Too many requests. Maximum allowed: {parameters.throttle}.");
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_13 = ___3_failureCallback;
		if (!L_13)
		{
			goto IL_004f;
		}
	}
	{
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_14 = ___3_failureCallback;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_15 = ___1_parameters;
		NullCheck(L_15);
		int32_t L_16 = L_15->___throttle_8;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral0A7C882A0686F18C7D203EBB72FA9718B3AAFBD9, L_18, NULL);
		NullCheck(L_14);
		Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(L_14, ((int64_t)1), L_19, NULL);
	}

IL_004f:
	{
		// return () => { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = ((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = L_20;
		G_B7_0 = L_21;
		if (L_21)
		{
			G_B8_0 = L_21;
			goto IL_006e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var);
		U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C* L_22 = ((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3CRequestU3Eb__2_1_m0C11CF7C6969F0998E8583B16CC99375BE4D285C_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = L_23;
		((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_1), (void*)L_24);
		G_B8_0 = L_24;
	}

IL_006e:
	{
		return G_B8_0;
	}

IL_006f:
	{
		// var requestRecord = new RequestRecord();
		U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* L_25 = V_0;
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_26 = (RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216*)il2cpp_codegen_object_new(RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		RequestRecord__ctor_m9A1F0EF84799AB2056FD3ABD8436BBBF5048F8C0(L_26, NULL);
		NullCheck(L_25);
		L_25->___requestRecord_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___requestRecord_1), (void*)L_26);
		// var enumerator = Stream(messages, parameters, updateCallback, completeCallback, failureCallback, requestRecord);
		U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* L_27 = V_0;
		RuntimeObject* L_28 = ___0_messages;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_29 = ___1_parameters;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_30 = ___4_updateCallback;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_31 = ___2_completeCallback;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_32 = ___3_failureCallback;
		U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* L_33 = V_0;
		NullCheck(L_33);
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_34 = L_33->___requestRecord_1;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		RuntimeObject* L_35;
		L_35 = ChatGpt_Stream_m3DA72268DFB6DB4490D61FDAAFE23E59EC248F39(L_28, L_29, L_30, L_31, L_32, L_34, NULL);
		NullCheck(L_27);
		L_27->___enumerator_0 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___enumerator_0), (void*)L_35);
		// var cancelCallback = new Action(() => {
		//     if (enumerator != null) {
		//         ChatGptContainer.Instance.StopCoroutine(enumerator);
		//     }
		// 
		//     _requestRecords.Remove(requestRecord);
		// });
		U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* L_36 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_37 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_37, L_36, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CRequestU3Eb__0_mB14C2930B06AFABC987802C23A7B178C3D095822_RuntimeMethod_var), NULL);
		V_1 = L_37;
		// requestRecord.SetCancelCallback(cancelCallback);
		U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* L_38 = V_0;
		NullCheck(L_38);
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_39 = L_38->___requestRecord_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_40 = V_1;
		NullCheck(L_39);
		RequestRecord_SetCancelCallback_mAA7F82179B146AB29923C132FC809CD147D56D33_inline(L_39, L_40, NULL);
		// _requestRecords.Add(requestRecord);
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_41 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
		U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* L_42 = V_0;
		NullCheck(L_42);
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_43 = L_42->___requestRecord_1;
		NullCheck(L_41);
		List_1_Add_m8017FE57AAB228713967BB10F2047B05E520C9CE_inline(L_41, L_43, List_1_Add_m8017FE57AAB228713967BB10F2047B05E520C9CE_RuntimeMethod_var);
		// ChatGptContainer.Instance.StartCoroutine(enumerator);
		ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* L_44;
		L_44 = ChatGptContainer_get_Instance_mECA3713895D5C8D194E1647965FEA36C31BCB136(NULL);
		U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* L_45 = V_0;
		NullCheck(L_45);
		RuntimeObject* L_46 = L_45->___enumerator_0;
		NullCheck(L_44);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_47;
		L_47 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_44, L_46, NULL);
		// return cancelCallback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_48 = V_1;
		return L_48;
	}
}
// System.Void AiToolbox.ChatGpt::CancelAllRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGpt_CancelAllRequests_mBC5F65F52EEB89441AA8A797F1B323399AB927D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m48E26E99DCC2A8CD5EC27CB8F080D9FCBD2F2EBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3FAA22B02F0282F3BAA2BEA5F57C4EE73BF33EB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0012;
	}

IL_0002:
	{
		// _requestRecords[0].Cancel();
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_0 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
		NullCheck(L_0);
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_1;
		L_1 = List_1_get_Item_m3FAA22B02F0282F3BAA2BEA5F57C4EE73BF33EB1(L_0, 0, List_1_get_Item_m3FAA22B02F0282F3BAA2BEA5F57C4EE73BF33EB1_RuntimeMethod_var);
		NullCheck(L_1);
		RequestRecord_Cancel_m6897D192D8727AA4F15C2DF87F47E4AAD7D87AA6(L_1, NULL);
	}

IL_0012:
	{
		// while (_requestRecords.Count > 0) {
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_2 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_inline(L_2, List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// _requestRecords.Clear();
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_4 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
		NullCheck(L_4);
		List_1_Clear_m48E26E99DCC2A8CD5EC27CB8F080D9FCBD2F2EBD_inline(L_4, List_1_Clear_m48E26E99DCC2A8CD5EC27CB8F080D9FCBD2F2EBD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Action AiToolbox.ChatGpt::QuickRequest(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ChatGpt_QuickRequest_mC5485DBD000996FB985CB2722B5B7D95546422C4 (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CQuickRequestU3Eg__CancelCallbackU7C0_m1CF9FE1C9C4717D8FF486F967124107C58EA9839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836* L_0 = (U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mB1EA7B7AB9FA705525B5EB3F7E2312CE076A6DE3(L_0, NULL);
		V_0 = L_0;
		// if (parameters.apiKeyEncryption != ApiKeyEncryption.RemoteConfig) {
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_1 = ___1_parameters;
		NullCheck(L_1);
		int32_t L_2 = L_1->___apiKeyEncryption_1;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0019;
		}
	}
	{
		// return QuickRequestBlocking(messages, parameters, completeCallback, failureCallback);
		RuntimeObject* L_3 = ___0_messages;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_4 = ___1_parameters;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = ___2_completeCallback;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_6 = ___3_failureCallback;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = ChatGpt_QuickRequestBlocking_m118AE487DC3C7896BE7E5C2EFA6BFDDFE04EA868(L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_0019:
	{
		// var enumerator = QuickRequestCoroutine(messages, parameters, completeCallback, failureCallback);
		U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836* L_8 = V_0;
		RuntimeObject* L_9 = ___0_messages;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_10 = ___1_parameters;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_11 = ___2_completeCallback;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_12 = ___3_failureCallback;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = ChatGpt_QuickRequestCoroutine_m094F52980CC7870D0797644E0FCD2B7255964D7B(L_9, L_10, L_11, L_12, NULL);
		NullCheck(L_8);
		L_8->___enumerator_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___enumerator_0), (void*)L_13);
		// ChatGptContainer.Instance.StartCoroutine(enumerator);
		ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* L_14;
		L_14 = ChatGptContainer_get_Instance_mECA3713895D5C8D194E1647965FEA36C31BCB136(NULL);
		U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836* L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___enumerator_0;
		NullCheck(L_14);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_14, L_16, NULL);
		// return CancelCallback;
		U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836* L_18 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CQuickRequestU3Eg__CancelCallbackU7C0_m1CF9FE1C9C4717D8FF486F967124107C58EA9839_RuntimeMethod_var), NULL);
		return L_19;
	}
}
// System.Collections.IEnumerator AiToolbox.ChatGpt::QuickRequestCoroutine(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatGpt_QuickRequestCoroutine_m094F52980CC7870D0797644E0FCD2B7255964D7B (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* L_0 = (U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F*)il2cpp_codegen_object_new(U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CQuickRequestCoroutineU3Ed__5__ctor_m724E96DD79C74D6558246B065C0BAE8A14F0C087(L_0, 0, NULL);
		U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* L_1 = L_0;
		RuntimeObject* L_2 = ___0_messages;
		NullCheck(L_1);
		L_1->___messages_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___messages_4), (void*)L_2);
		U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* L_3 = L_1;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_4 = ___1_parameters;
		NullCheck(L_3);
		L_3->___parameters_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___parameters_2), (void*)L_4);
		U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* L_5 = L_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = ___2_completeCallback;
		NullCheck(L_5);
		L_5->___completeCallback_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___completeCallback_5), (void*)L_6);
		U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* L_7 = L_5;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_8 = ___3_failureCallback;
		NullCheck(L_7);
		L_7->___failureCallback_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___failureCallback_3), (void*)L_8);
		return L_7;
	}
}
// System.Action AiToolbox.ChatGpt::QuickRequestBlocking(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ChatGpt_QuickRequestBlocking_m118AE487DC3C7896BE7E5C2EFA6BFDDFE04EA868 (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8017FE57AAB228713967BB10F2047B05E520C9CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CQuickRequestBlockingU3Eb__6_2_mDE5BC04FA494B9FEFF17AE098F709444FE9D0E1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CQuickRequestBlockingU3Eb__0_m0D5F6BD915FD6BAFB652D85E8C3037E4109AE074_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CQuickRequestBlockingU3Eb__1_mCDCE4C1746B028C90A51DA27C1D000E478536973_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A7C882A0686F18C7D203EBB72FA9718B3AAFBD9);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* V_0 = NULL;
	String_t* V_1 = NULL;
	RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B4_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B7_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_0 = (U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_mD076F3A905041B39F5A1872E08C8DB8054485A83(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_1 = V_0;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_2 = ___3_failureCallback;
		NullCheck(L_1);
		L_1->___failureCallback_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___failureCallback_3), (void*)L_2);
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_3 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___2_completeCallback;
		NullCheck(L_3);
		L_3->___completeCallback_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___completeCallback_4), (void*)L_4);
		// if (parameters.throttle > 0) {
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_5 = ___1_parameters;
		NullCheck(L_5);
		int32_t L_6 = L_5->___throttle_8;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		// var requestCount = _requestRecords.Count;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_7 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_inline(L_7, List_1_get_Count_m720F7EFB766DD06CED7DA5A4D3654FEF7E8725CB_RuntimeMethod_var);
		// if (requestCount >= parameters.throttle) {
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_9 = ___1_parameters;
		NullCheck(L_9);
		int32_t L_10 = L_9->___throttle_8;
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0077;
		}
	}
	{
		// failureCallback?.Invoke((long)ChatGptErrorCodes.ThrottleExceeded,
		//                         $"Too many requests. Maximum allowed: {parameters.throttle}.");
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_11 = V_0;
		NullCheck(L_11);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_12 = L_11->___failureCallback_3;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_13 = L_12;
		G_B3_0 = L_13;
		if (L_13)
		{
			G_B4_0 = L_13;
			goto IL_003b;
		}
	}
	{
		goto IL_0057;
	}

IL_003b:
	{
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_14 = ___1_parameters;
		NullCheck(L_14);
		int32_t L_15 = L_14->___throttle_8;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral0A7C882A0686F18C7D203EBB72FA9718B3AAFBD9, L_17, NULL);
		NullCheck(G_B4_0);
		Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(G_B4_0, ((int64_t)1), L_18, NULL);
	}

IL_0057:
	{
		// return () => { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = ((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = L_19;
		G_B6_0 = L_20;
		if (L_20)
		{
			G_B7_0 = L_20;
			goto IL_0076;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var);
		U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C* L_21 = ((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_22, L_21, (intptr_t)((void*)U3CU3Ec_U3CQuickRequestBlockingU3Eb__6_2_mDE5BC04FA494B9FEFF17AE098F709444FE9D0E1B_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = L_22;
		((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_2 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9__6_2_2), (void*)L_23);
		G_B7_0 = L_23;
	}

IL_0076:
	{
		return G_B7_0;
	}

IL_0077:
	{
		// var requestObject = new RequestMessage {
		//     model = GetModelName(parameters.model),
		//     temperature = parameters.temperature,
		//     stream = false,
		//     messages = ConvertMessages(messages, parameters.role),
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508));
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_24 = ___1_parameters;
		NullCheck(L_24);
		int32_t L_25 = L_24->___model_4;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = ChatGpt_GetModelName_m07033DC292835F2285119D628C7FC8430F266850(L_25, NULL);
		(&V_2)->___model_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___model_0), (void*)L_26);
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_27 = ___1_parameters;
		NullCheck(L_27);
		float L_28 = L_27->___temperature_5;
		(&V_2)->___temperature_2 = L_28;
		(&V_2)->___stream_3 = (bool)0;
		RuntimeObject* L_29 = ___0_messages;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_30 = ___1_parameters;
		NullCheck(L_30);
		String_t* L_31 = L_30->___role_6;
		RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* L_32;
		L_32 = ChatGpt_ConvertMessages_mB20CDF7A0724DF59DDA3C19B005B77C66B723322(L_29, L_31, NULL);
		(&V_2)->___messages_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___messages_1), (void*)L_32);
		RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508 L_33 = V_2;
		// var requestRecord = new RequestRecord();
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_34 = V_0;
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_35 = (RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216*)il2cpp_codegen_object_new(RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		RequestRecord__ctor_m9A1F0EF84799AB2056FD3ABD8436BBBF5048F8C0(L_35, NULL);
		NullCheck(L_34);
		L_34->___requestRecord_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___requestRecord_1), (void*)L_35);
		// var requestJson = JsonUtility.ToJson(requestObject);
		RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508 L_36 = L_33;
		RuntimeObject* L_37 = Box(RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_il2cpp_TypeInfo_var, &L_36);
		String_t* L_38;
		L_38 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_37, NULL);
		V_1 = L_38;
		// var request = GetWebRequest(requestJson, parameters, failureCallback, requestRecord);
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_39 = V_0;
		String_t* L_40 = V_1;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_41 = ___1_parameters;
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_42 = V_0;
		NullCheck(L_42);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_43 = L_42->___failureCallback_3;
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_44 = V_0;
		NullCheck(L_44);
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_45 = L_44->___requestRecord_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_46;
		L_46 = ChatGpt_GetWebRequest_m10F7A2CDBA42B135CD79238A59A28A47E4F52271(L_40, L_41, L_43, L_45, NULL);
		NullCheck(L_39);
		L_39->___request_0 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->___request_0), (void*)L_46);
		// var cancelCallback = new Action(() => {
		//     try {
		//         request?.Abort();
		//         request?.Dispose();
		//         _requestRecords.Remove(requestRecord);
		//     }
		//     catch (Exception) {
		//         // If the request is aborted, accessing the error property will throw an exception.
		//     }
		// });
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_47 = V_0;
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_48 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_49 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_49, L_48, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CQuickRequestBlockingU3Eb__0_m0D5F6BD915FD6BAFB652D85E8C3037E4109AE074_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		L_47->___cancelCallback_2 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->___cancelCallback_2), (void*)L_49);
		// requestRecord.SetCancelCallback(cancelCallback);
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_50 = V_0;
		NullCheck(L_50);
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_51 = L_50->___requestRecord_1;
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_52 = V_0;
		NullCheck(L_52);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_53 = L_52->___cancelCallback_2;
		NullCheck(L_51);
		RequestRecord_SetCancelCallback_mAA7F82179B146AB29923C132FC809CD147D56D33_inline(L_51, L_53, NULL);
		// _requestRecords.Add(requestRecord);
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_54 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_55 = V_0;
		NullCheck(L_55);
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_56 = L_55->___requestRecord_1;
		NullCheck(L_54);
		List_1_Add_m8017FE57AAB228713967BB10F2047B05E520C9CE_inline(L_54, L_56, List_1_Add_m8017FE57AAB228713967BB10F2047B05E520C9CE_RuntimeMethod_var);
		// request.SendWebRequest().completed += _ => {
		//     _requestRecords.Remove(requestRecord);
		//     Application.quitting -= cancelCallback;
		// 
		//     bool isErrorResponse;
		//     try {
		//         isErrorResponse = !string.IsNullOrEmpty(request.error);
		//     }
		//     catch (Exception) {
		//         // If the request is aborted, accessing the error property will throw an exception.
		//         return;
		//     }
		// 
		//     if (isErrorResponse) {
		//         failureCallback?.Invoke(request.responseCode, request.error);
		//         return;
		//     }
		// 
		//     var response = JsonUtility.FromJson<ResponseMessage>(request.downloadHandler.text);
		//     if (response.choices.Length == 0) {
		//         failureCallback?.Invoke((long)ChatGptErrorCodes.Unknown,
		//                                 "No response choices returned from the server.");
		//         return;
		//     }
		// 
		//     var responseMessage = response.choices[0].message.content;
		//     completeCallback?.Invoke(responseMessage);
		//     request.Dispose();
		// };
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_57 = V_0;
		NullCheck(L_57);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_58 = L_57->___request_0;
		NullCheck(L_58);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_59;
		L_59 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_58, NULL);
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_60 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_61 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_61, L_60, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CQuickRequestBlockingU3Eb__1_mCDCE4C1746B028C90A51DA27C1D000E478536973_RuntimeMethod_var), NULL);
		NullCheck(L_59);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_59, L_61, NULL);
		// Application.quitting += cancelCallback;
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_62 = V_0;
		NullCheck(L_62);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_63 = L_62->___cancelCallback_2;
		Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5(L_63, NULL);
		// return cancelCallback;
		U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* L_64 = V_0;
		NullCheck(L_64);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_65 = L_64->___cancelCallback_2;
		return L_65;
	}
}
// System.Collections.IEnumerator AiToolbox.ChatGpt::Stream(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>,AiToolbox.RequestRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatGpt_Stream_m3DA72268DFB6DB4490D61FDAAFE23E59EC248F39 (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_updateCallback, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___3_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___4_failureCallback, RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* ___5_requestRecord, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* L_0 = (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106*)il2cpp_codegen_object_new(U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStreamU3Ed__7__ctor_mB6097AE06BB998B77BE9605558B41D3FB2ABE481(L_0, 0, NULL);
		U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* L_1 = L_0;
		RuntimeObject* L_2 = ___0_messages;
		NullCheck(L_1);
		L_1->___messages_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___messages_3), (void*)L_2);
		U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* L_3 = L_1;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_4 = ___1_parameters;
		NullCheck(L_3);
		L_3->___parameters_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___parameters_2), (void*)L_4);
		U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* L_5 = L_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = ___2_updateCallback;
		NullCheck(L_5);
		L_5->___updateCallback_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___updateCallback_6), (void*)L_6);
		U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* L_7 = L_5;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = ___3_completeCallback;
		NullCheck(L_7);
		L_7->___completeCallback_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___completeCallback_7), (void*)L_8);
		U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* L_9 = L_7;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_10 = ___4_failureCallback;
		NullCheck(L_9);
		L_9->___failureCallback_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___failureCallback_4), (void*)L_10);
		U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* L_11 = L_9;
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_12 = ___5_requestRecord;
		NullCheck(L_11);
		L_11->___requestRecord_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___requestRecord_5), (void*)L_12);
		return L_11;
	}
}
// System.Collections.IEnumerator AiToolbox.ChatGpt::GetRemoteConfig(AiToolbox.Parameters,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChatGpt_GetRemoteConfig_m8B9E4EB6088C9375328C44DB85DFA234E7878764 (Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___0_parameters, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___1_failureCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* L_0 = (U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87*)il2cpp_codegen_object_new(U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRemoteConfigU3Ed__8__ctor_m07B4819F7C40383748962E61CDAFE3751774E8AD(L_0, 0, NULL);
		U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* L_1 = L_0;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_2 = ___0_parameters;
		NullCheck(L_1);
		L_1->___parameters_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___parameters_2), (void*)L_2);
		U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* L_3 = L_1;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_4 = ___1_failureCallback;
		NullCheck(L_3);
		L_3->___failureCallback_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___failureCallback_3), (void*)L_4);
		return L_3;
	}
}
// UnityEngine.Networking.UnityWebRequest AiToolbox.ChatGpt::GetWebRequest(System.String,AiToolbox.Parameters,System.Action`2<System.Int64,System.String>,AiToolbox.RequestRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ChatGpt_GetWebRequest_m10F7A2CDBA42B135CD79238A59A28A47E4F52271 (String_t* ___0_requestJson, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___2_failureCallback, RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* ___3_requestRecord, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A233AEA6357E19022D5D5024D474D86CA4CB0E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var baseUrl = "https://api.openai.com/v1/chat/completions";
		// var request = new UnityWebRequest(baseUrl, "POST");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_0, _stringLiteral2A233AEA6357E19022D5D5024D474D86CA4CB0E5, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		V_0 = L_0;
		// request.uploadHandler = new UploadHandlerRaw(System.Text.Encoding.UTF8.GetBytes(requestJson));
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = V_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = ___0_requestJson;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_5 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_5, L_4, NULL);
		NullCheck(L_1);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_1, L_5, NULL);
		// request.downloadHandler = new DownloadHandlerBuffer();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = V_0;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_7 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_7, NULL);
		NullCheck(L_6);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_6, L_7, NULL);
		// request.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = V_0;
		NullCheck(L_8);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_8, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// request.timeout = parameters.timeout;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = V_0;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_10 = ___1_parameters;
		NullCheck(L_10);
		int32_t L_11 = L_10->___timeout_7;
		NullCheck(L_9);
		UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_9, L_11, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			// var apiKey = parameters.apiKey;
			Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_12 = ___1_parameters;
			NullCheck(L_12);
			String_t* L_13 = L_12->___apiKey_0;
			V_1 = L_13;
			// var isEncrypted = parameters.apiKeyEncryption == ApiKeyEncryption.LocallyEncrypted;
			Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_14 = ___1_parameters;
			NullCheck(L_14);
			int32_t L_15 = L_14->___apiKeyEncryption_1;
			// if (isEncrypted) {
			if (!((((int32_t)L_15) == ((int32_t)1))? 1 : 0))
			{
				goto IL_006c_1;
			}
		}
		{
			// apiKey = Key.B(apiKey, parameters.apiKeyEncryptionPassword);
			String_t* L_16 = V_1;
			Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_17 = ___1_parameters;
			NullCheck(L_17);
			String_t* L_18 = L_17->___apiKeyEncryptionPassword_3;
			String_t* L_19;
			L_19 = Key_B_m66D6EA9789ED330309F320608B98EB89A4C69D20(L_16, L_18, NULL);
			V_1 = L_19;
		}

IL_006c_1:
		{
			// request.SetRequestHeader("Authorization", "Bearer " + apiKey);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = V_0;
			String_t* L_21 = V_1;
			String_t* L_22;
			L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_21, NULL);
			NullCheck(L_20);
			UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_20, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_22, NULL);
			// }
			goto IL_00a4;
		}
	}// end try (depth: 1)
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
	{// begin catch(System.Exception)
		{
			// catch (Exception e) {
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// failureCallback?.Invoke((long)ChatGptErrorCodes.Unknown, e.Message);
			Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_23 = ___2_failureCallback;
			if (!L_23)
			{
				goto IL_0096;
			}
		}
		{
			Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_24 = ___2_failureCallback;
			Exception_t* L_25 = V_2;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_25);
			NullCheck(L_24);
			Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(L_24, ((int64_t)4), L_26, NULL);
		}

IL_0096:
		{
			// _requestRecords.Remove(requestRecord);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var)));
			List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_27 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))))->____requestRecords_0;
			RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_28 = ___3_requestRecord;
			NullCheck(L_27);
			bool L_29;
			L_29 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_27, L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var)));
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a4;
		}
	}// end catch (depth: 1)

IL_00a4:
	{
		// return request;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_30 = V_0;
		return L_30;
	}
}
// System.String AiToolbox.ChatGpt::GetModelName(AiToolbox.Model)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGpt_GetModelName_m07033DC292835F2285119D628C7FC8430F266850 (int32_t ___0_model, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622C0528D86A82D0FD63C00966CCDC09F9A83C53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE372EB1EA108A46266AC9BC3B2D028E5D301B6B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return model switch {
		//     Model.Gpt35Turbo => "gpt-3.5-turbo",
		//     Model.Gpt4 => "gpt-4",
		//     _ => throw new ArgumentOutOfRangeException(nameof(model), model, null)
		// };
		int32_t L_0 = ___0_model;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___0_model;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0019;
	}

IL_0009:
	{
		// Model.Gpt35Turbo => "gpt-3.5-turbo",
		V_0 = _stringLiteralEE372EB1EA108A46266AC9BC3B2D028E5D301B6B;
		goto IL_002b;
	}

IL_0011:
	{
		// Model.Gpt4 => "gpt-4",
		V_0 = _stringLiteral622C0528D86A82D0FD63C00966CCDC09F9A83C53;
		goto IL_002b;
	}

IL_0019:
	{
		// _ => throw new ArgumentOutOfRangeException(nameof(model), model, null)
		int32_t L_2 = ___0_model;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Model_t881B444BB4272BC7A334C6C38039150595EDFE48_il2cpp_TypeInfo_var)), &L_3);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB95AC6F5DAF4F3EB9438A7F55847FF126519704)), L_4, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChatGpt_GetModelName_m07033DC292835F2285119D628C7FC8430F266850_RuntimeMethod_var)));
	}

IL_002b:
	{
		String_t* L_6 = V_0;
		return L_6;
	}
}
// AiToolbox.ChatGpt/RoleContentMessage[] AiToolbox.ChatGpt::ConvertMessages(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* ChatGpt_ConvertMessages_mB20CDF7A0724DF59DDA3C19B005B77C66B723322 (RuntimeObject* ___0_messages, String_t* ___1_role, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisMessage_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_mD806A7C5D0983F4FA0D1D3F59FB1B2DD8C18D856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5900131C6792A1999B0E64BF442DABB86DDAC40A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C0A1E9BF9118A96D440F9C412F1CA49D661D0EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* V_1 = NULL;
	RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* V_2 = NULL;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B3_0 = 0;
	MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* G_B5_0 = NULL;
	MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* G_B4_0 = NULL;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* G_B10_2 = NULL;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* G_B9_2 = NULL;
	String_t* G_B11_0 = NULL;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5* G_B11_1 = NULL;
	int32_t G_B11_2 = 0;
	RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* G_B11_3 = NULL;
	{
		// var systemMessageOffset = string.IsNullOrEmpty(role) ? 0 : 1;
		String_t* L_0 = ___1_role;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 0;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		// var inputArray = messages as Message[] ?? messages.ToArray();
		RuntimeObject* L_2 = ___0_messages;
		MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* L_3 = ((MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744*)IsInst((RuntimeObject*)L_2, MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744_il2cpp_TypeInfo_var));
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_4 = ___0_messages;
		MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* L_5;
		L_5 = Enumerable_ToArray_TisMessage_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_mD806A7C5D0983F4FA0D1D3F59FB1B2DD8C18D856(L_4, Enumerable_ToArray_TisMessage_t95840816AFEB01D35B7256FB5BB1878D36EB19A8_mD806A7C5D0983F4FA0D1D3F59FB1B2DD8C18D856_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_001d:
	{
		V_1 = G_B5_0;
		// var requestMessages = new RoleContentMessage[inputArray.Length + systemMessageOffset];
		MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = V_0;
		RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* L_8 = (RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*)(RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*)SZArrayNew(RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7)));
		V_2 = L_8;
		// if (systemMessageOffset > 0) {
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		// requestMessages[0] = new RoleContentMessage { role = "system", content = role };
		RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* L_10 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5));
		(&V_3)->___role_0 = _stringLiteral8C0A1E9BF9118A96D440F9C412F1CA49D661D0EE;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___role_0), (void*)_stringLiteral8C0A1E9BF9118A96D440F9C412F1CA49D661D0EE);
		String_t* L_11 = ___1_role;
		(&V_3)->___content_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___content_1), (void*)L_11);
		RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 L_12 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5)L_12);
	}

IL_0051:
	{
		// for (var i = systemMessageOffset; i < requestMessages.Length; i++) {
		int32_t L_13 = V_0;
		V_4 = L_13;
		goto IL_00a3;
	}

IL_0056:
	{
		// var message = inputArray[i - systemMessageOffset];
		MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* L_14 = V_1;
		int32_t L_15 = V_4;
		int32_t L_16 = V_0;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		// requestMessages[i] = new RoleContentMessage {
		//     role = message.role == Role.User ? "user" : "assistant", content = message.text
		// };
		RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* L_19 = V_2;
		int32_t L_20 = V_4;
		il2cpp_codegen_initobj((&V_3), sizeof(RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5));
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_21 = V_5;
		int32_t L_22 = L_21.___role_1;
		G_B9_0 = (&V_3);
		G_B9_1 = L_20;
		G_B9_2 = L_19;
		if (!L_22)
		{
			G_B10_0 = (&V_3);
			G_B10_1 = L_20;
			G_B10_2 = L_19;
			goto IL_007f;
		}
	}
	{
		G_B11_0 = _stringLiteral5900131C6792A1999B0E64BF442DABB86DDAC40A;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_0084;
	}

IL_007f:
	{
		G_B11_0 = _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_0084:
	{
		G_B11_1->___role_0 = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->___role_0), (void*)G_B11_0);
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_23 = V_5;
		String_t* L_24 = L_23.___text_0;
		(&V_3)->___content_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___content_1), (void*)L_24);
		RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 L_25 = V_3;
		NullCheck(G_B11_3);
		(G_B11_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_2), (RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5)L_25);
		// for (var i = systemMessageOffset; i < requestMessages.Length; i++) {
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a3:
	{
		// for (var i = systemMessageOffset; i < requestMessages.Length; i++) {
		int32_t L_27 = V_4;
		RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* L_28 = V_2;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0056;
		}
	}
	{
		// return requestMessages;
		RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* L_29 = V_2;
		return L_29;
	}
}
// System.Void AiToolbox.ChatGpt::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGpt__cctor_mD5C9ECE4440011C5B673BF172559F04F46A27F5B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m41B882E4D390243246208C580DAE4F349ECAFDE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<RequestRecord> _requestRecords = new List<RequestRecord>();
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_0 = (List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1*)il2cpp_codegen_object_new(List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m41B882E4D390243246208C580DAE4F349ECAFDE9(L_0, List_1__ctor_m41B882E4D390243246208C580DAE4F349ECAFDE9_RuntimeMethod_var);
		((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0), (void*)L_0);
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
// AiToolbox.ChatGpt/ChatGptContainer AiToolbox.ChatGpt/ChatGptContainer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* ChatGptContainer_get_Instance_mECA3713895D5C8D194E1647965FEA36C31BCB136 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_m24C9A81F9B2B4B341685710A09327358D5AA5C9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral183DE467BE4FB42C1B00A41574482B6AC615D229);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null) {
		ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* L_0 = ((ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_StaticFields*)il2cpp_codegen_static_fields_for(ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// var container = new GameObject("ChatGptContainer");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral183DE467BE4FB42C1B00A41574482B6AC615D229, NULL);
		// DontDestroyOnLoad(container);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_3, NULL);
		// container.hideFlags = HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, 1, NULL);
		// _instance = container.AddComponent<ChatGptContainer>();
		NullCheck(L_4);
		ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* L_5;
		L_5 = GameObject_AddComponent_TisChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_m24C9A81F9B2B4B341685710A09327358D5AA5C9C(L_4, GameObject_AddComponent_TisChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_m24C9A81F9B2B4B341685710A09327358D5AA5C9C_RuntimeMethod_var);
		((ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_StaticFields*)il2cpp_codegen_static_fields_for(ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_il2cpp_TypeInfo_var))->____instance_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_StaticFields*)il2cpp_codegen_static_fields_for(ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_il2cpp_TypeInfo_var))->____instance_4), (void*)L_5);
	}

IL_002e:
	{
		// return _instance;
		ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* L_6 = ((ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_StaticFields*)il2cpp_codegen_static_fields_for(ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6_il2cpp_TypeInfo_var))->____instance_4;
		return L_6;
	}
}
// System.Void AiToolbox.ChatGpt/ChatGptContainer::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGptContainer_OnApplicationQuit_m01B07C0D130983653713ACFCCCCB1A0D5BE1527B (ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CancelAllRequests();
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		ChatGpt_CancelAllRequests_mBC5F65F52EEB89441AA8A797F1B323399AB927D8(NULL);
		// }
		return;
	}
}
// System.Void AiToolbox.ChatGpt/ChatGptContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGptContainer__ctor_m71B87C0D9443A47A40FC4127EF60DBB1991F782D (ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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


// Conversion methods for marshalling of: AiToolbox.ChatGpt/RequestMessage
IL2CPP_EXTERN_C void RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshal_pinvoke(const RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508& unmarshaled, RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshaled_pinvoke& marshaled)
{
	marshaled.___model_0 = il2cpp_codegen_marshal_string(unmarshaled.___model_0);
	if (unmarshaled.___messages_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledmessages_Length = (unmarshaled.___messages_1)->max_length;
		marshaled.___messages_1 = il2cpp_codegen_marshal_allocate_array<RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke>(_unmarshaledmessages_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledmessages_Length); i++)
		{
			RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke((unmarshaled.___messages_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___messages_1)[i]);
		}
	}
	else
	{
		marshaled.___messages_1 = NULL;
	}
	marshaled.___temperature_2 = unmarshaled.___temperature_2;
	marshaled.___stream_3 = static_cast<int32_t>(unmarshaled.___stream_3);
}
IL2CPP_EXTERN_C void RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshal_pinvoke_back(const RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshaled_pinvoke& marshaled, RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___model_0 = il2cpp_codegen_marshal_string_result(marshaled.___model_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___model_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___model_0));
	if (marshaled.___messages_1 != NULL)
	{
		if (unmarshaled.___messages_1 == NULL)
		{
			unmarshaled.___messages_1 = reinterpret_cast<RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*>((RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*)SZArrayNew(RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___messages_1), (void*)reinterpret_cast<RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*>((RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*)SZArrayNew(RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___messages_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 _marshaled____messages_1_i__unmarshaled;
			memset((&_marshaled____messages_1_i__unmarshaled), 0, sizeof(_marshaled____messages_1_i__unmarshaled));
			RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_back((marshaled.___messages_1)[i], _marshaled____messages_1_i__unmarshaled);
			(unmarshaled.___messages_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____messages_1_i__unmarshaled);
		}
	}
	float unmarshaledtemperature_temp_2 = 0.0f;
	unmarshaledtemperature_temp_2 = marshaled.___temperature_2;
	unmarshaled.___temperature_2 = unmarshaledtemperature_temp_2;
	bool unmarshaledstream_temp_3 = false;
	unmarshaledstream_temp_3 = static_cast<bool>(marshaled.___stream_3);
	unmarshaled.___stream_3 = unmarshaledstream_temp_3;
}
// Conversion method for clean up from marshalling of: AiToolbox.ChatGpt/RequestMessage
IL2CPP_EXTERN_C void RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshal_pinvoke_cleanup(RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___model_0);
	marshaled.___model_0 = NULL;
	if (marshaled.___messages_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____messages_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____messages_1_CleanupLoopCount); i++)
		{
			RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_cleanup((marshaled.___messages_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___messages_1);
		marshaled.___messages_1 = NULL;
	}
}


// Conversion methods for marshalling of: AiToolbox.ChatGpt/RequestMessage
IL2CPP_EXTERN_C void RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshal_com(const RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508& unmarshaled, RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshaled_com& marshaled)
{
	marshaled.___model_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___model_0);
	if (unmarshaled.___messages_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledmessages_Length = (unmarshaled.___messages_1)->max_length;
		marshaled.___messages_1 = il2cpp_codegen_marshal_allocate_array<RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com>(_unmarshaledmessages_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledmessages_Length); i++)
		{
			RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com((unmarshaled.___messages_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___messages_1)[i]);
		}
	}
	else
	{
		marshaled.___messages_1 = NULL;
	}
	marshaled.___temperature_2 = unmarshaled.___temperature_2;
	marshaled.___stream_3 = static_cast<int32_t>(unmarshaled.___stream_3);
}
IL2CPP_EXTERN_C void RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshal_com_back(const RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshaled_com& marshaled, RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___model_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___model_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___model_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___model_0));
	if (marshaled.___messages_1 != NULL)
	{
		if (unmarshaled.___messages_1 == NULL)
		{
			unmarshaled.___messages_1 = reinterpret_cast<RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*>((RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*)SZArrayNew(RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___messages_1), (void*)reinterpret_cast<RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*>((RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957*)SZArrayNew(RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___messages_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 _marshaled____messages_1_i__unmarshaled;
			memset((&_marshaled____messages_1_i__unmarshaled), 0, sizeof(_marshaled____messages_1_i__unmarshaled));
			RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_back((marshaled.___messages_1)[i], _marshaled____messages_1_i__unmarshaled);
			(unmarshaled.___messages_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____messages_1_i__unmarshaled);
		}
	}
	float unmarshaledtemperature_temp_2 = 0.0f;
	unmarshaledtemperature_temp_2 = marshaled.___temperature_2;
	unmarshaled.___temperature_2 = unmarshaledtemperature_temp_2;
	bool unmarshaledstream_temp_3 = false;
	unmarshaledstream_temp_3 = static_cast<bool>(marshaled.___stream_3);
	unmarshaled.___stream_3 = unmarshaledstream_temp_3;
}
// Conversion method for clean up from marshalling of: AiToolbox.ChatGpt/RequestMessage
IL2CPP_EXTERN_C void RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshal_com_cleanup(RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___model_0);
	marshaled.___model_0 = NULL;
	if (marshaled.___messages_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____messages_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____messages_1_CleanupLoopCount); i++)
		{
			RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_cleanup((marshaled.___messages_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___messages_1);
		marshaled.___messages_1 = NULL;
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
// Conversion methods for marshalling of: AiToolbox.ChatGpt/RoleContentMessage
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke(const RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5& unmarshaled, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke& marshaled)
{
	marshaled.___role_0 = il2cpp_codegen_marshal_string(unmarshaled.___role_0);
	marshaled.___content_1 = il2cpp_codegen_marshal_string(unmarshaled.___content_1);
}
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_back(const RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke& marshaled, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5& unmarshaled)
{
	unmarshaled.___role_0 = il2cpp_codegen_marshal_string_result(marshaled.___role_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___role_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___role_0));
	unmarshaled.___content_1 = il2cpp_codegen_marshal_string_result(marshaled.___content_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___content_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___content_1));
}
// Conversion method for clean up from marshalling of: AiToolbox.ChatGpt/RoleContentMessage
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_cleanup(RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___role_0);
	marshaled.___role_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___content_1);
	marshaled.___content_1 = NULL;
}
// Conversion methods for marshalling of: AiToolbox.ChatGpt/RoleContentMessage
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com(const RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5& unmarshaled, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com& marshaled)
{
	marshaled.___role_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___role_0);
	marshaled.___content_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___content_1);
}
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_back(const RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com& marshaled, RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5& unmarshaled)
{
	unmarshaled.___role_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___role_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___role_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___role_0));
	unmarshaled.___content_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___content_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___content_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___content_1));
}
// Conversion method for clean up from marshalling of: AiToolbox.ChatGpt/RoleContentMessage
IL2CPP_EXTERN_C void RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_cleanup(RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___role_0);
	marshaled.___role_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___content_1);
	marshaled.___content_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: AiToolbox.ChatGpt/ResponseMessage
IL2CPP_EXTERN_C void ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshal_pinvoke(const ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1& unmarshaled, ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshaled_pinvoke& marshaled)
{
	marshaled.___id_0 = il2cpp_codegen_marshal_string(unmarshaled.___id_0);
	marshaled.___created_1 = il2cpp_codegen_marshal_string(unmarshaled.___created_1);
	if (unmarshaled.___choices_2 != NULL)
	{
		il2cpp_array_size_t _unmarshaledchoices_Length = (unmarshaled.___choices_2)->max_length;
		marshaled.___choices_2 = il2cpp_codegen_marshal_allocate_array<ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke>(_unmarshaledchoices_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledchoices_Length); i++)
		{
			ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_pinvoke((unmarshaled.___choices_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___choices_2)[i]);
		}
	}
	else
	{
		marshaled.___choices_2 = NULL;
	}
	marshaled.___model_3 = il2cpp_codegen_marshal_string(unmarshaled.___model_3);
	marshaled.___usage_4 = unmarshaled.___usage_4;
}
IL2CPP_EXTERN_C void ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshal_pinvoke_back(const ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshaled_pinvoke& marshaled, ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___id_0 = il2cpp_codegen_marshal_string_result(marshaled.___id_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___id_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___id_0));
	unmarshaled.___created_1 = il2cpp_codegen_marshal_string_result(marshaled.___created_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___created_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___created_1));
	if (marshaled.___choices_2 != NULL)
	{
		if (unmarshaled.___choices_2 == NULL)
		{
			unmarshaled.___choices_2 = reinterpret_cast<ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766*>((ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766*)SZArrayNew(ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___choices_2), (void*)reinterpret_cast<ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766*>((ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766*)SZArrayNew(ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___choices_2)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB _marshaled____choices_2_i__unmarshaled;
			memset((&_marshaled____choices_2_i__unmarshaled), 0, sizeof(_marshaled____choices_2_i__unmarshaled));
			ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_pinvoke_back((marshaled.___choices_2)[i], _marshaled____choices_2_i__unmarshaled);
			(unmarshaled.___choices_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____choices_2_i__unmarshaled);
		}
	}
	unmarshaled.___model_3 = il2cpp_codegen_marshal_string_result(marshaled.___model_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___model_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___model_3));
	Usage_t763250BA59A13A30B75B11CFEC286A86A22BC82A unmarshaledusage_temp_4;
	memset((&unmarshaledusage_temp_4), 0, sizeof(unmarshaledusage_temp_4));
	unmarshaledusage_temp_4 = marshaled.___usage_4;
	unmarshaled.___usage_4 = unmarshaledusage_temp_4;
}
// Conversion method for clean up from marshalling of: AiToolbox.ChatGpt/ResponseMessage
IL2CPP_EXTERN_C void ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshal_pinvoke_cleanup(ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___id_0);
	marshaled.___id_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___created_1);
	marshaled.___created_1 = NULL;
	if (marshaled.___choices_2 != NULL)
	{
		const il2cpp_array_size_t marshaled____choices_2_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____choices_2_CleanupLoopCount); i++)
		{
			ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_pinvoke_cleanup((marshaled.___choices_2)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___choices_2);
		marshaled.___choices_2 = NULL;
	}
	il2cpp_codegen_marshal_free(marshaled.___model_3);
	marshaled.___model_3 = NULL;
}


// Conversion methods for marshalling of: AiToolbox.ChatGpt/ResponseMessage
IL2CPP_EXTERN_C void ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshal_com(const ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1& unmarshaled, ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshaled_com& marshaled)
{
	marshaled.___id_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___id_0);
	marshaled.___created_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___created_1);
	if (unmarshaled.___choices_2 != NULL)
	{
		il2cpp_array_size_t _unmarshaledchoices_Length = (unmarshaled.___choices_2)->max_length;
		marshaled.___choices_2 = il2cpp_codegen_marshal_allocate_array<ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com>(_unmarshaledchoices_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledchoices_Length); i++)
		{
			ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_com((unmarshaled.___choices_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___choices_2)[i]);
		}
	}
	else
	{
		marshaled.___choices_2 = NULL;
	}
	marshaled.___model_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___model_3);
	marshaled.___usage_4 = unmarshaled.___usage_4;
}
IL2CPP_EXTERN_C void ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshal_com_back(const ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshaled_com& marshaled, ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___id_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___id_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___id_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___id_0));
	unmarshaled.___created_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___created_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___created_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___created_1));
	if (marshaled.___choices_2 != NULL)
	{
		if (unmarshaled.___choices_2 == NULL)
		{
			unmarshaled.___choices_2 = reinterpret_cast<ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766*>((ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766*)SZArrayNew(ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___choices_2), (void*)reinterpret_cast<ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766*>((ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766*)SZArrayNew(ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___choices_2)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB _marshaled____choices_2_i__unmarshaled;
			memset((&_marshaled____choices_2_i__unmarshaled), 0, sizeof(_marshaled____choices_2_i__unmarshaled));
			ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_com_back((marshaled.___choices_2)[i], _marshaled____choices_2_i__unmarshaled);
			(unmarshaled.___choices_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____choices_2_i__unmarshaled);
		}
	}
	unmarshaled.___model_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___model_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___model_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___model_3));
	Usage_t763250BA59A13A30B75B11CFEC286A86A22BC82A unmarshaledusage_temp_4;
	memset((&unmarshaledusage_temp_4), 0, sizeof(unmarshaledusage_temp_4));
	unmarshaledusage_temp_4 = marshaled.___usage_4;
	unmarshaled.___usage_4 = unmarshaledusage_temp_4;
}
// Conversion method for clean up from marshalling of: AiToolbox.ChatGpt/ResponseMessage
IL2CPP_EXTERN_C void ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshal_com_cleanup(ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___id_0);
	marshaled.___id_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___created_1);
	marshaled.___created_1 = NULL;
	if (marshaled.___choices_2 != NULL)
	{
		const il2cpp_array_size_t marshaled____choices_2_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____choices_2_CleanupLoopCount); i++)
		{
			ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_com_cleanup((marshaled.___choices_2)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___choices_2);
		marshaled.___choices_2 = NULL;
	}
	il2cpp_codegen_marshal_free_bstring(marshaled.___model_3);
	marshaled.___model_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: AiToolbox.ChatGpt/ResponseChoice
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_pinvoke(const ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB& unmarshaled, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke(unmarshaled.___delta_1, marshaled.___delta_1);
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke(unmarshaled.___message_2, marshaled.___message_2);
	marshaled.___finish_reason_3 = il2cpp_codegen_marshal_string(unmarshaled.___finish_reason_3);
}
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_pinvoke_back(const ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke& marshaled, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB& unmarshaled)
{
	int32_t unmarshaledindex_temp_0 = 0;
	unmarshaledindex_temp_0 = marshaled.___index_0;
	unmarshaled.___index_0 = unmarshaledindex_temp_0;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 unmarshaleddelta_temp_1;
	memset((&unmarshaleddelta_temp_1), 0, sizeof(unmarshaleddelta_temp_1));
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_back(marshaled.___delta_1, unmarshaleddelta_temp_1);
	unmarshaled.___delta_1 = unmarshaleddelta_temp_1;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___delta_1))->___role_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___delta_1))->___content_1), (void*)NULL);
	#endif
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 unmarshaledmessage_temp_2;
	memset((&unmarshaledmessage_temp_2), 0, sizeof(unmarshaledmessage_temp_2));
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_back(marshaled.___message_2, unmarshaledmessage_temp_2);
	unmarshaled.___message_2 = unmarshaledmessage_temp_2;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___message_2))->___role_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___message_2))->___content_1), (void*)NULL);
	#endif
	unmarshaled.___finish_reason_3 = il2cpp_codegen_marshal_string_result(marshaled.___finish_reason_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___finish_reason_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___finish_reason_3));
}
// Conversion method for clean up from marshalling of: AiToolbox.ChatGpt/ResponseChoice
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_pinvoke_cleanup(ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_pinvoke& marshaled)
{
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_cleanup(marshaled.___delta_1);
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_pinvoke_cleanup(marshaled.___message_2);
	il2cpp_codegen_marshal_free(marshaled.___finish_reason_3);
	marshaled.___finish_reason_3 = NULL;
}




// Conversion methods for marshalling of: AiToolbox.ChatGpt/ResponseChoice
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_com(const ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB& unmarshaled, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com(unmarshaled.___delta_1, marshaled.___delta_1);
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com(unmarshaled.___message_2, marshaled.___message_2);
	marshaled.___finish_reason_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___finish_reason_3);
}
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_com_back(const ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com& marshaled, ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB& unmarshaled)
{
	int32_t unmarshaledindex_temp_0 = 0;
	unmarshaledindex_temp_0 = marshaled.___index_0;
	unmarshaled.___index_0 = unmarshaledindex_temp_0;
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 unmarshaleddelta_temp_1;
	memset((&unmarshaleddelta_temp_1), 0, sizeof(unmarshaleddelta_temp_1));
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_back(marshaled.___delta_1, unmarshaleddelta_temp_1);
	unmarshaled.___delta_1 = unmarshaleddelta_temp_1;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___delta_1))->___role_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___delta_1))->___content_1), (void*)NULL);
	#endif
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5 unmarshaledmessage_temp_2;
	memset((&unmarshaledmessage_temp_2), 0, sizeof(unmarshaledmessage_temp_2));
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_back(marshaled.___message_2, unmarshaledmessage_temp_2);
	unmarshaled.___message_2 = unmarshaledmessage_temp_2;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___message_2))->___role_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___message_2))->___content_1), (void*)NULL);
	#endif
	unmarshaled.___finish_reason_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___finish_reason_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___finish_reason_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___finish_reason_3));
}
// Conversion method for clean up from marshalling of: AiToolbox.ChatGpt/ResponseChoice
IL2CPP_EXTERN_C void ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshal_com_cleanup(ResponseChoice_tF6D87EDF736D14CEBB2023321F7CB51688067BDB_marshaled_com& marshaled)
{
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_cleanup(marshaled.___delta_1);
	RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5_marshal_com_cleanup(marshaled.___message_2);
	il2cpp_codegen_marshal_free_bstring(marshaled.___finish_reason_3);
	marshaled.___finish_reason_3 = NULL;
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
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m3CA2EA9546D21617BEA636B3CA620C6DF075BAC1 (U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass2_0::<Request>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CRequestU3Eb__0_mB14C2930B06AFABC987802C23A7B178C3D095822 (U3CU3Ec__DisplayClass2_0_t7AE8F3ACCB2899D8F63237638860A00B50215BB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enumerator != null) {
		RuntimeObject* L_0 = __this->___enumerator_0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// ChatGptContainer.Instance.StopCoroutine(enumerator);
		ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* L_1;
		L_1 = ChatGptContainer_get_Instance_mECA3713895D5C8D194E1647965FEA36C31BCB136(NULL);
		RuntimeObject* L_2 = __this->___enumerator_0;
		NullCheck(L_1);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_1, L_2, NULL);
	}

IL_0018:
	{
		// _requestRecords.Remove(requestRecord);
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_3 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_4 = __this->___requestRecord_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_3, L_4, List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
		// });
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
// System.Void AiToolbox.ChatGpt/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDF8C955BACFEC8C58731E847A6E021F5D0974257 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C* L_0 = (U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C*)il2cpp_codegen_object_new(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m117F1DE5DE79F2C230213F6EF6F4B8B9E69B461F(L_0, NULL);
		((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m117F1DE5DE79F2C230213F6EF6F4B8B9E69B461F (U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<>c::<Request>b__2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRequestU3Eb__2_1_m0C11CF7C6969F0998E8583B16CC99375BE4D285C (U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C* __this, const RuntimeMethod* method) 
{
	{
		// return () => { };
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<>c::<QuickRequestBlocking>b__6_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CQuickRequestBlockingU3Eb__6_2_mDE5BC04FA494B9FEFF17AE098F709444FE9D0E1B (U3CU3Ec_tBCD99B255D8F17C3EACC8A9EB2F15F1778D8608C* __this, const RuntimeMethod* method) 
{
	{
		// return () => { };
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
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mB1EA7B7AB9FA705525B5EB3F7E2312CE076A6DE3 (U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass4_0::<QuickRequest>g__CancelCallback|0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CQuickRequestU3Eg__CancelCallbackU7C0_m1CF9FE1C9C4717D8FF486F967124107C58EA9839 (U3CU3Ec__DisplayClass4_0_t70163486B1E4BDE05722DC90C1954EFFFC37F836* __this, const RuntimeMethod* method) 
{
	{
		// ChatGptContainer.Instance.StopCoroutine(enumerator);
		ChatGptContainer_t837F59FA0B1A3E3055D99E7B9539BCB8FF850BE6* L_0;
		L_0 = ChatGptContainer_get_Instance_mECA3713895D5C8D194E1647965FEA36C31BCB136(NULL);
		RuntimeObject* L_1 = __this->___enumerator_0;
		NullCheck(L_0);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_0, L_1, NULL);
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
// System.Void AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuickRequestCoroutineU3Ed__5__ctor_m724E96DD79C74D6558246B065C0BAE8A14F0C087 (U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuickRequestCoroutineU3Ed__5_System_IDisposable_Dispose_m9E5CB6FB7F35597D13DD33489AAD4035EBE3CC2F (U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CQuickRequestCoroutineU3Ed__5_MoveNext_mC2B6341A851A204489F5467B466407F76A08AC8C (U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (parameters.apiKeyEncryption == ApiKeyEncryption.RemoteConfig) {
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_3 = __this->___parameters_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___apiKeyEncryption_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		// yield return GetRemoteConfig(parameters, failureCallback);
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_5 = __this->___parameters_2;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_6 = __this->___failureCallback_3;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ChatGpt_GetRemoteConfig_m8B9E4EB6088C9375328C44DB85DFA234E7878764(L_5, L_6, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004c:
	{
		// QuickRequestBlocking(messages, parameters, completeCallback, failureCallback);
		RuntimeObject* L_8 = __this->___messages_4;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_9 = __this->___parameters_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = __this->___completeCallback_5;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_11 = __this->___failureCallback_3;
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12;
		L_12 = ChatGpt_QuickRequestBlocking_m118AE487DC3C7896BE7E5C2EFA6BFDDFE04EA868(L_8, L_9, L_10, L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CQuickRequestCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5860AEDAA9ACD3656B8692A41D3BAA0AA9FC2418 (U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CQuickRequestCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m536490AC4591ACE98CD4E63683D0986D2323E747 (U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CQuickRequestCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m536490AC4591ACE98CD4E63683D0986D2323E747_RuntimeMethod_var)));
	}
}
// System.Object AiToolbox.ChatGpt/<QuickRequestCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CQuickRequestCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_m6653185E86E7A1D979117AE1486B7AFA6D8CDCC9 (U3CQuickRequestCoroutineU3Ed__5_tDD141E29CE13D4A4FB2C6211B3E4D20DDF00245F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mD076F3A905041B39F5A1872E08C8DB8054485A83 (U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass6_0::<QuickRequestBlocking>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CQuickRequestBlockingU3Eb__0_m0D5F6BD915FD6BAFB652D85E8C3037E4109AE074 (U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* G_B2_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* G_B1_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* G_B5_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* G_B4_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			// request?.Abort();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___request_0;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = L_0;
			G_B1_0 = L_1;
			if (L_1)
			{
				G_B2_0 = L_1;
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			NullCheck(G_B2_0);
			UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B(G_B2_0, NULL);
		}

IL_0011_1:
		{
			// request?.Dispose();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = __this->___request_0;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = L_2;
			G_B4_0 = L_3;
			if (L_3)
			{
				G_B5_0 = L_3;
				goto IL_001d_1;
			}
		}
		{
			goto IL_0022_1;
		}

IL_001d_1:
		{
			NullCheck(G_B5_0);
			UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(G_B5_0, NULL);
		}

IL_0022_1:
		{
			// _requestRecords.Remove(requestRecord);
			il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
			List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_4 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
			RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_5 = __this->___requestRecord_1;
			NullCheck(L_4);
			bool L_6;
			L_6 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_4, L_5, List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
			// }
			goto IL_0038;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		// catch (Exception) {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0038;
	}// end catch (depth: 1)

IL_0038:
	{
		// });
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass6_0::<QuickRequestBlocking>b__1(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CQuickRequestBlockingU3Eb__1_mCDCE4C1746B028C90A51DA27C1D000E478536973 (U3CU3Ec__DisplayClass6_0_t539283BE1C2085A742CFB01006469410DEF6B3DD* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0__, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral555BB7D2791EF47EB2EBA5F615FCC1E8BF2EA45D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B6_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B5_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B10_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B9_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B13_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B12_0 = NULL;
	{
		// _requestRecords.Remove(requestRecord);
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_0 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
		RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_1 = __this->___requestRecord_1;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_0, L_1, List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
		// Application.quitting -= cancelCallback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___cancelCallback_2;
		Application_remove_quitting_m9DC9D4165EDB0FD93AB893655E26BF73566D2C1B(L_3, NULL);
	}
	try
	{// begin try (depth: 1)
		// isErrorResponse = !string.IsNullOrEmpty(request.error);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->___request_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_4, NULL);
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		// }
		goto IL_0038;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{// begin catch(System.Exception)
		// catch (Exception) {
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cd;
	}// end catch (depth: 1)

IL_0038:
	{
		// if (isErrorResponse) {
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		// failureCallback?.Invoke(request.responseCode, request.error);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_8 = __this->___failureCallback_3;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = __this->___request_0;
		NullCheck(L_10);
		int64_t L_11;
		L_11 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_10, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___request_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_12, NULL);
		NullCheck(G_B6_0);
		Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(G_B6_0, L_11, L_13, NULL);
		// return;
		return;
	}

IL_0062:
	{
		// var response = JsonUtility.FromJson<ResponseMessage>(request.downloadHandler.text);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___request_0;
		NullCheck(L_14);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_15;
		L_15 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_15, NULL);
		ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 L_17;
		L_17 = JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63(L_16, JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63_RuntimeMethod_var);
		V_1 = L_17;
		// if (response.choices.Length == 0) {
		ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 L_18 = V_1;
		ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766* L_19 = L_18.___choices_2;
		NullCheck(L_19);
		if ((((RuntimeArray*)L_19)->max_length))
		{
			goto IL_0099;
		}
	}
	{
		// failureCallback?.Invoke((long)ChatGptErrorCodes.Unknown,
		//                         "No response choices returned from the server.");
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_20 = __this->___failureCallback_3;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_21 = L_20;
		G_B9_0 = L_21;
		if (L_21)
		{
			G_B10_0 = L_21;
			goto IL_008c;
		}
	}
	{
		return;
	}

IL_008c:
	{
		NullCheck(G_B10_0);
		Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(G_B10_0, ((int64_t)4), _stringLiteral555BB7D2791EF47EB2EBA5F615FCC1E8BF2EA45D, NULL);
		// return;
		return;
	}

IL_0099:
	{
		// var responseMessage = response.choices[0].message.content;
		ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 L_22 = V_1;
		ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766* L_23 = L_22.___choices_2;
		NullCheck(L_23);
		RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5* L_24 = (&((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___message_2);
		String_t* L_25 = L_24->___content_1;
		V_2 = L_25;
		// completeCallback?.Invoke(responseMessage);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_26 = __this->___completeCallback_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_27 = L_26;
		G_B12_0 = L_27;
		if (L_27)
		{
			G_B13_0 = L_27;
			goto IL_00bc;
		}
	}
	{
		goto IL_00c2;
	}

IL_00bc:
	{
		String_t* L_28 = V_2;
		NullCheck(G_B13_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B13_0, L_28, NULL);
	}

IL_00c2:
	{
		// request.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = __this->___request_0;
		NullCheck(L_29);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_29, NULL);
	}

IL_00cd:
	{
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
// System.Void AiToolbox.ChatGpt/<Stream>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamU3Ed__7__ctor_mB6097AE06BB998B77BE9605558B41D3FB2ABE481 (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<Stream>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamU3Ed__7_System_IDisposable_Dispose_m78E41E75A65E6458016D28ED2F1F168A35134FC9 (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CStreamU3Ed__7_U3CU3Em__Finally1_mE52F2628F50CDDFAA22D273CB0BDD48C04D6B02A(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean AiToolbox.ChatGpt/<Stream>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStreamU3Ed__7_MoveNext_m69F8C399C4A56B6607979B4DF1D2DE3926909017 (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F250609427E809ED96F8A015C5F2B319D96E82D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9259D9E68640FDD8144501041197340B046D88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral555BB7D2791EF47EB2EBA5F615FCC1E8BF2EA45D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 V_9;
	memset((&V_9), 0, sizeof(V_9));
	String_t* V_10 = NULL;
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B13_0 = NULL;
	String_t* G_B16_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B25_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B24_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B35_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B34_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B40_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B39_0 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_03f2:
			{// begin fault (depth: 1)
				U3CStreamU3Ed__7_System_IDisposable_Dispose_m78E41E75A65E6458016D28ED2F1F168A35134FC9(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_0020_1;
					}
					case 1:
					{
						goto IL_00b7_1;
					}
					case 2:
					{
						goto IL_034d_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_03f9;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var requestObject = new RequestMessage {
				//     model = GetModelName(parameters.model),
				//     temperature = parameters.temperature,
				//     stream = true,
				//     messages = ConvertMessages(messages, parameters.role),
				// };
				il2cpp_codegen_initobj((&V_3), sizeof(RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508));
				Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_2 = __this->___parameters_2;
				NullCheck(L_2);
				int32_t L_3 = L_2->___model_4;
				il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
				String_t* L_4;
				L_4 = ChatGpt_GetModelName_m07033DC292835F2285119D628C7FC8430F266850(L_3, NULL);
				(&V_3)->___model_0 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___model_0), (void*)L_4);
				Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_5 = __this->___parameters_2;
				NullCheck(L_5);
				float L_6 = L_5->___temperature_5;
				(&V_3)->___temperature_2 = L_6;
				(&V_3)->___stream_3 = (bool)1;
				RuntimeObject* L_7 = __this->___messages_3;
				Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_8 = __this->___parameters_2;
				NullCheck(L_8);
				String_t* L_9 = L_8->___role_6;
				RoleContentMessageU5BU5D_tB091B11015318DFDF20575B613F0E8B0F33A3957* L_10;
				L_10 = ChatGpt_ConvertMessages_mB20CDF7A0724DF59DDA3C19B005B77C66B723322(L_7, L_9, NULL);
				(&V_3)->___messages_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___messages_1), (void*)L_10);
				RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508 L_11 = V_3;
				__this->___U3CrequestObjectU3E5__2_8 = L_11;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CrequestObjectU3E5__2_8))->___model_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CrequestObjectU3E5__2_8))->___messages_1), (void*)NULL);
				#endif
				// if (parameters.apiKeyEncryption == ApiKeyEncryption.RemoteConfig) {
				Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_12 = __this->___parameters_2;
				NullCheck(L_12);
				int32_t L_13 = L_12->___apiKeyEncryption_1;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00be_1;
				}
			}
			{
				// yield return GetRemoteConfig(parameters, failureCallback);
				Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_14 = __this->___parameters_2;
				Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_15 = __this->___failureCallback_4;
				il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
				RuntimeObject* L_16;
				L_16 = ChatGpt_GetRemoteConfig_m8B9E4EB6088C9375328C44DB85DFA234E7878764(L_14, L_15, NULL);
				__this->___U3CU3E2__current_1 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_03f9;
			}

IL_00b7_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
			}

IL_00be_1:
			{
				// var requestJson = JsonUtility.ToJson(requestObject);
				RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508 L_17 = __this->___U3CrequestObjectU3E5__2_8;
				RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508 L_18 = L_17;
				RuntimeObject* L_19 = Box(RequestMessage_tD31C1847BE7C6A2EACAF387A175944CE3E87D508_il2cpp_TypeInfo_var, &L_18);
				String_t* L_20;
				L_20 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_19, NULL);
				V_2 = L_20;
				// using var request = GetWebRequest(requestJson, parameters, failureCallback, requestRecord);
				String_t* L_21 = V_2;
				Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_22 = __this->___parameters_2;
				Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_23 = __this->___failureCallback_4;
				RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_24 = __this->___requestRecord_5;
				il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25;
				L_25 = ChatGpt_GetWebRequest_m10F7A2CDBA42B135CD79238A59A28A47E4F52271(L_21, L_22, L_23, L_24, NULL);
				__this->___U3CrequestU3E5__3_9 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__3_9), (void*)L_25);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// var webRequest = request.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_26 = __this->___U3CrequestU3E5__3_9;
				NullCheck(L_26);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_27;
				L_27 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_26, NULL);
				__this->___U3CwebRequestU3E5__4_10 = L_27;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3E5__4_10), (void*)L_27);
				// int textLength = 0;
				__this->___U3CtextLengthU3E5__5_11 = 0;
				// string completeText = "";
				__this->___U3CcompleteTextU3E5__6_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcompleteTextU3E5__6_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
				goto IL_0355_1;
			}

IL_011d_1:
			{
				// if (request.downloadHandler.text.Length > textLength) {
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_28 = __this->___U3CrequestU3E5__3_9;
				NullCheck(L_28);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_29;
				L_29 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_28, NULL);
				NullCheck(L_29);
				String_t* L_30;
				L_30 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_29, NULL);
				NullCheck(L_30);
				int32_t L_31;
				L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
				int32_t L_32 = __this->___U3CtextLengthU3E5__5_11;
				if ((((int32_t)L_31) <= ((int32_t)L_32)))
				{
					goto IL_0338_1;
				}
			}
			{
				// if (!string.IsNullOrEmpty(request.error)) {
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_33 = __this->___U3CrequestU3E5__3_9;
				NullCheck(L_33);
				String_t* L_34;
				L_34 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_33, NULL);
				bool L_35;
				L_35 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_34, NULL);
				if (L_35)
				{
					goto IL_0188_1;
				}
			}
			{
				// failureCallback(request.responseCode, request.error);
				Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_36 = __this->___failureCallback_4;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_37 = __this->___U3CrequestU3E5__3_9;
				NullCheck(L_37);
				int64_t L_38;
				L_38 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_37, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_39 = __this->___U3CrequestU3E5__3_9;
				NullCheck(L_39);
				String_t* L_40;
				L_40 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_39, NULL);
				NullCheck(L_36);
				Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(L_36, L_38, L_40, NULL);
				// _requestRecords.Remove(requestRecord);
				il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
				List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_41 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
				RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_42 = __this->___requestRecord_5;
				NullCheck(L_41);
				bool L_43;
				L_43 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_41, L_42, List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
				// yield break;
				V_0 = (bool)0;
				goto IL_03ea_1;
			}

IL_0188_1:
			{
				// var text = request.downloadHandler.text;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_44 = __this->___U3CrequestU3E5__3_9;
				NullCheck(L_44);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_45;
				L_45 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_44, NULL);
				NullCheck(L_45);
				String_t* L_46;
				L_46 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_45, NULL);
				V_4 = L_46;
				// var newText = text.Substring(textLength);
				String_t* L_47 = V_4;
				int32_t L_48 = __this->___U3CtextLengthU3E5__5_11;
				NullCheck(L_47);
				String_t* L_49;
				L_49 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_47, L_48, NULL);
				V_5 = L_49;
				// textLength = text.Length;
				String_t* L_50 = V_4;
				NullCheck(L_50);
				int32_t L_51;
				L_51 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_50, NULL);
				__this->___U3CtextLengthU3E5__5_11 = L_51;
				goto IL_0327_1;
			}

IL_01bb_1:
			{
				// var startTrimmed =
				//     newText.Substring(newText.IndexOf("data: ", StringComparison.Ordinal) + "data: ".Length);
				String_t* L_52 = V_5;
				String_t* L_53 = V_5;
				NullCheck(L_53);
				int32_t L_54;
				L_54 = String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55(L_53, _stringLiteral4C9259D9E68640FDD8144501041197340B046D88, 4, NULL);
				NullCheck(_stringLiteral4C9259D9E68640FDD8144501041197340B046D88);
				int32_t L_55;
				L_55 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral4C9259D9E68640FDD8144501041197340B046D88, NULL);
				NullCheck(L_52);
				String_t* L_56;
				L_56 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_52, ((int32_t)il2cpp_codegen_add(L_54, L_55)), NULL);
				V_6 = L_56;
				// var dataEndPosition = startTrimmed.IndexOf("data: ", StringComparison.Ordinal);
				String_t* L_57 = V_6;
				NullCheck(L_57);
				int32_t L_58;
				L_58 = String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55(L_57, _stringLiteral4C9259D9E68640FDD8144501041197340B046D88, 4, NULL);
				V_7 = L_58;
				// var dataJson = dataEndPosition == -1 ? startTrimmed : startTrimmed.Substring(0, dataEndPosition);
				int32_t L_59 = V_7;
				if ((((int32_t)L_59) == ((int32_t)(-1))))
				{
					goto IL_01fc_1;
				}
			}
			{
				String_t* L_60 = V_6;
				int32_t L_61 = V_7;
				NullCheck(L_60);
				String_t* L_62;
				L_62 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_60, 0, L_61, NULL);
				G_B13_0 = L_62;
				goto IL_01fe_1;
			}

IL_01fc_1:
			{
				String_t* L_63 = V_6;
				G_B13_0 = L_63;
			}

IL_01fe_1:
			{
				V_8 = G_B13_0;
				// newText = dataEndPosition == -1 ? "" : startTrimmed.Substring(dataEndPosition);
				int32_t L_64 = V_7;
				if ((((int32_t)L_64) == ((int32_t)(-1))))
				{
					goto IL_0210_1;
				}
			}
			{
				String_t* L_65 = V_6;
				int32_t L_66 = V_7;
				NullCheck(L_65);
				String_t* L_67;
				L_67 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_65, L_66, NULL);
				G_B16_0 = L_67;
				goto IL_0215_1;
			}

IL_0210_1:
			{
				G_B16_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			}

IL_0215_1:
			{
				V_5 = G_B16_0;
				// if (dataJson.Contains("[DONE]")) {
				String_t* L_68 = V_8;
				NullCheck(L_68);
				bool L_69;
				L_69 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_68, _stringLiteral0F250609427E809ED96F8A015C5F2B319D96E82D, NULL);
				if (L_69)
				{
					goto IL_0338_1;
				}
			}
			{
			}
			try
			{// begin try (depth: 2)
				{
					// var data = JsonUtility.FromJson<ResponseMessage>(dataJson);
					String_t* L_70 = V_8;
					ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 L_71;
					L_71 = JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63(L_70, JsonUtility_FromJson_TisResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1_m323B6917FEB320FDB699A2BA14EE7AF4DE49CB63_RuntimeMethod_var);
					V_9 = L_71;
					// if (data.choices == null || data.choices.Length == 0) {
					ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 L_72 = V_9;
					ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766* L_73 = L_72.___choices_2;
					if (!L_73)
					{
						goto IL_0245_2;
					}
				}
				{
					ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 L_74 = V_9;
					ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766* L_75 = L_74.___choices_2;
					NullCheck(L_75);
					if ((((RuntimeArray*)L_75)->max_length))
					{
						goto IL_026f_2;
					}
				}

IL_0245_2:
				{
					// failureCallback((long)ChatGptErrorCodes.Unknown,
					//                 "No response choices returned from the server.");
					Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_76 = __this->___failureCallback_4;
					NullCheck(L_76);
					Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(L_76, ((int64_t)4), _stringLiteral555BB7D2791EF47EB2EBA5F615FCC1E8BF2EA45D, NULL);
					// _requestRecords.Remove(requestRecord);
					il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
					List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_77 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
					RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_78 = __this->___requestRecord_5;
					NullCheck(L_77);
					bool L_79;
					L_79 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_77, L_78, List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
					// yield break;
					V_0 = (bool)0;
					goto IL_03ea_1;
				}

IL_026f_2:
				{
					// if (data.choices[0].finish_reason == "length") {
					ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 L_80 = V_9;
					ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766* L_81 = L_80.___choices_2;
					NullCheck(L_81);
					String_t* L_82 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___finish_reason_3;
					bool L_83;
					L_83 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_82, _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB, NULL);
					if (!L_83)
					{
						goto IL_02b8_2;
					}
				}
				{
					// failureCallback((long)ChatGptErrorCodes.MaxTokensExceeded, completeText);
					Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_84 = __this->___failureCallback_4;
					String_t* L_85 = __this->___U3CcompleteTextU3E5__6_12;
					NullCheck(L_84);
					Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(L_84, ((int64_t)0), L_85, NULL);
					// _requestRecords.Remove(requestRecord);
					il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
					List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_86 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
					RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_87 = __this->___requestRecord_5;
					NullCheck(L_86);
					bool L_88;
					L_88 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_86, L_87, List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
					// yield break;
					V_0 = (bool)0;
					goto IL_03ea_1;
				}

IL_02b8_2:
				{
					// var delta = data.choices[0].delta.content;
					ResponseMessage_tB0BD2EB55D9C38D0515167D18ED3D3FBB519D5E1 L_89 = V_9;
					ResponseChoiceU5BU5D_t5C05F824EA0AC96486A1E2C6BACB831825623766* L_90 = L_89.___choices_2;
					NullCheck(L_90);
					RoleContentMessage_tEB119853934F140B6F4B2D1C8000073B778110C5* L_91 = (&((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___delta_1);
					String_t* L_92 = L_91->___content_1;
					V_10 = L_92;
					// completeText += delta;
					String_t* L_93 = __this->___U3CcompleteTextU3E5__6_12;
					String_t* L_94 = V_10;
					String_t* L_95;
					L_95 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_93, L_94, NULL);
					__this->___U3CcompleteTextU3E5__6_12 = L_95;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcompleteTextU3E5__6_12), (void*)L_95);
					// updateCallback?.Invoke(delta);
					Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_96 = __this->___updateCallback_6;
					Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_97 = L_96;
					G_B24_0 = L_97;
					if (L_97)
					{
						G_B25_0 = L_97;
						goto IL_02f0_2;
					}
				}
				{
					goto IL_02f7_2;
				}

IL_02f0_2:
				{
					String_t* L_98 = V_10;
					NullCheck(G_B25_0);
					Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B25_0, L_98, NULL);
				}

IL_02f7_2:
				{
					// }
					goto IL_0327_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_02f9_1;
				}
				throw e;
			}

CATCH_02f9_1:
			{// begin catch(System.Exception)
				// catch (Exception e) {
				V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// failureCallback((long)ChatGptErrorCodes.Unknown, e.Message);
				Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_99 = __this->___failureCallback_4;
				Exception_t* L_100 = V_11;
				NullCheck(L_100);
				String_t* L_101;
				L_101 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_100);
				NullCheck(L_99);
				Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(L_99, ((int64_t)4), L_101, NULL);
				// _requestRecords.Remove(requestRecord);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var)));
				List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_102 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))))->____requestRecords_0;
				RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_103 = __this->___requestRecord_5;
				NullCheck(L_102);
				bool L_104;
				L_104 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_102, L_103, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var)));
				// yield break;
				V_0 = (bool)0;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_03ea_1;
			}// end catch (depth: 2)

IL_0327_1:
			{
				// while (newText.Contains("data: ")) {
				String_t* L_105 = V_5;
				NullCheck(L_105);
				bool L_106;
				L_106 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_105, _stringLiteral4C9259D9E68640FDD8144501041197340B046D88, NULL);
				if (L_106)
				{
					goto IL_01bb_1;
				}
			}

IL_0338_1:
			{
				// yield return null;
				__this->___U3CU3E2__current_1 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_03f9;
			}

IL_034d_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0355_1:
			{
				// while (!webRequest.isDone) {
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_107 = __this->___U3CwebRequestU3E5__4_10;
				NullCheck(L_107);
				bool L_108;
				L_108 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_107, NULL);
				if (!L_108)
				{
					goto IL_011d_1;
				}
			}
			{
				// if (!string.IsNullOrEmpty(request.error)) {
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_109 = __this->___U3CrequestU3E5__3_9;
				NullCheck(L_109);
				String_t* L_110;
				L_110 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_109, NULL);
				bool L_111;
				L_111 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_110, NULL);
				if (L_111)
				{
					goto IL_03b3_1;
				}
			}
			{
				// failureCallback?.Invoke(request.responseCode, request.error);
				Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_112 = __this->___failureCallback_4;
				Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_113 = L_112;
				G_B34_0 = L_113;
				if (L_113)
				{
					G_B35_0 = L_113;
					goto IL_0383_1;
				}
			}
			{
				goto IL_039e_1;
			}

IL_0383_1:
			{
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_114 = __this->___U3CrequestU3E5__3_9;
				NullCheck(L_114);
				int64_t L_115;
				L_115 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_114, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_116 = __this->___U3CrequestU3E5__3_9;
				NullCheck(L_116);
				String_t* L_117;
				L_117 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_116, NULL);
				NullCheck(G_B35_0);
				Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(G_B35_0, L_115, L_117, NULL);
			}

IL_039e_1:
			{
				// _requestRecords.Remove(requestRecord);
				il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
				List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_118 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
				RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_119 = __this->___requestRecord_5;
				NullCheck(L_118);
				bool L_120;
				L_120 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_118, L_119, List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
				// yield break;
				V_0 = (bool)0;
				goto IL_03ea_1;
			}

IL_03b3_1:
			{
				// if (!string.IsNullOrEmpty(completeText)) {
				String_t* L_121 = __this->___U3CcompleteTextU3E5__6_12;
				bool L_122;
				L_122 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_121, NULL);
				if (L_122)
				{
					goto IL_03e8_1;
				}
			}
			{
				// completeCallback?.Invoke(completeText);
				Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_123 = __this->___completeCallback_7;
				Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_124 = L_123;
				G_B39_0 = L_124;
				if (L_124)
				{
					G_B40_0 = L_124;
					goto IL_03cc_1;
				}
			}
			{
				goto IL_03d7_1;
			}

IL_03cc_1:
			{
				String_t* L_125 = __this->___U3CcompleteTextU3E5__6_12;
				NullCheck(G_B40_0);
				Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B40_0, L_125, NULL);
			}

IL_03d7_1:
			{
				// _requestRecords.Remove(requestRecord);
				il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
				List_1_tD20172F23A5823BE309D778982A61E2BEC0C91A1* L_126 = ((ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_StaticFields*)il2cpp_codegen_static_fields_for(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var))->____requestRecords_0;
				RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* L_127 = __this->___requestRecord_5;
				NullCheck(L_126);
				bool L_128;
				L_128 = List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6(L_126, L_127, List_1_Remove_m6BCABC2A31DBF23543561F3861F5D203F3AAAFA6_RuntimeMethod_var);
			}

IL_03e8_1:
			{
				// }
				V_0 = (bool)0;
			}

IL_03ea_1:
			{
				U3CStreamU3Ed__7_U3CU3Em__Finally1_mE52F2628F50CDDFAA22D273CB0BDD48C04D6B02A(__this, NULL);
				goto IL_03f9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03f9:
	{
		bool L_129 = V_0;
		return L_129;
	}
}
// System.Void AiToolbox.ChatGpt/<Stream>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamU3Ed__7_U3CU3Em__Finally1_mE52F2628F50CDDFAA22D273CB0BDD48C04D6B02A (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__3_9;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__3_9;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object AiToolbox.ChatGpt/<Stream>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStreamU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB8CB7328C7E9934BA1C3628876622EC450AB665A (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AiToolbox.ChatGpt/<Stream>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStreamU3Ed__7_System_Collections_IEnumerator_Reset_m501F315DA741294CF772602EBFD7F108EE46696F (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStreamU3Ed__7_System_Collections_IEnumerator_Reset_m501F315DA741294CF772602EBFD7F108EE46696F_RuntimeMethod_var)));
	}
}
// System.Object AiToolbox.ChatGpt/<Stream>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStreamU3Ed__7_System_Collections_IEnumerator_get_Current_m6B5EC49582F1523DCDDFE23C1AD364B0559BFBF4 (U3CStreamU3Ed__7_t30CA686DA9F2EEEBD27779AC4B7A40FAA6326106* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m195BD92A182C86A51F28B1341D019175FD63C5A4 (U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass8_0::<GetRemoteConfig>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__0_mD5697EBF244608CC747345B7108F6F7891E40D63 (U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	{
		// parameters.apiKeyEncryption = ApiKeyEncryption.None;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_0 = __this->___parameters_0;
		NullCheck(L_0);
		L_0->___apiKeyEncryption_1 = 0;
		// parameters.apiKey = s;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_1 = __this->___parameters_0;
		String_t* L_2 = ___0_s;
		NullCheck(L_1);
		L_1->___apiKey_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___apiKey_0), (void*)L_2);
		// apiKeySet = true;
		__this->___apiKeySet_1 = (bool)1;
		// }, (errorCode, error) => {
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<>c__DisplayClass8_0::<GetRemoteConfig>b__1(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__1_m0A55C36F6865983A5FF3619563AFD4F9D4D549D8 (U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* __this, int64_t ___0_errorCode, String_t* ___1_error, const RuntimeMethod* method) 
{
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B2_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B1_0 = NULL;
	{
		// failureCallback?.Invoke(errorCode, error);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_0 = __this->___failureCallback_2;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		int64_t L_2 = ___0_errorCode;
		String_t* L_3 = ___1_error;
		NullCheck(G_B2_0);
		Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(G_B2_0, L_2, L_3, NULL);
	}

IL_0013:
	{
		// apiKeySet = true;
		__this->___apiKeySet_1 = (bool)1;
		// });
		return;
	}
}
// System.Boolean AiToolbox.ChatGpt/<>c__DisplayClass8_0::<GetRemoteConfig>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__2_m52E074EE1406FD960BB391866D8D21051024F17F (U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => task.IsCompleted && apiKeySet);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___task_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
		bool L_2 = __this->___apiKeySet_1;
		return (bool)((int32_t)((int32_t)L_1&(int32_t)L_2));
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
// System.Void AiToolbox.ChatGpt/<GetRemoteConfig>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRemoteConfigU3Ed__8__ctor_m07B4819F7C40383748962E61CDAFE3751774E8AD (U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AiToolbox.ChatGpt/<GetRemoteConfig>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRemoteConfigU3Ed__8_System_IDisposable_Dispose_mD1D5D32DBCCE745BE0F5FFD901FD2B2B37761F28 (U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AiToolbox.ChatGpt/<GetRemoteConfig>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRemoteConfigU3Ed__8_MoveNext_m713275A2B8DF00F69F550CE2703FFE744B8F93FD (U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__0_mD5697EBF244608CC747345B7108F6F7891E40D63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__1_m0A55C36F6865983A5FF3619563AFD4F9D4D549D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__2_m52E074EE1406FD960BB391866D8D21051024F17F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A5CEBFF3ED0A6560FEFAF94101331D55462F86);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B7_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B6_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00ba;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_3 = (U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass8_0__ctor_m195BD92A182C86A51F28B1341D019175FD63C5A4(L_3, NULL);
		__this->___U3CU3E8__1_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_3);
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_4 = __this->___U3CU3E8__1_4;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_5 = __this->___parameters_2;
		NullCheck(L_4);
		L_4->___parameters_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___parameters_0), (void*)L_5);
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_6 = __this->___U3CU3E8__1_4;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_7 = __this->___failureCallback_3;
		NullCheck(L_6);
		L_6->___failureCallback_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___failureCallback_2), (void*)L_7);
		// var apiKeySet = false;
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_8 = __this->___U3CU3E8__1_4;
		NullCheck(L_8);
		L_8->___apiKeySet_1 = (bool)0;
		// var task = RemoteKeyService.GetOpenAiKey(parameters.apiKeyRemoteConfigKey, s => {
		//     parameters.apiKeyEncryption = ApiKeyEncryption.None;
		//     parameters.apiKey = s;
		//     apiKeySet = true;
		// }, (errorCode, error) => {
		//     failureCallback?.Invoke(errorCode, error);
		//     apiKeySet = true;
		// });
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_9 = __this->___U3CU3E8__1_4;
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_10 = __this->___U3CU3E8__1_4;
		NullCheck(L_10);
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_11 = L_10->___parameters_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->___apiKeyRemoteConfigKey_2;
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_13 = __this->___U3CU3E8__1_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_14 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__0_mD5697EBF244608CC747345B7108F6F7891E40D63_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_15 = __this->___U3CU3E8__1_4;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_16 = (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B*)il2cpp_codegen_object_new(Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_2__ctor_m6D7CC9E1EB0AA845B320F46E6E07008C4A4D98E0(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__1_m0A55C36F6865983A5FF3619563AFD4F9D4D549D8_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17;
		L_17 = RemoteKeyService_GetOpenAiKey_m779B75A4D8CEBE8AE6CE97365D2FFC0BE8292E4F(L_12, L_14, L_16, NULL);
		NullCheck(L_9);
		L_9->___task_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___task_3), (void*)L_17);
		// yield return new WaitUntil(() => task.IsCompleted && apiKeySet);
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_18 = __this->___U3CU3E8__1_4;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_19 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CGetRemoteConfigU3Eb__2_m52E074EE1406FD960BB391866D8D21051024F17F_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_20 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_20, L_19, NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ba:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (task.IsFaulted) {
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_21 = __this->___U3CU3E8__1_4;
		NullCheck(L_21);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_22 = L_21->___task_3;
		NullCheck(L_22);
		bool L_23;
		L_23 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_22, NULL);
		if (!L_23)
		{
			goto IL_00f0;
		}
	}
	{
		// failureCallback?.Invoke((long)ChatGptErrorCodes.RemoteConfigConnectionFailure,
		//                         "Failed to retrieve API key from remote config.");
		U3CU3Ec__DisplayClass8_0_t7E5441C84E19E827EE846BAF8C1C5F573263F7CB* L_24 = __this->___U3CU3E8__1_4;
		NullCheck(L_24);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_25 = L_24->___failureCallback_2;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_26 = L_25;
		G_B6_0 = L_26;
		if (L_26)
		{
			G_B7_0 = L_26;
			goto IL_00e4;
		}
	}
	{
		goto IL_00f0;
	}

IL_00e4:
	{
		NullCheck(G_B7_0);
		Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(G_B7_0, ((int64_t)2), _stringLiteral04A5CEBFF3ED0A6560FEFAF94101331D55462F86, NULL);
	}

IL_00f0:
	{
		// }
		return (bool)0;
	}
}
// System.Object AiToolbox.ChatGpt/<GetRemoteConfig>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRemoteConfigU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5E0392D430F4B85EDF6C899AB599727CBDFCFACC (U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AiToolbox.ChatGpt/<GetRemoteConfig>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRemoteConfigU3Ed__8_System_Collections_IEnumerator_Reset_mCF5F3FFDA8795CF3B7BBDADA027C4E4E4608C574 (U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRemoteConfigU3Ed__8_System_Collections_IEnumerator_Reset_mCF5F3FFDA8795CF3B7BBDADA027C4E4E4608C574_RuntimeMethod_var)));
	}
}
// System.Object AiToolbox.ChatGpt/<GetRemoteConfig>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRemoteConfigU3Ed__8_System_Collections_IEnumerator_get_Current_m78F7D4527AC326DCBBAB9488D67E8697BB3A89B4 (U3CGetRemoteConfigU3Ed__8_tA8FA80410499DED977AD8C61651BD7CAF4253B87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void AiToolbox.Parameters::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameters__ctor_m224CDB04E9E930E4E235436C2032867210F89236 (Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* __this, String_t* ___0_apiKey, const RuntimeMethod* method) 
{
	{
		// public Parameters(string apiKey) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.apiKey = apiKey;
		String_t* L_0 = ___0_apiKey;
		__this->___apiKey_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiKey_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void AiToolbox.Parameters::.ctor(AiToolbox.Parameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameters__ctor_m9BB580A4B019C23289C25AA2BA446C6435D20F7A (Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* __this, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___0_parameters, const RuntimeMethod* method) 
{
	{
		// public Parameters(Parameters parameters) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// apiKey = parameters.apiKey;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_0 = ___0_parameters;
		NullCheck(L_0);
		String_t* L_1 = L_0->___apiKey_0;
		__this->___apiKey_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiKey_0), (void*)L_1);
		// apiKeyEncryption = parameters.apiKeyEncryption;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_2 = ___0_parameters;
		NullCheck(L_2);
		int32_t L_3 = L_2->___apiKeyEncryption_1;
		__this->___apiKeyEncryption_1 = L_3;
		// apiKeyRemoteConfigKey = parameters.apiKeyRemoteConfigKey;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_4 = ___0_parameters;
		NullCheck(L_4);
		String_t* L_5 = L_4->___apiKeyRemoteConfigKey_2;
		__this->___apiKeyRemoteConfigKey_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiKeyRemoteConfigKey_2), (void*)L_5);
		// apiKeyEncryptionPassword = parameters.apiKeyEncryptionPassword;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_6 = ___0_parameters;
		NullCheck(L_6);
		String_t* L_7 = L_6->___apiKeyEncryptionPassword_3;
		__this->___apiKeyEncryptionPassword_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiKeyEncryptionPassword_3), (void*)L_7);
		// model = parameters.model;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_8 = ___0_parameters;
		NullCheck(L_8);
		int32_t L_9 = L_8->___model_4;
		__this->___model_4 = L_9;
		// temperature = parameters.temperature;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_10 = ___0_parameters;
		NullCheck(L_10);
		float L_11 = L_10->___temperature_5;
		__this->___temperature_5 = L_11;
		// timeout = parameters.timeout;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_12 = ___0_parameters;
		NullCheck(L_12);
		int32_t L_13 = L_12->___timeout_7;
		__this->___timeout_7 = L_13;
		// role = parameters.role;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_14 = ___0_parameters;
		NullCheck(L_14);
		String_t* L_15 = L_14->___role_6;
		__this->___role_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___role_6), (void*)L_15);
		// serialized = parameters.serialized;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_16 = ___0_parameters;
		NullCheck(L_16);
		bool L_17 = L_16->___serialized_9;
		__this->___serialized_9 = L_17;
		// throttle = parameters.throttle;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_18 = ___0_parameters;
		NullCheck(L_18);
		int32_t L_19 = L_18->___throttle_8;
		__this->___throttle_8 = L_19;
		// }
		return;
	}
}
// System.Void AiToolbox.Parameters::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameters_OnBeforeSerialize_mC6AAE24B2AFA59E9BE5BBC81DC7E36C8005397ED (Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7014C16CB782AF3CE20442E04CB5F7D882F3E65);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (serialized) return;
		bool L_0 = __this->___serialized_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (serialized) return;
		return;
	}

IL_0009:
	{
		// serialized = true;
		__this->___serialized_9 = (bool)1;
		// temperature = 1;
		__this->___temperature_5 = (1.0f);
		// timeout = 0;
		__this->___timeout_7 = 0;
		// throttle = 0;
		__this->___throttle_8 = 0;
		// apiKeyRemoteConfigKey = "openai_api_key";
		__this->___apiKeyRemoteConfigKey_2 = _stringLiteralB7014C16CB782AF3CE20442E04CB5F7D882F3E65;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiKeyRemoteConfigKey_2), (void*)_stringLiteralB7014C16CB782AF3CE20442E04CB5F7D882F3E65);
		// apiKeyEncryptionPassword = Guid.NewGuid().ToString();
		Guid_t L_1;
		L_1 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___apiKeyEncryptionPassword_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiKeyEncryptionPassword_3), (void*)L_2);
		// }
		return;
	}
}
// System.Void AiToolbox.Parameters::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameters_OnAfterDeserialize_mDE851A757F23F01EB96B91049989AD93A3FC36EF (Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* __this, const RuntimeMethod* method) 
{
	{
		// public void OnAfterDeserialize() { }
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
// System.Threading.Tasks.Task AiToolbox.RemoteKeyService::GetOpenAiKey(System.String,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* RemoteKeyService_GetOpenAiKey_m779B75A4D8CEBE8AE6CE97365D2FFC0BE8292E4F (String_t* ___0_remoteConfigKey, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_successCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___2_failureCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_m0038BECBE03E2BDE5E104BCBAAEA995B183B0563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_1 = ___2_failureCallback;
		(&V_0)->___failureCallback_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___failureCallback_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_m0038BECBE03E2BDE5E104BCBAAEA995B183B0563(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_m0038BECBE03E2BDE5E104BCBAAEA995B183B0563_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
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
// System.Void AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOpenAiKeyU3Ed__0_MoveNext_mA7BB49BDB7A16F584773641F81FB2E5AF79A7E73 (U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_mC41CD23655708B9016CC8232020AEF4DD309E194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA073923D1B3AF77AE7C9CB0FA77E2C976C388F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B4_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0056_1;
			}
		}
		{
			// failureCallback?.Invoke((long)ChatGptErrorCodes.RemoteConfigConnectionFailure,
			//                         "RemoteConfig package is not imported. Please import it from the Package Manager: " +
			//                         "Unity Registry > Remote Config.");
			Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_2 = __this->___failureCallback_2;
			Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_3 = L_2;
			G_B3_0 = L_3;
			if (L_3)
			{
				G_B4_0 = L_3;
				goto IL_0016_1;
			}
		}
		{
			goto IL_0022_1;
		}

IL_0016_1:
		{
			NullCheck(G_B4_0);
			Action_2_Invoke_mA13B2110E28342FE79EC03286849D8B7BDF23F66_inline(G_B4_0, ((int64_t)2), _stringLiteral5DA073923D1B3AF77AE7C9CB0FA77E2C976C388F, NULL);
		}

IL_0022_1:
		{
			// await Task.CompletedTask;
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
			L_4 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
			NullCheck(L_4);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
			L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
			V_1 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_6)
			{
				goto IL_0072_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_1;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_mC41CD23655708B9016CC8232020AEF4DD309E194(L_9, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA_mC41CD23655708B9016CC8232020AEF4DD309E194_RuntimeMethod_var);
			goto IL_00a5;
		}

IL_0056_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_3;
			V_1 = L_10;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0072_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			goto IL_0092;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007b;
		}
		throw e;
	}

CATCH_007b:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_14 = V_2;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a5;
	}// end catch (depth: 1)

IL_0092:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_15, NULL);
	}

IL_00a5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetOpenAiKeyU3Ed__0_MoveNext_mA7BB49BDB7A16F584773641F81FB2E5AF79A7E73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA*>(__this + _offset);
	U3CGetOpenAiKeyU3Ed__0_MoveNext_mA7BB49BDB7A16F584773641F81FB2E5AF79A7E73(_thisAdjusted, method);
}
// System.Void AiToolbox.RemoteKeyService/<GetOpenAiKey>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOpenAiKeyU3Ed__0_SetStateMachine_mB800460FC671579936131E561583CDE273B64921 (U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetOpenAiKeyU3Ed__0_SetStateMachine_mB800460FC671579936131E561583CDE273B64921_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetOpenAiKeyU3Ed__0_tC62BE67F3D0F70B9AD65363B6DF563DEC9E32CDA*>(__this + _offset);
	U3CGetOpenAiKeyU3Ed__0_SetStateMachine_mB800460FC671579936131E561583CDE273B64921(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestRecord_SetCancelCallback_mAA7F82179B146AB29923C132FC809CD147D56D33_inline (RequestRecord_tB02E22AA251D027326DA5B3DAC340C03613B2216* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_callback, const RuntimeMethod* method) 
{
	{
		// cancelCallback = callback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_callback;
		__this->___cancelCallback_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cancelCallback_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_gshared_inline (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 ___0_item, const RuntimeMethod* method) 
{
	MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* L_1 = (MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744* L_6 = V_0;
		int32_t L_7 = V_1;
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8)L_8);
		return;
	}

IL_0034:
	{
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_9 = ___0_item;
		((  void (*) (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01*, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m6D4EE4A7513F5283082D1287C738D3DC66EA5673_gshared_inline (Action_2_t86B6B55EF9D981C9D41DE3956EE80B83BBCD7012* __this, int64_t ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int64_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
