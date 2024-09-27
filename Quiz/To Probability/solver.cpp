#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double arr[1000];  
    double sum_exp = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum_exp += exp(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        double softmax_value = exp(arr[i]) / sum_exp;
        cout << fixed << setprecision(6) << softmax_value;
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}