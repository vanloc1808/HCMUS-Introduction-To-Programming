#include <iostream>
using namespace std;
int main()
{
	double p, q, y;
	const double eps = 1e-6;
	double duoican, canbachai, equa;
	cout << "Nhap vao gia tri p, q: ";
	cin >> p >> q;
	duoican = pow(p, 6.0) + pow(q, 2.0);
	canbachai = sqrt(duoican);
	y = pow(canbachai - q, 1.0 / 3) - pow(canbachai + q, 1.0 / 3);
	equa = pow(y, 3) + 3 * p * p * y + 2 * q;
	cout << "y^3 + 3p^2*y + 2q = " << equa << endl;
	if (fabs(equa) <= eps)
	{
		cout << "Ket luan nay la dung.";
	}
	else
	{
		cout << "Ket luan nay la sai.";
	}
}