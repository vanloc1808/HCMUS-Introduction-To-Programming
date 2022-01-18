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

void addAnElement(int a[], int x, int &n, int i)
{
    for (int j = n; j > i; j--)
    {
        a[j] = a[j - 1];
    }
    a[i] = x;
    n += 1;
    cout << "Mang sau khi them la: ";
    XuatMang(a, n);
}

void deleteAnElement(int a[], int &n, int i)
{
    for (int j = i; j < n; j++)
    {
        a[j] = a[j + 1];
    }
    cout << "Mang sau khi xoa la: ";
    n -= 1;
    XuatMang(a, n);
}

void divideIntoEvenAndOdd(int a[], int n)
{
    int b[1000], c[1000];
    int b1 = 0, b2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[b1] = a[i];
            b1++;
        }
        else
        {
            c[b2] = a[i];
            b2++;
        }
    }
    cout << "Mang toan so chan la: ";
    XuatMang(b, b1);
    cout << "Mang toan so le la: ";
    XuatMang(c, b2);
}

int main()
{
    int a[1000], x, iAdd, iDel, n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    cout << "Nhap cac phan tu cua mang: ";
    NhapMang(a, n);
    cout << "Nhap phan tu can them: ";
    cin >> x;
    cout << "Nhap vi tri can them: ";
    cin >> iAdd;
    addAnElement(a, x, n, iAdd);
    cout << "Nhap vi tri phan tu can xoa: ";
    cin >> iDel;
    deleteAnElement(a, n, iDel);
    divideIntoEvenAndOdd(a, n);
    return 1;
}

