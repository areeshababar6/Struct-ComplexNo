#include "complex.h"
#include <iostream>
using namespace std;

int main()
{
	complex a;
	a.input();
	a.display();
	cout << " ------------------" << endl;
	complex b;
	b.input();
	b.display();

	
	a.add(b); 
	a.sub(b);

	return 0;
}