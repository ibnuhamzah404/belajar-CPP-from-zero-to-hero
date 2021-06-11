#include <iostream>

using namespace std;

int main ()

{
	for (int i = 1; i <= 1; i++)
	{
		for (int j = 10; j >=i; j-- )
		{
			cout << "\nAnak Ayam Turun " << j << ", Mati Satu Tingalah " << j-1;
			
			if (j == 1)
			{
				cout << "\nAnak Ayam Turun " << j << ", Mati Satu Tingalah Induknya"; 
			}
		}
	}
}
