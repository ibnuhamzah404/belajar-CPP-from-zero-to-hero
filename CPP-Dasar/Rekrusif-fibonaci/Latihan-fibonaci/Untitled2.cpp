#include <iostream>
#include <iomanip>

using namespace std;

int fibonaci_rekrusif (int f)
{
	if (f == 0 )
	{
		return 0;
	}
	else if (f == 1)
	{
		return 1;
	}
	else
	{
		return fibonaci_rekrusif(f-1) + fibonaci_rekrusif(f-2);
	}
}

int main()
{
	int input, index, i, jum_ss = 0;

	
	cout << "\n\t\tMasukan n fibonaci : ";
	cin   >> input;
	
	for (i = 0; i < input; i++)
	{
		cout << setw(7) << fibonaci_rekrusif(i) << " ";
	}
	cout << endl;
	
	cout << "\n\t\tAngka terakhir yaitu index ke - " << i - 1 << " : " << fibonaci_rekrusif(i - 1) << endl;
	
	cout << "\n\t\tCari angka pada index( ) : ";
	cin  >> index;
	
	cout << "\n\t\tAngka yang ditemukan pada index ke-" << index << " adalah : "<< fibonaci_rekrusif(index);
	
	cout << "\n\t\tjumblah seluruh fibonaci adalah ";
	
	cout << "Jumlah seluruh suku     : ";
    for (int x = 0; x < input; x++)
    {
            jum_ss += fibonaci_rekrusif(x);
    }

    cout << jum_ss; 

	
}
