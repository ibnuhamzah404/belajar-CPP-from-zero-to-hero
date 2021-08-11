#include <iostream>

using namespace std;

int volumeBalok(int p = 1, int l = 2, int t = 3);

int main ()
{
	cout << "Volume balok adalah : " << volumeBalok(3,4,5);
	cout << "\nVolume balok adalah : " << volumeBalok(3,4);
	cout << "\nVolume balok adalah : " << volumeBalok(3);
}

int volumeBalok(int p, int l, int t)
{
	return p*l*t;
}
