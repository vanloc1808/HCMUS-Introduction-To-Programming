#include <iostream>
using namespace std;
//cau a
void InAndOutAFraction(int TS, int MS)
{
    int TS, MS;
    cout << "Nhap vao tu so cua phan so: ";
    cin >> TS;
    cout << "Nhap vao mau so cua phan so: ";
    cin >> MS;
    if (MS == 0)
    {
        cout << "Vi mau so bang 0 nen yeu cau nhap lai!!";
    }
    else
    {
        cout << "Phan so vua nhap la: " << TS << "/" << MS << endl;
    }
}

//cau b
int GreatestCommonDivisor(int gcd1, int gcd2)
{
    while (gcd1 != gcd2)
    {
        if (gcd1 > gcd2)
        {
            gcd1 -= gcd2;
        }
        else
        {
            gcd2 -= gcd1;
        }
    }
    return gcd1;
}

//cau c
void SumAndDifferenceOfTwoFractions()
{
    int TS1, MS1, TS2, MS2;
    cout << "Tinh tong va hieu hai phan so." << endl;
    cout << "Nhap vao lan luot tu so va mau so cua phan so thu nhat: ";
    cin >> TS1 >> MS1;
    cout << "Nhap vao lan luot tu so va mau so cua phan so thu hai: ";
    cin >> TS2 >> MS2;
    long long SumNumerator = TS1 * MS2 + TS2 * MS1;
    long long Denominator = MS1 * MS2;
    long long GcdSum = GreatestCommonDivisor(SumNumerator, Denominator);
    long long ReducedSumNumerator = (SumNumerator / GcdSum);
    long long ReducedDenonimator = (Denominator / GcdSum);
    cout << "Tong cua hai phan so da nhap la: " << ReducedSumNumerator << "/" << ReducedDenonimator << endl;
    long long DifNumerator = TS1 * MS2 - TS2 * MS1;
    long long GcdDif = GreatestCommonDivisor(DifNumerator, Denominator);
    long long ReducedDifNumerator = (DifNumerator / GcdDif);
    cout << "Hieu cua hai phan so da nhap la: " << ReducedDifNumerator << "/" << ReducedDenonimator;
}
int main()
{
    InAndOutAFraction();
    int gcd1, gcd2;
    cout << "Nhap hai so can tim uoc chung lon nhat: ";
    cin >> gcd1 >> gcd2;
    cout << "Uoc chung lon nhat cua hai so can tim la: " << GreatestCommonDivisor(gcd1, gcd2) << endl;
    SumAndDifferenceOfTwoFractions();
    return 0;
}

