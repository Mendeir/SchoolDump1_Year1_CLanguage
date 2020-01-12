/*
A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.
*/

/*
Print salary
Print year of service

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	float  salary, year, 
	totsal = 0;
	
	cout << setw(60) << "SALARY CALCULATOR" << endl;
	cout << setw(40) << "ENTER YOUR SALARY: ";
	cin >> salary;
	cout << setw(64) << "ENTER YOUR YEAR OF SERVICE IN THE COMPANY: ";
	cin >> year;
	
	if ( year >= 5) {
		
		totsal = salary * .05;
		totsal += salary;
		cout << setw(37) << "YOUR SALARY IS: " << totsal;
	} else {
		cout << setw(37) <<"YOUR SALARY IS: " << salary;
	}
	
	
	return 0;
}
