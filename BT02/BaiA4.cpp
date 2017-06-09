#include <iostream>
#include <string>
using namespace std;
int main()
{
	string date;
	int day, month, year, i, j, numberOfInput;
	int oday, omonth, oyear;
	int a[222];
	cin >> date;
	i = 0;
	do {
		i++;
		cin >> a[i];
	}
	while (a[i]!=0);
	numberOfInput = i - 1;
	day = (date[0]-48)*10 + (date[1]-48);
	month = (date[3]-48)*10 + (date[4]-48);
	year = (date[6]-48)*1000 + (date[7]-48)*100 + (date[8]-48)*10 + date[9]-48;
	int maxDay[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if ((year%4==0 && year%100!=0) || (year%4==100 && year%400==0)) maxDay[2] = 29;
	else maxDay[2] = 28;
	oday = day;
	omonth = month;
	oyear = year;
	for (i=1; i<=numberOfInput; i++) {
		day = oday;
		month = omonth;
		year = oyear;
		if ((year%4==0 && year%100!=0) || (year%4==100 && year%400==0)) maxDay[2] = 29;
		else maxDay[2] = 28;
		if (a[i]>0) {
			for (j=1; j<=a[i]; j++) {
				day++;
				if (day==maxDay[month]+1) {
					day = 1;
					month++;
					if (month==13) {
						month = 1;
						year++;
						if ((year%4==0 && year%100!=0) || (year%4==100 && year%400==0)) maxDay[2] = 29;
						else maxDay[2] = 28;
					}
				}
			}
		}
		else {
			for (j=1; j<=-a[i]; j++) {
				day--;
				if (day==0) {
					month--;
					if (month==0) {
						month = 12;
						year--;
						if ((year%4==0 && year%100!=0) || (year%4==100 && year%400==0)) maxDay[2] = 29;
						else maxDay[2] = 28;
					}
					day = maxDay[month];
				}
			}
		}
		if (day<10) cout << 0;
		cout << day;
		cout << "-";
		if (month<10) cout << 0;
		cout << month;
		cout << "-";
		cout << year;
		cout << endl;
	}
}


// test kiem tra

//   02/02/2016
//   365
//   -365
//   -5
//   30
//   120
//   0

// ket qua
// 01-02-2017
// 02-02-2015
// 28-01-2016
// 03-03-2016
// 01-06-2016
