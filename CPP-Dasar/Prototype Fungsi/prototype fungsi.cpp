#include <iostream>


using namespace std;

//prototype
double hitung_luas (double p, double l);
void println (double x);

int main()
{
	double panjang, lebar, luas;
	
	cout << "masukan panjangnya : ";
	cin >> panjang;
	
	cout << "masukan lebarnya : ";
	cin >> lebar;
	
	luas = hitung_luas(panjang, lebar);
	
	println(luas);
}

double hitung_luas (double p, double l)
{
	return p*l;
}

void println (double x)
{
	cout << "hasilnya adalah "<<x << endl;
}
