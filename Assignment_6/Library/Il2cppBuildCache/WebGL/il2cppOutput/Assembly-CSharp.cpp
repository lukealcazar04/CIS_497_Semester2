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

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Character
struct Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8;
// CharacterCreator
struct CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677;
// CharacterSimulator
struct CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// HeroCreator
struct HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1;
// HeroOrcWarlord
struct HeroOrcWarlord_t80E7AFC5A7E10DAEB4A65A756681DC29B3047D65;
// HeroRanger
struct HeroRanger_tF850856B294318B5AFDFA110EF50662C810C8BF2;
// HeroTemplar
struct HeroTemplar_t5918B68A385D3E467C86F553B078C58F74054190;
// HordeCreator
struct HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF;
// HordeOrcWarlord
struct HordeOrcWarlord_t0A50C80A1D80E39D6DBE2BD587680E44C6F13F9C;
// HordeRanger
struct HordeRanger_t75A707B18E05F1A2D1F37F1F70790DF6462AF024;
// HordeTemplar
struct HordeTemplar_t00F8C272E6FA453A70856E17D3304BB62B7CEB97;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* FactionType_t6702CC5073F919E334D471ADE8845CF8BB6E62B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeroOrcWarlord_t80E7AFC5A7E10DAEB4A65A756681DC29B3047D65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeroRanger_tF850856B294318B5AFDFA110EF50662C810C8BF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeroTemplar_t5918B68A385D3E467C86F553B078C58F74054190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HordeOrcWarlord_t0A50C80A1D80E39D6DBE2BD587680E44C6F13F9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HordeRanger_t75A707B18E05F1A2D1F37F1F70790DF6462AF024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HordeTemplar_t00F8C272E6FA453A70856E17D3304BB62B7CEB97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00F28EC044F0BCC9FF9CE0F4EB8D079BA9C166F4;
IL2CPP_EXTERN_C String_t* _stringLiteral02A42C6805C267E39467C6A8567619FDA05BDBA8;
IL2CPP_EXTERN_C String_t* _stringLiteral02B8FB634499340F7BC1E8CE5231107019616485;
IL2CPP_EXTERN_C String_t* _stringLiteral052150A841250E4651DBAFFBE340DAAAD4F77F90;
IL2CPP_EXTERN_C String_t* _stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5C7D4C17155B9730F71BA978C7FDAE798CCB52;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral3002EA6856E592CE1B90D8B43F6EEA4B58E1CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral3CD937319DAF1501C3574C9C3C54938A3B23B46D;
IL2CPP_EXTERN_C String_t* _stringLiteral3D280FAE4801239A477221C32A80D0389DAE63E4;
IL2CPP_EXTERN_C String_t* _stringLiteral54021A1A89C150586C50E3D2EBE7EF09D8A02477;
IL2CPP_EXTERN_C String_t* _stringLiteral817C367713B801CF514A34332433A04E2E31A1DF;
IL2CPP_EXTERN_C String_t* _stringLiteralA870EE591B558F6E958A94E9B71461BE843FCD23;
IL2CPP_EXTERN_C String_t* _stringLiteralAC203185A474AD3286CC1C6405E17D8A8BA55791;
IL2CPP_EXTERN_C String_t* _stringLiteralADF8E8C02692DC49DAE5E2420981A5D3FADF0F51;
IL2CPP_EXTERN_C String_t* _stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6B7F3ADA142F70FB05466ECAF85CD4D726F5A3;
IL2CPP_EXTERN_C String_t* _stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC8DC8072479243AE31CDA6162B426EFDD64E771;
IL2CPP_EXTERN_C String_t* _stringLiteralE631370858903E57228145507E061CDDA37AD073;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// CharacterCreator
struct  CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677  : public RuntimeObject
{
public:

public:
};


// HealthSystem
struct  HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8  : public RuntimeObject
{
public:

public:
};

