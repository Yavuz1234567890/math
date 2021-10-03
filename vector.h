#ifndef VECTOR_H_
#define VECTOR_H_

typedef struct VEC4
{
    float x, y, z, w;
} vec4_t;

typedef struct VEC3
{
    float x, y, z;
} vec3_t;

typedef struct VEC2
{
    float x, y;
} vec2_t;

vec4_t create_vec4(float x, float y, float z, float w);
void set_vec4(vec4_t vector, float x, float y, float z, float w);
float get_vec4_x(vec4_t vector);
float get_vec4_y(vec4_t vector);
float get_vec4_z(vec4_t vector);
float get_vec4_w(vec4_t vector);
float* get_vec4_pointer(vec4_t vector);
vec4_t mul_vec4(vec4_t dst, vec4_t src);
vec4_t div_vec4(vec4_t dst, vec4_t src);
vec4_t add_vec4(vec4_t dst, vec4_t src);
vec4_t min_vec4(vec4_t dst, vec4_t src);
int equals_vec4(vec4_t dst, vec4_t src);

vec3_t create_vec3(float x, float y, float z);
void set_vec3(vec3_t vector, float x, float y, float z);
float get_vec3_x(vec3_t vector);
float get_vec3_y(vec3_t vector);
float get_vec3_z(vec3_t vector);
float* get_vec3_pointer(vec3_t vector);
vec3_t mul_vec3(vec3_t dst, vec3_t src);
vec3_t div_vec3(vec3_t dst, vec3_t src);
vec3_t add_vec3(vec3_t dst, vec3_t src);
vec3_t min_vec3(vec3_t dst, vec3_t src);
int equals_vec3(vec4_t dst, vec4_t src);

vec2_t create_vec2(float x, float y);
void set_vec2(vec4_t vector, float x, float y);
float get_vec2_x(vec2_t vector);
float get_vec2_y(vec2_t vector);
float* get_vec2_pointer(vec2_t vector);
vec2_t mul_vec2(vec2_t dst, vec2_t src);
vec2_t div_vec2(vec2_t dst, vec2_t src);
vec2_t add_vec2(vec2_t dst, vec2_t src);
vec2_t min_vec2(vec2_t dst, vec2_t src);
int equals_vec2(vec4_t dst, vec4_t src);

#endif
