/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_aabb2d_h
#define cglmc_aabb2d_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../cglm.h"

/* DEPRECATED! use _diag */
#define glmc_aabb2d_size(aabb) glmc_aabb2d_diag(aabb)

CGLM_EXPORT
void
glmc_aabb2d_zero(vec2 aabb[2]);

CGLM_EXPORT
void
glmc_aabb2d_copy(const vec2 aabb[2], vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_transform(const vec2 aabb[2], mat3 m, vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_merge(const vec2 aabb1[2], vec2 aabb2[2], vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_crop(const vec2 aabb[2], vec2 cropAabb[2], vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_crop_until(const vec2 aabb[2],
                       const vec2 cropAabb[2],
                       const vec2 clampAabb[2],
                       vec2 dest[2]);

CGLM_EXPORT
void
glmc_aabb2d_invalidate(vec2 aabb[2]);

CGLM_EXPORT
bool
glmc_aabb2d_isvalid(const vec2 aabb[2]);

CGLM_EXPORT
float
glmc_aabb2d_diag(const vec2 aabb[2]);

CGLM_EXPORT
void
glmc_aabb2d_sizev(const vec2 aabb[2], vec2 dest);

CGLM_EXPORT
float
glmc_aabb2d_radius(const vec2 aabb[2]);

CGLM_EXPORT
void
glmc_aabb2d_center(const vec2 aabb[2], vec2 dest);

CGLM_EXPORT
bool
glmc_aabb2d_aabb(const vec2 aabb[2], const vec2 other[2]);

CGLM_EXPORT
bool
glmc_aabb2d_point(const vec2 aabb[2], const vec2 point);

CGLM_EXPORT
bool
glmc_aabb2d_contains(const vec2 aabb[2], const vec2 other[2]);

CGLM_EXPORT
bool
glmc_aabb2d_circle(const vec2 aabb[2], const vec3 s);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_aabb2d_h */


