//15/03/19 15:32
//program kalkulator sederhana 
//program by : ibnu hamzah

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double angka1, angka2, hasil;
	char oprrt, ulang;

	
	ulang :
	system ("cls");
	cout << "\n\t==================== Kalkulator Sederhana ====================";
	cout << "\n\n\n\t\tMasukan Angka Pertama : ";
	cin  >> angka1;
	
	cout << "\n\t\tMasukan Operator Matematikanya [+,-,*,/] : ";
	cin  >> oprrt;
	
	cout << "\n\t\tMasukan Angka Kedua : ";
	cin  >> angka2;
	cout << "\n\t\t-----------------------------------------------------";
	if (oprrt == '+')
	{
		hasil = angka1 + angka2;
		cout << "\n\t\tPenjumblahan dari " <<  angka1 << " " << oprrt << " " << angka2 << " Hasilnya \t\t: " << hasil; 
		cout << endl;
	}
	else if (oprrt == '-')
	{
		hasil = angka1 - angka2;
		cout << "\n\t\tPenjumblahan dari " <<  angka1 << " " << oprrt << " " << angka2 << " Hasilnya \t\t: " << hasil; 
		cout << endl;
	}
	else if (oprrt == '/')
	{
		hasil = angka1 / angka2;
		cout << "\n\t\tPenjumblahan dari " <<  angka1 << " " << oprrt << " " << angka2 << " Hasilnya \t\t: " << hasil; 
		cout << endl;
	}
	else if (oprrt == '*')
	{
		hasil = angka1 * angka2;
		cout << "\n\t\tPenjumblahan dari " <<  angka1 << " " << oprrt << " " << angka2 << " Hasilnya \t\t: " << hasil; 
		cout << endl;
	}
	
	cout << "\n\n\t\tapakah anda ingin mengulang program ini ?? [Y/T] : ";
	cin  >> ulang;
	
	if (ulang == 'Y' || ulang == 'y' )
	{
		goto ulang;
	}
	else if (ulang == 'T' || ulang == 't')
	{
		goto selesai;
	}
	selesai:
	cout << "\n\t\tTermakasi Telah Menggunakan Program Ini !! ";
	system ("pause");
	return 0;
}

