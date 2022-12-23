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
glmc_vec2(float * __restrict v, vec2 dest) {
  glm_vec2(v, dest);
}

CGLM_EXPORT
void
glmc_vec2_copy(const vec2 a, vec2 dest) {
  glm_vec2_copy(a, dest);
}

CGLM_EXPORT
void
glmc_vec2_zero(vec2 v) {
  glm_vec2_zero(v);
}

CGLM_EXPORT
void
glmc_vec2_one(vec2 v) {
  glm_vec2_one(v);
}

CGLM_EXPORT
float
glmc_vec2_dot(const vec2 a, const vec2 b) {
  return glm_vec2_dot(a, b);
}

CGLM_EXPORT
float
glmc_vec2_cross(const vec2 a, const vec2 b) {
  return glm_vec2_cross(a, b);
}

CGLM_EXPORT
float
glmc_vec2_norm2(vec2 v) {
  return glm_vec2_norm2(v);
}

CGLM_EXPORT
float
glmc_vec2_norm(vec2 v) {
  return glm_vec2_norm(v);
}

CGLM_EXPORT
void
glmc_vec2_add(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_add(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_adds(const vec2 v, float s, vec2 dest) {
  glm_vec2_adds(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_sub(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_sub(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_subs(const vec2 v, float s, vec2 dest) {
  glm_vec2_subs(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_mul(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_mul(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_scale(const vec2 v, float s, vec2 dest) {
  glm_vec2_scale(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_scale_as(const vec2 v, float s, vec2 dest) {
  glm_vec2_scale_as(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_div(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_div(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_divs(const vec2 v, float s, vec2 dest) {
  glm_vec2_divs(v, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_addadd(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_addadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_subadd(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_subadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_muladd(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_muladd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_muladds(const vec2 a, float s, vec2 dest) {
  glm_vec2_muladds(a, s, dest);
}

CGLM_EXPORT
void
glmc_vec2_maxadd(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_maxadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_minadd(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_minadd(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_negate_to(const vec2 v, vec2 dest) {
  glm_vec2_negate_to(v, dest);
}

CGLM_EXPORT
void
glmc_vec2_negate(vec2 v) {
  glm_vec2_negate(v);
}

CGLM_EXPORT
void
glmc_vec2_normalize(vec2 v) {
  glm_vec2_normalize(v);
}

CGLM_EXPORT
void
glmc_vec2_normalize_to(const vec2 v, vec2 dest) {
  glm_vec2_normalize_to(v, dest);
}

CGLM_EXPORT
void
glmc_vec2_rotate(const vec2 v, float angle, vec2 dest) {
  glm_vec2_rotate(v, angle, dest);
}

CGLM_EXPORT
float
glmc_vec2_distance2(const vec2 a, const vec2 b) {
  return glm_vec2_distance2(a, b);
}

CGLM_EXPORT
float
glmc_vec2_distance(const vec2 a, const vec2 b) {
  return glm_vec2_distance(a, b);
}

CGLM_EXPORT
void
glmc_vec2_maxv(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_maxv(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_minv(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_minv(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_clamp(vec2 v, float minval, float maxval) {
  glm_vec2_clamp(v, minval, maxval);
}

CGLM_EXPORT
void
glmc_vec2_abs(const vec2 v, vec2 dest) {
  glm_vec2_abs(v, dest);
}

CGLM_EXPORT
void
glmc_vec2_lerp(const vec2 from, const vec2 to, float t, vec2 dest) {
  glm_vec2_lerp(from, to, t, dest);
}

CGLM_EXPORT
void
glmc_vec2_complex_mul(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_complex_mul(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_complex_div(const vec2 a, const vec2 b, vec2 dest) {
  glm_vec2_complex_div(a, b, dest);
}

CGLM_EXPORT
void
glmc_vec2_complex_conjugate(const vec2 a, vec2 dest) {
  glm_vec2_complex_conjugate(a, dest);
}