struct HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields
{
public:
	// System.Int32 HealthSystem::HeroHealth
	int32_t ___HeroHealth_0;
	// System.Int32 HealthSystem::HordeHealth
	int32_t ___HordeHealth_1;
	// System.Boolean HealthSystem::GameOver
	bool ___GameOver_2;

public:
	inline static int32_t get_offset_of_HeroHealth_0() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields, ___HeroHealth_0)); }
	inline int32_t get_HeroHealth_0() const { return ___HeroHealth_0; }
	inline int32_t* get_address_of_HeroHealth_0() { return &___HeroHealth_0; }
	inline void set_HeroHealth_0(int32_t value)
	{
		___HeroHealth_0 = value;
	}

	inline static int32_t get_offset_of_HordeHealth_1() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields, ___HordeHealth_1)); }
	inline int32_t get_HordeHealth_1() const { return ___HordeHealth_1; }
	inline int32_t* get_address_of_HordeHealth_1() { return &___HordeHealth_1; }
	inline void set_HordeHealth_1(int32_t value)
	{
		___HordeHealth_1 = value;
	}

	inline static int32_t get_offset_of_GameOver_2() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields, ___GameOver_2)); }
	inline bool get_GameOver_2() const { return ___GameOver_2; }
	inline bool* get_address_of_GameOver_2() { return &___GameOver_2; }
	inline void set_GameOver_2(bool value)
	{
		___GameOver_2 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// HeroCreator
struct  HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1  : public CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677
{
public:

public:
};


// HordeCreator
struct  HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF  : public CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677
{
public:

public:
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
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
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// Character/FactionType
struct  FactionType_t6702CC5073F919E334D471ADE8845CF8BB6E62B8 
{
public:
	// System.Int32 Character/FactionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FactionType_t6702CC5073F919E334D471ADE8845CF8BB6E62B8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Character
struct  Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8  : public RuntimeObject
{
public:
	// Character/FactionType Character::Faction
	int32_t ___Faction_0;
	// System.String Character::Variant
	String_t* ___Variant_1;
	// System.Int32 Character::level
	int32_t ___level_2;
	// System.Int32 Character::damage
	int32_t ___damage_3;

public:
	inline static int32_t get_offset_of_Faction_0() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___Faction_0)); }
	inline int32_t get_Faction_0() const { return ___Faction_0; }
	inline int32_t* get_address_of_Faction_0() { return &___Faction_0; }
	inline void set_Faction_0(int32_t value)
	{
		___Faction_0 = value;
	}

	inline static int32_t get_offset_of_Variant_1() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___Variant_1)); }
	inline String_t* get_Variant_1() const { return ___Variant_1; }
	inline String_t** get_address_of_Variant_1() { return &___Variant_1; }
	inline void set_Variant_1(String_t* value)
	{
		___Variant_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Variant_1), (void*)value);
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_damage_3() { return static_cast<int32_t>(offsetof(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8, ___damage_3)); }
	inline int32_t get_damage_3() const { return ___damage_3; }
	inline int32_t* get_address_of_damage_3() { return &___damage_3; }
	inline void set_damage_3(int32_t value)
	{
		___damage_3 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// HeroOrcWarlord
struct  HeroOrcWarlord_t80E7AFC5A7E10DAEB4A65A756681DC29B3047D65  : public Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8
{
public:

public:
};


// HeroRanger
struct  HeroRanger_tF850856B294318B5AFDFA110EF50662C810C8BF2  : public Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8
{
public:

public:
};


// HeroTemplar
struct  HeroTemplar_t5918B68A385D3E467C86F553B078C58F74054190  : public Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8
{
public:

public:
};


// HordeOrcWarlord
struct  HordeOrcWarlord_t0A50C80A1D80E39D6DBE2BD587680E44C6F13F9C  : public Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8
{
public:

public:
};


// HordeRanger
struct  HordeRanger_t75A707B18E05F1A2D1F37F1F70790DF6462AF024  : public Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8
{
public:

public:
};


// HordeTemplar
struct  HordeTemplar_t00F8C272E6FA453A70856E17D3304BB62B7CEB97  : public Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// CharacterSimulator
struct  CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// CharacterCreator CharacterSimulator::heroSpawner
	CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * ___heroSpawner_4;
	// CharacterCreator CharacterSimulator::hordeSpawner
	CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * ___hordeSpawner_5;
	// Character CharacterSimulator::hero
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___hero_6;
	// Character CharacterSimulator::horde
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___horde_7;
	// UnityEngine.UI.Text CharacterSimulator::tx
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___tx_8;
	// UnityEngine.UI.Text CharacterSimulator::tx1
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___tx1_9;

public:
	inline static int32_t get_offset_of_heroSpawner_4() { return static_cast<int32_t>(offsetof(CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074, ___heroSpawner_4)); }
	inline CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * get_heroSpawner_4() const { return ___heroSpawner_4; }
	inline CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 ** get_address_of_heroSpawner_4() { return &___heroSpawner_4; }
	inline void set_heroSpawner_4(CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * value)
	{
		___heroSpawner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heroSpawner_4), (void*)value);
	}

	inline static int32_t get_offset_of_hordeSpawner_5() { return static_cast<int32_t>(offsetof(CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074, ___hordeSpawner_5)); }
	inline CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * get_hordeSpawner_5() const { return ___hordeSpawner_5; }
	inline CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 ** get_address_of_hordeSpawner_5() { return &___hordeSpawner_5; }
	inline void set_hordeSpawner_5(CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * value)
	{
		___hordeSpawner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hordeSpawner_5), (void*)value);
	}

	inline static int32_t get_offset_of_hero_6() { return static_cast<int32_t>(offsetof(CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074, ___hero_6)); }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * get_hero_6() const { return ___hero_6; }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 ** get_address_of_hero_6() { return &___hero_6; }
	inline void set_hero_6(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * value)
	{
		___hero_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hero_6), (void*)value);
	}

	inline static int32_t get_offset_of_horde_7() { return static_cast<int32_t>(offsetof(CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074, ___horde_7)); }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * get_horde_7() const { return ___horde_7; }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 ** get_address_of_horde_7() { return &___horde_7; }
	inline void set_horde_7(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * value)
	{
		___horde_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___horde_7), (void*)value);
	}

	inline static int32_t get_offset_of_tx_8() { return static_cast<int32_t>(offsetof(CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074, ___tx_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_tx_8() const { return ___tx_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_tx_8() { return &___tx_8; }
	inline void set_tx_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___tx_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx_8), (void*)value);
	}

	inline static int32_t get_offset_of_tx1_9() { return static_cast<int32_t>(offsetof(CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074, ___tx1_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_tx1_9() const { return ___tx1_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_tx1_9() { return &___tx1_9; }
	inline void set_tx1_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___tx1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx1_9), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void HeroCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroCreator__ctor_m968C245E7C0296434B274ADCB17076932395A15E (HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1 * __this, const RuntimeMethod* method);
// System.Void HordeCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HordeCreator__ctor_mFC85C0A3C20DA98E6255C60BB8E8C9EB535C6B94 (HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.String Character::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Character_Attack_mC09FB09BF2E5EAE2DEB521D00B0EBA107420D791 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void HeroTemplar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroTemplar__ctor_m092B574A09E363D3909E30D5BD0839444F9DB8DB (HeroTemplar_t5918B68A385D3E467C86F553B078C58F74054190 * __this, const RuntimeMethod* method);
// System.Void HeroRanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroRanger__ctor_mE4E62FBE553D22AF8330803BD9E83203C89C3DB6 (HeroRanger_tF850856B294318B5AFDFA110EF50662C810C8BF2 * __this, const RuntimeMethod* method);
// System.Void HeroOrcWarlord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroOrcWarlord__ctor_mAF7F921CE4CFFD820C4A2A6299FFE9468AAB5555 (HeroOrcWarlord_t80E7AFC5A7E10DAEB4A65A756681DC29B3047D65 * __this, const RuntimeMethod* method);
// System.Void CharacterCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterCreator__ctor_m1318466FD40ABDE65A619F476E4EF015F2D6C329 (CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * __this, const RuntimeMethod* method);
// System.Void Character::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method);
// System.Void HordeTemplar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HordeTemplar__ctor_mBE552BB373BC27D5EAF01B959919752D7A03A60D (HordeTemplar_t00F8C272E6FA453A70856E17D3304BB62B7CEB97 * __this, const RuntimeMethod* method);
// System.Void HordeRanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HordeRanger__ctor_m8D86D67D7FF78379DE3019A80AF0F23D3FE6B563 (HordeRanger_t75A707B18E05F1A2D1F37F1F70790DF6462AF024 * __this, const RuntimeMethod* method);
// System.Void HordeOrcWarlord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HordeOrcWarlord__ctor_mCB6D607B8509A5D21A2C974E832E31009CF4FEC6 (HordeOrcWarlord_t0A50C80A1D80E39D6DBE2BD587680E44C6F13F9C * __this, const RuntimeMethod* method);
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
// System.String Character::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Character_Attack_mC09FB09BF2E5EAE2DEB521D00B0EBA107420D791 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A42C6805C267E39467C6A8567619FDA05BDBA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052150A841250E4651DBAFFBE340DAAAD4F77F90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3002EA6856E592CE1B90D8B43F6EEA4B58E1CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CD937319DAF1501C3574C9C3C54938A3B23B46D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54021A1A89C150586C50E3D2EBE7EF09D8A02477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA870EE591B558F6E958A94E9B71461BE843FCD23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC203185A474AD3286CC1C6405E17D8A8BA55791);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC6B7F3ADA142F70FB05466ECAF85CD4D726F5A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string str = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (!HealthSystem.GameOver)
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		bool L_0 = ((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->get_GameOver_2();
		if (L_0)
		{
			goto IL_010c;
		}
	}
	{
		// str = "Level: " + this.level + " " + this.Variant + " attacks and deals " + this.damage + " damage.";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		int32_t* L_4 = __this->get_address_of_level_2();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_3;
		ArrayElementTypeCheck (L_6, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = __this->get_Variant_1();
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		ArrayElementTypeCheck (L_9, _stringLiteralA870EE591B558F6E958A94E9B71461BE843FCD23);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA870EE591B558F6E958A94E9B71461BE843FCD23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		int32_t* L_11 = __this->get_address_of_damage_3();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_10;
		ArrayElementTypeCheck (L_13, _stringLiteral54021A1A89C150586C50E3D2EBE7EF09D8A02477);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral54021A1A89C150586C50E3D2EBE7EF09D8A02477);
		String_t* L_14;
		L_14 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// if(this.Faction == FactionType.HERO)
		int32_t L_15 = __this->get_Faction_0();
		if (L_15)
		{
			goto IL_00b7;
		}
	}
	{
		// HealthSystem.HordeHealth -= damage;
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		int32_t L_16 = ((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->get_HordeHealth_1();
		int32_t L_17 = __this->get_damage_3();
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_HordeHealth_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)));
		// str = str + "\nEnemy took " + damage + " damage.\n Enemy health is now " + HealthSystem.HordeHealth;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		String_t* L_20 = V_0;
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_19;
		ArrayElementTypeCheck (L_21, _stringLiteral3002EA6856E592CE1B90D8B43F6EEA4B58E1CE72);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3002EA6856E592CE1B90D8B43F6EEA4B58E1CE72);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		int32_t* L_23 = __this->get_address_of_damage_3();
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_23, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_24);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_22;
		ArrayElementTypeCheck (L_25, _stringLiteral02A42C6805C267E39467C6A8567619FDA05BDBA8);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral02A42C6805C267E39467C6A8567619FDA05BDBA8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		String_t* L_27;
		L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->get_address_of_HordeHealth_1()), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_27);
		String_t* L_28;
		L_28 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_26, /*hidden argument*/NULL);
		V_0 = L_28;
		// }
		goto IL_010c;
	}

