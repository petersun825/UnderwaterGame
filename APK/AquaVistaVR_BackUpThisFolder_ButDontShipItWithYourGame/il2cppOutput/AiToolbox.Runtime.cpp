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

// System.Func`2<System.Char,System.Int32>
struct Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t9CC3C47C67E4184F7F1B8B0AFAEF692B9EDDDF05;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AiToolbox.Key/<>c
struct U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0696637388F65BB17EEC883AE7519AD553067606;
IL2CPP_EXTERN_C String_t* _stringLiteral21F6133175F9E1E8F6FE87295ED0840AD6F9CD77;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Key_A_mA286CC3B281E58CEE9FAC0F556B9064D0CA57DC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Key_B_m66D6EA9789ED330309F320608B98EB89A4C69D20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDecryptTranspositionU3Eb__6_0_mD3BBE7C276BD6FB564793EB1C5EEA6C57BEE7069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEncryptTranspositionU3Eb__5_0_mF2F72D6F7DB072C7E9FBF086794CB3318AF7757A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1FFAE9F9AE6B3EDBB99CD14F35F5FE97B1C4063F 
{
};

// AiToolbox.Key
struct Key_t50888E6956BA1567D79A9C078084497136151F6F  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// AiToolbox.Key/<>c
struct U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Func`2<System.Char,System.Int32>
struct Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// <Module>

// <Module>

// AiToolbox.Key

// AiToolbox.Key

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// AiToolbox.Key/<>c
struct U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields
{
	// AiToolbox.Key/<>c AiToolbox.Key/<>c::<>9
	U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002* ___U3CU3E9_0;
	// System.Func`2<System.Char,System.Int32> AiToolbox.Key/<>c::<>9__5_0
	Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* ___U3CU3E9__5_0_1;
	// System.Func`2<System.Char,System.Int32> AiToolbox.Key/<>c::<>9__6_0
	Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* ___U3CU3E9__6_0_2;
};

// AiToolbox.Key/<>c

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// System.Func`2<System.Char,System.Int32>

// System.Func`2<System.Char,System.Int32>

// System.ArgumentException

// System.ArgumentException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Text.StringBuilder[]
struct StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7  : public RuntimeArray
{
	ALIGN_FIELD (8) StringBuilder_t* m_Items[1];

