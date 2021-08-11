#include <iostream>


using namespace std;

int main ()
{
	int a = 5;
	
	// pointer
	

	int *aPointer = &a;
	
	cout << "Nilai a adalah "<< a << endl;
	cout << "alamat dari variable a dengan pointer " << aPointer << endl; 
	cout << "nilai dari aPointer " << aPointer << endl;
	
	cout << a;
	cout << *aPointer;
	
	// deferensing
	// mengambil data dari sebuah pointer
	cout << "nilai dari aPointer adalah " << *aPointer << endl;
	
}
