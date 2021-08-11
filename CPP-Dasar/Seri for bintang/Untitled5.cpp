#include <iostream>

using namespace std;

int main ()
{
	int pola;
	
	cout << "masukan panjang pola : ";
	cin  >> pola;
	
	for (int i = 1; i <= pola; i++)
	{
		for (int j = pola; j >= i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "2";
		}
		for (int l = 1; l <= i; l++)
		{
			cout << "3";
		}
		cout << endl;
	}
	for (int i = 1; i <= pola; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int k = pola; k >= i; k--)
		{
			cout << "*";
		}
		for (int l = pola; l >= i; l--)
		{
			cout << "*";
		}
	
		cout << endl;
	}
	
	
}
