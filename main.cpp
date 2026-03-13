#include <iostream>
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

int main()
{
    string array_in, array_out;
    int arr[N], n;

    cout << "Input array file: ";
    cin >> array_in;

    cout << "Output array file: ";
    cin >> array_out;

    get_mas(array_in, arr, n);
    transform_array(arr, n);
    show_mas(array_out, arr, n);

    string matrix_file;
    int matrix[M][N];
    int m;

    cout << "Input matrix file: ";
    cin >> matrix_file;

    get_matrix(matrix_file, matrix, m, n);
    write_row_sums(matrix_file, matrix, m, n);

    cout << "Done!" << endl;

    return 0;
}
