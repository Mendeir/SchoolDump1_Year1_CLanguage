//character -> 1
//string -> more than 1
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char x;  //return 1 value character
	char name[255];  //array
	cout << "Enter a character ";
	cin >> x;
	cout << "Value of x is " << x << endl ;
	
	cout << "Enter your name ";
	cin >> name;
	cout << "your name is " << name << endl;
	
	cin.ignore();
	cout << "Enter your name ";
	gets(name);
	cout << "your name is " << name ;
	return 0;
}
