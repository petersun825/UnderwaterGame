#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.Int64,System.Object>
struct Action_2_t86B6B55EF9D981C9D41DE3956EE80B83BBCD7012;
// System.Action`2<System.Int64,System.String>
struct Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B;
// System.Collections.Generic.IEnumerable`1<AiToolbox.Message>
struct IEnumerable_1_t4BD7AD2DE68401597D1EF1F0577FAA2BD0B86FA7;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<AiToolbox.Message>
struct List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// AiToolbox.Message[]
struct MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// AiToolboxRuntimeSample.AiToolboxRuntimeDemo
struct AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// AiToolboxRuntimeSample.OpenHyperlink
struct OpenHyperlink_tAA85FFF8D149ABC43E59EC492B25B6C65F64B11D;
// AiToolbox.Parameters
struct Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// AiToolboxRuntimeSample.VerySimpleUsageExample
struct VerySimpleUsageExample_tA4D1CFD21381104B82A5063C60408B3D568A5A2A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A;
// AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// AiToolboxRuntimeSample.VerySimpleUsageExample/<>c
struct U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14AAE5B3D1B1AB710432B2FA926AACB9E86755A0;
IL2CPP_EXTERN_C String_t* _stringLiteral24CED19D81B3BDD617BFEE7FDEF41E4D528459DD;
IL2CPP_EXTERN_C String_t* _stringLiteral585E54198009BC761EE77E553962E8AA1F4FFEF9;
IL2CPP_EXTERN_C String_t* _stringLiteral69DED09FCE1BAC1C43F5E33643BAE4DF71307344;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE63298190E18B9F07FCB1A40FD4214D6D7BEFF;
IL2CPP_EXTERN_C String_t* _stringLiteralC1187752F4BF74D75A8627F3CF4C6DA81032129E;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E2213543CBCE2A5F38AB25DE2C3BDF718E05A3;
IL2CPP_EXTERN_C String_t* _stringLiteralD080F58D0C37D8DD69D6F9214BFE00578F2A0BA7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF53A333A2D06F52CA906F95150FFD994A10FEB04;
IL2CPP_EXTERN_C const RuntimeMethod* AiToolboxRuntimeDemo_AddUserQuestion_m1F22E451236C36C36C8C50775789CE6A82C58F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AiToolboxRuntimeDemo_U3CStartU3Eb__8_0_m71450DA9BCCABD0669E37A0317F149A17CF2A405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AiToolboxRuntimeDemo_U3CStartU3Eb__8_1_m04D0CFD161CD7C9449B45BDFA2C5DC9A4C990596_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8135FF27A668384D860F4A59E74FA97864C8F2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__2_0_mD29C5CA6F5767A90A18C449320F7BAD5244E3DBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__2_1_m988F571AB79E9A21A5FF2FD7EC085F1B747C608C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__2_2_m3FF7E3230C26F0611D98A209CC4B0079F771EF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__2_3_mA9D57AB86B94174749F770288A1BC38B52827E69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__2_4_mD963F795E7FEEA0D7D5703A84839E43A96D6BB32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__0_m2B2A7DA27049484F11D9A560FB0A4562508D6CE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__1_m1EC228049785A4F78EF8D36BC8B4569C4022FA6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__2_m332E2865B9D1EBFBAACCFC37D038423F9A68086E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__0_mC1B7DEBDB6DB273C847E7CCBBEB2C1233C2DC468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__1_mAF83DA0C138AC0E17C395BDCBCDDFF7B905C4FF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__2_mA9CB2EC9280CA07DDC4D3AD06E3334E72C7FF60A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct MessageU5BU5D_tF65D5822F9805887D6729BDEDA9BD9DFFB535744;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFAA8E554D22A0818F1B18E8B7BA1BD8D53BC6F9C 
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A  : public RuntimeObject
{
	// AiToolboxRuntimeSample.AiToolboxRuntimeDemo AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0::<>4__this
	AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* ___U3CU3E4__this_0;
	// UnityEngine.UI.Text AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0::textField
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textField_1;
};

// AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58  : public RuntimeObject
{
	// AiToolboxRuntimeSample.AiToolboxRuntimeDemo AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0::<>4__this
	AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* ___U3CU3E4__this_0;
	// UnityEngine.UI.Text AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0::textField
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textField_1;
};

// AiToolboxRuntimeSample.VerySimpleUsageExample/<>c
struct U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int64,System.String>
struct Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// AiToolboxRuntimeSample.AiToolboxRuntimeDemo
struct AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AiToolbox.Parameters AiToolboxRuntimeSample.AiToolboxRuntimeDemo::parameters
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___parameters_4;
	// UnityEngine.UI.Text AiToolboxRuntimeSample.AiToolboxRuntimeDemo::characterDescription
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___characterDescription_5;
	// UnityEngine.UI.ScrollRect AiToolboxRuntimeSample.AiToolboxRuntimeDemo::scrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scrollRect_6;
	// UnityEngine.GameObject AiToolboxRuntimeSample.AiToolboxRuntimeDemo::characterTextPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___characterTextPrefab_7;
	// UnityEngine.GameObject AiToolboxRuntimeSample.AiToolboxRuntimeDemo::userTextPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___userTextPrefab_8;
	// UnityEngine.UI.Button AiToolboxRuntimeSample.AiToolboxRuntimeDemo::userQuestionButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___userQuestionButton_9;
	// AiToolbox.Parameters AiToolboxRuntimeSample.AiToolboxRuntimeDemo::_parametersWithCharacterRole
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ____parametersWithCharacterRole_10;
	// System.Collections.Generic.List`1<AiToolbox.Message> AiToolboxRuntimeSample.AiToolboxRuntimeDemo::_conversationSoFar
	List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* ____conversationSoFar_11;
};

