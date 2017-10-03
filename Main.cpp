#include <iostream>

using namespace std;

int main() {
	int monat;
	int day;
	int getday;
	int trueDate;
	int year;
	bool switchyear;
	
	//Input and Question

	cout << "Geben Sie den Tag ein: ";
	cin >> getday;
	cout << "Geben Sie den Monat ein: ";
	cin >> monat;
	cout << "Geben Sie ein Jahr ein: ";
	cin >> year;

	// Processing 

	if ((year % 4 == 0 && !(year%100 == 0)) || year%400 == 0) {
		switchyear = true;
	}
	else {
		switchyear = false;
	}

	if (monat <= 7 && monat != 2 && monat%2 != 0 && monat > 0) {
		day = 31;
	}
	else if (monat <= 7 && monat != 2 && monat % 2 == 0 && monat > 0) {
		day = 30;
	}
	else if (monat == 2 && !switchyear) {
		day = 29;
	}
	else if (monat == 2 && switchyear) {
		day = 28;
	}
	else if (monat > 7 && monat % 2 == 0 && monat < 13) {
		day = 31;
	}
	else if(monat > 7 && monat % 2 != 0 && monat < 13) {
		day = 30;
	}
	else {
		day = 0;
	}



	//Output

	cout << "Letzer Tag: " << day << endl;
	if (getday > 0 && getday <= day) {
		cout << "Das Datum ist richtig" << endl;
	}
	else {
		cout << "Das Datum ist falsch" << endl;
	}
	
	system("PAUSE");
	return 0;
}