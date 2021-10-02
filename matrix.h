#ifndef MATRIX_H_
#define MATRIX_H_

#define MATRIX_WIDTH 4
#define MATRIX_HEIGHT 4

#include "vector.h"

typedef struct MATRIX
{
    float matrix[MATRIX_WIDTH][MATRIX_HEIGHT];
} matrix_t;

matrix_t create_matrix();
void set_identity(matrix_t matrix, float diagonal);
float* get_pointer(matrix_t matrix);
void set_element(matrix_t matrix, int row, int column, float number);
void set_element(matrix_t matrix, int index, float number);
float get_element(matrix_t matrix, int row, int column);
float get_element(matrix_t matrix, int index);
void set_row(matrix_t matrix, int row, vec4_t vector);
void set_column(matrix_t matrix, int column, vec4_t vector);
vec4_t get_row(matrix_t matrix, int row);
vec4_t get_column(matrix_t matrix, int column);
matrix_t mul_matrix(matrix_t dst, matrix_t src);
matrix_t div_matrix(matrix_t dst, matrix_t src);
matrix_t add_matrix(matrix_t dst, matrix_t src);
matrix_t min_matrix(matrix_t dst, matrix_t src);

#endif
