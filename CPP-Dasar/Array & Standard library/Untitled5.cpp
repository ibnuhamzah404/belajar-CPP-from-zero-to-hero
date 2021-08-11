#include <iostream>


using namespace std;

int main ()
{
	int nilai[10];
	int nilaiMurid;
	
	for (int i = 0; i <= 10; i++)
	{
		cout << "jumblah mahasiswa dengan nilai ";
		if (i == 0)
		{
			cout << "dari 0 - 9 : ";
			
		}
		else if (i == 10)
		{
			cout << "100 : "; 
		}
		else 
		{
			cout << i*10 << "-" << (i*10)+9 << ": "; 
		}
		cin >>  nilai[i];
	}
	
	for (int i = 0; i <= 10; i++)
	{
		if (i == 0)
		{
			cout << "1 - 9 : ";
		}
		else if (i == 10)
		{
			cout << "100 : ";
		}
		else 
		{
			cout << i*10 << "-" << (i*10)+9 << ": ";
		}
		for (int bintang = 0; bintang <= nilai[i]; bintang++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
