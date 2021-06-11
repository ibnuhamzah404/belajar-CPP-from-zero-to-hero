#include <iostream>

using namespace std;

int main ()
{
	int bgndtr;
	
	awal:
	system ("cls");
	cout << "\n\t\t\t\tProgram Bangun Datar";
	cout << "\n\t\t\t\t____________________";
	
	cout << "\n\n\t\t\t\t== Menu Pilihan ==";
	cout << "\n\t\t\t\t   1. Persegi";
	cout << "\n\t\t\t\t   2. Persegi Panjang";
	cout << "\n\t\t\t\t   3. Segitiga";
	
	cout << "\n\n\t\t\t\t Masukan Pilihan Anda\t: ";
	cin  >> bgndtr;
	
	switch (bgndtr)
	{
		case 1:
		system ("cls");
		
		#define luas s*s
		#define keliling 4*s 
		
		int s, kel;
		char ulang;
		
		ulg:
		system ("cls");
		cout << "\n\t Program Meghitung luas persegi panjang serta kelilingnya ";
		cout << "\n\t__________________________________________________________";
		
		cout << "\n\n\t\t Masukan sisi Persegi\t\t: ";
		cin  >> s;
		
		cout << "\n\t\t =====================================";
		cout << "\n\n\t\t luas Persegi adalah\t\t: "<<luas<<endl;
	
		cout << "\n\t\t Keliling Persegi Adalah\t: "<<keliling<<endl;
		
		cout << "\n\t\t =====================================";
		kode:
		cout << "\n\t\t Apakah Anda Ingin Mengulang Program/\n\t\t Kembali kemenu awal [M/U/S]\t:";
		cin  >> ulang;
		
		if (ulang == 'M')
		{
			goto awal;
		}
		else if (ulang == 'S')
		{
			goto selesai;
		}
		else if (ulang == 'U')
		{
			goto ulg;
		}
		else 
		{
			cout << "\t\t =====================================";
			cout << "\n\t\t Kode yang anda masukan salah\n\t\t Silakan masukan kode kembali!!";
			goto kode;
			
		}
		
		selesai:
		system ("cls");
		cout << "\n\n\n\t\t\tTerimakasi Atas Kunjungannya"<<endl;
		system ("pause");
		return 0;
		
		break;
		
		case 2:
		
		int p,l; 
		
		#define luas p*l
		#define keliling 2*(p+l)
		
		
		system ("cls");
		ulg2:
		cout << "\n\t Program Meghitung luas persegi panjang serta kelilingnya ";
		cout << "\n\t__________________________________________________________";
		
			
		cout << "\n\n\t\t Masukan panjang persegi panjang\t: ";
		cin  >> p;
		cout << "\n\t\t Masukan lebar persegi panjang\t\t: ";
		cin  >> l;
		
		cout << "\n\t\t =====================================";
		cout << "\n\n\t\t luas Persegi panjang adalah\t\t: "<<luas<<endl;
		cout << "\n\t\t Keliling Persegi Adalah\t\t: "<<keliling<<endl;
		
		cout << "\n\t\t =====================================";
		cout << "\n\t\t Apakah Anda Ingin Mengulang Program/\n\t\t Kembali kemenu awal [M/U/S]\t:";
		cin  >> ulang;
		
		if (ulang == 'M')
		{
			goto awal;
		}
		else if (ulang == 'S')
		{
			goto selesai;
		}
		else if (ulang == 'U')
		{
			goto ulg2;
		}
		else 
		{
			cout << "\t\t =====================================";
			cout << "\n\t\t Kode yang anda masukan salah\n\t\t Silakan masukan kode kembali!!";
			goto kode;
			
		}
		
		
		
		
		
		
		
		
		
		
		 
	}
	
	
}
