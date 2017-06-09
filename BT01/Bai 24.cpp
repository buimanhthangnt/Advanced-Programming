#include <iostream>
using namespace std;
int main()
{
	int day, month, year, amountOfDay = 0, temp;
	int i;
	cout << "Enter day, month, year: ";
	cin >> day >> month >> year;
	for (i=1; i<=month-1; i++) {
		if ((i<8 && i%2==1) || (i>7 && i%2==0)) {
			amountOfDay += 31;
		}
		else {
			if ((i<8 && i%2==0 && i>2) || (i>7 && i%2==1)) {
				amountOfDay += 30;
			}
			else {
				if ((year%4==0 && year%100!=0) || (year%100==0 && year%400==0)) {
					amountOfDay += 29;
				}
				else {
					amountOfDay += 28;
				}
			}
		}
	}
	amountOfDay += day;
	temp = year - 1 + (year - 1)/4 - (year - 1)/100 + (year - 1)/400  + amountOfDay;
	temp = temp%7;
	switch (temp) {
		case 0: 
			cout << "Date " << day << "/" << month << "/" << year << " is Sunday";
			break;
		case 1: 
			cout << "Date " << day << "/" << month << "/" << year << " is Monday";
			break;
		case 2: 
			cout << "Date " << day << "/" << month << "/" << year << " is Tuesday";
			break;
		case 3: 
			cout << "Date " << day << "/" << month << "/" << year << " is Wednesday";
			break;
		case 4: 
			cout << "Date " << day << "/" << month << "/" << year << " is Thusday";
			break;
		case 5: 
			cout << "Date " << day << "/" << month << "/" << year << " is Friday";
			break;
		case 6: 
			cout << "Date " << day << "/" << month << "/" << year << " is Saturday";
			break;
	}
}
