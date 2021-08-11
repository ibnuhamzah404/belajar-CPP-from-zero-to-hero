#include <iostream>

using namespace std;

int main()
{
	// break dan continue
	
	cout << "\n== Untuk Looping For =="<<endl;
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
			//break;
		}
		cout <<  i << endl;
	}
	
	int i = 0;
	cout << "== Untuk Perulangan While =="<<endl;
	while ( i < 10 )
	{
		i++;
		if (i == 5 )
		{
			continue;
			//break;
		}
		cout << i << endl;	
	}
}

