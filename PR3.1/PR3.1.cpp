#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; 
	double y;
	double A; 
	double B; 

	cout << "x = "; cin >> x;

	A = 1 + 9 * x;

	if (x <= 0)
		B = log(abs(sin(x))) + (x * x * x * x * x * x * x);
	if (0 < x && x <= 3)
		B = cos(abs(x + 1) / 2) / sin(abs(x + 1) / 2);
	if (x > 3)
		B = 3 * x - (x * x * x * x * x);
	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	if (x <= 0)
		B = log(abs(sin(x))) + (x * x * x * x * x * x * x);
	else
		if (x > 3)
			B = 3 * x - (x * x * x * x * x);
		else
			B = cos(abs(x + 1) / 2) / sin(abs(x + 1) / 2);

	y = A + B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}
