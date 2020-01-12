#include <iostream>

using namespace std;

int main () {
	
	char letter1;
	int problem;
	float inp1, inp2, inp3, eval = 0;
	
	cout << "PROBLEMS CALCULATOR: Level 1";
	cout << "\n\t1. PROBLEM 1: Check whether square or not" << endl;
	cout << "\t2. PROBLEM 2: Finding the largest between two numbers" << endl;
	cout << "\t3. PROBLEM 3: Shop Discount" << endl;
	cout << "\t4. PROBLEM 4: Salary Calculator" << endl;
	cout << "\t5. PROBLEM 5: Grading System" << endl;
	cout << "\t6. PROBLEM 6: Youngest and Oldest between 3 people" << endl;
	cout << "\t7. PROBLEM 7: Absolute Value of a number" << endl;
	cout << "\t8. PROBLEM 8: Eligible for exam or not" << endl;
	cout << "\t9. PROBLEM 9: Check character if lowercase or uppercase" << endl;
	
	cout << "\n\tENTER THE THE PROBLEM YOU WANT TO CALCULATE: ";
	cin >> problem;

	if (problem == 1) {
		//title
		cout << "\n\t\tSQUARE OR RECTANGLE \n";
		
		//input
		cout << "\t\tEnter the length: ";
		cin >> inp1;
		cout << "\t\tEnther the width: ";
		cin >> inp2;
		
		//condition
		if (inp1 == inp2) {
			cout << "\n\t\tThe shape is a square";
		} else {
			cout << "\n\t\tThe shape is a rectangle";
		}
	} else if (problem == 2) {
		//title 
		cout << "\n\t\tGREATEST OF TWO NUMBERS";
		
		//input
		cout << "\n\t\tEnter the first number: ";
		cin >> inp1;
		
		cout <<"\t\tEnter the second number: ";
		cin >> inp2;
		
		//condition
		
		if (inp1 >= inp2) {
			cout << "\n\t\t" << inp1 << " is the largest number";
		} else {
			cout << "\n\t\t" << inp2 << " is the largest number";
		}
	} else if (problem == 3) {

		//title
		cout << "\n\t\tSHOP DISCOUNT CALCULATOR";
		
		//input
		cout << "\n\t\tEnter the quantity that you want to buy: ";
		cin >> inp1;
		
		//condition
		if (inp1 >= 10) {
			eval = (inp1 * 100) * .90;
			cout << "\n\t\tThe total cost is: " << eval; 
		} else {
			eval = inp1*100;
			cout << "\n\t\tThe total cost is: " << eval;
		}
		
	} else if (problem == 4) {
		//title
		cout << "\n\t\tSALARY CALCULATOR";
		
		//input 
		cout << "\n\t\tEnter the Salary: ";
		cin >> inp1;
		
		cout << "\n\t\tEnter year of service: ";
		cin >> inp2;
		
		//conditon
		if ( inp2 >= 5) {
			eval = inp1 * .05;
			eval += inp1;
			cout << "\n\t\tYour total salary is: " << eval ;
		} else 
			cout << "\n\t\tYour total salary is: " << inp1;
		
	} else if (problem == 5) {
		//title
		cout << "\n\t\tSCHOOL GRADING SYSTEM";
		
		//input
		cout << "\n\t\tEnter your mark: ";
		cin >> letter1;
		
		//condition
		switch (letter1)
		{
			case 'A': 
				cout << "\n\t\t Your grade is above 80";
				break;
			
			case 'B': 
				cout << "\n\t\t Your grade is between 60 to 80";
				break;
			
			case 'C':
				cout << "\n\t\t Your grade is between 50 to 60";
				break;
				
			case 'D':
				cout << "\n\t\t Your grade is between 45 to 50";
				break;
			
			case 'E':
				cout << "\n\t\t Your grade is between 25 to 45";
				break;
			
			case 'F':
				cout << "\n\t\t Your grade is below 25";
				break;
			
			default:
				cout << "\n\t\tInvalid letter (A, B, C, D, E, F only)";
		} 
	} else if (problem == 6) {
		//title
		cout << "\n\t\tYOUNGEST AND OLDEST BETWEEN 3 PEOPLE";
		
		//input
		cout << "\n\t\tEnter P1 age: ";
		cin >> inp1;
		
		cout << "\n\t\tEnter P2 age: ";
		cin >> inp2;
		
		cout << "\n\t\tEnter P3 age: ";
		cin >> inp3;
		
		//condition
		
		if (inp1 >= inp2 && inp1 >= inp3){
			if (inp2 <= inp3){
				cout << "\n\t\tThe oldest is: P1";
				cout << "\n\t\tThe youngest is: P2";
			} else 
				cout << "\n\t\tThe oldest is: P1";
				cout << "\n\t\tThe youngest is: P3";
		} else if (inp2 >= inp1 && inp2 >= inp3) {
			if (inp1 <= inp3){
				cout << "\n\t\tThe oldest is: P2";
				cout << "\n\t\tThe youngest is: P1";
			} else 
				cout << "\n\t\tThe oldest is: P2";
				cout << "\n\t\tThe youngest is: P3" ;
		} else if (inp3 >= inp1 && inp3 >= inp2) {
			if (inp2 <= inp1){
				cout << "\n\t\tThe oldest is: P3";
				cout << "\n\t\tThe youngest is: P2";
			} else 
				cout << "\n\t\tThe oldest is: P3";
				cout << "\n\t\tThe youngest is: P1";
		} else {
			cout << "\n\t\tInvalid statement";
		}
	 
	} else if (problem == 7) {
		//title
		cout << "\n\t\tABSOLUTE VALUE OF A NUMBER";
		
		//input
		cout << "\n\t\tEnter a number: ";
		cin >> inp1;
		
		//condition
		if (inp1 >= 0) {
			cout << "\n\t\tThe absolute value is: " << inp1;
		} else {
			eval = inp1 * (-1);
			cout << "\n\t\tThe absolute value is: " << eval;
		}
		
	} else if (problem == 8) {
		//title
		cout << "\n\t\tELIGIBLE FOR EXAM OR NOT";
		
		//input 
		cout << "\n\t\tEnter the number of classes held: ";
		cin >> inp1;
		
		cout << "\n\t\tEnter the number of classes attended: ";
		cin >> inp2;
		
		
		//Calculation
		eval = (inp2/inp1)*100;
		
		inp1 *= .75;
		
		//condition
		if (inp1 > inp2){	
			cout << "\n\t\tDo you have a medical cause? (Y for yes and N for no) ";
			cin >> letter1;
				if ( letter1 == 'Y') {
					cout << "\n\t\tPercentage of class attended: " << eval << "%";
					cout << "\n\t\tYou are eligible to take the exam";
			} else if (letter1 == 'N') {
					cout << "\n\t\tPercentage of class attended: " << eval << "%";
					cout << "\n\t\tYou are not eligible to take the exam";
			} else {
					cout << "\n\t\tInvalid letter please try again (Y or N only)";
			}
		} else {
				cout << "\n\t\tPercentage of class attended: " << eval <<"%";
				cout << "\n\t\tYou are eligible to take the exam";
		}
		
	} else if (problem == 9) {
		//title
		cout << "\n\t\tCHARACTER CASE CHECKER";
		
		//input
		cout << "\n\t\tPlease enter a character (a-z) or (A-Z) only ";
		cin >> letter1;
		
		//decision
		if (letter1 >= 'A' && letter1 <= 'Z') {
			cout << "\n\t\t" << letter1 << " is a uppercase character";
			
		} else if (letter1 >= 'a' && letter1 <= 'z') {
			cout << "\n\t\t" << letter1 << " is a lowercase character";
		} else {
			cout << "\n\t\tInvalid character please try again";
		}
		
	} else {
		cout << "\n\tInvalid number please try again";
	}
	
	
	return 0;
}
