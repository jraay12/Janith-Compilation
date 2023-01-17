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

int activityThree()
{
    string S = "Activity 3";
    string E = "Do you want to convert another values?[Y/N]";
    float inch, yard, feet, inches;
    char choice;
    do {
    cout << "\t\t\t\t\t\t     " ;
    for (int i=0 ; i < S[i]; i++)
    {
        cout << S[i] ;
        Sleep(30);
    }
    cout << "\n\t\t\t\t\t    Conversion of Measurements \n\n";
    cout << "\n\n\t\t\t\t\tEnter inch value: ";
    cin >> inch;

    cout << "\t\t\t\t\tEnter yard value: ";
    cin >> yard;

    feet = inch / 12;
    inches = yard * 36;

    cout << "\n\n\t\t\t\t\tThe conversion of inches to feet is: " << feet << endl;
    cout << "\t\t\t\t\tThe conversion of yards to inches is: " << inches << endl;
    cout << "\n\n\n\t\t\t\t\t";
    for (int i=0 ; i < E[i]; i++)
    {
        cout << E[i] ;
        Sleep(10);
    }
    cout << "\n";
    Bar();
    choice = getch();
    system("cls");
    }while (choice == 'y' || choice == 'Y');
    return main();
}