IL_00b7:
	{
		// else if(this.Faction == FactionType.HORDE)
		int32_t L_29 = __this->get_Faction_0();
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_010c;
		}
	}
	{
		// HealthSystem.HeroHealth -= damage;
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		int32_t L_30 = ((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->get_HeroHealth_0();
		int32_t L_31 = __this->get_damage_3();
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_HeroHealth_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)));
		// str = str + "\nYou took " + damage + " damage.\n Your health is now " + HealthSystem.HeroHealth;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		String_t* L_34 = V_0;
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_33;
		ArrayElementTypeCheck (L_35, _stringLiteralAC203185A474AD3286CC1C6405E17D8A8BA55791);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralAC203185A474AD3286CC1C6405E17D8A8BA55791);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		int32_t* L_37 = __this->get_address_of_damage_3();
		String_t* L_38;
		L_38 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_37, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_38);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_36;
		ArrayElementTypeCheck (L_39, _stringLiteral3CD937319DAF1501C3574C9C3C54938A3B23B46D);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3CD937319DAF1501C3574C9C3C54938A3B23B46D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		String_t* L_41;
		L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->get_address_of_HeroHealth_0()), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_41);
		String_t* L_42;
		L_42 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_40, /*hidden argument*/NULL);
		V_0 = L_42;
	}

