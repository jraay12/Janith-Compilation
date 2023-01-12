#include <iostream>
#include "outsidefile.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

int activitySix(){

    float stdnt_no;
	float prelim;
	float midterm;
	float final;
	float avg;
	string frst_name;
	string lst_name;
	string stdnt_course;
	string stdnt_subject;
	string S = "Activity 4";
    string E = "Press any key to return...";

	cout << "\t\t\t\t\t\t     " ;
    for (int i=0 ; i < S[i]; i++){
        cout << S[i] ;
    Sleep(30);
    }
	cout << "\n\n\n\t\t\t\t\tEnter Student Number: ";
	cin >> stdnt_no;
	cout << "\t\t\t\t\tEnter First Name: ";
	cin >> frst_name;
	cout << "\t\t\t\t\tEnter Last Name: ";
	cin >> lst_name;
	cout << "\t\t\t\t\tEnter Student Course: ";
	cin >> stdnt_course;
	cout << "\t\t\t\t\tEnter Student Subject: ";
	cin >> stdnt_subject;
	cout << "\t\t\t\t\tEnter Prelim Grade: ";
	cin >> prelim;
	cout << "\t\t\t\t\tEnter Midterm Grade: ";
	cin >> midterm;
	cout << "\t\t\t\t\tEnter Final Grade: ";
	cin >> final;

	avg = ((prelim + midterm + final)/3);

	cout << "\n\t\t\t\t\tAverage: " << avg << endl;

	if (avg >= 97)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 1.00" << endl;
		cout << "\t\t\t\t\tRemarks: Excellent!" << endl;
	}
	else if (avg >= 94)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 1.25" << endl;
		cout << "\t\t\t\t\tRemarks: Very Good!" << endl;
	}
	else if (avg >= 91)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 1.50" << endl;
		cout << "\t\t\t\t\tRemarks: Very Good!" << endl;
	}
	else if (avg >= 88)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 1.75" << endl;
		cout << "\t\t\t\t\tRemarks: Above Average" << endl;
	}
	else if (avg >= 85)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 2.00" << endl;
		cout << "\t\t\t\t\tRemarks: Above Average" << endl;
	}
	else if (avg >= 82)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 2.25" << endl;
		cout << "\t\t\t\t\tRemarks: Average" << endl;
	}
	else if (avg >= 79)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 2.50" << endl;
		cout << "\t\t\t\t\tRemarks: Average" << endl;
	}
	else if (avg >= 76)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 2.75" << endl;
		cout << "\t\t\t\t\tRemarks: Passing" << endl;
	}
	else if (avg >= 75)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 3.00" << endl;
		cout << "\t\t\t\t\tRemarks: Passing" << endl;
	}
	else if (avg >= 72)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 3.25" << endl;
		cout << "\t\t\t\t\tRemarks: Conditional" << endl;
	}
	else if (avg >= 69)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 3.50" << endl;
		cout << "\t\t\t\t\tRemarks: Conditional" << endl;
	}
	else if (avg >= 66)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 3.75" << endl;
		cout << "\t\t\t\t\tRemarks: Failed" << endl;
	}
	else if (avg >= 65)
	{
		cout << "\t\t\t\t\tPoint Equivalent: 4.00" << endl;
		cout << "\t\t\t\t\tRemarks: Failed" << endl;
	}
	else
	{
		cout << "\t\t\t\t\tPoint Equivalent: 5.00" << endl;
		cout << "\t\t\t\t\tRemarks: Failed" << endl;
	}

	cout << "\n\n\t\t\t\t\t";
    for (int i=0 ; i < E[i]; i++){
            cout << E[i] ;
        Sleep(10);
        }
    getch();

    while (getch){
        system("cls");
        return main();
    }


}
