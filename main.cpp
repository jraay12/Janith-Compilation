#include <iostream>
#include "outsidefile.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <windows.h>
#include <string>

using namespace std;

void Color()
{
    system("COLOR 34");
    //int P = 12;

    //HANDLE console_color;
    //console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    //SetConsoleTextAttribute(console_color, P);
}
int main()
{
    int choice;

    string S = "Activity Compilation";

    Color();

    cout << "\t\t\t\t\t\t  ";
    for (int i=0 ; i < S[i]; i++)
    {
        cout << S[i] ;
        Sleep(30);
    }
    cout << "\n\n\n\t\t\t\t\t\t    [1] Activity 1";
    cout << "\n\t\t\t\t\t\t    [2] Activity 2";
    cout << "\n\t\t\t\t\t\t    [3] Activity 3";
    cout << "\n\t\t\t\t\t\t    [4] Activity 4";
    cout << "\n\t\t\t\t\t\t    [5] Activity 5";
    cout << "\n\t\t\t\t\t\t    [6] Activity 6";
    cout << "\n\t\t\t\t\t\t    [7] Activity 7";
    cout << "\n\t\t\t\t\t\t    [8] Activity 8";
    cout << "\n\t\t\t\t\t\t    [9] Activity 9";
    cout << "\n\t\t\t\t\t\t    [0] Activity 10";
    cout << endl << "\n\t\t\t\t\t\t    [X] To Exit";
    cout << "\n\n\t\t\t\t\t\t Enter you choice: ";
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
        cout << "Invalid choices";
    }
    return 0;
}
