#include <iostream>

using namespace std;

int kuadrat(int x)
{
	int y;
	y = x * x;
	return y;
}

int tambah(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int main ()
{
	int input, hasil, a, b, hasil2;
	
	cout << "nilai kuadrat dari : ";
	cin  >> input;
	
	hasil = kuadrat(input);
	
	cout << "hasilnya adalah : "<<hasil;
	
	cout << "\nmasukan nilai a : ";
	cin  >> a;
	
	cout << "masukan nilai b : ";
	cin  >> b;
	
	hasil2 = tambah(a,b);
	
	cout << "hasil pertambahan nya adalah : "<<hasil2;
}