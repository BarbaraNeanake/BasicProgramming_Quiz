#include <iostream>
#include <string>

using namespace std;

string ngalamReverse(const string& str) {
	string result;
	int i = str.size() - 1;

	while (i >= 0) {
    	if (i >= 1 && str[i - 1] == 'n' && str[i] == 'g') {
        	result += "ng";
        	i -= 2;
    	} else {
        	result += str[i];
        	i--;
    	}
	}

	return result;
}

int main() {
	string str;
	cin >> str;

	string reversedStr = ngalamReverse(str);
	cout << reversedStr << endl;

	return 0;
}
