#include "complex.h"
#include<iostream>
using namespace std;

void complex::input()
{
	cout << "enter real no :";
	cin >> a;
	cout << " enter complex no:";
	cin >> b;

}
void complex::display()
{
	cout << "real part:" << a << endl;
	cout << "img part:" << b << endl;
	cout << a << " + (" << b << "i)";
	cout << endl;
}

void complex::add(complex& c2)
{
	cout << " ------------------" << endl;
	cout << " real part:"<< a + c2.a << endl;
	cout << "img part:" << b + c2.b << endl;
	cout << a + c2.a << " + (" << b + c2.b << "i)" << endl;
}
void complex::sub(complex& c2)
{
	cout << " ------------------" << endl;
	cout << " real part:" << a - c2.a << endl;
	cout << "img part:" << b - c2.b << endl;
	cout << a - c2.a << " + (" << b - c2.b << "i)" << endl;
}