#include <iostream>
using namespace std;

int countTheNthFibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return countTheNthFibonacci(n - 1) + countTheNthFibonacci(n - 2);
}

void inputTheFirst20Fibonacci(int a[])
{
    for (int i = 0; i <= 19; i++)
    {
        a[i] = countTheNthFibonacci(i);
    }
}

bool isPrime(int n)
{
  if(n<2)
  {
      return false;
  }
  else if (n == 2 || n == 3)
  {
      return true;
  }
  else
  {
      for (int i = 2; i <= sqrt(n); i++)
      {
          if (n % i == 0)
          {
              return false;
          }
      }
  }
  return true;
}

void seperateIntoTwoArrays(int a[], int b[], int c[], int &i1, int &i2)
{
    for (int i = 0; i < 20; i++)
    {
        if (isPrime(a[i]) == true)
        {
            b[i1] = a[i];
            i1++;
        }
        else
        {
            c[i2] = a[i];
            i2++;
        }
    }
}

int main()
{
    int a[20], b[20], c[20];
    int i1 = 0, i2 = 0;
    int checkPrime;
    inputTheFirst20Fibonacci(a);
    cout << "20 so Fibonacci dau tien la: ";
    for (int i = 0; i < 20; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Nhap so can kiem tra so nguyen to: ";
    cin >> checkPrime;
    if (isPrime(checkPrime) == true)
    {
        cout << checkPrime << " la so nguyen to." << endl;
    }
    else
    {
        cout << checkPrime << " khong la so nguyen to." << endl;
    }
    seperateIntoTwoArrays(a, b, c,i1,i2);
    int check = countTheNthFibonacci(19);
    cout << "Cac so nguyen to trong 20 so Fibonacci dau tien la: ";
    for (int i = 0; i < i1; i++)
    {
            cout << b[i] << " ";
    }
    cout << endl;
    cout << "Cac so khong nguyen to trong 20 so Fibonacci dau tien la: ";
    for (int i = 0; i < i2; i++)
    {
            cout << c[i] << " ";
    }
    return 0;
}

