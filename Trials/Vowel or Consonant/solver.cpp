#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0; 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o') {
            count++;
        }
    }
    
    cout << count << " " << s.length() - count << endl;
    
    return 0;
}