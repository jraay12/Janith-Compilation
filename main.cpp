#include <iostream>
#include "outsidefile.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <windows.h>
#include <string>
#include <stdio.h>

using namespace std;

void Color()
{
    system("COLOR 34");
}

void Bar()
{
    system("COLOR 34");

    SetConsoleCP(437);
    SetConsoleOutputCP(437);

    int bar1 =177, bar2 =219;

    cout << "\t\t\t\t\t";
    for (int i =0 ; i < 40; i++)
    {
        cout << (char)bar1;
    }

    cout << "\r";
    cout << "\t\t\t\t\t";
    for (int j = 0; j < 40; j++ )
    {
        cout << (char)bar2;
        Sleep(8);
    }

}
int main()
{
    int choice;

    string J = "Computer Programming 1";
    string S = "Activity Compilation";

    Color();

    cout << "\t\t\t\t\t\t  ";
    for (int i=0 ; i < J[i]; i++)
    {
        cout << J[i] ;
        Sleep(30);
    }

    cout << endl;
    cout << "\t\t\t\t\t\t   ";
    for (int i=0 ; i < S[i]; i++)
    {
        cout << S[i] ;
        Sleep(30);
    }

    cout << "\n\n\n\t\t\t\t\t\tPress [1] To View Activity 1";
    cout << "\n\t\t\t\t\t\tPress [2] To View Activity 2";
    cout << "\n\t\t\t\t\t\tPress [3] To View Activity 3";
    cout << "\n\t\t\t\t\t\tPress [4] To View Activity 4";
    cout << "\n\t\t\t\t\t\tPress [5] To View Activity 5";
    cout << "\n\t\t\t\t\t\tPress [6] To View Activity 6";
    cout << "\n\t\t\t\t\t\tPress [7] To View Activity 7";
    cout << "\n\t\t\t\t\t\tPress [8] To View Activity 8";
    cout << "\n\t\t\t\t\t\tPress [9] To View Activity 9";
    cout << "\n\t\t\t\t\t\tPress [0] To View Activity 10";
    cout << endl << "\n\t\t\t\t\t\t     Press [X] To Exit";
    cout << "\n\n\t\t\t\t\t\t     Enter your choice: ";
    fflush(stdin);
    choice = getch();
    system("cls");


    switch (choice)
    {
    case '1':
        activityOne();
        break;

    case '2':
        activityTwo();
        break;

    case '3' :
        activityThree();
        break;

    case '4' :
        activityFour();
        break;

    case '5' :
        activityFive();
        break;

    case '6' :
        activitySix();
        break;

    case '7' :
        activitySeven();
        break;

    case '8' :
        activityEight();
        break;

    case '9' :
        activityNine();
        break;

    case '0' :
        activityTen();
        break;

    case 'X':
    case 'x':
        exit (0);
        break;

    default:
        cout << "Invalid choice!";
    }

    return 0;
}
