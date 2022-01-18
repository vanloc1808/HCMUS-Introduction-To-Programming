#include <iostream>
using namespace std;
int GCD(long long m, long long n)
{
	while (m != n)
	{
		if (n > m)
		{
			n -= m;
		}
		else
		{
			m -= n;
		}
	}
	return m;
}
long long LCM(int m, int n)
{
	return (m * n) / (GCD(m, n));
}
void SumOfTwoFractions(int TuSo1, int MauSo1, int TuSo2, int MauSo2)
{
	long long TuSo_Tong = (TuSo1 * MauSo2 + TuSo2 * MauSo1);
	long long MauSo_Tong = (MauSo1 * MauSo2);
	long long GcdTsVaMs = GCD(TuSo_Tong, MauSo_Tong);
	long long TuSo_RutGon = (TuSo_Tong) / (GcdTsVaMs);
	long long MauSo_RutGon = (MauSo_Tong) / (GcdTsVaMs);
	cout << "Tong hai phan so da nhap la: " << TuSo_RutGon << "/" << MauSo_RutGon;
}

int main()
{
	int gcd1, gcd2;
	cout << "Nhap hai so can tim uoc chung lon nhat: ";
	cin >> gcd1 >> gcd2;
	cout << "Uoc chung lon nhat cua hai so da nhap tinh bang ham la:" << GCD(gcd1, gcd2) << endl;
	int lcm1, lcm2;
	cout << "Nhap hai so can tim boi chung nho nhat: ";
	cin >> lcm1 >> lcm2;
	cout << "Boi chung nho nhat cua hai so da nhap tinh bang ham la: " << LCM(lcm1, lcm2) << endl;
	cout << "Chuong trinh tinh tong cua hai phan so." << endl;
	int TS1, MS1;
	cout << "Nhap lan luot tu so va mau so cua phan so thu nhat: ";
	cin >> TS1 >> MS1;
	int TS2, MS2;
	cout << "Nhap lan luot tu so va mau so cua phan so thu hai: ";
	cin >> TS2 >> MS2;
	SumOfTwoFractions(TS1, MS1, TS2, MS2);

}


