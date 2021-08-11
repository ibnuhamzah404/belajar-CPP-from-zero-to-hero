#include <iostream>
#include <iomanip>

using namespace std;

int matrix1 [2][2], matrix2[2][2], hasil[2][2], baris, kolom;

int main ()
{	
	
	
	for (int i = 0; i <2; i++)
	{	
		
		for (int j = 0; j <2; j++)
		{
			cout << "\n  Baris ke-"<<(i+1)<<",Kolom ke-"<<(j+1)<<": ";
			cin >> matrix1[i][j];
		}
	}
	cout << endl;
	
	//cetak matrix1 
	cout << "  Cetak Matrix A :"<<endl;
	for (int i = 0; i < 2; i++)
	{
		for ( int j = 0; j < 2; j ++ )
		{
			cout <<setw(4)<<matrix1[i][j];
		}
		cout << endl;
	}
	
	//matrix2
	
	for (int i = 0; i < 2; i++)
	{
		for ( int j = 0; j < 2; j++)
		{
			cout << "\n  Baris Ke-"<<(i+1)<<",Kolom ke-"<<(j+1)<<": ";
			cin  >> matrix2[i][j];
		}
	}
	cout << endl;
	
	//cetak matrix 2
	cout << "  Cetak Matrix B :"<<endl;
	for (int i = 0; i < 2; i++ )
	{
		for ( int j = 0; j < 2; j++)
		{
			cout << setw (4) << matrix2[i][j];
		}
		cout << endl;
	}
	
	for (int i = 0; i < 2; i++)
	{
		for ( int j = 0; j < 2; j++)
		{
			hasil[i][j] += matrix1[i][j] * matrix2 [i][j];
		}
	}
	
	cout << "Hasil Matrix A x matrix B: "<< endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << setw(4) << hasil[i][j];
		}
		cout << endl;
	}
	system ("pause");	
}