	inline StringBuilder_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringBuilder_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringBuilder_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StringBuilder_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringBuilder_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringBuilder_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Func`2<System.Char,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m85636EF8C6CBC8FD551E8F05E3A52D1BCB4DA07C_gshared (Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Sum<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63_gshared (RuntimeObject* ___0_source, Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* ___1_selector, const RuntimeMethod* method) ;

// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String AiToolbox.Key::EncryptSubstitution(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_EncryptSubstitution_m4158EE6813C915515D6B2168C1DBCB3643BBF317 (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) ;
// System.String AiToolbox.Key::EncryptTransposition(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_EncryptTransposition_mA455E5FF3E68F4DC5F93E1DAC85003DE7B7B2B14 (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) ;
// System.String AiToolbox.Key::DecryptTransposition(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_DecryptTransposition_m94BF49D018DB9A4851F2F3AC8EB7352B0C2F65BB (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) ;
// System.String AiToolbox.Key::DecryptSubstitution(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_DecryptSubstitution_m97AECB4E2AF0B4AC2E7EEB868A7A66768CFAC601 (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Char,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m85636EF8C6CBC8FD551E8F05E3A52D1BCB4DA07C (Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m85636EF8C6CBC8FD551E8F05E3A52D1BCB4DA07C_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 System.Linq.Enumerable::Sum<System.Char>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
inline int32_t Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63 (RuntimeObject* ___0_source, Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* ___1_selector, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E*, const RuntimeMethod*))Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63_gshared)(___0_source, ___1_selector, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
// System.Void AiToolbox.Key/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99E4A18DEAD24DE237FF96483EC1F38A1D95FE4D (U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
// System.String AiToolbox.Key::A(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_A_mA286CC3B281E58CEE9FAC0F556B9064D0CA57DC4 (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_input;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ___1_key;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral21F6133175F9E1E8F6FE87295ED0840AD6F9CD77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Key_A_mA286CC3B281E58CEE9FAC0F556B9064D0CA57DC4_RuntimeMethod_var)));
	}

IL_001b:
	{
		String_t* L_5 = ___0_input;
		String_t* L_6 = ___1_key;
		String_t* L_7;
		L_7 = Key_EncryptSubstitution_m4158EE6813C915515D6B2168C1DBCB3643BBF317(L_5, L_6, NULL);
		String_t* L_8 = ___1_key;
		String_t* L_9;
		L_9 = Key_EncryptTransposition_mA455E5FF3E68F4DC5F93E1DAC85003DE7B7B2B14(L_7, L_8, NULL);
		return L_9;
	}
}
// System.String AiToolbox.Key::B(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_B_m66D6EA9789ED330309F320608B98EB89A4C69D20 (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_input;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ___1_key;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral21F6133175F9E1E8F6FE87295ED0840AD6F9CD77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Key_B_m66D6EA9789ED330309F320608B98EB89A4C69D20_RuntimeMethod_var)));
	}

IL_001b:
	{
		String_t* L_5 = ___0_input;
		String_t* L_6 = ___1_key;
		String_t* L_7;
		L_7 = Key_DecryptTransposition_m94BF49D018DB9A4851F2F3AC8EB7352B0C2F65BB(L_5, L_6, NULL);
		String_t* L_8 = ___1_key;
		String_t* L_9;
		L_9 = Key_DecryptSubstitution_m97AECB4E2AF0B4AC2E7EEB868A7A66768CFAC601(L_7, L_8, NULL);
		return L_9;
	}
}
// System.String AiToolbox.Key::EncryptSubstitution(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_EncryptSubstitution_m4158EE6813C915515D6B2168C1DBCB3643BBF317 (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		String_t* L_0 = ___0_input;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_2, L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		String_t* L_3 = ___0_input;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0082;
	}

IL_0014:
	{
		String_t* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_4 = L_6;
		Il2CppChar L_7 = V_4;
		NullCheck(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		int32_t L_8;
		L_8 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606, L_7, NULL);
		V_5 = L_8;
		int32_t L_9 = V_5;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_10 = ___1_key;
		int32_t L_11 = V_1;
		String_t* L_12 = ___1_key;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		NullCheck(L_10);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, ((int32_t)(L_11%L_13)), NULL);
		NullCheck(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		int32_t L_15;
		L_15 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606, L_14, NULL);
		V_6 = L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_6;
		NullCheck(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606, NULL);
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_16, L_17))%L_18));
		StringBuilder_t* L_19 = V_0;
		int32_t L_20 = V_7;
		NullCheck(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606, L_20, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_19, L_21, NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		goto IL_007e;
	}

IL_0075:
	{
		StringBuilder_t* L_24 = V_0;
		Il2CppChar L_25 = V_4;
		NullCheck(L_24);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, L_25, NULL);
	}

IL_007e:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0082:
	{
		int32_t L_28 = V_3;
		String_t* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		return L_32;
	}
}
// System.String AiToolbox.Key::DecryptSubstitution(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_DecryptSubstitution_m97AECB4E2AF0B4AC2E7EEB868A7A66768CFAC601 (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		String_t* L_0 = ___0_input;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_2, L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		String_t* L_3 = ___0_input;
		V_2 = L_3;
		V_3 = 0;
		goto IL_008d;
	}

IL_0014:
	{
		String_t* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_4 = L_6;
		Il2CppChar L_7 = V_4;
		NullCheck(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		int32_t L_8;
		L_8 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606, L_7, NULL);
		V_5 = L_8;
		int32_t L_9 = V_5;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_10 = ___1_key;
		int32_t L_11 = V_1;
		String_t* L_12 = ___1_key;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		NullCheck(L_10);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, ((int32_t)(L_11%L_13)), NULL);
		NullCheck(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		int32_t L_15;
		L_15 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606, L_14, NULL);
		V_6 = L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_6;
		NullCheck(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606, NULL);
		NullCheck(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606, NULL);
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_16, L_17)), L_18))%L_19));
		StringBuilder_t* L_20 = V_0;
		int32_t L_21 = V_7;
		NullCheck(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral0696637388F65BB17EEC883AE7519AD553067606, L_21, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_22, NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		goto IL_0089;
	}

IL_0080:
	{
		StringBuilder_t* L_25 = V_0;
		Il2CppChar L_26 = V_4;
		NullCheck(L_25);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_25, L_26, NULL);
	}

IL_0089:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_008d:
	{
		int32_t L_29 = V_3;
		String_t* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		return L_33;
	}
}
// System.String AiToolbox.Key::EncryptTransposition(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_EncryptTransposition_mA455E5FF3E68F4DC5F93E1DAC85003DE7B7B2B14 (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEncryptTranspositionU3Eb__5_0_mF2F72D6F7DB072C7E9FBF086794CB3318AF7757A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringBuilder_t* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	Il2CppChar V_8 = 0x0;
	int32_t V_9 = 0;
	Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	{
		String_t* L_0 = ___1_key;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var);
		Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* L_1 = ((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var);
		U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002* L_3 = ((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* L_4 = (Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E*)il2cpp_codegen_object_new(Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m85636EF8C6CBC8FD551E8F05E3A52D1BCB4DA07C(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CEncryptTranspositionU3Eb__5_0_mF2F72D6F7DB072C7E9FBF086794CB3318AF7757A_RuntimeMethod_var), NULL);
		Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* L_5 = L_4;
		((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		int32_t L_6;
		L_6 = Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63(G_B2_1, G_B2_0, Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_6%((int32_t)10))), 2));
		int32_t L_7 = V_0;
		StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7* L_8 = (StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7*)(StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7*)SZArrayNew(StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		V_5 = 0;
		goto IL_0046;
	}

IL_0037:
	{
		StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7* L_9 = V_1;
		int32_t L_10 = V_5;
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (StringBuilder_t*)L_11);
		int32_t L_12 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0046:
	{
		int32_t L_13 = V_5;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0037;
		}
	}
	{
		V_2 = 0;
		V_3 = 1;
		String_t* L_15 = ___0_input;
		V_6 = L_15;
		V_7 = 0;
		goto IL_0084;
	}

IL_0057:
	{
		String_t* L_16 = V_6;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, L_17, NULL);
		V_8 = L_18;
		StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		StringBuilder_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Il2CppChar L_23 = V_8;
		NullCheck(L_22);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, L_23, NULL);
		int32_t L_25 = V_2;
		int32_t L_26 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		int32_t L_27 = V_2;
		int32_t L_28 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_28, 1)))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_29 = V_2;
		if (L_29)
		{
			goto IL_007e;
		}
	}

IL_007a:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_30, (-1)));
	}

IL_007e:
	{
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0084:
	{
		int32_t L_32 = V_7;
		String_t* L_33 = V_6;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_33, NULL);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_35 = ___0_input;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_35, NULL);
		StringBuilder_t* L_37 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_37, L_36, NULL);
		V_4 = L_37;
		V_9 = 0;
		goto IL_00b3;
	}

IL_00a1:
	{
		StringBuilder_t* L_38 = V_4;
		StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7* L_39 = V_1;
		int32_t L_40 = V_9;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		StringBuilder_t* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_38, L_42, NULL);
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00b3:
	{
		int32_t L_45 = V_9;
		int32_t L_46 = V_0;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00a1;
		}
	}
	{
		StringBuilder_t* L_47 = V_4;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		return L_48;
	}
}
// System.String AiToolbox.Key::DecryptTransposition(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Key_DecryptTransposition_m94BF49D018DB9A4851F2F3AC8EB7352B0C2F65BB (String_t* ___0_input, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDecryptTranspositionU3Eb__6_0_mD3BBE7C276BD6FB564793EB1C5EEA6C57BEE7069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	{
		String_t* L_0 = ___1_key;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var);
		Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* L_1 = ((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2;
		Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var);
		U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002* L_3 = ((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* L_4 = (Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E*)il2cpp_codegen_object_new(Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m85636EF8C6CBC8FD551E8F05E3A52D1BCB4DA07C(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CDecryptTranspositionU3Eb__6_0_mD3BBE7C276BD6FB564793EB1C5EEA6C57BEE7069_RuntimeMethod_var), NULL);
		Func_2_t53BFFBE1D13CED4D88E558378CD62AFCF701571E* L_5 = L_4;
		((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		int32_t L_6;
		L_6 = Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63(G_B2_1, G_B2_0, Enumerable_Sum_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCC3E0A6F11BB9B388BE2AEA2EA6BE6E719F96C63_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_6%((int32_t)10))), 2));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		V_3 = 0;
		V_4 = 1;
		V_7 = 0;
		goto IL_0069;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)));
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		int32_t L_17 = V_3;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1)))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_19 = V_3;
		if (L_19)
		{
			goto IL_0063;
		}
	}

IL_005d:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_20, (-1)));
	}

IL_0063:
	{
		int32_t L_21 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0069:
	{
		int32_t L_22 = V_7;
		String_t* L_23 = ___0_input;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0043;
		}
	}
	{
		V_5 = 0;
		V_8 = 0;
		goto IL_0090;
	}

IL_007b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_2;
		int32_t L_26 = V_8;
		int32_t L_27 = V_5;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_27);
		int32_t L_28 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_1;
		int32_t L_30 = V_8;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, L_32));
		int32_t L_33 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0090:
	{
		int32_t L_34 = V_8;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_36 = ___0_input;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_37);
		V_6 = L_38;
		V_3 = 0;
		V_4 = 1;
		V_9 = 0;
		goto IL_00e0;
	}

IL_00ac:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = V_6;
		int32_t L_40 = V_9;
		String_t* L_41 = ___0_input;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_41);
		Il2CppChar L_46;
		L_46 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_41, L_45, NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Il2CppChar)L_46);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_2;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)));
		int32_t L_50 = *((int32_t*)L_49);
		*((int32_t*)L_49) = (int32_t)((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_3;
		int32_t L_52 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		int32_t L_53 = V_3;
		int32_t L_54 = V_0;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_54, 1)))))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_55 = V_3;
		if (L_55)
		{
			goto IL_00da;
		}
	}

IL_00d4:
	{
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_56, (-1)));
	}

IL_00da:
	{
		int32_t L_57 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00e0:
	{
		int32_t L_58 = V_9;
		String_t* L_59 = ___0_input;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_59, NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00ac;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_61 = V_6;
		String_t* L_62;
		L_62 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_61, NULL);
		return L_62;
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
// System.Void AiToolbox.Key/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2DF4AAEDFFC228370A56B8DA69B905B4B93FF0B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002* L_0 = (U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002*)il2cpp_codegen_object_new(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m99E4A18DEAD24DE237FF96483EC1F38A1D95FE4D(L_0, NULL);
		((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AiToolbox.Key/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99E4A18DEAD24DE237FF96483EC1F38A1D95FE4D (U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 AiToolbox.Key/<>c::<EncryptTransposition>b__5_0(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CEncryptTranspositionU3Eb__5_0_mF2F72D6F7DB072C7E9FBF086794CB3318AF7757A (U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002* __this, Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_c;
		return L_0;
	}
}
// System.Int32 AiToolbox.Key/<>c::<DecryptTransposition>b__6_0(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CDecryptTranspositionU3Eb__6_0_mD3BBE7C276BD6FB564793EB1C5EEA6C57BEE7069 (U3CU3Ec_t1B7964B46D5D0D1967E8E609E606ADBC54F57002* __this, Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_c;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
