#include <iostream>
using namespace std;

void NhapMang(int a[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

double findAverageValue(int a[], int n)
{
    int Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum += a[i];
    }
    double Average = (double(Sum)) / n;
    return Average;

}
void sortAscending(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int findMaxValue(int a[], int n)
{
    sortAscending(a, n);
    int MaxValue = a[n - 1];
    return MaxValue;
}

int findSecondMaxValue(int a[], int n)
{
    sortAscending(a, n);
    int SecondMaxValue = a[n - 2];
    return SecondMaxValue;
}

int main()
{
    int a[1000], n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    cout << "Nhap cac phan tu cua mang: ";
    NhapMang(a, n);
    cout << "Gia tri trung binh cua mang la : " << findAverageValue(a, n) << endl;
    cout << "Gia tri lon nhat cua mang la: " << findMaxValue(a, n) << endl;
    cout << "Gia tri lon thu hai cua mang la: " << findSecondMaxValue(a, n);
    return 0;
}

