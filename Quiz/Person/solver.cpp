#include <iostream>
#include <string>

using namespace std;

struct Person {
	string name;
	int age;
	int height;
};

int main() {
	int n;
	cin >> n;

	Person people[n];

	for (int i = 0; i < n; i++) {
    	cin >> people[i].name >> people[i].age >> people[i].height;
	}

	for (int i = 0; i < n; i++) {
    	cout << "Name: " << people[i].name << ", Age: " << people[i].age << ", Height: " << people[i].height << endl;
	}

	return 0;
}