IL_010c:
	{
		// if (HealthSystem.GameOver = true && HealthSystem.HeroHealth <= 0)
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		int32_t L_43 = ((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->get_HeroHealth_0();
		int32_t L_44 = ((((int32_t)((((int32_t)L_43) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_GameOver_2((bool)L_44);
		if (!L_44)
		{
			goto IL_0125;
		}
	}
	{
		// return "Hero is defeated! You lose!";
		return _stringLiteral052150A841250E4651DBAFFBE340DAAAD4F77F90;
	}

IL_0125:
	{
		// if (HealthSystem.GameOver = true && HealthSystem.HordeHealth <= 0)
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		int32_t L_45 = ((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->get_HordeHealth_1();
		int32_t L_46 = ((((int32_t)((((int32_t)L_45) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_GameOver_2((bool)L_46);
		if (!L_46)
		{
			goto IL_013e;
		}
	}
	{
		// return "Enemy is defeated! You win!";
		return _stringLiteralCC6B7F3ADA142F70FB05466ECAF85CD4D726F5A3;
	}

IL_013e:
	{
		// return str;
		String_t* L_47 = V_0;
		return L_47;
	}
}
// System.String Character::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Character_ToString_m076326008D1E733F66164158685D6FFE9D6940D1 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactionType_t6702CC5073F919E334D471ADE8845CF8BB6E62B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00F28EC044F0BCC9FF9CE0F4EB8D079BA9C166F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B8FB634499340F7BC1E8CE5231107019616485);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D280FAE4801239A477221C32A80D0389DAE63E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC8DC8072479243AE31CDA6162B426EFDD64E771);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE631370858903E57228145507E061CDDA37AD073);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "Character of " + this.Faction + " faction of type " + this.Variant + " and level " + this.level
		//     + " and deals " + this.damage + " damage";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralE631370858903E57228145507E061CDDA37AD073);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE631370858903E57228145507E061CDDA37AD073);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		int32_t* L_3 = __this->get_address_of_Faction_0();
		RuntimeObject * L_4 = Box(FactionType_t6702CC5073F919E334D471ADE8845CF8BB6E62B8_il2cpp_TypeInfo_var, L_3);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		*L_3 = *(int32_t*)UnBox(L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral3D280FAE4801239A477221C32A80D0389DAE63E4);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3D280FAE4801239A477221C32A80D0389DAE63E4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = __this->get_Variant_1();
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		ArrayElementTypeCheck (L_9, _stringLiteral02B8FB634499340F7BC1E8CE5231107019616485);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral02B8FB634499340F7BC1E8CE5231107019616485);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		int32_t* L_11 = __this->get_address_of_level_2();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_10;
		ArrayElementTypeCheck (L_13, _stringLiteralDC8DC8072479243AE31CDA6162B426EFDD64E771);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDC8DC8072479243AE31CDA6162B426EFDD64E771);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		int32_t* L_15 = __this->get_address_of_damage_3();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_15, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_14;
		ArrayElementTypeCheck (L_17, _stringLiteral00F28EC044F0BCC9FF9CE0F4EB8D079BA9C166F4);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral00F28EC044F0BCC9FF9CE0F4EB8D079BA9C166F4);
		String_t* L_18;
		L_18 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void Character::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2 (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * __this, const RuntimeMethod* method)
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
// Character CharacterCreator::CharacterMaker(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * CharacterCreator_CharacterMaker_mCE68F88011295C271DBA4B771601674F620CB2D2 (CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// character = CreateCharacter(name);
		String_t* L_0 = ___name0;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_1;
		L_1 = VirtFuncInvoker1< Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *, String_t* >::Invoke(4 /* Character CharacterCreator::CreateCharacter(System.String) */, __this, L_0);
		// return character;
		return L_1;
	}
}
// System.Void CharacterCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterCreator__ctor_m1318466FD40ABDE65A619F476E4EF015F2D6C329 (CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * __this, const RuntimeMethod* method)
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
// System.Void CharacterSimulator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSimulator_Start_m826D365D2E8C5D83412AE52DBA5C94CDABDFAF42 (CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5C7D4C17155B9730F71BA978C7FDAE798CCB52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADF8E8C02692DC49DAE5E2420981A5D3FADF0F51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heroSpawner = new HeroCreator();
		HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1 * L_0 = (HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1 *)il2cpp_codegen_object_new(HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1_il2cpp_TypeInfo_var);
		HeroCreator__ctor_m968C245E7C0296434B274ADCB17076932395A15E(L_0, /*hidden argument*/NULL);
		__this->set_heroSpawner_4(L_0);
		// hordeSpawner = new HordeCreator();
		HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF * L_1 = (HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF *)il2cpp_codegen_object_new(HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF_il2cpp_TypeInfo_var);
		HordeCreator__ctor_mFC85C0A3C20DA98E6255C60BB8E8C9EB535C6B94(L_1, /*hidden argument*/NULL);
		__this->set_hordeSpawner_5(L_1);
		// tx = GameObject.FindGameObjectWithTag("Text1").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral1A5C7D4C17155B9730F71BA978C7FDAE798CCB52, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_tx_8(L_3);
		// tx1 = GameObject.FindGameObjectWithTag("Text2").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralADF8E8C02692DC49DAE5E2420981A5D3FADF0F51, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_4, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_tx1_9(L_5);
		// }
		return;
	}
}
// System.Void CharacterSimulator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSimulator_Update_mC9A234A975E8B078186C9F00868FA2EA6542A1FE (CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral817C367713B801CF514A34332433A04E2E31A1DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// hero = heroSpawner.CreateCharacter("Templar");
		CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * L_1 = __this->get_heroSpawner_4();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_2;
		L_2 = VirtFuncInvoker1< Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *, String_t* >::Invoke(4 /* Character CharacterCreator::CreateCharacter(System.String) */, L_1, _stringLiteral817C367713B801CF514A34332433A04E2E31A1DF);
		__this->set_hero_6(L_2);
		// tx.text = hero.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_tx_8();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_4 = __this->get_hero_6();
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_0035:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2))
		bool L_6;
		L_6 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)50), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// hero = heroSpawner.CreateCharacter("Ranger");
		CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * L_7 = __this->get_heroSpawner_4();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_8;
		L_8 = VirtFuncInvoker1< Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *, String_t* >::Invoke(4 /* Character CharacterCreator::CreateCharacter(System.String) */, L_7, _stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B);
		__this->set_hero_6(L_8);
		// tx.text = hero.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_tx_8();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_10 = __this->get_hero_6();
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
	}

IL_006a:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3))
		bool L_12;
		L_12 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)51), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		// hero = heroSpawner.CreateCharacter("OrcWarlord");
		CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * L_13 = __this->get_heroSpawner_4();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_14;
		L_14 = VirtFuncInvoker1< Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *, String_t* >::Invoke(4 /* Character CharacterCreator::CreateCharacter(System.String) */, L_13, _stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24);
		__this->set_hero_6(L_14);
		// tx.text = hero.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_tx_8();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_16 = __this->get_hero_6();
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
	}

