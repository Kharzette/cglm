/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

/*!
 * @brief SIMD like functions
 */

/*
 Functions:
   CGLM_INLINE vec4s glms_vec4_broadcast(float val);
   CGLM_INLINE vec4s glms_vec4_fill(float val);
   CGLM_INLINE bool  glms_vec4_eq(vec4s v, float val);
   CGLM_INLINE bool  glms_vec4_eq_eps(vec4s v, float val);
   CGLM_INLINE bool  glms_vec4_eq_all(vec4s v);
   CGLM_INLINE bool  glms_vec4_eqv(vec4s a, vec4s b);
   CGLM_INLINE bool  glms_vec4_eqv_eps(vec4s a, vec4s b);
   CGLM_INLINE float glms_vec4_max(vec4s v);
   CGLM_INLINE float glms_vec4_min(vec4s v);
   CGLM_INLINE bool  glms_vec4_isnan(vec4s v);
   CGLM_INLINE bool  glms_vec4_isinf(vec4s v);
   CGLM_INLINE bool  glms_vec4_isvalid(vec4s v);
   CGLM_INLINE vec4s glms_vec4_sign(vec4s v);
   CGLM_INLINE vec4s glms_vec4_abs(vec4s v);
   CGLM_INLINE vec4s glms_vec4_fract(vec4s v);
   CGLM_INLINE float glms_vec4_hadd(vec4s v);
   CGLM_INLINE vec4s glms_vec4_sqrt(vec4s v);
 */

#ifndef cglms_vec4s_ext_h
#define cglms_vec4s_ext_h

#include "../common.h"
#include "../types-struct.h"
#include "../util.h"
#include "../vec4-ext.h"

/* api definition */
#define glms_vec4_(NAME) CGLM_STRUCTAPI(vec4, NAME)

/*!
 * @brief fill a vector with specified value
 *
 * @param val value
 * @returns   dest
 */
CGLM_INLINE
vec4s
glms_vec4_(broadcast)(float val) {
  vec4s r;
  glm_vec4_broadcast(val, r.raw);
  return r;
}

/*!
 * @brief fill a vector with specified value
 *
 * @param val value
 * @returns   dest
 */
CGLM_INLINE
vec4s
glms_vec4_(fill)(float val) {
  vec4s r;
  glm_vec4_fill(r.raw, val);
  return r;
}

/*!
 * @brief check if vector is equal to value (without epsilon)
 *
 * @param v   vector
 * @param val value
 */
CGLM_INLINE
bool
glms_vec4_(eq)(const vec4s v, float val) {
  return glm_vec4_eq(v.raw, val);
}

/*!
 * @brief check if vector is equal to value (with epsilon)
 *
 * @param v   vector
 * @param val value
 */
CGLM_INLINE
bool
glms_vec4_(eq_eps)(const vec4s v, float val) {
  return glm_vec4_eq_eps(v.raw, val);
}

/*!
 * @brief check if vector members are equal (without epsilon)
 *
 * @param v   vector
 */
CGLM_INLINE
bool
glms_vec4_(eq_all)(const vec4s v) {
  return glm_vec4_eq_all(v.raw);
}

/*!
 * @brief check if vector is equal to another (without epsilon)
 *
 * @param a vector
 * @param b vector
 */
CGLM_INLINE
bool
glms_vec4_(eqv)(const vec4s a, const vec4s b) {
  return glm_vec4_eqv(a.raw, b.raw);
}

/*!
 * @brief check if vector is equal to another (with epsilon)
 *
 * @param a vector
 * @param b vector
 */
CGLM_INLINE
bool
glms_vec4_(eqv_eps)(const vec4s a, const vec4s b) {
  return glm_vec4_eqv_eps(a.raw, b.raw);
}

/*!
 * @brief max value of vector
 *
 * @param v vector
 */
CGLM_INLINE
float
glms_vec4_(max)(const vec4s v) {
  return glm_vec4_max(v.raw);
}

/*!
 * @brief min value of vector
 *
 * @param v vector
 */
CGLM_INLINE
float
glms_vec4_(min)(const vec4s v) {
  return glm_vec4_min(v.raw);
}

/*!
 * @brief check if one of items is NaN (not a number)
 *        you should only use this in DEBUG mode or very critical asserts
 *
 * @param[in] v vector
 */
CGLM_INLINE
bool
glms_vec4_(isnan)(const vec4s v) {
  return glm_vec4_isnan(v.raw);
}

/*!
 * @brief check if one of items is INFINITY
 *        you should only use this in DEBUG mode or very critical asserts
 *
 * @param[in] v vector
 */
CGLM_INLINE
bool
glms_vec4_(isinf)(const vec4s v) {
  return glm_vec4_isinf(v.raw);
}

/*!
 * @brief check if all items are valid number
 *        you should only use this in DEBUG mode or very critical asserts
 *
 * @param[in] v vector
 */
CGLM_INLINE
bool
glms_vec4_(isvalid)(const vec4s v) {
  return glm_vec4_isvalid(v.raw);
}

/*!
 * @brief get sign of 32 bit float as +1, -1, 0
 *
 * Important: It returns 0 for zero/NaN input
 *
 * @param   v   vector
 * @returns     sign vector
 */
CGLM_INLINE
vec4s
glms_vec4_(sign)(const vec4s v) {
  vec4s r;
  glm_vec4_sign(v.raw, r.raw);
  return r;
}

/*!
 * @brief absolute value of each vector item
 *
 * @param[in]  v    vector
 * @returns         destination vector
 */
CGLM_INLINE
vec4s
glms_vec4_(abs)(const vec4s v) {
  vec4s r;
  glm_vec4_abs(v.raw, r.raw);
  return r;
}

/*!
 * @brief fractional part of each vector item
 *
 * @param[in]  v    vector
 * @returns          dest destination vector
 */
CGLM_INLINE
vec4s
glms_vec4_(fract)(const vec4s v) {
  vec4s r;
  glm_vec4_fract(v.raw, r.raw);
  return r;
}

/*!
 * @brief vector reduction by summation
 * @warning could overflow
 *
 * @param[in]  v    vector
 * @return     sum of all vector's elements
 */
CGLM_INLINE
float
glms_vec4_(hadd)(const vec4s v) {
  return glm_vec4_hadd(v.raw);
}

/*!
 * @brief square root of each vector item
 *
 * @param[in]  v    vector
 * @returns         destination vector
 */
CGLM_INLINE
vec4s
glms_vec4_(sqrt)(const vec4s v) {
  vec4s r;
  glm_vec4_sqrt(v.raw, r.raw);
  return r;
}

#endif /* cglms_vec4s_ext_h */
