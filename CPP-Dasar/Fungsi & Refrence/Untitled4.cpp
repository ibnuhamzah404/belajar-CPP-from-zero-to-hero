#include <iostream>

using namespace std;

void fungsi (int &b)
{
	cout << "nilai dari b adalah " << b << endl;
	cout << "alamat dari b adalah " << &b << endl;
}

void kuadrat (int &nilaiRef)
{
	nilaiRef = nilaiRef * nilaiRef;
	cout << nilaiRef;
}
int main ()
{
	int a = 5;
	
	cout << "nilai dari a adalah " << a << endl;
	cout << "alamat dari a adalah " << &a << endl;

	kuadrat(a);

	
}
