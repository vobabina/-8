#include <fstream>
#include "matrix_utils.h"

using namespace std;

void get_matrix(string filename, int matrix[M][N], int &m, int &n)
{
    ifstream file(filename);

    file >> m >> n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            file >> matrix[i][j];

    file.close();
}

void write_row_sums(string filename, int matrix[M][N], int m, int n)
{
    ofstream file(filename, ios::app);

    file << "\\nRow sums:\\n";

    for (int i = 0; i < m; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
            sum += matrix[i][j];

        file << sum << endl;
    }

    file.close();
}
