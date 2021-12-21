#include <iostream>

using namespace std;

int multiplication()
{
    setlocale(LC_CTYPE, "rus");

    int rowA, columnA, rowB, columnB, rowC, columnC;
    cout << "Введите количество строк первой матрицы: "; cin >> rowA;
    cout << "Введите количество столбцов первой матрицы: "; cin >> columnA;
    rowB = columnA;
    cout << "Количество строк второй матрицы: " << rowB << endl;
    cout << "Введите количество столбцов второй матрицы: "; cin >> columnB;
    if (rowA > rowB) rowC = rowA;
    else rowC = rowB;
    if (columnA > columnB) columnC = columnA;
    else columnC = columnB;
    int* A = new int[rowA * columnA];
    int* B = new int[rowB * columnB];
    int* C = new int[rowC * columnC];

    for (int i = 0; i < rowA * columnA; i++)
    {
        cout << "Введите a" << i / rowA + 1 << i % rowA + 1 << ": "; cin >> A[i];
    }
    for (int i = 0; i < rowB * columnB; i++)
    {
        cout << "Введите b" << i / rowB + 1 << i % rowB + 1 << ": "; cin >> B[i];
    }
    for (int i = 0; i < rowC; i++)
    {
        for (int j = 0; j < columnC; j++)
        {
            *(C + (i * columnC) + j) = 0;
            for (int k = 0; k < rowB; k++)
            {
                *(C + (i * columnC) + j) += *(A + (i * columnA) + k) * *(B + (k * columnB) + j);
            }
        }
    }

    for (int i = 0; i < rowA * columnA; i++)
    {
        cout << A[i] << '\t';
        if ((i + 1) % columnA == 0) cout << endl;
    }
    cout << '*' << endl;
    for (int i = 0; i < rowB * columnB; i++)
    {
        cout << B[i] << '\t';
        if ((i + 1) % columnB == 0) cout << endl;
    }
    cout << '=' << endl;
    for (int i = 0; i < rowC * columnC; i++)
    {
        cout << C[i] << '\t';
        if ((i + 1) % columnC == 0) cout << endl;
    }

    delete[] A;
    delete[] B;
    delete[] C;
}