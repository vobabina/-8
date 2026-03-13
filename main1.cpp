#include <iostream>
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

void task1();
void task2();
void task3();

int main()
{
    int choice;

    do
    {
        cout << "\nMenu\n";
        cout << "1 Array task\n";
        cout << "2 Matrix task\n";
        cout << "3 Sorting\n";
        cout << "0 Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;

        }

    } while (choice != 0);

    return 0;
}

void task1()
{
    int arr[N], n;

    get_mas("array_in.txt", arr, n);
    transform_array(arr, n);
    show_mas("array_out.txt", arr, n);

    cout << "Array processed\n";
}

void task2()
{
    int matrix[M][N];
    int m, n;

    get_matrix("matrix.txt", matrix, m, n);
    write_row_sums("matrix.txt", matrix, m, n);

    cout << "Matrix processed\n";
}

void task3()
{
    int arr[N], n;

    get_mas("array_in.txt", arr, n);

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

    show_mas("sorted_array.txt", arr, n);

    cout << "Array sorted\n";
}