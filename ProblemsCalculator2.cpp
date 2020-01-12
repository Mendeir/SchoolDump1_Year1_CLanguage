#include <iostream>
#include <math.h>
using namespace std;

int main () {	

	int inp1, inp2, ieval=0, ieval1=0, ieval2=0, problem;
	float finp1, finp2, finp3, finp4, finp5, feval=0, feval1=0, feval2=0;
	double dinp1, dinp2, dinp3, deval = 0;

	cout << "\t\t PROBLEMS CALCULATOR 2 ";
	cout << "\n\n\t\t 1.PROBLEM: Perimeter of a rectangle";
	cout << "\n\t\t 2.PROBLEM: Area of a rectangle";
	cout << "\n\t\t 3.PROBLEM: Enter Radius of a cricle: To find diameter, circumference, and area";
	cout << "\n\t\t 4.PROBLEM: Centimeter to meter and kilometer";
	cout << "\n\t\t 5.PROBLEM: Celcius to Fahrenheit";
	cout << "\n\t\t 6.PROBLEM: Fahrenheit to Celsius";
	cout << "\n\t\t 7.PROBLEM: Days to years to weeks and to days";
	cout << "\n\t\t 8.PROBLEM: Power of any number x ^ y";
	cout << "\n\t\t 9.PROBLEM: Square Root of a number";
	cout << "\n\t\t 10.PROBLEM: Find the third angle given two sides";
	cout << "\n\t\t 11.PROBLEM: Find area of a triangle given its base and height";
	cout << "\n\t\t 12.PROBLEM: Calculate area of an equilateral triangle";
	cout << "\n\t\t 13.PROBLEM: Marks of five subject: total, average, and percentage";
	cout << "\n\t\t 14.PROBLEM: P, T, R calculating simple interest";
	cout << "\n\t\t 15.PROBLEM: P, T, R calculating compound interest";
	
	cout << "\n\n\t\t Enter the Problem You want to calculate: ";
	cin >> problem;
	
	if (problem == 1){
		//title
		cout << "\n\t\t\t Perimeter of a rectangle";
		
		//input
		cout << "\n\t\t\t Enter the length of a rectangle: ";
		cin >> finp1;
		
		cout << "\n\t\t\t Enter the width of a rectangle: ";
		cin >> finp2;
		
		//process
		feval = 2*(finp1+finp2);
		
		//output
		cout << "\n\t\t\t The Perimeter of the rectangle is: " << feval;
		
	} else if (problem == 2) {
		//title 
		cout << "\n\t\t\t Area of a rectangle";
		
		//input
		cout << "\n\t\t\t Enter the length of a rectangle: ";
		cin >> finp1;
		
		cout << "\n\t\t\t Enter the width of a rectangle: ";
		cin >> finp2;
		
		//process
		deval = finp1*finp2;
		
		//output
		cout << "\n\t\t\t The Area of the rectangle is: " << feval;
	} else if (problem == 3) {
		//title
		cout << "\n\t\t\t Enter Radius of a cricle: To find diameter, circumference, and area";
		
		//input 
		cout << "\n\t\t\t Enter the radius of a circle: ";
		cin >> finp1;		
		
		// process
		feval = 2*finp1; //diameter of a circle
		feval1 = 2* M_PI *finp1; // circumference of a circle
		feval2 = M_PI * pow(finp1, 2); // area of a circle
		
		//output
		cout << "\n\t\t\t The diameter of a circle is: " << feval;
		cout << "\n\t\t\t The circumference of a circle is: " << feval1;
		cout << "\n\t\t\t The area of a circle is: " << feval2;
	} else if (problem == 4) {
		//title 
		cout << "\n\t\t\t Centimeter to meter and kilometer";
		
		//input 
		cout << "\n\t\t\t Enter length in centimeter: ";
		cin >> finp1;
		
		//process
		feval = finp1/100.0; //conversion to meter
		feval1 = finp1/100000.0; // conversion to kilometer
		
		//output
		cout << "\n\t\t\t Length in meter: " << feval;
		cout << "\n\t\t\t Length in kilometer: " << feval1;
	} else if (problem == 5) {
		//title 
		cout << "\n\t\t\t Degree celsius to fahrenheit";
		
		//input
		cout << "\n\t\t\t Enter temperature in Celsius: ";
		cin >> finp1;
		
		//process
		feval = (finp1 * 9/5) + 32; //celsius to fahrenheit
		
		//output
		cout << "\n\t\t\t Temperature in Fahrenheit: " << feval << " F";
	} else if (problem == 6) {
		//title 
		cout << "\n\t\t\t Fahrenheit to Celsius";
		
		//input
		cout << "\n\t\t\t Enter temperature in Fahrenheit: ";
		cin >> finp1;
		
		//process
		feval = (finp1 - 32) * 5 / 9; //fahrenheit to celsius
		
		//output
		cout << "\n\t\t\t Temperature in Celsius: " << feval << " C";
	} else if (problem == 7) {
		//title
		cout << "\n\t\t\t Days to years, weeks, and days";
		
		//input
		cout << "\n\t\t\t Enter days: ";
		cin >> inp1;
		
		//process
		ieval = inp1 / 365; //years
		ieval2 = inp1 % 365; // days
		ieval1 = ieval2 / 7; //weeks
		ieval2 = ieval2 % 7; //days
	
		
		//output
		cout << "\n\t\t\t " << inp1 << " days = " << ieval << " year/s " << ieval1 << " week/s " << ieval2 << " day/s ";
	} else if (problem == 8) {
		//title 
		cout << "\n\t\t\t Power of any number";
		
		//input
		cout << "\n\t\t\t Enter the base: ";
		cin >> finp1;
		
		cout << "\n\t\t\t Enter the exponent: ";
		cin >> finp2;
		
		//process
		feval = pow (finp1, finp2); //power of a number
		
		//output
		cout << "\n\t\t\t The power of " << finp1 << " by " << finp2 << " is: " << feval;
	} else if (problem == 9) {
		//title 
		cout << "\n\t\t\t Square root of a number";
		
		//input
		cout << "\n\t\t\t Enter a number you want to find the square root: ";
		cin >> finp1;
		
		//process
		feval = sqrt (finp1); // square root of a number
		
		//output
		cout << "\n\t\t\t The square root of " << finp1 << " is " << feval;
	} else if (problem == 10) {
		//title
		cout << "\n\t\t\t Finding the third angle given two sides";
		
		//input 
		cout << "\n\t\t\t Enter the first angle: ";
		cin >> finp1;
		
		cout << "\n\t\t\t Enter the second angle: ";
		cin >> finp2;
		
		//process
		feval = 180 - (finp1 + finp2); //third angle calculation
		
		//output
		cout << "\n\t\t\t The third angle is: " << feval << " degrees";
		
	} else if (problem == 11) {
		//title 
		cout << "\n\t\t\t Area of a triangle given base and height";
		
		//input
		cout << "\n\t\t\t Enter the base of the triangle: ";
		cin >> finp1;
		
		cout << "\n\t\t\t Enter the height of the triangle: ";
		cin >> finp2;
		
		//process
		feval = (finp1 * finp2) / 2; //area of triangle
		
		//output
		cout << "\n\t\t\t The area of the triangle is: " << feval << " sq. units";
	} else if (problem == 12) {
		//title 
		cout << "\n\t\t\t Area of an equilateral triangle";
		
		//input
		cout << "\n\t\t\t Enter the side of the equilateral triangle: ";
		cin >> finp1;
		
		//process
		feval = (sqrt(3) / 4) * pow(finp1, 2); //area calculation
		
		//output
		cout << "\n\t\t\t Area of equilateral triangle is: " << feval << " sq units.";
	} else if (problem == 13) {
		//title
		cout << "\n\t\t\t Marks of five subjects";
		
		//input
		cout << "\n\t\t\t Enter the marks of five subjects: ";
		cin >> finp1 >> finp2 >> finp3 >> finp4 >> finp5;
		
		//process
		feval = finp1 + finp2 + finp3 + finp4 + finp5; //total 
		feval1 = feval / 5; //average
		feval2 = (feval / 500) * 100.00; // percentage
		
		//output
		cout << "\n\t\t\t Total = " << feval;
		cout << "\n\t\t\t Average = " << feval1; 
		cout << "\n\t\t\t Percentage= " << feval2 << "%";
	} else if (problem == 14) {
		//title
		cout << "\n\t\t\t Simple interest calculator";
		
		//input
		cout << "\n\t\t\t Enter Principle: ";
		cin >> finp1;
		
		cout << "\t\t\t Enter time: ";
		cin >> finp2;
		
		cout << "\t\t\t Enter rate: ";
		cin >> finp3;
		
		//process
		feval = (finp1 * finp2 * finp3) / 100.00; //simple interest calculation
		
		//output
		cout << "\n\t\t\t Simple Interest = " << feval;
		
	} else if (problem == 15) {
		//title
		cout << "\n\t\t\t Compound interest calculator";
		
		//input 
		cout << "\n\t\t\t Enter Principle: ";
		cin >> finp1;
		
		cout << "\t\t\t Enter time: ";
		cin >> finp2;
		
		cout << "\t\t\t Enter rate: ";
		cin >> finp3;
		
		//process
		feval = finp1 * (pow ((1 + (finp3/100)), finp2)); //compound interest calculator
		
		//output
		cout << "\n\t\t\t Compund Interest = " << feval;
		
	} else {
		cout << "\n\t\t Invalid number please enter no.s 1-15 only";
	}
	
	return 0;
}
