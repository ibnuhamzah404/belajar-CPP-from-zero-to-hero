#include <iostream>

using namespace std;

int main ()
{
	int a = 5; 

	cout << "nilai dari a adalah " << a << endl;
	cout << "alamat a adalah " << &a << endl;
	
	int &b = a;
	b = 10;

	cout << "nilai dari b adalah " << b << endl;
	cout << "alamat dari b adalah " << &b << endl;
}
