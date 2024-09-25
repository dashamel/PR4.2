//Лабораторна робота 4.2
// Мельник
// Тема: Табуляція функції, заданої формулою: функція однієї змінної
// 10 варіант
//послідовно
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 4.95 * (x *x);
		if (x < -3.5)
			B = 4.0 + pow(x, -2);
		else
			if (-3.5 <= x < 1)
				B = tan((3.5 + x) / 5);
			else
				if (x >= 1)
					B = sin(3 * x) - cos(x);
		y = A + B;
		cout << "|" << setw(5) << setprecision(1) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}