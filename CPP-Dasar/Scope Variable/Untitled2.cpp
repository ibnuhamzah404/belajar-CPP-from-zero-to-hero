#include <iostream>

using namespace std;

int x = 10; // variable global

int ambil_global()
{
	return x; // mengambil variable global
}

int x_local (int x)
{
	x = 5;
	return x; // variable local scope nya x_local
} 

int main ()
{
	cout << "1.Variable global : " << x << endl;
	int x = 8; // variable local untuk main 
	cout << "2.Variable Local Main : "<< x << endl;
	cout << "3.Variable Ambil_Global : " << ambil_global() << endl;
	cout << "4.Variable x_Local : " << x_local(x) << endl;
	cout << "5.Variable Local Main : "<< x << endl; 
	{
		cout << "6.Variable Local main didalam scope : " << x << endl;
		int x = 1;
		cout << "7.Variable local block " << x << endl; 
		cout << "8.Mengambil x yang paling jauh " << ::x << endl; //unary operator :: 
	}
	cout << "9.variable local main : " << x << endl;
	
		
}
