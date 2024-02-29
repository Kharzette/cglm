/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglmc_project_no_h
#define cglmc_project_no_h
#ifdef __cplusplus
extern "C" {
#endif

#include "../../cglm.h"

CGLM_EXPORT
void
glmc_unprojecti_no(const vec3 pos, const mat4 invMat, const vec4 vp, vec3 dest);

CGLM_EXPORT
void
glmc_project_no(const vec3 pos, const mat4 m, const vec4 vp, vec3 dest);

CGLM_EXPORT
float
glmc_project_z_no(const vec3 pos, const mat4 m);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_project_no_h */
