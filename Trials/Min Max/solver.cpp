#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int arr[n];
    
	for (int i = 0; i < n; ++i) {
    	cin >> arr[i];
	}
    
	cout << "Max: "
     	<< *max_element(arr, arr + n) << endl;
    	 
	cout << "Min: "
     	<< *min_element(arr, arr + n) << endl;
    	 
	return 0;
}