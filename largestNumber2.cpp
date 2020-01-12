//Determining the largest number improved version

#include <iostream>

using namespace std;

int main () {
	
	int num1, num2, num3;
	
	cout << "ENTER THE NUMBERS YOU WANT TO KNOW THE LARGEST\n";
	
	cout << "\nEnter three numbers: \n";
	cin >> num1 >> num2 >> num3;
	
	if (num1 > num2 && num1 > num3) {
		cout << num1 << " is the largest number.";
	} else if (num2 > num1 && num2 > num3) {
		cout << num2 << " is the largest number.";
	} else {
		cout << num3 << " is the largest number.";
	}
	 
	
	return 0;
}
