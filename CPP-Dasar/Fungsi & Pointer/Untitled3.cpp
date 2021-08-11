#include <iostream>

using namespace std;

void fungsi (int *b)
{
	cout << "nilai b adalah " << b << endl;
	cout << "alamat b adalah " << *b;
	cout << "nilai c adalah " << c << endl;
	cout << "alamat " << *c;
}



void kuadrat (int *b)
{
	*b = (*b) * (*b);
}

int main ()
{
	int a = 10;
	
	cout << "nilai a adalah " << a << endl;
	cout << "alamat a adalah " << &a << endl;
	fungsi(&a);
	kuadrat(&a);
	
	cout << "nilai dari a fungsi kuadrat adalah "<< a ;
	
}
