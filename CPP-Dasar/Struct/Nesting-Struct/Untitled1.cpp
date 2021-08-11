
// Nesting struct
//16/05/19 00:34

#include <iostream>
#include <string>

struct aktor
{
	char nama[30];
	int tahun_lahir;
	
};

struct film
{
	char judul;
	char genre;
	int tahun;
	//struct aktor
	wchar_t pemeran_1;
	wchar_t pemeran_2;
};


using namespace std;

int main()
{
	aktor aktor1, aktor2;
	film film1;
	
	aktor1.nama = "Firmano sabirin ";
	aktor1.tahun_lahir = 1999;
	
	aktor2.nama = "toti sabirin";
	aktor2.tahun_lahir = 2000;
	
	//buat film
	film1.judul = "Pemuja Tanos";
	film1.genre = 'romantis';
	film1.tahun = '2018';
	film1.pemeran1 =  aktor1;
	film2.pemeran2 = aktor2;
	
}


