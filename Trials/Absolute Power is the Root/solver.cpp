#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y;
	cin >> x >> y;

	double power = pow(x, y);
	double squareRoot = sqrt(x);
	double absoluteDifference = abs(x - y);

	cout << power << " " << squareRoot << " " << absoluteDifference << endl;

	return 0;
}
