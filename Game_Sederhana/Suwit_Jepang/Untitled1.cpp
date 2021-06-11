#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	
	int pil,player;
	
	
		cout << "\n\t\t=== MENU PILIHAN === ";
		cout << "\n\t\t1.Gunting";
		cout << "\n\t\t2.Kertas";
		cout << "\n\t\t3.Batu";

	while(true)
	{
		int comp =  (1 + (rand()%3));
		
		cout << comp;

		cout << "\n\n\t\tMasukan pilihan anda : ";
		cin  >> player;
		
		if (comp == player)
		{
			if (comp == 1 && player == 1)
			{
				cout << "\n\t\tCOMP : GUNTING  vs Player : GUNTING";
				cout << "\n\t\tANDA SERI";
			}
			else if(comp == 2 && player == 2)
			{
				cout << "\n\t\tCOMP : KERTAS  vs Player : KERTAS";
				cout << "\n\t\tANDA SERI";
			}
			else 
			{
				cout << "\n\t\tCOMP : BATU vs Player : BATU";
				cout << "\n\t\tANDA SERI";
			}
		}
		else if ( comp == 1)
		{
			if (player == 2 )
			{
				cout << "\n\t\tCOMP : GUNTING  vs Player : KERTAS";
				cout << "\n\t\tMAFF ANDA KALAH";
			}
			else 
			{
				cout << "\n\t\tCOMP : GUNTING & Player : BATU";
				cout << "\n\t\tSELAMAT ANDA MENANG";
			}
		}
		else if (comp == 2)
		{
			if (player == 1)
			{
				cout << "\n\t\tCOMP : KERTAS vs Player : GUNTING";
				cout << "\n\t\tSELAMAT ANDA MENANG";
			}
			else 
			{
				cout << "\n\t\tCOMP : KERTAS vs Player : BATU";
				cout << "\n\t\tMAAF ANDA KALAH";
			}
		}
		else if(comp == 3)
		{
			if (player == 1)
			{
				cout << "\n\t\tCOMP : BATU vs Player : GUNTING";
				cout << "\n\t\tMAFF ANDA KALAH";
			}
			else
			{
				cout << "\n\t\tCOMP : BATU vs Player : KERTAS";
				cout << "\n\t\tSELAMAT ANDA MENANG";
			} 
		}	
	
	}
	system("pause");
	return 0;
}
