/**
 * @file matrix.c
 * @author hutusi (hutusi@outlook.com)
 * @brief Refer to matrix.h
 * @date 2019-07-20
 *
 * @copyright Copyright (c) 2019, hutusi.com
 *
 */

#include "matrix.h"
#include <stdlib.h>
#include <string.h>

#ifdef ALLOC_TESTING
#include "alloc-testing.h"
#endif

Matrix *matrix_new(unsigned int width, unsigned int height)
{
    Matrix *matrix = (Matrix *)malloc(sizeof(Matrix));
    matrix->data = (MatrixValue *)malloc(sizeof(MatrixValue) * width * height);
    matrix->width = width;
    matrix->height = height;
    return matrix;
}

void matrix_free(Matrix *matrix)
{
    free(matrix->data);
    free(matrix);
}

void matrix_reset(Matrix *matrix)
{
    memset(
        matrix->data, 0, matrix->width * matrix->height * sizeof(MatrixValue));
}

void matrix_set(Matrix *matrix,
                unsigned int row,
                unsigned int col,
                MatrixValue value)
{
    matrix->data[matrix->width * row + col] = value;
}

MatrixValue matrix_get(Matrix *matrix, unsigned int row, unsigned int col)
{
    return matrix->data[matrix->width * row + col];
}
