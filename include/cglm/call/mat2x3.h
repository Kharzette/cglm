/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_mat2x3_h
#define cglmc_mat2x3_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../cglm.h"

CGLM_EXPORT
void
glmc_mat2x3_copy(const mat2x3 mat, mat2x3 dest);

CGLM_EXPORT
void
glmc_mat2x3_zero(mat2x3 mat);

CGLM_EXPORT
void
glmc_mat2x3_make(const float * __restrict src, mat2x3 dest);

CGLM_EXPORT
void
glmc_mat2x3_mul(const mat2x3 m1, const mat3x2 m2, mat2 dest);

CGLM_EXPORT
void
glmc_mat2x3_mulv(const mat2x3 m, const vec3 v, vec2 dest);

CGLM_EXPORT
void
glmc_mat2x3_transpose(const mat2x3 m, mat3x2 dest);

CGLM_EXPORT
void
glmc_mat2x3_scale(mat2x3 m, float s);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_mat2x3_h */
