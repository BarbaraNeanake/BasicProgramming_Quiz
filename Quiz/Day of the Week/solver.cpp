#include <iostream>
#include <string>

using namespace std;

int main() {
	int dayNumber;
	cin >> dayNumber;

	string daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	if (dayNumber < 1 || dayNumber > 7) {
    	cout << "Invalid day number." << endl;
	} else {
    	cout << daysOfWeek[dayNumber - 1] << endl;
	}

	return 0;
}