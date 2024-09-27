#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n < 0) {
    	cout << "Factorial is not defined for negative numbers." << endl;
    	return 1;
	}

	long long factorial = 1;
	for (int i = 1; i <= n; i++) {
    	factorial *= i;
	}

	cout << factorial << endl;

	return 0;
}