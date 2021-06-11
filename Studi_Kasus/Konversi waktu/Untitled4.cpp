#include <iostream>

using namespace std;

int main ()
{
	int bintang;
	
	cout << "masukan bintang : ";
	cin  >> bintang;
	
	for (int i = 1; i <= bintang; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*" ;
		}
		cout << endl;
	}	
	
	return 0;
}
