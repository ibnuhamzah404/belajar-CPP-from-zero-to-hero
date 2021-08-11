#include <iostream>

using namespace std;

int main ()
{
	int a = 3, b = 2;
	
	bool hasil1, hasil2;
	
	// dibaca a = 3 maka hasilnya true
	cout << (a == 3) << endl;
	//dibaca a bukan 3 maka hasilnya false
	cout << !(a == 3) << endl;
	
	// and atau &&
	// kesimpulannya and : kedua nilai harus benar untuk menghasil kan true
	
	cout << "\n==operator logika and=="<<endl;
	hasil1 = (a == 3) and (b == 2); // true and true
	cout << hasil1<<endl;
	hasil2 = (a == 4) and (b == 2); // false and true
	cout << hasil2 << endl;
	hasil1 = (a == 3) and (b == 4); //true and false
	cout << hasil1 << endl;
	hasil2 = (a == 4) and (b == 4); //false and false 
	cout << hasil2<<endl;
	
	//or atau ||
	// kesimpulan or : salah satu nilai sudah true maka hasilnya true
		
	cout << "\n==operator logika or=="<<endl;
	hasil1 = (a == 3) or (b == 2); // true and true
	cout << hasil1<<endl;
	hasil2 = (a == 4) or (b == 2); // false and true
	cout << hasil2 << endl;
	hasil1 = (a == 3) or (b == 4); //true and false
	cout << hasil1 << endl;
	hasil2 = (a == 4) or (b == 4); //false and false 
	cout << hasil2<<endl;
	
	system ("pause");
	return 0;
}