IL_009f:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha4))
		bool L_18;
		L_18 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)52), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00d4;
		}
	}
	{
		// horde = hordeSpawner.CreateCharacter("Templar");
		CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * L_19 = __this->get_hordeSpawner_5();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_20;
		L_20 = VirtFuncInvoker1< Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *, String_t* >::Invoke(4 /* Character CharacterCreator::CreateCharacter(System.String) */, L_19, _stringLiteral817C367713B801CF514A34332433A04E2E31A1DF);
		__this->set_horde_7(L_20);
		// tx1.text = horde.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_tx1_9();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_22 = __this->get_horde_7();
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_23);
	}

IL_00d4:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha5))
		bool L_24;
		L_24 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)53), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0109;
		}
	}
	{
		// horde = hordeSpawner.CreateCharacter("Ranger");
		CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * L_25 = __this->get_hordeSpawner_5();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_26;
		L_26 = VirtFuncInvoker1< Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *, String_t* >::Invoke(4 /* Character CharacterCreator::CreateCharacter(System.String) */, L_25, _stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B);
		__this->set_horde_7(L_26);
		// tx1.text = horde.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = __this->get_tx1_9();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_28 = __this->get_horde_7();
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_29);
	}

IL_0109:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha6))
		bool L_30;
		L_30 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)54), /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_013e;
		}
	}
	{
		// horde = hordeSpawner.CreateCharacter("OrcWarlord");
		CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * L_31 = __this->get_hordeSpawner_5();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_32;
		L_32 = VirtFuncInvoker1< Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *, String_t* >::Invoke(4 /* Character CharacterCreator::CreateCharacter(System.String) */, L_31, _stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24);
		__this->set_horde_7(L_32);
		// tx1.text = horde.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33 = __this->get_tx1_9();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_34 = __this->get_horde_7();
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_35);
	}

