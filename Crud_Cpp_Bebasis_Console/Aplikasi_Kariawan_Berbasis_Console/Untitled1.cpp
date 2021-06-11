#include <iostream>

using namespace std;

typedef struct
{
	char nama [10];
	char no_id [20];
	char jabatan [30];
	float gaji = 124345;
}data;

typedef struct
{
	char nama[10];
	char nim[20];
	char jurusan[20];
	char fakultas[20];
	float ipk;
}datmas;

int main ()
{
	datmas mahasiswa[100];
	data kariawan[100];

	
	int pil;
	menu:
	system ("cls");
	cout << "\n\t\t ##=========================================##";	
	cout << "\n\t\t ||  DAFTAR MENU DATA KARIAWAN & MAHASISWA  ||";
	cout << "\n\t\t ||  1. Input Data Kariawan                 ||";               
	cout << "\n\t\t ||  2. Input Data Mahasiswa                ||";
	cout << "\n\t\t ||  3. About This Program                  ||";
	cout << "\n\t\t ||  4. Exit                                ||";
	cout << "\n\t\t ##=========================================##";
	cout << "\n\t\t Masukan pilihan anda \t: ";
	cin  >> pil;
	
	switch (pil)
	{
		int input;
		char ulang1;
		
		case 1:
		awal:
		system ("cls");
		cout << "\n\t\t ==== PROGRAM INPUT DAN OUTPUT DATA KARIAWAN =====";
		cout << "\n\n\t\t Masukan Banyaknya Kariawan : ";
		cin  >> input;
			
		for (int i = 1; i <= input; i++)
		{
			cout << "\n\t\t\t==== DATA KARIAWAN KE-" << i << " ====" << endl;
			cout << "\n\t\t Masukan Nama Kariawan\t\t: ";
			cin >> kariawan[i].nama;
			
			cout << "\n\t\t Masukan No ID Kariawan\t\t: ";
			cin  >> kariawan[i].no_id;
			
			cout << "\n\t\t Masukan Jabatan Kariawan\t: ";
			cin  >> kariawan[i].jabatan;
			kariawan[i].gaji/30;
			cout << "\n\t\t Masukan Gaji Kariawan\t\t: Rp.";
			cin  >> kariawan[i].gaji;
			
			cout << "\n\t\t____________________________________________"<<endl;
		}
		system("cls");
		cout << "\n\t\t======== PRINT OUT DATA KARIAWAN ========";
		for (int j = 1; j <= input; j++)
		{
			cout << "\n\n\t\t\t==== DATA KARIAWAN KE-" << j << " ====" << endl;
			
			cout << "\n\t\t Nama\t\t: " << kariawan[j].nama;
			
			cout << "\n\t\t No ID\t\t: " <<  kariawan[j].no_id;
			
			cout << "\n\t\t Jabatan\t: " << kariawan[j].jabatan;
			
			cout << "\n\t\t Gaji\t\t: " << "RP." <<kariawan[j].gaji;
			
			cout << "\n\t\t____________________________________________"<<endl;
		}
		
		ulang:
		cout << "\n\t\t Apakah Anda Ingin Mengulang Program Ini\n\t\t Atau Kembali Kemnu [U/M] ?? ";
		cin  >> ulang1;
		
		if (ulang1 == 'M' || ulang1 == 'm')
		{
			goto menu;
		}
		else if (ulang1 == 'U' || ulang1 == 'u') 
		{
			goto awal;
		}
		else 
		{
			cout << "\n\t\tMaaf Anda Salah Memasukan Input !!";
			goto ulang;
		}
		break;
		
		case 2:
		
		int input2;
		char ulang2;
	
		awal2:
		system ("cls");
		cout << "\n\t\t ==== PROGRAM INPUT DAN OUTPUT DATA MAHASISWA =====";
		cout << "\n\n\n\t\t Masukan Banyaknya Data Mahasiswa\t: ";
		cin  >> input2;
		
		for (int i = 1; i <=input2; i++)
		{
			cout << "\n\n\t\t\t==== DATA MAHASISWA KE-" << i << " ====" << endl;
				
			cout << "\n\t\t Masukan Nama Mahasiswa\t\t: ";
			cin  >> mahasiswa[i].nama;
			
			cout << "\n\t\t Masukan Nim Mahasiswa\t\t: ";
			cin  >> mahasiswa[i].nim;
			
			cout << "\n\t\t Masukan Jurusan Mahasiswa\t: ";
			cin  >> mahasiswa[i].jurusan;
			
			cout << "\n\t\t Masukan Fakultas Mahasiswa\t: ";
			cin  >> mahasiswa[i].fakultas;
			
			cout << "\n\t\t Masukan Ipk Mahasiswa \t\t: ";
			cin  >> mahasiswa[i].ipk;
			
			cout << "\n\t\t____________________________________________"<<endl;
		}		
		system("cls");
		cout << "\n\t\t======== PRINT OUT DATA KARIAWAN ========";
		for (int j = 1; j <= input2; j++)
		{
			cout << "\n\n\t\t\t==== DATA MAHASISWA KE-" << j << " ====" << endl;
			
			cout << "\n\t\t Nama\t\t: " << mahasiswa[j].nama;
			
			cout << "\n\t\t NIM\t\t: " <<  mahasiswa[j].nim;
			
			cout << "\n\t\t Jurusan\t: " << mahasiswa[j].jurusan;
			
			cout << "\n\t\t IPK\t\t: "  << mahasiswa[j].ipk;
			
			cout << "\n\t\t____________________________________________"<<endl;
		}
		
		ulang2:
		cout << "\n\t\t Apakah Anda Ingin Mengulang Program Ini\n\t\t Atau Kembali Kemnu [U/M] ?? ";
		cin  >> ulang2;
		
		if (ulang2 == 'M' || ulang2 == 'm')
		{
			goto menu;
		}
		else if (ulang2 == 'U' || ulang2 == 'u') 
		{
			goto awal2;
		}
		else 
		{
			cout << "\n\t\tMaaf Anda Salah Memasukan Input !!";
			goto ulang2;
		}
		break;
		
		case 3:
		system ("cls");
		cout << "\n\t\t\t ===== ABOUT THIS PROGRAM =====";
		cout << "\n\n\tProgram ini dibuat semata mata untuk\n\tMenyelesaikan sub bab materi";
		cout << "\n\tTentang typedef & struct \n\tPada mata kuliah struktur data";
		cout << "\n\tDevelop By Ibnu Hamzah \n\tTeknik Informatika Uhamka ";
		break;
		
		case 4:
		system ("cls");
		goto selesai;
		break;
	}
	
	selesai:
	system ("pause");
	return 0;
}
