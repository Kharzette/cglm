#include "../include/cglm/cglm.h"
#include "../include/cglm/call.h"

CGLM_EXPORT
bool
glmc_ray_triangle(const vec3   origin,
                  const vec3   direction,
                  const vec3   v0,
                  const vec3   v1,
                  const vec3   v2,
                  float        *d) {
    return glm_ray_triangle(origin, direction, v0, v1, v2, d);
}