IL_013e:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha0))
		bool L_36;
		L_36 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)48), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0173;
		}
	}
	{
		// tx.text = hero.Attack();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = __this->get_tx_8();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_38 = __this->get_hero_6();
		String_t* L_39;
		L_39 = Character_Attack_mC09FB09BF2E5EAE2DEB521D00B0EBA107420D791(L_38, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_39);
		// tx1.text = horde.Attack();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_40 = __this->get_tx1_9();
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_41 = __this->get_horde_7();
		String_t* L_42;
		L_42 = Character_Attack_mC09FB09BF2E5EAE2DEB521D00B0EBA107420D791(L_41, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_42);
	}

IL_0173:
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_43;
		L_43 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01c1;
		}
	}
	{
		// HealthSystem.GameOver = false;
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_GameOver_2((bool)0);
		// HealthSystem.HeroHealth = 200;
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_HeroHealth_0(((int32_t)200));
		// HealthSystem.HordeHealth = 100;
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_HordeHealth_1(((int32_t)100));
		// hero = null;
		__this->set_hero_6((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)NULL);
		// horde = null;
		__this->set_horde_7((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)NULL);
		// tx.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_44 = __this->get_tx_8();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// tx1.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = __this->get_tx1_9();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_01c1:
	{
		// }
		return;
	}
}
// System.Void CharacterSimulator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSimulator__ctor_m4BE49C99F21BF6AADBEC00E42D1FB40CA548787E (CharacterSimulator_tBF12C151983C50C4CF4FF4766C10A63E8F5CE074 * __this, const RuntimeMethod* method)
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
// System.Void HealthSystem::gameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_gameOver_m0A203C6E3F6B20F3F96B3727B68C599A5068AE79 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(HeroHealth <= 0)
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->get_HeroHealth_0();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// GameOver = true;
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_GameOver_2((bool)1);
		// }
		return;
	}

