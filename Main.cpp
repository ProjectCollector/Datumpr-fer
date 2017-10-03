#include <iostream>

using namespace std;

int main() {
	int monat;
	int day;
	cout << "Geben Sie den Monat ein: ";
	cin >> monat;
	if (monat <= 7 && monat != 2 && monat%2 != 0 && monat > 0) {
		day = 31;
	}
	else if (monat <= 7 && monat != 2 && monat % 2 == 0 && monat > 0) {
		day = 30;
	}
	else if (monat == 2) {
		day = 29;
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
	cout << "Letzer Tag: " << day << endl;
	
	system("PAUSE");
	return 0;
}