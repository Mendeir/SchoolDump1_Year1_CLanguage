#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

//declare void
void gotoxy(short x, short y);

int main(){
	char name[255]; //array
	// First Column
	cout << "Term";
	gets(name);
	
	gotoxy (10, 0);
	cout << "School Year";
	gets(name);
	
	//Second Column
	cout << "Student #";
	gets(name);
	
	gotoxy (60, 1);
	cout << "College";
	gets(name);
	
	gotoxy (90, 1);
	cout << "Program";
	gets(name);
	
	// Third Column
	gotoxy (0,2);
	cout << "Name";
	gets(name);
	
	gotoxy (60,2);
	cout << "Year Level";
	gets (name);
	
	// Courses
	gotoxy (0,5);
	cout << "Courses";
	
	gotoxy (0,6);
	cout << "CCS0001";
	
	gotoxy (0,7);
	cout << "CCS0001L";
	
	gotoxy (0,8);
	cout << "CCS0003";
	
	gotoxy (0,9);
	cout << "CCS0003L";
	
	gotoxy (0,10);
	cout << "GED0004";
	
	gotoxy (0,11);
	cout << "GED0009";
	
	gotoxy (0,12);
	cout << "GED0011";
	
	gotoxy (0,13);
	cout << "GED0085";
	
	gotoxy (0,14);
	cout << "NSTP1";
	
	//Title
	gotoxy (10,5);
	cout << "Title";
	
	gotoxy (10,6);
	cout << "INTRODUCTION TO COMPUTING (LEC)";
	
	gotoxy (10,7);
	cout << "INTRODUCTION TO COMPUTING (LAB)";
	
	gotoxy (10,8);
	cout << "COMPUTER PROGRAMMING 1 (LEC)";
	
	gotoxy (10,9);
	cout << "COMPUTER PROGRAMMING 1 (LAB)";
	
	gotoxy (10,10);
	cout << "PHYSICAL EDUCATION 1	";
	
	gotoxy (10,11);
	cout << "READINGS IN PHILIPPINE HISTORY	";
	
	gotoxy (10,12);
	cout << "SCIENCE, TECHNOLOGY AND SOCIETY	";
	
	gotoxy (10,13);
	cout << "GENDER AND SOCIET	";
	
	gotoxy (10,14);
	cout << "CIVIC WELFARE TRAINING SERVICE 1	";
	
	//Section
	gotoxy (45,5);
	cout << "Section";
	
	gotoxy (45,6);
	cout << "N04";
	
	gotoxy (45,7);
	cout << "N04";
	
	gotoxy (45,8);
	cout << "N04";
	
	gotoxy (45,9);
	cout << "N04";
	
	gotoxy (45,10);
	cout << "N04";
	
	gotoxy (45,11);
	cout << "N04";
	
	gotoxy (45,12);
	cout << "N04";
	
	gotoxy (45,13);
	cout << "N04";
	
	gotoxy (45,14);
	cout << "N04";
	
	//Units
	gotoxy (55,5);
	cout << "Units";
	
	gotoxy (55,6);
	cout << "2";
	
	gotoxy (55,7);
	cout << "1";
	
	gotoxy (55,8);
	cout << "2";
	
	gotoxy (55,9);
	cout << "1";
	
	gotoxy (55,10);
	cout << "3";
	
	gotoxy (55,11);
	cout << "3";
	
	gotoxy (55,12);
	cout << "3";
	
	gotoxy (55,13);
	cout << "3";
	
	gotoxy (55,14);
	cout << "0";
	
	//Days
	gotoxy (62,5);
	cout << "Days";
	
	gotoxy (62,6);
	cout << "TH";
	
	gotoxy (62,7);
	cout << "M";
	
	gotoxy (62,8);
	cout << "T";
	
	gotoxy (62,9);
	cout << "T";
	
	gotoxy (62,10);
	cout << "F/T	";
	
	gotoxy (62,11);
	cout << "M/TH";
	
	gotoxy (62,12);
	cout << "M/TH";
	
	gotoxy (62,13);
	cout << "W/W";
	
	gotoxy (62,14);
	cout << "F";
	
	//Time
	gotoxy (70,5);
	cout << "Time";
	
	gotoxy (70,6);
	cout << "07:00:00-09:40:00";
	
	gotoxy (70,7);
	cout << "07:00:00-09:50:00	";
	
	gotoxy (70,8);
	cout << "07:00:00-09:40:00	";
	
	gotoxy (70,9);
	cout << "10:00:00-12:50:00	";
	
	gotoxy (70,10);
	cout << "14:00:00-15:50:00/14:00:00-15:50:00	";
	
	gotoxy (70,11);
	cout << "10:00:00-11:50:00/10:00:00-11:50:00	";
	
	gotoxy (70,12);
	cout << "13:00:00-14:50:00/13:00:00-14:50:00";
	
	gotoxy (70,13);
	cout << "13:00:00-14:50:00/15:00:00-16:50:00";
	
	gotoxy (70,14);
	cout << "08:00:00-12:00:00";
	
	//Room
	gotoxy (107,5);
	cout << "Room";
	
	gotoxy (107,6);
	cout << "F504";
	
	gotoxy (107,7);
	cout << "F1211";
	
	gotoxy (107,8);
	cout << "T711";
	
	gotoxy (107,9);
	cout << "T610";
	
	gotoxy (107,10);
	cout << "GYM / GYM";
	
	gotoxy (107,11);
	cout << "F504 / F504";
	
	gotoxy (107,12);
	cout << "F504 / F504";
	
	gotoxy (107,13);
	cout << "F504 / F504";
	
	gotoxy (107,14);
	cout << "F704";
	
	int a,b,c,d,e,f,total;
	
	a=31986.00;
	b=7879.00;
	c=500.00;
	d=3394.00;
	e=3394.00;
	f=2196.00;
	total= a+b+c+d+e+f;
	
	gotoxy (0,16);
	cout << "Tuition Fee (18)\t\t\t\t" << a;
	
	gotoxy (0,17);
	cout << "Miscellaneous Fee\t\t\t\t" << b;
	
	gotoxy (0,18);
	cout << "Admission Fee\t\t\t\t\t" << c;
	
	gotoxy (0,19);
	cout << "ITE Computer Laboratory Fee (CCS0001)\t\t" << d;
	
	gotoxy (0,20);
	cout << "ITE Computer Laboratory Fee (CCS0003)\t\t" << e;
	
	gotoxy (0,21);
	cout << "NSTP Fee (NSTP1)\t\t\t\t" << f;
	
	gotoxy (0,22);
	cout << "TOTAL ASSESSMENT\t\t\t\t" << total;
	
	system("pause>0");
	return 0;
}

void gotoxy(short x, short y)           //definition of gotoxy function//  
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
