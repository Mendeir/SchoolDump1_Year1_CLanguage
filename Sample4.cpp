//create a program to compute for the avarage of 3 numbers
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	float avg;
	cout << "Enter three numbers: \n";
	cin >> a >> b >> c;	
	avg = (a+b+c)/3;
	cout << "\naverage of " <<a<<" "<<b<<" "<<c<<"is "<<avg;
	avg = (a+b+c)/3.0;
	cout << "\naverage of " <<a<<" "<<b<<" "<<c<<"is "<<avg;
	return 0;
}
