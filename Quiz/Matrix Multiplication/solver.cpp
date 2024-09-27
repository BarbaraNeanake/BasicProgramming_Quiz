#include <iostream>

using namespace std;

int** matrixMultiplication(int** matrix1, int m, int n, int** matrix2, int p) {
	int** result = new int*[m];
	for (int i = 0; i < m; i++) {
    	result[i] = new int[p];
    	for (int j = 0; j < p; j++) {
        	result[i][j] = 0;
        	for (int k = 0; k < n; k++) {
            	result[i][j] += matrix1[i][k] * matrix2[k][j];
        	}
    	}
	}
	return result;
}

int main() {
	int m, n, p;
	cin >> m >> n;

	int** matrix1 = new int*[m];
	for (int i = 0; i < m; i++) {
    	matrix1[i] = new int[n];
    	for (int j = 0; j < n; j++) {
        	cin >> matrix1[i][j];
    	}
	}

	cin >> n >> p;

	int** matrix2 = new int*[n];
	for (int i = 0; i < n; i++) {
    	matrix2[i] = new int[p];
    	for (int j = 0; j < p; j++) {
        	cin >> matrix2[i][j];
    	}
	}

	int** result = matrixMultiplication(matrix1, m, n, matrix2, p);

	for (int i = 0; i < m; i++) {
    	for (int j = 0; j < p; j++) {
        	cout << result[i][j] << " ";
    	}
    	cout << endl;
	}

	return 0;
}
