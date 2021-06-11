#include <iostream>
#include <iomanip>
//12/04/19 00:30
//develop by ibnuhamzah
//update on 12/04/19 13:21

using namespace std;

long int faktorial(long int n)
{	
	int simpan_data, simpan;
	if (n == 0)
	{
		simpan_data = 1;
		return simpan_data;
	}
	else
	{
	  simpan_data = n*faktorial(n-1);	
	  return simpan_data;
	}
	
	
}

void hasil_faktorial_rekrusif(long int n)
{
	cout << "\n\t\t Hasil faktorial dari " << n << "!\t: " << faktorial(n);
		
}

void iterasi_faktorial()
{
	int i, f;
	int hasil = 1;
	
	cout << "\n\t\t Masukan n faktorialnya\t\t: ";
	cin  >> f;
	
	for (i = f; i > 1; i-- )
	{
		hasil = hasil * i;
	}
	
	
	cout << "\n\t\t Hasilnya faktorial dari " << f  << "!\t: "<< hasil;
	cout << endl;
	
}

int tail_rekrusif (int n,  int a)
{	
	if (n < 0)
	{
		return 0;
	}
	
	else if ( n == 0)
	{
		return 1;
	}
	
	else if ( n == 1 )
	{
		return a;
	}
	else 
	{
		return tail_rekrusif (n-1, n*a);
	}
	
}

int main ()
{	
	int pil;
	menu:
	system("cls");
	cout << "\n\t\t =========== MENU ============ ";
	cout << "\n\t\t 1.Mencari Faktorial menggunakan rekrusif";
	cout << "\n\t\t 2.Mencari Faktorial menggunakan tail rekrusif";
	cout << "\n\t\t 3.Mencari Faktorial menggunakan iteratif";
	cout << "\n\t\t 4.Exit program";
	cout << "\n\t\t ------------------------------";
	
	cout << "\n\t\t Masukan pilihan anda : ";
	cin  >> pil;
	
	switch (pil)
	{
		case 1: //mencari faktorial dengan rekrusif
		
		long int hasil, input;
		char kondisi1;
	
		cout << "\n\t\t Masukan n faktorialnya\t\t: ";
		cin  >> input;
	
		hasil_faktorial_rekrusif(input);
		cout << endl;
		
		//pengkondisian kembali kemenu / exit

		cout << "\n\t\t Apakah anda ingin kembali kemenu / exit ? [y/n] : ";
		cin  >>  kondisi1;
		
		if (kondisi1 == 'y' || kondisi1 == 'Y')
		{
			goto menu;
		}
		else if (kondisi1 == 'n' || kondisi1 == 'N')
		{
			goto selesai;
		}
	
		break;
		
		case 2:	// mencari faktorial dengan tail rekrusif
		int a , f;
		char kondisi2;
		
		a = 1;
		
		cout << "\n\t\t Masukan faktorialnya : ";
		cin  >> f;
		
		cout << "\n\t\t Hasil faktorial dari " << f << "!\t: " << tail_rekrusif(f,a);
		cout << endl;
		
		cout << "\n\t\t Apakah anda ingin kembali kemenu / exit ? [y/n] : ";
		cin  >>  kondisi2;
		
		//pengkondisian kembali kemenu / exit		
		
		if (kondisi2 == 'y' || kondisi2 == 'Y')
		{
			goto menu;
		}
		else if (kondisi2 == 'n' || kondisi2 == 'N')
		{
			goto selesai;
		}
	
				
		break;
		
		case 3:	//mencari faktorial dengan iteratif
		char kondisi3;
		
		iterasi_faktorial();
		
		cout << "\n\t\t Apakah anda ingin kembali kemenu / exit ? [y/n] : ";
		cin  >>  kondisi3;
		
		//pengkondisian kembali kemenu / exit
		
		if (kondisi3 == 'y' || kondisi3 == 'Y')
		{
			goto menu;
		}
		else if (kondisi3 == 'n' || kondisi3 == 'N')
		{
			goto selesai;
		}
	
		
		break;
		
		case 4:
		
		goto selesai;
		
		break; 
		
		default:
		char kondisi4;
		cout << "\n\t\t Maaf anda salah memasukan pilihan\n\t\t Silakan masukan pilihan kembali!!";
		
	}
	
	selesai:
	system ("pause");
	return 0;
	
}
