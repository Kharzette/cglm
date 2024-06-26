/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_affine_h
#define cglmc_affine_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../cglm.h"

CGLM_EXPORT
void
glmc_translate_make(mat4 m, const vec3 v);

CGLM_EXPORT
void
glmc_translate_to(const mat4 m, const vec3 v, mat4 dest);

CGLM_EXPORT
void
glmc_translate(mat4 m, const vec3 v);

CGLM_EXPORT
void
glmc_translate_x(mat4 m, float to);

CGLM_EXPORT
void
glmc_translate_y(mat4 m, float to);

CGLM_EXPORT
void
glmc_translate_z(mat4 m, float to);

CGLM_EXPORT
void
glmc_scale_make(mat4 m, const vec3 v);

CGLM_EXPORT
void
glmc_scale_to(const mat4 m, const vec3 v, mat4 dest);

CGLM_EXPORT
void
glmc_scale(mat4 m, const vec3 v);

CGLM_EXPORT
void
glmc_scale_uni(mat4 m, float s);

CGLM_EXPORT
void
glmc_rotate_x(const mat4 m, float rad, mat4 dest);

CGLM_EXPORT
void
glmc_rotate_y(const mat4 m, float rad, mat4 dest);

CGLM_EXPORT
void
glmc_rotate_z(const mat4 m, float rad, mat4 dest);

CGLM_EXPORT
void
glmc_rotate_make(mat4 m, float angle, const vec3 axis);

CGLM_EXPORT
void
glmc_rotate(mat4 m, float angle, const vec3 axis);

CGLM_EXPORT
void
glmc_rotate_at(mat4 m, const vec3 pivot, float angle, const vec3 axis);

CGLM_EXPORT
void
glmc_rotate_atm(mat4 m, const vec3 pivot, float angle, const vec3 axis);

CGLM_EXPORT
void
glmc_spin(mat4 m, float angle, const vec3 axis);

CGLM_EXPORT
void
glmc_decompose_scalev(const mat4 m, vec3 s);

CGLM_EXPORT
bool
glmc_uniscaled(const mat4 m);

CGLM_EXPORT
void
glmc_decompose_rs(const mat4 m, mat4 r, vec3 s);

CGLM_EXPORT
void
glmc_decompose(const mat4 m, vec4 t, mat4 r, vec3 s);

/* affine-post */

CGLM_EXPORT
void
glmc_translated(mat4 m, const vec3 v);

CGLM_EXPORT
void
glmc_translated_to(const mat4 m, const vec3 v, mat4 dest);

CGLM_EXPORT
void
glmc_translated_x(mat4 m, float x);

CGLM_EXPORT
void
glmc_translated_y(mat4 m, float y);

CGLM_EXPORT
void
glmc_translated_z(mat4 m, float z);

CGLM_EXPORT
void
glmc_rotated_x(const mat4 m, float angle, mat4 dest);

CGLM_EXPORT
void
glmc_rotated_y(const mat4 m, float angle, mat4 dest);

CGLM_EXPORT
void
glmc_rotated_z(const mat4 m, float angle, mat4 dest);

CGLM_EXPORT
void
glmc_rotated(mat4 m, float angle, const vec3 axis);

CGLM_EXPORT
void
glmc_rotated_at(mat4 m, const vec3 pivot, float angle, const vec3 axis);

CGLM_EXPORT
void
glmc_spinned(mat4 m, float angle, const vec3 axis);

/* affine-mat */

CGLM_EXPORT
void
glmc_mul(const mat4 m1, const mat4 m2, mat4 dest);

CGLM_EXPORT
void
glmc_mul_rot(const mat4 m1, const mat4 m2, mat4 dest);

CGLM_EXPORT
void
glmc_inv_tr(mat4 mat);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_affine_h */
