/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_vec2_h
#define cglmc_vec2_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../cglm.h"

CGLM_EXPORT
void
glmc_vec2(float * __restrict v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_copy(const vec2 a, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_zero(vec2 v);

CGLM_EXPORT
void
glmc_vec2_one(vec2 v);

CGLM_EXPORT
float
glmc_vec2_dot(const vec2 a, const vec2 b);

CGLM_EXPORT
float
glmc_vec2_cross(const vec2 a, const vec2 b);

CGLM_EXPORT
float
glmc_vec2_norm2(vec2 v);

CGLM_EXPORT
float
glmc_vec2_norm(vec2 v);

CGLM_EXPORT
void
glmc_vec2_add(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_adds(const vec2 v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_sub(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_subs(const vec2 v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_mul(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_scale(const vec2 v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_scale_as(const vec2 v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_div(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_divs(const vec2 v, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_addadd(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_subadd(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_muladd(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_muladds(const vec2 a, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_maxadd(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_minadd(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_subsub(vec2 a, vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_addsub(vec2 a, vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_mulsub(vec2 a, vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_mulsubs(vec2 a, float s, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_maxsub(vec2 a, vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_minsub(vec2 a, vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_negate_to(const vec2 v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_negate(vec2 v);

CGLM_EXPORT
void
glmc_vec2_normalize(vec2 v);

CGLM_EXPORT
void
glmc_vec2_normalize_to(const vec2 v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_rotate(const vec2 v, float angle, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_center(vec2 a, vec2 b, vec2 dest);

CGLM_EXPORT
float
glmc_vec2_distance2(const vec2 a, const vec2 b);

CGLM_EXPORT
float
glmc_vec2_distance(const vec2 a, const vec2 b);

CGLM_EXPORT
void
glmc_vec2_maxv(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_minv(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_clamp(vec2 v, float minval, float maxval);

CGLM_EXPORT
void
glmc_vec2_abs(const vec2 v, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_lerp(const vec2 from, const vec2 to, float t, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_complex_mul(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_complex_div(const vec2 a, const vec2 b, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_complex_conjugate(const vec2 a, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_make(const float * __restrict src, vec2 dest);

CGLM_EXPORT
void
glmc_vec2_reflect(vec2 v, vec2 n, vec2 dest);

CGLM_EXPORT
bool
glmc_vec2_refract(vec2 v, vec2 n, float eta, vec2 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_vec2_h */