// AiToolboxRuntimeSample.OpenHyperlink
struct OpenHyperlink_tAA85FFF8D149ABC43E59EC492B25B6C65F64B11D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AiToolboxRuntimeSample.OpenHyperlink::hyperlink
	String_t* ___hyperlink_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AiToolboxRuntimeSample.VerySimpleUsageExample
struct VerySimpleUsageExample_tA4D1CFD21381104B82A5063C60408B3D568A5A2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AiToolbox.Parameters AiToolboxRuntimeSample.VerySimpleUsageExample::parameters
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___parameters_4;
	// System.String AiToolboxRuntimeSample.VerySimpleUsageExample::prompt
	String_t* ___prompt_5;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
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

// AiToolbox.Parameters

// AiToolbox.Parameters

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0

// AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0

// AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0

// AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0

// AiToolboxRuntimeSample.VerySimpleUsageExample/<>c
struct U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields
{
	// AiToolboxRuntimeSample.VerySimpleUsageExample/<>c AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<>9
	U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* ___U3CU3E9_0;
	// System.Action`1<System.String> AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<>9__2_0
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__2_0_1;
	// System.Action`2<System.Int64,System.String> AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<>9__2_1
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___U3CU3E9__2_1_2;
	// System.Action`1<System.String> AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<>9__2_2
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__2_2_3;
	// System.Action`2<System.Int64,System.String> AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<>9__2_3
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___U3CU3E9__2_3_4;
	// System.Action`1<System.String> AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<>9__2_4
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__2_4_5;
};

// AiToolboxRuntimeSample.VerySimpleUsageExample/<>c

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

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

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`2<System.Int64,System.String>

// System.Action`2<System.Int64,System.String>

// System.Action

// System.Action

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// AiToolboxRuntimeSample.AiToolboxRuntimeDemo

// AiToolboxRuntimeSample.AiToolboxRuntimeDemo

// AiToolboxRuntimeSample.OpenHyperlink

// AiToolboxRuntimeSample.OpenHyperlink

// AiToolboxRuntimeSample.VerySimpleUsageExample

// AiToolboxRuntimeSample.VerySimpleUsageExample

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.ScrollRect

