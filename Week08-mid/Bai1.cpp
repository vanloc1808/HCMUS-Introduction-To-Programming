#include <iostream>
using namespace std;

long long Factorial(int n) //Tinh giai thua cua n
{
    if (n == 0)
    {
        return 1;
    }
    int i;
    long long F = 1;
    for (int i = 1; i <= n; i++)
    {
        F *= i;
    }
    return F;
}

double powerNOfX(double x, int n) //Tinh luy thua x^n
{
    double S = 1;
    for (int i = 1; i <= n; i++)
    {
        S *= x;
    }
    return S;

}

double countSumWithEvenN(double x, int n)
{
    double ETerm, ESum;
    ESum = 0;
    for (int i = 0; 2*i +1 <= n; i++)
    {
        int temp = 2 * i + 1;
        ETerm = (powerNOfX(x, temp)) / (Factorial(temp));
        ESum += ETerm;
    }
    return ESum;
}

double countSumWithOddN(double x, int n)
{
    double OTerm, OSum;
    OSum = 0;
    for (int i = 1; 2 * i <= n; i++)
    {
        int temp = 2 * i;
        OTerm = (powerNOfX(x, temp)) / (Factorial(temp));
        OSum += OTerm;
    }
    return OSum;
}

int main()
{
    double x;
    int n;
    cout << "Nhap gia tri cua x: ";
    cin >> x;
    cout << "Nhap gia tri cua n: ";
    cin >> n;
    cout << "Gia tri giai thua cua " << n << " la: " << Factorial(n) << endl;
    cout << "Gia tri cua " << x << " luy thua " << n << " la: " << powerNOfX(x, n) << endl;
    cout << "Gia tri tong cac luy thua le cua " << x << " la: " << countSumWithOddN(x, n) << endl;
    cout << "Gia tri tong cac luy thua chan cua " << x << " la: " << countSumWithEvenN(x, n) << endl;
    cout << "Gia tri tong can tim la: " << countSumWithEvenN(x, n) + countSumWithOddN(x, n);
    return 0;
}


