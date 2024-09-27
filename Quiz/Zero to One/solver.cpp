#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double arr[1000];
    double min_val = 1e9, max_val = -1e9;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    for (int i = 0; i < n; i++) {
        double norm_value = (arr[i] - min_val) / (max_val - min_val);
        cout << fixed << setprecision(6) << norm_value;
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}