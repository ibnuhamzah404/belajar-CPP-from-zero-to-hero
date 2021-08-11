#include <iostream>

using namespace std;

double hitung_luas (double p, double l)
{
	double luas = p * l;
	return luas;
}

double hitung_keliling (double p, double l)
{
	double keliling = 2 * (p+l);
	return keliling;
}

void tampilkan_luas(double p, double l)
{
	cout << "Hasilnya Adalah : "<<hitung_luas(p,l)<<endl;
}

void tampilkan_keliling (double p, double l)
{
	cout << "Hasilnya Adalah : "<<hitung_keliling(p,l)<<endl;
}



int main()
{
	double panjang, lebar;
	
	cout << "masukan panjangnya: ";
	cin  >> panjang;
	
	cout << "masukan lebarnya : ";
	cin >> lebar;
	
	tampilkan_luas(panjang,lebar);
	
	tampilkan_keliling(panjang,lebar);
}	
