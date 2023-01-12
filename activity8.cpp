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


int activityEight(){

    int slsman_no, percom;
    string slsman_name, dscrptn;
    float mnthly_salary, sllng_prc, mnthly_unit, mnthly_sls, actual_com, net_amount, total_salary;
    string S = "Activity 4";
    string E = "Press any key to return...";

    cout << "\n\t\t\t\t\t\t     " ;
    for (int i=0 ; i < S[i]; i++){
        cout << S[i] ;
    Sleep(30);
    }
    cout << "\n\n\n\t\t\t\t\tInput Salesman No.: ";
    cin >> slsman_no;
    cout << "\t\t\t\t\tInput Salesman Name: ";
    cin >> slsman_name;
    cout << "\t\t\t\t\tInput Monthly Salary: ";
    cin >> mnthly_salary;
    cout << "\t\t\t\t\tInput Decription: ";
    cin >> dscrptn;
    cout << "\t\t\t\t\tInput Selling Price: ";
    cin >> sllng_prc;
    cout << "\t\t\t\t\tInput Monthly Unit: ";
    cin >> mnthly_unit;
    cout << endl;

    mnthly_sls = mnthly_unit * sllng_prc;

    cout << "\t\t\t\t\tMonthly Sales: " << mnthly_sls << endl;

    if (mnthly_sls >= 25000)
    {
        cout << "\t\t\t\t\tPercent of Commission: 25%" << endl;
        percom = 25;
    }
    else if (mnthly_sls >= 20000)
    {
        cout << "\t\t\t\t\tPercent of Commission: 20%" << endl;
        percom = 20;
    }
    else if (mnthly_sls >= 15000)
    {
        cout << "\t\t\t\t\tPercent of Commission: 15%" << endl;
        percom = 15;
    }
    else if (mnthly_sls >= 10000)
    {
        cout << "\t\t\t\t\tPercent of Commission: 10%" << endl;
        percom = 10;
    }
    else if (mnthly_sls >= 5000)
    {
        cout << "\t\t\t\t\tPercent of Commission: 5%" << endl;
        percom = 5;
    }
    else if (mnthly_sls < 5000)
    {
        cout << "\t\t\t\t\tPercent of Commission: 0%" << endl;
        percom = 0;
    }

    switch(percom)
	{
        case 0:
            actual_com = mnthly_sls * 0;
            cout << "\t\t\t\t\tActual Commission: " << actual_com << endl;
            break;

        case 5:
            actual_com = mnthly_sls * 0.05;
            cout << "\t\t\t\t\tActual Commission: " << actual_com << endl;
            break;

        case 10:
            actual_com = mnthly_sls * 0.1;
            cout << "\t\t\t\t\tActual Commission: " << actual_com << endl;
            break;

        case 15:
        	actual_com = mnthly_sls * 0.15;
        	cout << "\t\t\t\t\tActual Commission: " << actual_com << endl;
        	break;

        case 20:
        	actual_com = mnthly_sls * 0.2;
        	cout << "\t\t\t\t\tActual Commission: " << actual_com << endl;
        	break;

        case 25:
        	actual_com = mnthly_sls * 0.25;
        	cout << "\t\t\t\t\tActual Commission: " << actual_com << endl;
        	break;
    }

    net_amount = mnthly_sls - actual_com;
    cout << "\t\t\t\t\tNet Amount: " << net_amount << endl;

    total_salary = mnthly_sls + actual_com;
    cout << "\t\t\t\t\tTotal Salary: " << total_salary << endl;

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
