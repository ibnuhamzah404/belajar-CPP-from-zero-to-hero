#include <iostream>
#include <iomanip>

using namespace std; 

int main ()
{
	
	int bilangan;
	int pil, cek, x;
	cout << "\n\t=== Program Mencari Bilangan Genap & Ganjil ===";
	cout << "\n\t1.Bilangan Ganjil";
	cout << "\n\t2.Bilangan Genap";
	cout << "\n\t3.Bilangan Prima";
	cout << "\n\n\tMasukan Pilihan Anda : ";
	cin  >> pil;
	
	switch (pil)
	{
		case 1:
		system ("cls");
		cout << "\n\tMasukan Banyaknya Batasan bilangan: ";
		cin  >> bilangan;
		for (int i = 0; i<bilangan; i++)
		{
			i+=1;
			cout <<setw(10)<<i;
		}
		break;
		
		case 2:
		system ("cls");
		cout << "\n\tMasukan Banyaknya Batasan bilangan: ";
		cin  >> bilangan;
		for (int i = 1; i<bilangan; i++)
		{
			i+=1;
			cout << setw (10)<<i;
		}
		break;
		
		case 3:
		system ("cls");
		int c;
		cout << "\n\tMasukan Banyaknya Batasan bilangan: ";
		cin  >> bilangan;
		
		for(int i=1;i<=bilangan;i++)
		{
			c=0;
			for(int j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					c=c+1;
				}
			}
			if (c==2)cout<< setw (10)<<i;
		}
		
		
	
	}
		 
		system ("pause");
		return 0;
}
	
