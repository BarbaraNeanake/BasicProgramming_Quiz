#include <iostream>
#include <string>

using namespace std;

string compress(const string& s) {
	string result;
	int count = 1;

	for (int i = 1; i < s.length(); i++) {
    	if (s[i] == s[i - 1]) {
        	count++;
    	} else {
        	result += s[i - 1] + to_string(count);
        	count = 1;
    	}
	}

	result += s[s.length() - 1] + to_string(count);

	return result;
}

int main() {
	string s;
	cin >> s;

	string compressed = compress(s);

	if (compressed.length() < s.length()) {
    	cout << compressed << endl;
	} else {
    	cout << s << endl;
	}

	return 0;
}