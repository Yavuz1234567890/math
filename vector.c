#include "vector.h"

vec4_t create_vec4(float x, float y, float z, float w)
{
    vec4_t vector;
    vector.x = x;
    vector.y = y;
    vector.z = z;
    vector.w = w;
    return vector;
}

void set_vec4(vec4_t vector, float x, float y, float z, float w)
{
    vector.x = x;
    vector.y = y;
    vector.z = z;
    vector.w = w;
}

float get_vec4_x(vec4_t vector)
{
    return vector.x;
}

float get_vec4_y(vec4_t vector)
{
    return vector.y;
}

float get_vec4_z(vec4_t vector)
{
    return vector.z;
}

float get_vec4_w(vec4_t vector)
{
    return vector.w;
}

float* get_vec4_pointer(vec4_t vector)
{
    return &vector.x;
}

vec4_t mul_vec4(vec4_t dst, vec4_t src)
{
    vec4_t vector;
    vector.x = dst.x * src.x;
    vector.y = dst.y * src.y;
    vector.z = dst.z * src.z;
    vector.w = dst.w * src.w;
    return vector;
}

vec4_t div_vec4(vec4_t dst, vec4_t src)
{
    vec4_t vector;
    vector.x = dst.x / src.x;
    vector.y = dst.y / src.y;
    vector.z = dst.z / src.z;
    vector.w = dst.w / src.w;
    return vector;
}

vec4_t add_vec4(vec4_t dst, vec4_t src)
{
    vec4_t vector;
    vector.x = dst.x + src.x;
    vector.y = dst.y + src.y;
    vector.z = dst.z + src.z;
    vector.w = dst.w + src.w;
    return vector;
}

vec4_t min_vec4(vec4_t dst, vec4_t src)
{
    vec4_t vector;
    vector.x = dst.x - src.x;
    vector.y = dst.y - src.y;
    vector.z = dst.z - src.z;
    vector.w = dst.w - src.w;
    return vector;
}

vec3_t create_vec3(float x, float y, float z)
{
    vec3_t vector;
    vector.x = x;
    vector.y = y;
    vector.z = z;
    return vector;
}

void set_vec3(vec3_t vector, float x, float y, float z)
{
    vector.x = x;
    vector.y = y;
    vector.z = z;
}

float get_vec3_x(vec3_t vector)
{
    return vector.x;
}

float get_vec3_y(vec3_t vector)
{
    return vector.y;
}

float get_vec3_z(vec3_t vector)
{
    return vector.z;
}

float* get_vec3_pointer(vec3_t vector)
{
    return &vector.x;
}

vec3_t mul_vec3(vec3_t dst, vec3_t src)
{
    vec3_t vector;
    vector.x = dst.x * src.x;
    vector.y = dst.y * src.y;
    vector.z = dst.z * src.z;
    return vector;
}

vec3_t div_vec3(vec3_t dst, vec3_t src)
{
    vec3_t vector;
    vector.x = dst.x / src.x;
    vector.y = dst.y / src.y;
    vector.z = dst.z / src.z;
    return vector;
}

vec3_t add_vec3(vec3_t dst, vec3_t src)
{
    vec3_t vector;
    vector.x = dst.x + src.x;
    vector.y = dst.y + src.y;
    vector.z = dst.z + src.z;
    return vector;
}

vec3_t min_vec3(vec3_t dst, vec3_t src)
{
    vec3_t vector;
    vector.x = dst.x - src.x;
    vector.y = dst.y - src.y;
    vector.z = dst.z - src.z;
    return vector;
}

vec2_t create_vec2(float x, float y)
{
    vec2_t vector;
    vector.x = x;
    vector.y = y;
    return vector;
}

void set_vec2(vec4_t vector, float x, float y)
{
    vector.x = x;
    vector.y = y;
}

float get_vec2_x(vec2_t vector)
{
    return vector.x;
}

float get_vec2_y(vec2_t vector)
{
    return vector.y;
}

float* get_vec2_pointer(vec2_t vector)
{
    return &vector.x;
}

vec2_t mul_vec2(vec2_t dst, vec2_t src)
{
    vec2_t vector;
    vector.x = dst.x * src.x;
    vector.y = dst.y * src.y;
    return vector;
}

vec2_t div_vec2(vec2_t dst, vec2_t src)
{
    vec2_t vector;
    vector.x = dst.x / src.x;
    vector.y = dst.y / src.y;
    return vector;
}

vec2_t add_vec2(vec2_t dst, vec2_t src)
{
    vec2_t vector;
    vector.x = dst.x + src.x;
    vector.y = dst.y + src.y;
    return vector;
}

vec2_t min_vec2(vec2_t dst, vec2_t src)
{
    vec2_t vector;
    vector.x = dst.x - src.x;
    vector.y = dst.y - src.y;
    return vector;
}
