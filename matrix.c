#include "matrix.h"

matrix_t create_matrix()
{
    matrix_t matrix;
    for(int x = 0; x < MATRIX_WIDTH; x++)
    {
        for(int y = 0; y < MATRIX_HEIGHT; y++)
        {
            matrix.matrix[x][y] = 0;
        }
    }
    return matrix;
}

void fill(matrix_t matrix, float number)
{
    for(int x = 0; x < MATRIX_WIDTH; x++)
    {
        for(int y = 0; y < MATRIX_HEIGHT; y++)
        {
            matrix.matrix[x][y] = number;
        }
    }
}

void set(matrix_t matrix,
         float e00, float e01, float e02, float e03,
         float e10, float e11, float e12, float e13,
         float e20, float e21, float e22, float e23,
         float e30, float e31, float e32, float e33)
{
    matrix.matrix[0][0] = e00; matrix.matrix[0][1] = e01; matrix.matrix[0][2] = e02; matrix.matrix[0][3] = e03;
	matrix.matrix[1][0] = e10; matrix.matrix[1][1] = e11; matrix.matrix[1][2] = e12; matrix.matrix[1][3] = e13;
	matrix.matrix[2][0] = e20; matrix.matrix[2][1] = e21; matrix.matrix[2][2] = e22; matrix.matrix[2][3] = e23;
	matrix.matrix[3][0] = e30; matrix.matrix[3][1] = e31; matrix.matrix[3][2] = e32; matrix.matrix[3][3] = e33;
}

int equals(matrix_t dst, matrix_t src)
{
    int status = 0;
    for(int x = 0; x < MATRIX_WIDTH; x++)
    {
        for(int y = 0; y < MATRIX_HEIGHT; y++)
        {
            status = dst.matrix[x][y] == src.matrix[x][y];
        }
    }
    return status;
}

void set_identity(matrix_t matrix, float diagonal)
{
    matrix.matrix[0][0] = diagonal;
    matrix.matrix[1][1] = diagonal;
    matrix.matrix[2][2] = diagonal;
    matrix.matrix[3][3] = diagonal;
}

float* get_pointer(matrix_t matrix)
{
    return &matrix.matrix[0][0];
}

void set_element(matrix_t matrix, int row, int column, float number)
{
    matrix.matrix[row][column] = number;
}

void set_element(matrix_t matrix, int index, float number)
{
    get_pointer(matrix)[index] = number;
}

float get_element(matrix_t matrix, int row, int column)
{
    return matrix.matrix[row][column];
}

float get_element(matrix_t matrix, int index)
{
    return get_pointer(matrix)[index];
}

void set_row(matrix_t matrix, int row, vec4_t vector)
{
    set_element(matrix, row, 0, vector.x);
    set_element(matrix, row, 1, vector.y);
    set_element(matrix, row, 2, vector.z);
    set_element(matrix, row, 3, vector.w);
}

void set_column(matrix_t matrix, int column, vec4_t vector)
{
    set_element(matrix, 0, column, vector.x);
    set_element(matrix, 1, column, vector.y);
    set_element(matrix, 2, column, vector.z);
    set_element(matrix, 3, column, vector.w);
}

vec4_t get_row(matrix_t matrix, int row)
{
    vec4_t vector;
    vector.x = get_element(matrix, row, 0);
    vector.y = get_element(matrix, row, 1);
    vector.z = get_element(matrix, row, 2);
    vector.w = get_element(matrix, row, 3);
    return vector;
}

vec4_t get_column(matrix_t matrix, int column)
{
    vec4_t vector;
    vector.x = get_element(matrix, 0, column);
    vector.y = get_element(matrix, 1, column);
    vector.z = get_element(matrix, 2, column);
    vector.w = get_element(matrix, 3, column);
    return vector;
}

matrix_t mul_matrix(matrix_t dst, matrix_t src)
{
    matrix_t matrix;
    for(int x = 0; x < MATRIX_WIDTH; x++)
    {
        for(int y = 0; y < MATRIX_HEIGHT; y++)
        {
            for(int i = 0; i < 4; i++)
            {
                matrix.matrix[x][y] += dst.matrix[x][i] * src.matrix[i][y];
            }
        }
    }
    return matrix;
}

matrix_t div_matrix(matrix_t dst, matrix_t src)
{
    matrix_t matrix;
    for(int x = 0; x < MATRIX_WIDTH; x++)
    {
        for(int y = 0; y < MATRIX_HEIGHT; y++)
        {
            matrix.matrix[x][y] = dst.matrix[x][y] / src.matrix[x][y];
        }
    }
    return matrix;
}

matrix_t add_matrix(matrix_t dst, matrix_t src)
{
    matrix_t matrix;
    for(int x = 0; x < MATRIX_WIDTH; x++)
    {
        for(int y = 0; y < MATRIX_HEIGHT; y++)
        {
            matrix.matrix[x][y] = dst.matrix[x][y] + src.matrix[x][y];
        }
    }
    return matrix;
}

matrix_t min_matrix(matrix_t dst, matrix_t src)
{
    matrix_t matrix;
    for(int x = 0; x < MATRIX_WIDTH; x++)
    {
        for(int y = 0; y < MATRIX_HEIGHT; y++)
        {
            matrix.matrix[x][y] = dst.matrix[x][y] + src.matrix[x][y];
        }
    }
    return matrix;
}
