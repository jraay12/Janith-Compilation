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

int activityFive()
{
    int i, n;
    bool prmnm = true;
    string S = "Activity 5";
    string E = "Input another positive number?[Y/N]";
    char choice;
    do{
    cout << "\t\t\t\t\t\t     " ;
    for (int i=0 ; i < S[i]; i++)
    {
        cout << S[i] ;
        Sleep(30);
    }

    cout << "\n\n\t\t\t\t\tEnter a positive integer:";
    cin >> n;

    if (n == 0 || n == 1)
    {
        prmnm = false;
    }

    for (i = 2; i <= n/2; ++i)
    {
        if (n % i == 0)
        {
            prmnm = false;
            break;
        }
    }

    if (prmnm)
    {
        cout << "\t\t\t\t\t"<< n << " is a prime number.";
    }

    else
    {
        cout << "\t\t\t\t\t" << n << " is not a prime number.";
    }

    cout << "\n\n\t\t\t\t\t";
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
