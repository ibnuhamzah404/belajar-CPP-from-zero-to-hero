#include <iostream>
#include <iomanip>

using namespace std;

int matrix1 [3][3] = {
					   {10, 11, 12},
					   {13, 14, 15},
					   {16, 17, 18}
					 };

int matrix2[3][3] = {
					   {20, 21, 22},
					   {23, 24, 25},
					   {26, 27, 28}
					};
					
int hasil[3][3];
int i, j;
int main ()
{
	cout << "\n  Matrix A = " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw (4) << matrix1[i][j];
		}
		cout << endl;
	}
	
	cout << "\n  Matrix B = " << endl;
	for ( int i=0; i < 3; i++)
	{
		for ( int j=0; j < 3; j++)
		{
			cout << setw (4) << matrix2[i][j];
		}
		cout << endl;
	}
	
	for (int i=0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			hasil[i][j] = matrix1 [i][j] * matrix2 [i][j];
		}
	}
	
	cout << "\n  Hasil Matrix A x Matrix B  = "<<endl;
	for (int i=0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw (5) << hasil[i][j];
		}
		cout << endl;
	}
	
	system ("pause");
	return 0;
}
