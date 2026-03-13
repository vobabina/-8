#ifndef MATRIX_UTILS_H
#define MATRIX_UTILS_H

#include <string>

const int M = 20;
const int N = 20;

void get_matrix(std::string filename, int matrix[M][N], int &m, int &n);
void write_row_sums(std::string filename, int matrix[M][N], int m, int n);

#endif
