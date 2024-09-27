#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a ;
	int leap_check = a % 4;
    
	if(leap_check == 0){
    	cout << "Leap Year" << endl;
	}
	else{
    	cout << "Normal Year" << endl;
	}
    
	return 0;
}