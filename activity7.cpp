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

int activitySeven(){

    int avg;
	float stdnt_no;
	float prelim;
	float midterm;
	float final;
	string frst_name;
	string lst_name;
	string stdnt_course;
	string stdnt_subject;
    string S = "Activity 4";
    string E = "Press any key to return...";


	cout << "\n\t\t\t\t\t\t     " ;
    for (int i=0 ; i < S[i]; i++){
        cout << S[i] ;
    Sleep(30);
    }
	cout << "\n\n\t\t\t\t\tEnter Student Number: ";
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

	switch (avg)
	{
		case 100:
		case 99:
		case 98:
		case 97:
		    cout << "\t\t\t\t\tPoint Equivalent: 1.00" << endl;
		    cout << "\t\t\t\t\tRemarks: Excellent!" << endl;
		    break;

		case 96:
		case 95:
		case 94:
		    cout << "\t\t\t\t\tPoint Equivalent: 1.25" << endl;
		    cout << "\t\t\t\t\tRemarks: Very Good!" << endl;
		    break;

		case 93:
		case 92:
		case 91:
			cout << "\t\t\t\t\tPoint Equivalent: 1.50" << endl;
		    cout << "\t\t\t\t\tRemarks: Very Good!" << endl;
		    break;

		case 90:
		case 89:
		case 88:
			cout << "\t\t\t\t\tPoint Equivalent: 1.75" << endl;
		    cout << "\t\t\t\t\tRemarks: Above Average" << endl;
		    break;

		case 87:
		case 86:
		case 85:
			cout << "\t\t\t\t\tPoint Equivalent: 2.00" << endl;
		    cout << "\t\t\t\t\tRemarks: Above Average" << endl;
		    break;

		case 84:
		case 83:
		case 82:
			cout << "\t\t\t\t\tPoint Equivalent: 2.25" << endl;
		    cout << "\t\t\t\t\tRemarks: Average" << endl;
		    break;

		case 81:
		case 80:
		case 79:
			cout << "\t\t\t\t\tPoint Equivalent: 2.50" << endl;
		    cout << "\t\t\t\t\tRemarks: Average" << endl;
		    break;

		case 78:
		case 77:
		case 76:
			cout << "\t\t\t\t\tPoint Equivalent: 2.75" << endl;
		    cout << "\t\t\t\t\tRemarks: Passing" << endl;
		    break;

		case 75:
			cout << "\t\t\t\t\tPoint Equivalent: 3.00" << endl;
		    cout << "\t\t\t\t\tRemarks: Passing" << endl;
		    break;

		case 74:
		case 73:
		case 72:
			cout << "\t\t\t\t\tPoint Equivalent: 3.25" << endl;
		    cout << "\t\t\t\t\tRemarks: Conditional" << endl;
		    break;

		case 71:
		case 70:
		case 69:
			cout << "\t\t\t\t\tPoint Equivalent: 3.50" << endl;
		    cout << "\t\t\t\t\tRemarks: Conditional" << endl;
		    break;

		case 68:
		case 67:
		case 66:
			cout << "\t\t\t\t\tPoint Equivalent: 3.75" << endl;
		    cout << "\t\t\t\t\tRemarks: Failed" << endl;
		    break;

		case 65:
			cout << "\t\t\t\t\tPoint Equivalent: 4.00" << endl;
		    cout << "\t\t\t\t\tRemarks: Failed" << endl;
		    break;

		default:
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

