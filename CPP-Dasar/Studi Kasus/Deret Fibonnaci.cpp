#include <iostream>

using namespace std;

int main ()
{
	int n;
	int f_n;
	int f_n1, f_n2;
	f_n1 = 1;
	f_n2 = 0;
	
	cout << "== Program Fibonnaci =="<<endl;
	cout << "Masukan Nilai Ke-n : ";
	cin  >> n;
	
	f_n = f_n1 + f_n2;
	cout << f_n << " ";
	for (int i = 0; i <= n; i++)
	{
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
		
	}
	
}
