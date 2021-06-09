//program thats calculates the total days of ones life

#include <iostream>
using namespace std;

int main(){
	int day, month, year;
	int cmonth, cday, cyear;
	int tday, tyear, tmonth;
	
	cout << "enter your day: " << endl;
	cin >> day;
	cout << "enter your month: " << endl;
	cin >> month;
	cout << "enter your year: " << endl;
	cin >> year;
	
	cout << "enter current day: " << endl;
	cin >> cday;
	cout << "enter current month: " << endl;
	cin >> cmonth;
	cout << "enter current year: " << endl;
	cin >> cyear;
	
	tyear = cyear - year;
	tmonth = 12 * tyear;
	tday = 365 * tyear;
	
	cout << "you have lived for " << tday << " days " << tmonth << " months and " << tyear << " years" ;
}
