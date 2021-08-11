#include <iostream>

using namespace std;


int fibo(int i)
{
      if(i==0)
            return 0;
      else if(i==1)
            return 1;
      else
            return fibo(i-1)+fibo(i-2);
}

int main()
{
      int bil, n, jum_ss = 0;

      cout << "\tFungsi Rekursif Bilangan Fibonacci" << endl;
      cout << "\t==================================" << endl;
      cout << "\nMasukkan jumlah suku    : ";
      cin >> bil;

      //deret fibonacci
      cout << "Deret Fibonacci adalah  : ";
      for (n = 0; n < bil; n++)
      {
            cout << fibo(n) << " ";
      }
      cout << endl;

      cout << "Angka pada index ke - " << n - 1 << " : " << fibo(n - 1) << endl;

      //jumlah seluruh suku
      cout << "Jumlah seluruh suku     : ";
      for (int x = 0; x < bil; x++)
      {
            jum_ss += fibo(x);
      }

      cout << jum_ss; //menampilkan hasil penjumlahan

    system ("pause");
      return 0;
}
