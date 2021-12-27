#include<iostream>
using namespace std;
int fillingOfMatrix(float** array, int& rows, int& columns) {
	for (int i = 0; i < rows;i++)
	{
		for (int j = 0;j < columns;j++)
		{
			cin >> array[i][j];
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(32767, '\n');\
					cout << "Ёй, тут должно быть число\n";
				cin >> array[i][j];
			}

		}
	}
	return **array;
}