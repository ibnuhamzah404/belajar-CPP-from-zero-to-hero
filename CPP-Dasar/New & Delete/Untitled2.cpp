#include <iostream>

using namespace std;

int main ()
{
	int i;
	
	cout << "Anda Membutuhkan Berapa Memory Untuk Menyimpan Data Integer : ";
	cin  >> i;
	
	int *data = NULL;
	data = new i[*data];
	cout << "memory telah dipesan dan memiliki " << i << " elemen" << "silakan anda isi : "<<endl;
 	
 	//input;
 	
 	for (int n =0; n < i; n++)
	{
		cout << &data[n] << "="; 
		cin >> data[n];
 	}
 	
 	cout << endl;
 	
 	for (int n = 0; n <i; n++)
	{
	 	cout << &data[n] << "=" <<data[n] <<endl;
 	}
 	cout << endl <<"...memproses pelepasan memory ...."<<endl;
 	delete[]data;
 	data = NULL;
 	cout << "Memory telaah dilepas dari variable data memiliki nilai = " << data;
 	
 	 
}
