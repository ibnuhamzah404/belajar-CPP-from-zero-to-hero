// latihan nested for (for bersarang)

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int input;
	
	cout << "masukan banyaknya inputan : ";
	cin  >> input;
	
	for (int i = 1; i <= input; i++)
	{
		for (int j = 1; j <= input; j++)
		{
			cout << setw(4) << i*j;
		}
		cout << endl;
	}
	
	for (int i = 1; i <= input; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(4) << j*i;
		}
		cout << endl;
	}
	
}


