#include <iostream>
using namespace std;
double luas_segitiga (double a, double t)
{
	double luas = 0.5*a*t;
	return luas;
}

void tampilkan_segitiga (double a, double t)
{
	cout << "\t\t______________________________";
	cout << "\n\t\t luasnya adalah "<< luas_segitiga(a,t);
}

double keliling_lingkaran (double r)
{
	return 2*3.14*r;
}

void tampilkan_keliling_lingkaran (double r)
{
	cout << "\t\t______________________________";
	cout << "\n\t\t Kelilingnya adalah "<< keliling_lingkaran(r);
}

int volume_kubus (int s)
{
	return s*s*s;
}

void tampilkan_volume_kubus (int s)
{
	cout << "\t\t______________________________";
	cout << "\n\t\t Volumenya adalah "<< volume_kubus(s);
}
int main ()
{
	int pil;
	
	cout << "\n\t\t =========== MENU ============ ";
	cout << "\n\t\t 1.Mencari Luas Segitiga ";
	cout << "\n\t\t 2.Mencari Keliling Lingkaran";
	cout << "\n\t\t 3.Mencari Volume Kubus ";
	cout << "\n\t\t ------------------------------";
	
	cout << "\n\t\t Masukan pilihan anda : ";
	cin  >> pil;
	
	switch (pil)
	{
		case 1:
		double alas, tinggi;
		
		cout << "\n\t\t Masukan alas segitiganya : ";
		cin  >> alas;
		cout << "\n\t\t Masukan tinggi segitiganya : ";
		cin  >> tinggi;
		
		tampilkan_segitiga(alas,tinggi);
		
		break;
		
		case 2:
		double jari2;
		
		cout << "\n\t\t Masukan Jari-Jari Lingkaran : ";
		cin  >> jari2;
		
		tampilkan_keliling_lingkaran(jari2);
		break;
		
		case 3:
		int sisi;
		
		cout << "\n\t\t Masukan Sisi Kubus : ";
		cin  >> sisi;
		
		tampilkan_volume_kubus(sisi);	
		
		break;
	}
	
}
