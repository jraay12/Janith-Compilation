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
int activityTwo()
{

    int C, A, B;
    char choice;
    string S = "Activity 2";
    string E = "Do you want to add another number?(Y/N)";
    do {
    cout << "\t\t\t\t\t\t     " ;
    for (int i=0 ; i < S[i]; i++)
    {
        cout << S[i] ;
        Sleep(30);
    }

    cout << "\n\n\t\t\t\t\tEnter 1st number: ";
    cin >> A;

    cout << "\t\t\t\t\tEnter 2nd number: ";
    cin >> B;

    C = A + B;

    cout << "\t\t\t\t\tThe sum is: " << C << "\n\n";
    cout << "\t\t\t\t\t";
    for (int i=0 ; i < E[i]; i++)
    {
        cout << E[i] ;
        Sleep(10);
    }
    cout << "\n";
    Bar();
    choice = getch();
    system("cls");
    }while (choice == 'Y' || choice == 'y');
    return main();



}

