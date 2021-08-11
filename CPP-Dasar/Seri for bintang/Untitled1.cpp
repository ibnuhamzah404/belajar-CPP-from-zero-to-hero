#include <iostream>

using namespace std;

int main ()
{
	int input;
	
	cout << "\n\tMasukan Berapa Banyak Bintang : ";
	cin  >> input;
	

	
	for (int i = 1; i <= input; i++)
	{
		
		for (int j = input; j >= i; j--)
		{
			cout << " ";
		}
		for ( int k = 1; k <= i; k++)
		{
			cout << "1";
		}
		for (int l=1; l <= i; l++)
		{
			cout << "0";
		}
		
		cout << endl;
	}
	
	for (int m = 1; m <= input; m++)
	{
		for (int n = 1; n <= m; n++)
		{
			cout << " ";
			
		}
		for ( int o = input; o>=m; o--)
		{
			cout << "0";
		}
		for (int p = input; p>=m; p--)
		{
			cout << "1";
		}
		cout << endl;
		
	
	}

	
	
}
