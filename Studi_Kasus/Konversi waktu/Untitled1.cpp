// Program pengubah konversi satuan jam menit detik 
// By :ibnu hamzah
// Universitas prof.dr hamka 
// Teknik informatika 
// 12/01/19 19:17 

#include <iostream>

using namespace std;

int main()
{
	int kode;
	
	menu:
	system ("cls");
	cout << "== pilih konversi yang anda ingin lakukan ==";
	cout << "\n\n\t1. Jam ke detik";
	cout << "\n\t2. jam ke menit";
	cout << "\n\t3. Jam ke hari";
	cout << "\n\t4. detik ke jam";
	cout << "\n\t5. detik ke menit";
	cout << "\n\t6. detik ke hari";
	cout << "\n\t7. hari ke detik";
	cout << "\n\t8. hari ke menit";
	cout << "\n\t9. hari ke jam";
	cout << "\n\t10. Exit";
	
	kode:
	cout << "\n\n\tMasukan kode yang anda inginkan\t: ";
	cin  >> kode;
	
	switch (kode)
	{
		case 1:
		int jam1, detik, jamtik; 
		char pilihan;
		
		ulang:
		system ("cls");
		cout << "\n\t== Konversi Jam Ke Detik ==";
		
		cout << "\n\n\tMasukan jam\t: ";
		cin  >> jam1;
		
		jamtik = jam1 * 3600;
		
		cout << "\n\tHasilnya\t: "<<jam1<<" Jam itu sama dengan "<<jamtik<<" detik";
		
		cout << "\n\n\tapakah anda ingin mengulang program / kembali ke menu [U/M] ? ";
		cin  >> pilihan; 
		
		if (pilihan == 'U' || pilihan == 'u' )
		{
			goto ulang;
		}
		else if (pilihan == 'M' || pilihan == 'm')
		{
			goto menu;
		}
	
		case 2:
		
		int jam2, menit, jamnit; 
		char pilihan2;
		
		ulang2:
		system ("cls");
		cout << "\n\t== Konversi Jam Ke Menit ==";
		
		cout << "\n\n\tMasukan jam\t: ";
		cin  >> jam2;
		
		jamnit = jam2 * 60;
		
		cout << "\n\tHasilnya\t: "<<jam2<<" Jam itu sama dengan "<<jamnit<<" Menit";
		
		cout << "\n\n\tapakah anda ingin mengulang program / kembali ke menu [U/M] ? ";
		cin  >> pilihan2; 
		
		if (pilihan2 == 'U' || pilihan2 == 'u' )
		{
			goto ulang;
		}
		else if (pilihan2 == 'M' || pilihan2 == 'm')
		{
			goto menu;
		}
		
		case 3:
		
		float jam3, hari, jamri; 
		char pilihan3;
		
		ulang3:
		system ("cls");
		cout << "\n\t== Konversi Jam Ke Hari ==";
		
		cout << "\n\n\tMasukan jam\t: ";
		cin  >> jam3;
		
		jamri = jam3 / 24;
		
		cout << "\n\tHasilnya\t: "<<jam3<<" Jam itu sama dengan "<<jamri<<" Hari";
		
		cout << "\n\n\tapakah anda ingin mengulang program / kembali ke menu [U/M] ? ";
		cin  >> pilihan3; 
		
		if (pilihan3 == 'U' || pilihan3 == 'u' )
		{
			goto ulang3;
		}
		else if (pilihan3 == 'M' || pilihan3 == 'm')
		{
			goto menu;
		}
		
		case 4:
		
		float detik1, tikjam;
		
		char pilihan4;
		
		ulang4:
		system ("cls");
		cout << "\n\t== Konversi Detik Ke Jam ==";
		
		cout << "\n\n\tMasukan Detik\t: ";
		cin  >> detik1;
		
		tikjam = detik1/3600;
		
		cout << "\n\tHasilnya\t: "<<detik1<<" detik itu sama dengan "<<tikjam<<" Jam";
		
		cout << "\n\n\tapakah anda ingin mengulang program / kembali ke menu [U/M] ? ";
		cin  >> pilihan4; 
		
		if (pilihan4 == 'U' || pilihan4 == 'u' )
		{
			goto ulang4;
		}
		else if (pilihan4 == 'M' || pilihan4 == 'm')
		{
			goto menu;
		}
		
		case 5:
		
		float detik2, tiknit;
		
		char pilihan5;
		
		ulang5:
		system ("cls");
		cout << "\n\t== Konversi Detik Ke Menit ==";
		
		cout << "\n\n\tMasukan detik\t: ";
		cin  >> detik2;
		
		tiknit = detik2/60;
		
		cout << "\n\tHasilnya\t: "<<detik2<<" Detik itu sama dengan "<<tiknit<<" Menit";
		
		cout << "\n\n\tapakah anda ingin mengulang program / kembali ke menu [U/M] ? ";
		cin  >> pilihan5; 
		
		if (pilihan5 == 'U' || pilihan5 == 'u' )
		{
			goto ulang5;
		}
		else if (pilihan5 == 'M' || pilihan5 == 'm')
		{
			goto menu;
		}
		
		case 6:
			
		float detik3, tikhar;
		
		char pilihan6;
		
		ulang6:
		system ("cls");
		cout << "\n\t== Konversi Detik Ke Hari ==";
		
		cout << "\n\n\tMasukan detik\t: ";
		cin  >> detik3;
		
		tikhar = detik3/86400;
		
		cout << "\n\tHasilnya\t: "<<detik3<<" Detik itu sama dengan "<<tikhar<<" Hari";
		
		cout << "\n\n\tapakah anda ingin mengulang program / kembali ke menu [U/M] ? ";
		cin  >> pilihan6; 
		
		if (pilihan6 == 'U' || pilihan6 == 'u' )
		{
			goto ulang6;
		}
		else if (pilihan6 == 'M' || pilihan6 == 'm')
		{
			goto menu;
		}
		
		case 7:

		ulang7:
		float hari1, hartik;
		
		char pilihan7;
		
		system ("cls");
		cout << "\n\t== Konversi Hari Ke Detik ==";
		
		cout << "\n\n\tMasukan Hari\t: ";
		cin  >> hari1;
		
		hartik = hari1*86400;
		
		cout << "\n\tHasilnya\t: "<<hari1<<" Hari itu sama dengan "<<hartik<<" Detik";
		
		cout << "\n\n\tapakah anda ingin mengulang program / kembali ke menu [U/M] ? ";
		cin  >> pilihan7; 
		
		if (pilihan7 == 'U' || pilihan7 == 'u' )
		{
			goto ulang7;
		}
		else if (pilihan7 == 'M' || pilihan7 == 'm')
		{
			goto menu;
		}
		
		case 8:
	
		ulang8:
		float hari2, harnit;
		
		char pilihan8;
		
		system ("cls");
		cout << "\n\t== Konversi Hari Ke Menit ==";
		
		cout << "\n\n\tMasukan Hari\t: ";
		cin  >> hari2;
		
		harnit = hari2*1440;
		
		cout << "\n\tHasilnya\t: "<<hari2<<" Hari itu sama dengan "<<harnit<<" Menit";
		
		cout << "\n\n\tapakah anda ingin mengulang program / kembali ke menu [U/M] ? ";
		cin  >> pilihan8; 
		
		if (pilihan8 == 'U' || pilihan8 == 'u' )
		{
			goto ulang8;
		}
		else if (pilihan8 == 'M' || pilihan8 == 'm')
		{
			goto menu;
		}
		
		case 9:
		ulang9:
		float hari3, harjam;
		
		char pilihan9;
		
		system ("cls");
		cout << "\n\t== Konversi Hari Ke Detik ==";
		
		cout << "\n\n\tMasukan Hari\t: ";
		cin  >> hari3;
		
		harjam = hari3*24;
		
		cout << "\n\tHasilnya\t: "<<hari3<<" Hari itu sama dengan "<<harjam<<" Jam";
		
		cout << "\n\n\tapakah anda ingin mengulang program / kembali ke menu [U/M] ? ";
		cin  >> pilihan9; 
		
		if (pilihan9 == 'U' || pilihan9 == 'u' )
		{
			goto ulang9;
		}
		else if (pilihan9 == 'M' || pilihan9 == 'm')
		{
			goto menu;
		}
		case 10:
		goto exit;
		
		
		default:
		cout << "\n\tMaaf kode yang anda masukan salah silakan masukan kembali!!";
		goto kode;
		break;
	}
	
	exit:
	system ("cls");
	cout << "\n\n\n\n\t\t== Terimakasi Telah Menggunakan Program Saya =="<<endl;
	cout<<"\t\t\t";
	system ("pause");
	return 0;
	
}
