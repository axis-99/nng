// Lean compiler output
// Module: NngSolutions.MyNat.Definitions
// Imports: public import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_zero_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_zero_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_succ_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_succ_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_NngSolutions_MyNat_instReprMyNat_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "MyNat.MyNat.zero"};
static const lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr___closed__0 = (const lean_object*)&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__0_value;
static const lean_ctor_object lp_NngSolutions_MyNat_instReprMyNat_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__0_value)}};
static const lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr___closed__1 = (const lean_object*)&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__1_value;
static lean_once_cell_t lp_NngSolutions_MyNat_instReprMyNat_repr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr___closed__2;
static lean_once_cell_t lp_NngSolutions_MyNat_instReprMyNat_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr___closed__3;
static const lean_string_object lp_NngSolutions_MyNat_instReprMyNat_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "MyNat.MyNat.succ"};
static const lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr___closed__4 = (const lean_object*)&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__4_value;
static const lean_ctor_object lp_NngSolutions_MyNat_instReprMyNat_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__4_value)}};
static const lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr___closed__5 = (const lean_object*)&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__5_value;
static const lean_ctor_object lp_NngSolutions_MyNat_instReprMyNat_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr___closed__6 = (const lean_object*)&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__6_value;
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_NngSolutions_MyNat_instReprMyNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_NngSolutions_MyNat_instReprMyNat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_NngSolutions_MyNat_instReprMyNat___closed__0 = (const lean_object*)&lp_NngSolutions_MyNat_instReprMyNat___closed__0_value;
LEAN_EXPORT const lean_object* lp_NngSolutions_MyNat_instReprMyNat = (const lean_object*)&lp_NngSolutions_MyNat_instReprMyNat___closed__0_value;
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat;
static const lean_ctor_object lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat__1___closed__0 = (const lean_object*)&lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat__1___closed__0_value;
LEAN_EXPORT const lean_object* lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat__1 = (const lean_object*)&lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat__1___closed__0_value;
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_add___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_NngSolutions_MyNat_instAddMyNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_NngSolutions_MyNat_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_NngSolutions_MyNat_instAddMyNat___closed__0 = (const lean_object*)&lp_NngSolutions_MyNat_instAddMyNat___closed__0_value;
LEAN_EXPORT const lean_object* lp_NngSolutions_MyNat_instAddMyNat = (const lean_object*)&lp_NngSolutions_MyNat_instAddMyNat___closed__0_value;
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_mul___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_NngSolutions_MyNat_instMulMyNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_NngSolutions_MyNat_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_NngSolutions_MyNat_instMulMyNat___closed__0 = (const lean_object*)&lp_NngSolutions_MyNat_instMulMyNat___closed__0_value;
LEAN_EXPORT const lean_object* lp_NngSolutions_MyNat_instMulMyNat = (const lean_object*)&lp_NngSolutions_MyNat_instMulMyNat___closed__0_value;
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lp_NngSolutions_MyNat_MyNat_ctorIdx(v_x_4_);
lean_dec(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
return v_k_7_;
}
else
{
lean_object* v_a_8_; lean_object* v___x_9_; 
v_a_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_a_8_);
lean_dec_ref(v_t_6_);
v___x_9_ = lean_apply_1(v_k_7_, v_a_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lp_NngSolutions_MyNat_MyNat_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lp_NngSolutions_MyNat_MyNat_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_zero_elim___redArg(lean_object* v_t_22_, lean_object* v_zero_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lp_NngSolutions_MyNat_MyNat_ctorElim___redArg(v_t_22_, v_zero_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_zero_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_zero_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lp_NngSolutions_MyNat_MyNat_ctorElim___redArg(v_t_26_, v_zero_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_succ_elim___redArg(lean_object* v_t_30_, lean_object* v_succ_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lp_NngSolutions_MyNat_MyNat_ctorElim___redArg(v_t_30_, v_succ_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_MyNat_succ_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_succ_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lp_NngSolutions_MyNat_MyNat_ctorElim___redArg(v_t_34_, v_succ_36_);
return v___x_37_;
}
}
static lean_object* _init_lp_NngSolutions_MyNat_instReprMyNat_repr___closed__2(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(2u);
v___x_42_ = lean_nat_to_int(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_lp_NngSolutions_MyNat_instReprMyNat_repr___closed__3(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(1u);
v___x_44_ = lean_nat_to_int(v___x_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr(lean_object* v_x_51_, lean_object* v_prec_52_){
_start:
{
lean_object* v___y_54_; 
if (lean_obj_tag(v_x_51_) == 0)
{
lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_60_ = lean_unsigned_to_nat(1024u);
v___x_61_ = lean_nat_dec_le(v___x_60_, v_prec_52_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; 
v___x_62_ = lean_obj_once(&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__2, &lp_NngSolutions_MyNat_instReprMyNat_repr___closed__2_once, _init_lp_NngSolutions_MyNat_instReprMyNat_repr___closed__2);
v___y_54_ = v___x_62_;
goto v___jp_53_;
}
else
{
lean_object* v___x_63_; 
v___x_63_ = lean_obj_once(&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__3, &lp_NngSolutions_MyNat_instReprMyNat_repr___closed__3_once, _init_lp_NngSolutions_MyNat_instReprMyNat_repr___closed__3);
v___y_54_ = v___x_63_;
goto v___jp_53_;
}
}
else
{
lean_object* v_a_64_; lean_object* v___x_65_; lean_object* v___y_67_; uint8_t v___x_75_; 
v_a_64_ = lean_ctor_get(v_x_51_, 0);
v___x_65_ = lean_unsigned_to_nat(1024u);
v___x_75_ = lean_nat_dec_le(v___x_65_, v_prec_52_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__2, &lp_NngSolutions_MyNat_instReprMyNat_repr___closed__2_once, _init_lp_NngSolutions_MyNat_instReprMyNat_repr___closed__2);
v___y_67_ = v___x_76_;
goto v___jp_66_;
}
else
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&lp_NngSolutions_MyNat_instReprMyNat_repr___closed__3, &lp_NngSolutions_MyNat_instReprMyNat_repr___closed__3_once, _init_lp_NngSolutions_MyNat_instReprMyNat_repr___closed__3);
v___y_67_ = v___x_77_;
goto v___jp_66_;
}
v___jp_66_:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_68_ = ((lean_object*)(lp_NngSolutions_MyNat_instReprMyNat_repr___closed__6));
v___x_69_ = lp_NngSolutions_MyNat_instReprMyNat_repr(v_a_64_, v___x_65_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
lean_inc(v___y_67_);
v___x_71_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_71_, 0, v___y_67_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = 0;
v___x_73_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set_uint8(v___x_73_, sizeof(void*)*1, v___x_72_);
v___x_74_ = l_Repr_addAppParen(v___x_73_, v_prec_52_);
return v___x_74_;
}
}
v___jp_53_:
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_55_ = ((lean_object*)(lp_NngSolutions_MyNat_instReprMyNat_repr___closed__1));
lean_inc(v___y_54_);
v___x_56_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_56_, 0, v___y_54_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = 0;
v___x_58_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set_uint8(v___x_58_, sizeof(void*)*1, v___x_57_);
v___x_59_ = l_Repr_addAppParen(v___x_58_, v_prec_52_);
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_instReprMyNat_repr___boxed(lean_object* v_x_78_, lean_object* v_prec_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = lp_NngSolutions_MyNat_instReprMyNat_repr(v_x_78_, v_prec_79_);
lean_dec(v_prec_79_);
lean_dec(v_x_78_);
return v_res_80_;
}
}
static lean_object* _init_lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_box(0);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_add(lean_object* v_x_87_, lean_object* v_x_88_){
_start:
{
if (lean_obj_tag(v_x_88_) == 0)
{
lean_inc(v_x_87_);
return v_x_87_;
}
else
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_97_; 
v_a_89_ = lean_ctor_get(v_x_88_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v_x_88_);
if (v_isSharedCheck_97_ == 0)
{
v___x_91_ = v_x_88_;
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v_x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_93_ = lp_NngSolutions_MyNat_add(v_x_87_, v_a_89_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_93_);
v___x_95_ = v___x_91_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_add___boxed(lean_object* v_x_98_, lean_object* v_x_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = lp_NngSolutions_MyNat_add(v_x_98_, v_x_99_);
lean_dec(v_x_98_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_mul(lean_object* v_x_103_, lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
lean_dec(v_x_103_);
return v_x_104_;
}
else
{
lean_object* v_a_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_a_105_ = lean_ctor_get(v_x_104_, 0);
lean_inc(v_x_103_);
v___x_106_ = lp_NngSolutions_MyNat_mul(v_x_103_, v_a_105_);
v___x_107_ = lp_NngSolutions_MyNat_add(v___x_106_, v_x_103_);
lean_dec(v___x_106_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* lp_NngSolutions_MyNat_mul___boxed(lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = lp_NngSolutions_MyNat_mul(v_x_108_, v_x_109_);
lean_dec(v_x_109_);
return v_res_110_;
}
}
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_NngSolutions_NngSolutions_MyNat_Definitions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat = _init_lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat();
lean_mark_persistent(lp_NngSolutions_MyNat_instOfNatMyNatOfNatNat);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
