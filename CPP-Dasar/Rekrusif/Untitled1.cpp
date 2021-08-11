#include <iostream>

using namespace std;
unsigned int pangkat (int x, int y)

{
	int hasil = 1, i;
	
	for (i=1; i<=y; i++)
	{
		hasil = hasil*x;
	}
	return hasil;
}

	main()
	{
		int x, y;
		x = 6;
		y = 4;
		
		cout << x << " Pangkat " << y << " = ";
		cout << pangkat (x, y) <<endl;
		system ("pause");
		return 0;
	}
