#include <iostream>
using namespace std;
int f(int& x, int c) {
	c = c - 1;
	if (c == 0) return 1;
	x = x + 1;
	return f(x, c) * x;
}
int main()
{
	int c = 5;
	int& p = c;
	cout << f(p, c) << endl;
	/*
	debug f returned
	Lan 1: 1
	Lan 2: 9
	Lan 3: 81
	Lan 4: 729
	Lan 5: 6561
	*/
}

