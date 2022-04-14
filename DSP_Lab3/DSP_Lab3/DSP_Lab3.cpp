#include <iostream>
using std::cout;
using std::endl;

int factorial(int a) 
{
	int p = 1;
	for (int i = 1; i <= a; i++)
		p *= i;
	return p;
}

int main()
{
	int n = 8; //cout << "Enter n: "; cin >> n;
	int r = 8; //cout << "Enter r: "; cin >> r;

	int P1 = 1; int P2 = 1;
	P1 = factorial(n); P2 = factorial(n - r);
	int A = P1 / P2;

	cout << "P1 = " << P1 << endl;
	cout << "P2 = " << P2 << endl;
	cout << "A = " << A << endl;
}
