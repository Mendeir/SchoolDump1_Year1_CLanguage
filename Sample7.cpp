#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(short x, short y);    //here we declare the gotoxy function//
int main()
{
 gotoxy(30,16);                      //now where we want to call  gotoxy function //
 cout<< "Hi i am,here";
 return 0;
}
void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
