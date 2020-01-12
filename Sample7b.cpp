#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
//function declaration (User defined function)
void gotoxy(short x, short y);    //here we declare the gotoxy function//
int main()
{
	//   x  y    col(x)-80 row(y)-24
  gotoxy(40,10);
 cout<< "Hello there";	
 gotoxy(79,24);                      //now where we want to call  gotoxy function //
 cout<< "Hi i am,here";
 
 return 0;
}
void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
