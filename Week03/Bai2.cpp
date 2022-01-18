#include <iostream>
using namespace std;
int main()
{
	int soxe, chucngan, ngan, tram, chuc, donvi, nut;
	cout << "Nhap vao so xe gom 5 chu so: ";
	cin >> soxe;
	chucngan = soxe / 10000; soxe = soxe % 10000;
	ngan = soxe / 1000; soxe = soxe % 1000;
	tram = soxe / 100; soxe = soxe % 100;
	chuc = soxe / 10; soxe = soxe % 10;
	donvi = soxe;
	nut = (chucngan + ngan + tram + chuc + donvi) % 10;
	cout << "So nut cua ban la: " << nut;
	return 0;
}