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

int activityFour()
{
    float c, f, fahrenheit, celsius;
    string S = "Activity 4";
    string E = "Do you want to convert another temperature?[Y/N]";
    char choice;
    do
    {
        cout << "\t\t\t\t\t\t     " ;
        for (int i=0 ; i < S[i]; i++)
        {
            cout << S[i];
            Sleep(30);
        }

        cout << "\n\t\t\t\t\t    Conversion of Temperature \n\n";
        cout << "\n\n\t\t\t\t\tEnter the temperature of celsius: ";
        cin >> c;

        f = (c * 9.0) / 5.0 + 32;

        cout << "\t\t\t\t\tThe conversion to degree fahrenheit is: " << f;

        cout << "\n\n\t\t\t\t\tEnter the temperature of fahrenheit: ";
        cin >> fahrenheit;

        celsius = (fahrenheit - 32) * 5/9;

        cout << "\t\t\t\t\tThe conversion to degree celsius is: " << celsius;
        cout << "\n\n\t\t\t\t\t";
        for (int i=0 ; i < E[i]; i++)
        {
            cout << E[i];
            Sleep(10);
        }
        cout << "\n";
        Bar();
        choice = getch();
        system("cls");
    }
    while (choice == 'y' || choice == 'Y');
    return main();
}
