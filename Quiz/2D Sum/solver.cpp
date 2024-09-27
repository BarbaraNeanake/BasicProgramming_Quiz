#include <iostream>

using namespace std;

int main() {
	int rows, cols;
	cin >> rows >> cols;

	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++) {
    	arr[i] = new int[cols];
	}

	int sum = 0;
	for (int i = 0; i < rows; i++) {
    	for (int j = 0; j < cols; j++) {
        	cin >> arr[i][j];
        	sum += arr[i][j];
    	}
	}

	cout << "Sum: " << sum << endl;

	return 0;
}
