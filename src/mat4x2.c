/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#include "../include/cglm/cglm.h"
#include "../include/cglm/call.h"

CGLM_EXPORT
void
glmc_mat4x2_copy(const mat4x2 mat, mat4x2 dest) {
  glm_mat4x2_copy(mat, dest);
}

CGLM_EXPORT
void
glmc_mat4x2_zero(mat4x2 mat) {
  glm_mat4x2_zero(mat);
}

CGLM_EXPORT
void
glmc_mat4x2_make(const float * __restrict src, mat4x2 dest) {
  glm_mat4x2_make(src, dest);
}

CGLM_EXPORT
void
glmc_mat4x2_mul(const mat4x2 m1, const mat2x4 m2, mat4 dest) {
  glm_mat4x2_mul(m1, m2, dest);
}

CGLM_EXPORT
void
glmc_mat4x2_mulv(const mat4x2 m, const vec2 v, vec4 dest) {
  glm_mat4x2_mulv(m, v, dest);
}

CGLM_EXPORT
void
glmc_mat4x2_transpose(const mat4x2 m, mat2x4 dest) {
  glm_mat4x2_transpose(m, dest);
}

CGLM_EXPORT
void
glmc_mat4x2_scale(mat4x2 m, float s) {
  glm_mat4x2_scale(m, s);
}
