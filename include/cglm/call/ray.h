/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_ray_h
#define cglmc_ray_h
#ifdef __cplusplus
extern "C" {
#endif
#include "../cglm.h"

CGLM_EXPORT
bool
glmc_ray_triangle(const vec3   origin,
                  const vec3   direction,
                  const vec3   v0,
                  const vec3   v1,
                  const vec3   v2,
                  float        *d);
    
#ifdef __cplusplus
}
#endif
#endif /* cglmc_ray_h */
