#include <iostream>
#include <cmath>
using namespace std;

//cau a
long long Factorial(int n)
{
	long long Facto = 1;
	for (int i = 1; i <= n; i++)
	{
		Facto *= i;
	}
	return Facto;
}

//cau b1
double SumOfInverseFactorial(int n)
{
	double S = 0;
	for (int i = 1; i <= n; i++)
	{
		double a = (1.0) / (Factorial(i));
		S += a;
	}
	return S;
}

//cau b2
double AlternatingSignOfInverseFactorial(int n)
{
	double S = 0;
	for (int i = 1; i <= n; i++)
	{
		double a = (pow(-1.0, i - 1)) / (Factorial(i));
		S += a;
	}
	return S;
}

//cau b3
double  AlternatingSignOfInverseFactorialWithAnX(double x, int n)
{
	double S = 0;
	for (int i = 1; i <= n; i++)
	{
		double a = (pow(-x, i)) / (Factorial(i));
		S += a;
	}
	return S;
}

//cau b4
double AlternatingSignOfInverseSumWithAnX(double x, int n)
{
	double S = 0;
	for (int i = 1; i <= n; i++)
	{
		int S1 = (i * (i + 1)) / 2;
		double a = pow(-x, i) / (S1);
		S += a;
	}
	return S;
}

int main()
{
	double x;
	int n;
	cout << "Nhap lan luot gia tri cua x va n: ";
	cin >> x >> n;
	cout << "a. n! = " << Factorial(n) << endl;
	cout << "b1. S = " << SumOfInverseFactorial(n) << endl;
	cout << "b2. S =  " << AlternatingSignOfInverseFactorial(n) << endl;
	cout << "b3. S(x,n) = " << AlternatingSignOfInverseFactorialWithAnX(x, n) << endl;
	cout << "b4. S(x,n)= " << AlternatingSignOfInverseSumWithAnX(x, n);
	return 0;
}