IL_000f:
	{
		// else if(HordeHealth <= 0)
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		int32_t L_1 = ((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->get_HordeHealth_1();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// GameOver = true;
		IL2CPP_RUNTIME_CLASS_INIT(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_GameOver_2((bool)1);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void HealthSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem__cctor_m1596B11CBE15252AF2BA53E4435A9B08F69F12D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int HeroHealth = 200;
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_HeroHealth_0(((int32_t)200));
		// public static int HordeHealth = 100;
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_HordeHealth_1(((int32_t)100));
		// public static bool GameOver = false;
		((HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_StaticFields*)il2cpp_codegen_static_fields_for(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var))->set_GameOver_2((bool)0);
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
// Character HeroCreator::CreateCharacter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * HeroCreator_CreateCharacter_m4BDFAA5B73EBBDE467507B6E61CD163B7848D0CA (HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeroOrcWarlord_t80E7AFC5A7E10DAEB4A65A756681DC29B3047D65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeroRanger_tF850856B294318B5AFDFA110EF50662C810C8BF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeroTemplar_t5918B68A385D3E467C86F553B078C58F74054190_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral817C367713B801CF514A34332433A04E2E31A1DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B);
		s_Il2CppMethodInitialized = true;
	}
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * V_0 = NULL;
	{
		// Character hero = null;
		V_0 = (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)NULL;
		// if (name.Equals("Templar"))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, _stringLiteral817C367713B801CF514A34332433A04E2E31A1DF, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// hero = new HeroTemplar();
		HeroTemplar_t5918B68A385D3E467C86F553B078C58F74054190 * L_2 = (HeroTemplar_t5918B68A385D3E467C86F553B078C58F74054190 *)il2cpp_codegen_object_new(HeroTemplar_t5918B68A385D3E467C86F553B078C58F74054190_il2cpp_TypeInfo_var);
		HeroTemplar__ctor_m092B574A09E363D3909E30D5BD0839444F9DB8DB(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// }
		goto IL_003f;
	}

IL_0017:
	{
		// else if (name.Equals("Ranger"))
		String_t* L_3 = ___name0;
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_3, _stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// hero = new HeroRanger();
		HeroRanger_tF850856B294318B5AFDFA110EF50662C810C8BF2 * L_5 = (HeroRanger_tF850856B294318B5AFDFA110EF50662C810C8BF2 *)il2cpp_codegen_object_new(HeroRanger_tF850856B294318B5AFDFA110EF50662C810C8BF2_il2cpp_TypeInfo_var);
		HeroRanger__ctor_mE4E62FBE553D22AF8330803BD9E83203C89C3DB6(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		// }
		goto IL_003f;
	}

IL_002c:
	{
		// else if (name.Equals("OrcWarlord"))
		String_t* L_6 = ___name0;
		bool L_7;
		L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_6, _stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// hero = new HeroOrcWarlord();
		HeroOrcWarlord_t80E7AFC5A7E10DAEB4A65A756681DC29B3047D65 * L_8 = (HeroOrcWarlord_t80E7AFC5A7E10DAEB4A65A756681DC29B3047D65 *)il2cpp_codegen_object_new(HeroOrcWarlord_t80E7AFC5A7E10DAEB4A65A756681DC29B3047D65_il2cpp_TypeInfo_var);
		HeroOrcWarlord__ctor_mAF7F921CE4CFFD820C4A2A6299FFE9468AAB5555(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003f:
	{
		// return hero;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_9 = V_0;
		return L_9;
	}
}
// System.Void HeroCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroCreator__ctor_m968C245E7C0296434B274ADCB17076932395A15E (HeroCreator_tD4351BD196D29A54022DB64884B8945FA8CCA6A1 * __this, const RuntimeMethod* method)
{
	{
		CharacterCreator__ctor_m1318466FD40ABDE65A619F476E4EF015F2D6C329(__this, /*hidden argument*/NULL);
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
// System.Void HeroOrcWarlord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroOrcWarlord__ctor_mAF7F921CE4CFFD820C4A2A6299FFE9468AAB5555 (HeroOrcWarlord_t80E7AFC5A7E10DAEB4A65A756681DC29B3047D65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HeroOrcWarlord()
		Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2(__this, /*hidden argument*/NULL);
		// this.Faction = FactionType.HERO;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Faction_0(0);
		// this.Variant = "OrcWarlord";
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Variant_1(_stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24);
		// this.level = 20;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_level_2(((int32_t)20));
		// this.damage = 50;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_damage_3(((int32_t)50));
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
// System.Void HeroRanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroRanger__ctor_mE4E62FBE553D22AF8330803BD9E83203C89C3DB6 (HeroRanger_tF850856B294318B5AFDFA110EF50662C810C8BF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HeroRanger()
		Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2(__this, /*hidden argument*/NULL);
		// this.Faction = FactionType.HERO;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Faction_0(0);
		// this.Variant = "Ranger";
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Variant_1(_stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B);
		// this.level = 25;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_level_2(((int32_t)25));
		// this.damage = 60;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_damage_3(((int32_t)60));
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
// System.Void HeroTemplar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroTemplar__ctor_m092B574A09E363D3909E30D5BD0839444F9DB8DB (HeroTemplar_t5918B68A385D3E467C86F553B078C58F74054190 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral817C367713B801CF514A34332433A04E2E31A1DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HeroTemplar()
		Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2(__this, /*hidden argument*/NULL);
		// this.Faction = FactionType.HERO;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Faction_0(0);
		// this.Variant = "Templar";
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Variant_1(_stringLiteral817C367713B801CF514A34332433A04E2E31A1DF);
		// this.level = 15;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_level_2(((int32_t)15));
		// this.damage = 40;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_damage_3(((int32_t)40));
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
// Character HordeCreator::CreateCharacter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * HordeCreator_CreateCharacter_m4B1786F112AE3263824BF184A02AC04EDAE21BEB (HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HordeOrcWarlord_t0A50C80A1D80E39D6DBE2BD587680E44C6F13F9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HordeRanger_t75A707B18E05F1A2D1F37F1F70790DF6462AF024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HordeTemplar_t00F8C272E6FA453A70856E17D3304BB62B7CEB97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral817C367713B801CF514A34332433A04E2E31A1DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B);
		s_Il2CppMethodInitialized = true;
	}
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * V_0 = NULL;
	{
		// Character horde = null;
		V_0 = (Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)NULL;
		// if (name.Equals("Templar"))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, _stringLiteral817C367713B801CF514A34332433A04E2E31A1DF, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// horde = new HordeTemplar();
		HordeTemplar_t00F8C272E6FA453A70856E17D3304BB62B7CEB97 * L_2 = (HordeTemplar_t00F8C272E6FA453A70856E17D3304BB62B7CEB97 *)il2cpp_codegen_object_new(HordeTemplar_t00F8C272E6FA453A70856E17D3304BB62B7CEB97_il2cpp_TypeInfo_var);
		HordeTemplar__ctor_mBE552BB373BC27D5EAF01B959919752D7A03A60D(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// }
		goto IL_003f;
	}

IL_0017:
	{
		// else if (name.Equals("Ranger"))
		String_t* L_3 = ___name0;
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_3, _stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// horde = new HordeRanger();
		HordeRanger_t75A707B18E05F1A2D1F37F1F70790DF6462AF024 * L_5 = (HordeRanger_t75A707B18E05F1A2D1F37F1F70790DF6462AF024 *)il2cpp_codegen_object_new(HordeRanger_t75A707B18E05F1A2D1F37F1F70790DF6462AF024_il2cpp_TypeInfo_var);
		HordeRanger__ctor_m8D86D67D7FF78379DE3019A80AF0F23D3FE6B563(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		// }
		goto IL_003f;
	}

IL_002c:
	{
		// else if (name.Equals("OrcWarlord"))
		String_t* L_6 = ___name0;
		bool L_7;
		L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_6, _stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// horde = new HordeOrcWarlord();
		HordeOrcWarlord_t0A50C80A1D80E39D6DBE2BD587680E44C6F13F9C * L_8 = (HordeOrcWarlord_t0A50C80A1D80E39D6DBE2BD587680E44C6F13F9C *)il2cpp_codegen_object_new(HordeOrcWarlord_t0A50C80A1D80E39D6DBE2BD587680E44C6F13F9C_il2cpp_TypeInfo_var);
		HordeOrcWarlord__ctor_mCB6D607B8509A5D21A2C974E832E31009CF4FEC6(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003f:
	{
		// return horde;
		Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * L_9 = V_0;
		return L_9;
	}
}
// System.Void HordeCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HordeCreator__ctor_mFC85C0A3C20DA98E6255C60BB8E8C9EB535C6B94 (HordeCreator_t25EB835304A74CFBC206E5C212C4E9AC93ABB4CF * __this, const RuntimeMethod* method)
{
	{
		CharacterCreator__ctor_m1318466FD40ABDE65A619F476E4EF015F2D6C329(__this, /*hidden argument*/NULL);
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
// System.Void HordeOrcWarlord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HordeOrcWarlord__ctor_mCB6D607B8509A5D21A2C974E832E31009CF4FEC6 (HordeOrcWarlord_t0A50C80A1D80E39D6DBE2BD587680E44C6F13F9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HordeOrcWarlord()
		Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2(__this, /*hidden argument*/NULL);
		// this.Faction = FactionType.HORDE;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Faction_0(1);
		// this.Variant = "OrcWarlord";
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Variant_1(_stringLiteral0C7AAA068B686B91021B281116D1267246C7BB24);
		// this.level = 15;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_level_2(((int32_t)15));
		// this.damage = 35;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_damage_3(((int32_t)35));
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
// System.Void HordeRanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HordeRanger__ctor_m8D86D67D7FF78379DE3019A80AF0F23D3FE6B563 (HordeRanger_t75A707B18E05F1A2D1F37F1F70790DF6462AF024 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HordeRanger()
		Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2(__this, /*hidden argument*/NULL);
		// this.Faction = FactionType.HORDE;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Faction_0(1);
		// this.Variant = "Ranger";
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Variant_1(_stringLiteralBEEB46FE2C4E9F0F29C6D2B94A06AC245C28AB0B);
		// this.level = 20;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_level_2(((int32_t)20));
		// this.damage = 45;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_damage_3(((int32_t)45));
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
// System.Void HordeTemplar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HordeTemplar__ctor_mBE552BB373BC27D5EAF01B959919752D7A03A60D (HordeTemplar_t00F8C272E6FA453A70856E17D3304BB62B7CEB97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral817C367713B801CF514A34332433A04E2E31A1DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HordeTemplar()
		Character__ctor_mC9E775D49A9CE6DD699D3C59405E734464FDCDC2(__this, /*hidden argument*/NULL);
		// this.Faction = FactionType.HORDE;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Faction_0(1);
		// this.Variant = "Templar";
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_Variant_1(_stringLiteral817C367713B801CF514A34332433A04E2E31A1DF);
		// this.level = 10;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_level_2(((int32_t)10));
		// this.damage = 25;
		((Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 *)__this)->set_damage_3(((int32_t)25));
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
