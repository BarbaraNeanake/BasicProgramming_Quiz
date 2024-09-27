#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int digit_count = 0, char_count = 0;

    for (char c : s) {
        if (isdigit(c)) {
            digit_count++;
        } else if (isalpha(c)) {
            char_count++;
        }
    }
    
    cout << digit_count << " " << char_count << endl;

    return 0;
}