// UnityEngine.UI.ScrollRect

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m686F44A9A70B5BB8C72933EE13013A30652756EE_gshared (Action_2_t86B6B55EF9D981C9D41DE3956EE80B83BBCD7012* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8135FF27A668384D860F4A59E74FA97864C8F2DA_gshared (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_gshared_inline (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_gshared (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, const RuntimeMethod* method) ;

// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
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
// System.Action AiToolbox.ChatGpt::Request(System.String,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ChatGpt_Request_mE78452B83B2E2CC8B7712F83C114C4CD2EEFDC4F (String_t* ___0_prompt, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_updateCallback, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mD9595251B6B1FF0B347C4511F9FC55987F945603 (U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m8135FF27A668384D860F4A59E74FA97864C8F2DA (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m8135FF27A668384D860F4A59E74FA97864C8F2DA_gshared)(__this, ___0_collection, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void AiToolbox.Message::.ctor(System.String,AiToolbox.Role)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m893CB10C67A22E72AB06DF02FA96D13CB1D16986 (Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8* __this, String_t* ___0_text, int32_t ___1_role, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::Add(T)
inline void List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_inline (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01*, Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8, const RuntimeMethod*))List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_gshared_inline)(__this, ___0_item, method);
}
// System.Action AiToolbox.ChatGpt::Request(System.Collections.Generic.IEnumerable`1<AiToolbox.Message>,AiToolbox.Parameters,System.Action`1<System.String>,System.Action`2<System.Int64,System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ChatGpt_Request_mF3E73D056AC029EBCA579077AAEFDE1E69084034 (RuntimeObject* ___0_messages, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___1_parameters, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___2_completeCallback, Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* ___3_failureCallback, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___4_updateCallback, const RuntimeMethod* method) ;
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mBA6BD54D7C59C52F5E515D540D10C74FB410BEF3 (U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_normalizedPosition_m8CFC50007450856E3B1FEB9E61A6311FBC0E709E (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AiToolbox.Message>::.ctor()
inline void List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01*, const RuntimeMethod*))List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void AiToolbox.Parameters::.ctor(AiToolbox.Parameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameters__ctor_m9BB580A4B019C23289C25AA2BA446C6435D20F7A (Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* __this, Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* ___0_parameters, const RuntimeMethod* method) ;
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo::AddNpcAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiToolboxRuntimeDemo_AddNpcAnswer_m3C89792ECAE3AFCF0C796A020BD8359CD89AB1CB (AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void AiToolbox.ChatGpt::CancelAllRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGpt_CancelAllRequests_mBC5F65F52EEB89441AA8A797F1B323399AB927D8 (const RuntimeMethod* method) ;
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC9ABD06E55D19ABA693B74886C71D1997B93976D (U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiToolboxRuntimeDemo_Start_m645CAF9EB4BE60A4B0FF3EC1B29FDA136CF0B610 (AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AiToolboxRuntimeDemo_AddUserQuestion_m1F22E451236C36C36C8C50775789CE6A82C58F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AiToolboxRuntimeDemo_U3CStartU3Eb__8_0_m71450DA9BCCABD0669E37A0317F149A17CF2A405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AiToolboxRuntimeDemo_U3CStartU3Eb__8_1_m04D0CFD161CD7C9449B45BDFA2C5DC9A4C990596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1E2213543CBCE2A5F38AB25DE2C3BDF718E05A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD080F58D0C37D8DD69D6F9214BFE00578F2A0BA7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parameters == null || string.IsNullOrEmpty(parameters.apiKey)) {
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_0 = __this->___parameters_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_1 = __this->___parameters_4;
		NullCheck(L_1);
		String_t* L_2 = L_1->___apiKey_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}

IL_001a:
	{
		// characterDescription.text = errorMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___characterDescription_5;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralC1E2213543CBCE2A5F38AB25DE2C3BDF718E05A3);
		// characterDescription.color = Color.magenta;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___characterDescription_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// return;
		return;
	}

IL_003b:
	{
		// ChatGpt.Request(prompt, parameters, completeCallback: text => {
		//     // We've received the full text of the answer, so we can display it in the "You're chatting with" text.
		//     characterDescription.text = text;
		// 
		//     // Create a new Parameters object with the `role` parameter set to the character description we've received.
		//     // Now, all the requests made with this Parameters object will be made in the context of this character.
		//     _parametersWithCharacterRole = new Parameters(parameters) { role = text };
		// 
		//     // Ask AI to introduce itself. Note that the message does not contain the character description, because
		//     // the `role` parameter is already set in the `_parametersWithCharacterRole` object.
		//     _conversationSoFar.Add(new Message("Introduce yourself as the character.", Role.User));
		//     AddNpcAnswer();
		// }, failureCallback: (errorCode, errorMessage) => {
		//     // If the request fails, display the error message in the "You're chatting with" text.
		//     var errorType = (ChatGptErrorCodes)errorCode;
		//     characterDescription.text = $"Error {errorCode}: {errorType} - {errorMessage}";
		//     characterDescription.color = Color.red;
		// });
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_7 = __this->___parameters_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_8, __this, (intptr_t)((void*)AiToolboxRuntimeDemo_U3CStartU3Eb__8_0_m71450DA9BCCABD0669E37A0317F149A17CF2A405_RuntimeMethod_var), NULL);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_9 = (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B*)il2cpp_codegen_object_new(Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_2__ctor_m6D7CC9E1EB0AA845B320F46E6E07008C4A4D98E0(L_9, __this, (intptr_t)((void*)AiToolboxRuntimeDemo_U3CStartU3Eb__8_1_m04D0CFD161CD7C9449B45BDFA2C5DC9A4C990596_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10;
		L_10 = ChatGpt_Request_mE78452B83B2E2CC8B7712F83C114C4CD2EEFDC4F(_stringLiteralD080F58D0C37D8DD69D6F9214BFE00578F2A0BA7, L_7, L_8, L_9, (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL, NULL);
		// userQuestionButton.onClick.AddListener(AddUserQuestion);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___userQuestionButton_9;
		NullCheck(L_11);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_12;
		L_12 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_11, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, __this, (intptr_t)((void*)AiToolboxRuntimeDemo_AddUserQuestion_m1F22E451236C36C36C8C50775789CE6A82C58F72_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_12, L_13, NULL);
		// userQuestionButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___userQuestionButton_9;
		NullCheck(L_14);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_14, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo::AddUserQuestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiToolboxRuntimeDemo_AddUserQuestion_m1F22E451236C36C36C8C50775789CE6A82C58F72 (AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8135FF27A668384D860F4A59E74FA97864C8F2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__0_mC1B7DEBDB6DB273C847E7CCBBEB2C1233C2DC468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__1_mAF83DA0C138AC0E17C395BDCBCDDFF7B905C4FF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__2_mA9CB2EC9280CA07DDC4D3AD06E3334E72C7FF60A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF53A333A2D06F52CA906F95150FFD994A10FEB04);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* L_0 = (U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mD9595251B6B1FF0B347C4511F9FC55987F945603(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// var textField = Instantiate(userTextPrefab, scrollRect.content).GetComponent<Text>();
		U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___userTextPrefab_8;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = __this->___scrollRect_6;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7;
		L_7 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_6, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___textField_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___textField_1), (void*)L_7);
		// textField.rectTransform.sizeDelta =
		//     new Vector2(scrollRect.content.rect.width - textField.rectTransform.localPosition.x, 0);
		U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* L_8 = V_0;
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = L_8->___textField_1;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_9, NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_11 = __this->___scrollRect_6;
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_11, NULL);
		NullCheck(L_12);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		L_13 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_12, NULL);
		V_1 = L_13;
		float L_14;
		L_14 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* L_15 = V_0;
		NullCheck(L_15);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = L_15->___textField_1;
		NullCheck(L_16);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17;
		L_17 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), ((float)il2cpp_codegen_subtract(L_14, L_19)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_10, L_20, NULL);
		// userQuestionButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = __this->___userQuestionButton_9;
		NullCheck(L_21);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_21, (bool)0, NULL);
		// var conversationAndRequest = new List<Message>(_conversationSoFar) {
		//     new Message($"Create a question for {characterDescription.text}.", Role.User)
		// };
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_22 = __this->____conversationSoFar_11;
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_23 = (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01*)il2cpp_codegen_object_new(List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		List_1__ctor_m8135FF27A668384D860F4A59E74FA97864C8F2DA(L_23, L_22, List_1__ctor_m8135FF27A668384D860F4A59E74FA97864C8F2DA_RuntimeMethod_var);
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_24 = L_23;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___characterDescription_5;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_25);
		String_t* L_27;
		L_27 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF53A333A2D06F52CA906F95150FFD994A10FEB04, L_26, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Message__ctor_m893CB10C67A22E72AB06DF02FA96D13CB1D16986((&L_28), L_27, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_inline(L_24, L_28, List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		// ChatGpt.Request(conversationAndRequest, parameters, updateCallback: chunkOfText => {
		//     // The request is not yet complete, so we're receiving chunks of text. Append them to the text field.
		//     textField.text += chunkOfText;
		//     scrollRect.normalizedPosition = new Vector2(0, 0);
		// }, completeCallback: questionFullText => {
		//     // The request is complete, so we can add it to the conversation and ask the AI to answer it.
		//     _conversationSoFar.Add(new Message(questionFullText, Role.User));
		//     AddNpcAnswer();
		// }, failureCallback: (errorCode, errorMessage) => {
		//     var errorType = (ChatGptErrorCodes)errorCode;
		//     textField.text = $"Error {errorCode}: {errorType} - {errorMessage}";
		//     textField.color = Color.red;
		// });
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_29 = __this->___parameters_4;
		U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* L_30 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_31 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__0_mC1B7DEBDB6DB273C847E7CCBBEB2C1233C2DC468_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* L_32 = V_0;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_33 = (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B*)il2cpp_codegen_object_new(Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action_2__ctor_m6D7CC9E1EB0AA845B320F46E6E07008C4A4D98E0(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__1_mAF83DA0C138AC0E17C395BDCBCDDFF7B905C4FF6_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* L_34 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_35 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_35, L_34, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__2_mA9CB2EC9280CA07DDC4D3AD06E3334E72C7FF60A_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_36;
		L_36 = ChatGpt_Request_mF3E73D056AC029EBCA579077AAEFDE1E69084034(L_24, L_29, L_31, L_33, L_35, NULL);
		// }
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo::AddNpcAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiToolboxRuntimeDemo_AddNpcAnswer_m3C89792ECAE3AFCF0C796A020BD8359CD89AB1CB (AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__0_m2B2A7DA27049484F11D9A560FB0A4562508D6CE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__1_m1EC228049785A4F78EF8D36BC8B4569C4022FA6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__2_m332E2865B9D1EBFBAACCFC37D038423F9A68086E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* L_0 = (U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_mBA6BD54D7C59C52F5E515D540D10C74FB410BEF3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// var textField = Instantiate(characterTextPrefab, scrollRect.content).GetComponent<Text>();
		U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___characterTextPrefab_7;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = __this->___scrollRect_6;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7;
		L_7 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_6, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___textField_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___textField_1), (void*)L_7);
		// textField.rectTransform.sizeDelta =
		//     new Vector2(scrollRect.content.rect.width - textField.rectTransform.localPosition.x, 0);
		U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* L_8 = V_0;
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = L_8->___textField_1;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_9, NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_11 = __this->___scrollRect_6;
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_11, NULL);
		NullCheck(L_12);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		L_13 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_12, NULL);
		V_1 = L_13;
		float L_14;
		L_14 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* L_15 = V_0;
		NullCheck(L_15);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = L_15->___textField_1;
		NullCheck(L_16);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17;
		L_17 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), ((float)il2cpp_codegen_subtract(L_14, L_19)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_10, L_20, NULL);
		// scrollRect.normalizedPosition = new Vector2(0, 0);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_21 = __this->___scrollRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		ScrollRect_set_normalizedPosition_m8CFC50007450856E3B1FEB9E61A6311FBC0E709E(L_21, L_22, NULL);
		// ChatGpt.Request(_conversationSoFar, _parametersWithCharacterRole, updateCallback: text => {
		//     // The request is not yet complete, so we're receiving chunks of text. Append them to the text field.
		//     textField.text += text;
		//     scrollRect.normalizedPosition = new Vector2(0, 0);
		// }, completeCallback: fullAnswer => {
		//     // The request is complete, so we can add it to the conversation and enable the "Generate question" button.
		//     userQuestionButton.interactable = true;
		//     _conversationSoFar.Add(new Message(fullAnswer, Role.AI));
		// }, failureCallback: (errorCode, errorMessage) => {
		//     var errorType = (ChatGptErrorCodes)errorCode;
		//     textField.text = $"Error {errorCode}: {errorType} - {errorMessage}";
		//     textField.color = Color.red;
		// });
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_23 = __this->____conversationSoFar_11;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_24 = __this->____parametersWithCharacterRole_10;
		U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* L_25 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_26 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__0_m2B2A7DA27049484F11D9A560FB0A4562508D6CE1_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* L_27 = V_0;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_28 = (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B*)il2cpp_codegen_object_new(Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action_2__ctor_m6D7CC9E1EB0AA845B320F46E6E07008C4A4D98E0(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__1_m1EC228049785A4F78EF8D36BC8B4569C4022FA6F_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* L_29 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_30 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_30, L_29, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__2_m332E2865B9D1EBFBAACCFC37D038423F9A68086E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_31;
		L_31 = ChatGpt_Request_mF3E73D056AC029EBCA579077AAEFDE1E69084034(L_23, L_24, L_26, L_28, L_30, NULL);
		// }
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiToolboxRuntimeDemo__ctor_m58F2373352F6F5654A75BF864A791B2CE8BBA1A0 (AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<Message> _conversationSoFar = new List<Message>();
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_0 = (List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01*)il2cpp_codegen_object_new(List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF(L_0, List_1__ctor_mA63CE545E238E579F89EDA8BB6B4FE1CDF9411CF_RuntimeMethod_var);
		__this->____conversationSoFar_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____conversationSoFar_11), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo::<Start>b__8_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiToolboxRuntimeDemo_U3CStartU3Eb__8_0_m71450DA9BCCABD0669E37A0317F149A17CF2A405 (AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1187752F4BF74D75A8627F3CF4C6DA81032129E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// characterDescription.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___characterDescription_5;
		String_t* L_1 = ___0_text;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// _parametersWithCharacterRole = new Parameters(parameters) { role = text };
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_2 = __this->___parameters_4;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_3 = (Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5*)il2cpp_codegen_object_new(Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Parameters__ctor_m9BB580A4B019C23289C25AA2BA446C6435D20F7A(L_3, L_2, NULL);
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_4 = L_3;
		String_t* L_5 = ___0_text;
		NullCheck(L_4);
		L_4->___role_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___role_6), (void*)L_5);
		__this->____parametersWithCharacterRole_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parametersWithCharacterRole_10), (void*)L_4);
		// _conversationSoFar.Add(new Message("Introduce yourself as the character.", Role.User));
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_6 = __this->____conversationSoFar_11;
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Message__ctor_m893CB10C67A22E72AB06DF02FA96D13CB1D16986((&L_7), _stringLiteralC1187752F4BF74D75A8627F3CF4C6DA81032129E, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_inline(L_6, L_7, List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		// AddNpcAnswer();
		AiToolboxRuntimeDemo_AddNpcAnswer_m3C89792ECAE3AFCF0C796A020BD8359CD89AB1CB(__this, NULL);
		// }, failureCallback: (errorCode, errorMessage) => {
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo::<Start>b__8_1(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiToolboxRuntimeDemo_U3CStartU3Eb__8_1_m04D0CFD161CD7C9449B45BDFA2C5DC9A4C990596 (AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* __this, int64_t ___0_errorCode, String_t* ___1_errorMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE63298190E18B9F07FCB1A40FD4214D6D7BEFF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var errorType = (ChatGptErrorCodes)errorCode;
		int64_t L_0 = ___0_errorCode;
		V_0 = ((int32_t)L_0);
		// characterDescription.text = $"Error {errorCode}: {errorType} - {errorMessage}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___characterDescription_5;
		int64_t L_2 = ___0_errorCode;
		int64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = ___1_errorMessage;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralBEE63298190E18B9F07FCB1A40FD4214D6D7BEFF, L_4, L_7, L_8, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_9);
		// characterDescription.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___characterDescription_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
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
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mD9595251B6B1FF0B347C4511F9FC55987F945603 (U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0::<AddUserQuestion>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__0_mC1B7DEBDB6DB273C847E7CCBBEB2C1233C2DC468 (U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* __this, String_t* ___0_questionFullText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _conversationSoFar.Add(new Message(questionFullText, Role.User));
		AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_1 = L_0->____conversationSoFar_11;
		String_t* L_2 = ___0_questionFullText;
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Message__ctor_m893CB10C67A22E72AB06DF02FA96D13CB1D16986((&L_3), L_2, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_inline(L_1, L_3, List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		// AddNpcAnswer();
		AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		AiToolboxRuntimeDemo_AddNpcAnswer_m3C89792ECAE3AFCF0C796A020BD8359CD89AB1CB(L_4, NULL);
		// }, failureCallback: (errorCode, errorMessage) => {
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0::<AddUserQuestion>b__1(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__1_mAF83DA0C138AC0E17C395BDCBCDDFF7B905C4FF6 (U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* __this, int64_t ___0_errorCode, String_t* ___1_errorMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE63298190E18B9F07FCB1A40FD4214D6D7BEFF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var errorType = (ChatGptErrorCodes)errorCode;
		int64_t L_0 = ___0_errorCode;
		V_0 = ((int32_t)L_0);
		// textField.text = $"Error {errorCode}: {errorType} - {errorMessage}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___textField_1;
		int64_t L_2 = ___0_errorCode;
		int64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = ___1_errorMessage;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralBEE63298190E18B9F07FCB1A40FD4214D6D7BEFF, L_4, L_7, L_8, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_9);
		// textField.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___textField_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// });
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass9_0::<AddUserQuestion>b__2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CAddUserQuestionU3Eb__2_mA9CB2EC9280CA07DDC4D3AD06E3334E72C7FF60A (U3CU3Ec__DisplayClass9_0_t90848DB0FF3269F28316943DF0B53B7391003D58* __this, String_t* ___0_chunkOfText, const RuntimeMethod* method) 
{
	{
		// textField.text += chunkOfText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textField_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		String_t* L_3 = ___0_chunkOfText;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// scrollRect.normalizedPosition = new Vector2(0, 0);
		AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = L_5->___scrollRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		ScrollRect_set_normalizedPosition_m8CFC50007450856E3B1FEB9E61A6311FBC0E709E(L_6, L_7, NULL);
		// }, completeCallback: questionFullText => {
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
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mBA6BD54D7C59C52F5E515D540D10C74FB410BEF3 (U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0::<AddNpcAnswer>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__0_m2B2A7DA27049484F11D9A560FB0A4562508D6CE1 (U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* __this, String_t* ___0_fullAnswer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// userQuestionButton.interactable = true;
		AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___userQuestionButton_9;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// _conversationSoFar.Add(new Message(fullAnswer, Role.AI));
		AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		List_1_t87D1DE941E703B2C71FB23F97DA7637801BEEB01* L_3 = L_2->____conversationSoFar_11;
		String_t* L_4 = ___0_fullAnswer;
		Message_t95840816AFEB01D35B7256FB5BB1878D36EB19A8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Message__ctor_m893CB10C67A22E72AB06DF02FA96D13CB1D16986((&L_5), L_4, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_inline(L_3, L_5, List_1_Add_m1E9E4A02411A0BDD11EF5BB85FD352BBACA8595A_RuntimeMethod_var);
		// }, failureCallback: (errorCode, errorMessage) => {
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0::<AddNpcAnswer>b__1(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__1_m1EC228049785A4F78EF8D36BC8B4569C4022FA6F (U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* __this, int64_t ___0_errorCode, String_t* ___1_errorMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE63298190E18B9F07FCB1A40FD4214D6D7BEFF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var errorType = (ChatGptErrorCodes)errorCode;
		int64_t L_0 = ___0_errorCode;
		V_0 = ((int32_t)L_0);
		// textField.text = $"Error {errorCode}: {errorType} - {errorMessage}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___textField_1;
		int64_t L_2 = ___0_errorCode;
		int64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = ___1_errorMessage;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralBEE63298190E18B9F07FCB1A40FD4214D6D7BEFF, L_4, L_7, L_8, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_9);
		// textField.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___textField_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// });
		return;
	}
}
// System.Void AiToolboxRuntimeSample.AiToolboxRuntimeDemo/<>c__DisplayClass10_0::<AddNpcAnswer>b__2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CAddNpcAnswerU3Eb__2_m332E2865B9D1EBFBAACCFC37D038423F9A68086E (U3CU3Ec__DisplayClass10_0_tD9C258662311D5D6CB5E7FA58D04471A31A77F6A* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		// textField.text += text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___textField_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		String_t* L_3 = ___0_text;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// scrollRect.normalizedPosition = new Vector2(0, 0);
		AiToolboxRuntimeDemo_tB307A74E741BC8D352D726044BD6D579D308B7B5* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = L_5->___scrollRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		ScrollRect_set_normalizedPosition_m8CFC50007450856E3B1FEB9E61A6311FBC0E709E(L_6, L_7, NULL);
		// }, completeCallback: fullAnswer => {
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
// System.Void AiToolboxRuntimeSample.OpenHyperlink::OpenLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenHyperlink_OpenLink_m3F24DA788B432DE8C31F35FAF7EB1CC5F1D1F14A (OpenHyperlink_tAA85FFF8D149ABC43E59EC492B25B6C65F64B11D* __this, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(hyperlink);
		String_t* L_0 = __this->___hyperlink_4;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// }
		return;
	}
}
// System.Void AiToolboxRuntimeSample.OpenHyperlink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenHyperlink__ctor_mC3EAF424E71F1BCF9C96AB5BB1502CBBB0A42867 (OpenHyperlink_tAA85FFF8D149ABC43E59EC492B25B6C65F64B11D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CED19D81B3BDD617BFEE7FDEF41E4D528459DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string hyperlink = "https://ai-toolbox.dustyroom.com";
		__this->___hyperlink_4 = _stringLiteral24CED19D81B3BDD617BFEE7FDEF41E4D528459DD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hyperlink_4), (void*)_stringLiteral24CED19D81B3BDD617BFEE7FDEF41E4D528459DD);
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
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerySimpleUsageExample_Start_m1E53F22FBE2C9CD165922EED014CA666FB65DCA8 (VerySimpleUsageExample_tA4D1CFD21381104B82A5063C60408B3D568A5A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__2_0_mD29C5CA6F5767A90A18C449320F7BAD5244E3DBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__2_1_m988F571AB79E9A21A5FF2FD7EC085F1B747C608C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__2_2_m3FF7E3230C26F0611D98A209CC4B0079F771EF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__2_3_mA9D57AB86B94174749F770288A1BC38B52827E69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__2_4_mD963F795E7FEEA0D7D5703A84839E43A96D6BB32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1E2213543CBCE2A5F38AB25DE2C3BDF718E05A3);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B5_0 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B4_0 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B7_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B7_1 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B6_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B6_1 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B9_0 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B8_0 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B11_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B11_1 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B10_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B10_1 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B13_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B13_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B13_2 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B13_3 = NULL;
	String_t* G_B13_4 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B12_0 = NULL;
	Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* G_B12_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B12_2 = NULL;
	Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* G_B12_3 = NULL;
	String_t* G_B12_4 = NULL;
	{
		// if (parameters == null || string.IsNullOrEmpty(parameters.apiKey)) {
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_0 = __this->___parameters_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_1 = __this->___parameters_4;
		NullCheck(L_1);
		String_t* L_2 = L_1->___apiKey_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}

IL_001a:
	{
		// Debug.LogError(errorMessage);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC1E2213543CBCE2A5F38AB25DE2C3BDF718E05A3, NULL);
		// return;
		return;
	}

IL_0025:
	{
		// ChatGpt.Request(prompt, parameters, response => { Debug.Log("Full response: " + response); },
		//                 (errorCode, errorMessage) => {
		//                     var errorType = (ChatGptErrorCodes)errorCode;
		//                     Debug.LogError("Error: " + errorType + " - " + errorMessage);
		//                 });
		String_t* L_4 = __this->___prompt_5;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_5 = __this->___parameters_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = L_6;
		G_B4_0 = L_7;
		G_B4_1 = L_5;
		G_B4_2 = L_4;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_5;
			G_B5_2 = L_4;
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* L_8 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__2_0_mD29C5CA6F5767A90A18C449320F7BAD5244E3DBF_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = L_9;
		((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_10);
		G_B5_0 = L_10;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_0050:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_11 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_2;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_12 = L_11;
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		if (L_12)
		{
			G_B7_0 = L_12;
			G_B7_1 = G_B5_0;
			G_B7_2 = G_B5_1;
			G_B7_3 = G_B5_2;
			goto IL_006f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* L_13 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_14 = (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B*)il2cpp_codegen_object_new(Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_2__ctor_m6D7CC9E1EB0AA845B320F46E6E07008C4A4D98E0(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__2_1_m988F571AB79E9A21A5FF2FD7EC085F1B747C608C_RuntimeMethod_var), NULL);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_15 = L_14;
		((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_2), (void*)L_15);
		G_B7_0 = L_15;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
	}

IL_006f:
	{
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16;
		L_16 = ChatGpt_Request_mE78452B83B2E2CC8B7712F83C114C4CD2EEFDC4F(G_B7_3, G_B7_2, G_B7_1, G_B7_0, (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL, NULL);
		// ChatGpt.Request(prompt, parameters, response => { Debug.Log("Full response: " + response); },
		//                 (errorCode, errorMessage) => {
		//                     var errorType = (ChatGptErrorCodes)errorCode;
		//                     Debug.LogError("Error: " + errorType + " - " + errorMessage);
		//                 }, chunk => { Debug.Log("Next part of response: " + chunk); });
		String_t* L_17 = __this->___prompt_5;
		Parameters_t55F4C4D4FFF38EF5CF1F584E7D581D285B06B5D5* L_18 = __this->___parameters_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_19 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_2_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_20 = L_19;
		G_B8_0 = L_20;
		G_B8_1 = L_18;
		G_B8_2 = L_17;
		if (L_20)
		{
			G_B9_0 = L_20;
			G_B9_1 = L_18;
			G_B9_2 = L_17;
			goto IL_00a1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* L_21 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_22 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_22, L_21, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__2_2_m3FF7E3230C26F0611D98A209CC4B0079F771EF97_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_23 = L_22;
		((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_2_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_2_3), (void*)L_23);
		G_B9_0 = L_23;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
	}

IL_00a1:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_24 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_3_4;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_25 = L_24;
		G_B10_0 = L_25;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
		if (L_25)
		{
			G_B11_0 = L_25;
			G_B11_1 = G_B9_0;
			G_B11_2 = G_B9_1;
			G_B11_3 = G_B9_2;
			goto IL_00c0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* L_26 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_27 = (Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B*)il2cpp_codegen_object_new(Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_2__ctor_m6D7CC9E1EB0AA845B320F46E6E07008C4A4D98E0(L_27, L_26, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__2_3_mA9D57AB86B94174749F770288A1BC38B52827E69_RuntimeMethod_var), NULL);
		Action_2_t3497BE062DEFB3FE667783AD75222CEB992E465B* L_28 = L_27;
		((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_3_4 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_3_4), (void*)L_28);
		G_B11_0 = L_28;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_00c0:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_29 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_4_5;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_30 = L_29;
		G_B12_0 = L_30;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
		if (L_30)
		{
			G_B13_0 = L_30;
			G_B13_1 = G_B11_0;
			G_B13_2 = G_B11_1;
			G_B13_3 = G_B11_2;
			G_B13_4 = G_B11_3;
			goto IL_00df;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* L_31 = ((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_32 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_32, L_31, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__2_4_mD963F795E7FEEA0D7D5703A84839E43A96D6BB32_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_33 = L_32;
		((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_4_5 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9__2_4_5), (void*)L_33);
		G_B13_0 = L_33;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
		G_B13_4 = G_B12_4;
	}

IL_00df:
	{
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_34;
		L_34 = ChatGpt_Request_mE78452B83B2E2CC8B7712F83C114C4CD2EEFDC4F(G_B13_4, G_B13_3, G_B13_2, G_B13_1, G_B13_0, NULL);
		// }
		return;
	}
}
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerySimpleUsageExample_OnDestroy_mBE7FA39BFF5320F451001172C5CDC223F6C2C0A5 (VerySimpleUsageExample_tA4D1CFD21381104B82A5063C60408B3D568A5A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChatGpt.CancelAllRequests();
		il2cpp_codegen_runtime_class_init_inline(ChatGpt_t9F295BA65BFF5CB41866E5586461EF17578AAF94_il2cpp_TypeInfo_var);
		ChatGpt_CancelAllRequests_mBC5F65F52EEB89441AA8A797F1B323399AB927D8(NULL);
		// }
		return;
	}
}
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerySimpleUsageExample__ctor_m758388D45C9229A906832652B2FBB722583EC349 (VerySimpleUsageExample_tA4D1CFD21381104B82A5063C60408B3D568A5A2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral585E54198009BC761EE77E553962E8AA1F4FFEF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string prompt = "Generate a character description";
		__this->___prompt_5 = _stringLiteral585E54198009BC761EE77E553962E8AA1F4FFEF9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prompt_5), (void*)_stringLiteral585E54198009BC761EE77E553962E8AA1F4FFEF9);
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
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4B5FA52D6BD67E735BFFDCE703F1193ED5362288 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* L_0 = (U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F*)il2cpp_codegen_object_new(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC9ABD06E55D19ABA693B74886C71D1997B93976D(L_0, NULL);
		((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC9ABD06E55D19ABA693B74886C71D1997B93976D (U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<Start>b__2_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__2_0_mD29C5CA6F5767A90A18C449320F7BAD5244E3DBF (U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* __this, String_t* ___0_response, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14AAE5B3D1B1AB710432B2FA926AACB9E86755A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChatGpt.Request(prompt, parameters, response => { Debug.Log("Full response: " + response); },
		String_t* L_0 = ___0_response;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral14AAE5B3D1B1AB710432B2FA926AACB9E86755A0, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// ChatGpt.Request(prompt, parameters, response => { Debug.Log("Full response: " + response); },
		return;
	}
}
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<Start>b__2_1(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__2_1_m988F571AB79E9A21A5FF2FD7EC085F1B747C608C (U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* __this, int64_t ___0_errorCode, String_t* ___1_errorMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var errorType = (ChatGptErrorCodes)errorCode;
		int64_t L_0 = ___0_errorCode;
		V_0 = ((int32_t)L_0);
		// Debug.LogError("Error: " + errorType + " - " + errorMessage);
		Il2CppFakeBox<int32_t> L_1(ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3 = ___1_errorMessage;
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_2, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// });
		return;
	}
}
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<Start>b__2_2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__2_2_m3FF7E3230C26F0611D98A209CC4B0079F771EF97 (U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* __this, String_t* ___0_response, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14AAE5B3D1B1AB710432B2FA926AACB9E86755A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChatGpt.Request(prompt, parameters, response => { Debug.Log("Full response: " + response); },
		String_t* L_0 = ___0_response;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral14AAE5B3D1B1AB710432B2FA926AACB9E86755A0, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// ChatGpt.Request(prompt, parameters, response => { Debug.Log("Full response: " + response); },
		return;
	}
}
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<Start>b__2_3(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__2_3_mA9D57AB86B94174749F770288A1BC38B52827E69 (U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* __this, int64_t ___0_errorCode, String_t* ___1_errorMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var errorType = (ChatGptErrorCodes)errorCode;
		int64_t L_0 = ___0_errorCode;
		V_0 = ((int32_t)L_0);
		// Debug.LogError("Error: " + errorType + " - " + errorMessage);
		Il2CppFakeBox<int32_t> L_1(ChatGptErrorCodes_t83680FD083045E7EDD37CB090C5449360A7FE089_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3 = ___1_errorMessage;
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_2, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// }, chunk => { Debug.Log("Next part of response: " + chunk); });
		return;
	}
}
// System.Void AiToolboxRuntimeSample.VerySimpleUsageExample/<>c::<Start>b__2_4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__2_4_mD963F795E7FEEA0D7D5703A84839E43A96D6BB32 (U3CU3Ec_tFF5A2AD76A76501D9506E2495FAB08C88BB0027F* __this, String_t* ___0_chunk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69DED09FCE1BAC1C43F5E33643BAE4DF71307344);
		s_Il2CppMethodInitialized = true;
	}
	{
		// }, chunk => { Debug.Log("Next part of response: " + chunk); });
		String_t* L_0 = ___0_chunk;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral69DED09FCE1BAC1C43F5E33643BAE4DF71307344, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }, chunk => { Debug.Log("Next part of response: " + chunk); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
