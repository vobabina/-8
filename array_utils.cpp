#include <fstream>
#include "array_utils.h"

using namespace std;

void get_mas(string filename, int arr[N], int &n)
{
    ifstream file(filename);

    file >> n;

    for (int i = 0; i < n; i++)
        file >> arr[i];

    file.close();
}

void show_mas(string filename, int arr[N], int n)
{
    ofstream file(filename);

    file << n << endl;

    for (int i = 0; i < n; i++)
        file << arr[i] << " ";

    file.close();
}

void transform_array(int arr[N], int n)
{
    int lastOdd = 0;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            lastOdd = arr[i];
            found = true;
        }
    }

    if (found)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
                arr[i] += lastOdd;
        }
    }
}
