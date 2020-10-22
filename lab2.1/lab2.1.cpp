// Lab_02.cpp
// < Сенишин Михайло >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "a = "; cin >> a; // введення користувачем змінної a

	z1 = (sin(a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a)); // обчислення z1
	z2 = tan(3 * a); // обчислення z2

	cout << endl;
	cout << "z1 = " << z1 << endl; // виведення z1
	cout << "z2 = " << z2 << endl; // виведення z2

	cin.get();
	return 0;
}
