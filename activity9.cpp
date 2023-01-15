#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include "outsidefile.h"
#include <string>
#include <windows.h>


int login()
{

    int a = 0, i = 0;
    char uname[20], c = ' ';
    char pword[20], code[20];
    char user[20] = "Janith";
    char pass[20] = "janith0131";

    do
    {
        system("COLOR 5");
        Color();
        printf("\n\t\t\t\t\t\t Computer Programming 1");
        printf("\n\t\t\t\t\t Student Information Management System \n");
        printf("\n\n\n\t\t\t\t\t Enter Username: ");
        scanf("%s", &uname);
        printf("\n\t\t\t\t\t Enter Password: ");

        while (i < 20)
        {
            pword[i] = getch();
            c = pword[i];
            if (c == 13) break;
            else printf("*");
            i++;
        }

        pword[i] = '\0';
        i = 0;

        if (strcmp(uname, "Janith") == 0 && strcmp(pword, "janith0131") == 0)
        {
            Color();
            printf("\n\n\n\n\t\t\t\t\t Student Information Management System ");
            printf("\n\n\t\t\t\t\t Login Successful!");
            printf("\n\n\n\n\t\t\t\t\t Press any key to continue...");
            getch ();
            break;
        }

        else
        {
            printf("\n\n\n\n\t\t\t\t\t Password Denied!");
            a++;

            getch ();
            system("cls");
        }
    }

    while (a <= 3 );

    if (a > 3)
    {
        Color();
        printf("\n\n\t\t\t\t\t\t Computer Programming 1 \n");
        printf("\n\t\t\t\t\t Student Information Management System \n");
        printf("\n\n\n\t\t\t Sorry, you have entered the wrong username and password four times!  ");

        getch();
        system ("cls");
        return main();
    }

}

using namespace std;
int activityNine ()
{
    login ();
    Color();


    FILE *fp, *ft;

    char another, choice;
    string E = "Press any key to return...";


    struct student
    {
        char first_name[50], last_name[50];
        char course[50];
        char section[50];
        double prelim, midterm, final, average;
    };

    struct student e;
    {
        char xfirst_name[50], xlast_name[50];
        long int recsize;

        fp = fopen ("ITSTUDENT.txt", "rb+");

        if (fp == NULL)
        {
            fp = fopen ("ITSTUDENT.txt", "wb+");

            if (fp == NULL)
            {
                puts("Cannot open file.");
                return 0;
            }
        }

        recsize = sizeof(e);

        while(1)
        {

            system("cls");

            printf("\n\n\t\t\t\t\t\t Computer Programming 1");
            cout << "\n\t\t\t\t\t Student Information Management System";
            cout << "\n\n\t\t\t\t\t\t\t Main Menu";
            cout << endl << endl;
            cout << endl << "\t\t\t\t\t 	Press [A] to Add Records";
            cout << endl << "\t\t\t\t\t 	Press [V] to View Records";
            cout << endl << "\t\t\t\t\t 	Press [M] to Modify Records";
            cout << endl << "\t\t\t\t\t 	Press [D] to Delete Records";
            cout << endl << "\t\t\t\t\t 	Press [X] to Exit Program";
            cout << endl << endl << "\n\n\t\t\t\t\t Select Your Choice: ";
            fflush(stdin);
            choice = getche();

            switch (choice)
            {
            case 'A':
            case 'a':
                fseek(fp, 0, SEEK_END);
                another = 'Y';

                while (another == 'Y' || another == 'y')
                {
                    system("cls");

                    printf("\n\n\t\t\t\t\t\t Computer Programming 1");
                    cout << "\n\t\t\t\t\t Student Information Management System";
                    printf("\n\n\t\t\t\t\t\t\t Add Record");

                    cout << "\n\n\n\t\t\t\t\t Enter the First Name: ";
                    cin >> e.first_name;
                    cout << "\n\t\t\t\t\t Enter the Last Name: ";
                    cin >> e.last_name;
                    cout << "\n\t\t\t\t\t Enter the Course: ";
                    cin >> e.course;
                    cout << "\n\t\t\t\t\t Enter the Section: ";
                    cin >> e.section;
                    cout << "\n\t\t\t\t\t Enter the Prelim Grade: ";
                    cin >> e.prelim;
                    cout << "\n\t\t\t\t\t Enter the Midterm Grade: ";
                    cin >> e.midterm;
                    cout << "\n\t\t\t\t\t Enter the Final Grade: ";
                    cin >> e.final;

                    e.average = ((e.prelim + e.midterm + e.final) / 3);

                    cout << "\n\t\t\t\t\t Average: " << e.average << endl << endl;

                    fwrite (&e, recsize, 1, fp);
                    cout << "\t\t\t\t\t Add another Record (Y/N): ";
                    fflush(stdin);
                    another = getchar();
                }
                break;

            case 'V':
            case 'v':
                system("cls");
                rewind (fp);

                printf("\n\t\t\t\t\t\t Computer Programming 1");
                cout << "\n\t\t\t\t\t Student Information Management System";
                printf("\n\t\t\t\t\t\t\t View Record");

                while (fread (&e, recsize, 1, fp) == 1)
                {
                    cout << endl << endl << "\t\t\t\t\t Name: " << e.first_name << " " << e.last_name;
                    cout << endl << "\t\t\t\t\t Course: " << e.course;
                    cout << endl << "\t\t\t\t\t Section: " << e.section;
                    cout << endl << "\t\t\t\t\t Prelim Grade: " << e.prelim;
                    cout << endl << "\t\t\t\t\t Midterm Grade: " << e.midterm;
                    cout << endl << "\t\t\t\t\t Final Grade: " << e.final;
                    cout << endl << "\t\t\t\t\t Average: " << e.average << endl;
                }

                cout << endl << endl;
                system("pause");
                break;

            case 'M':
            case 'm':
                system ("cls");
                another = 'Y';

                while (another == 'Y' || another == 'y')
                {
                    printf("\n\t\t\t\t\t\t Computer Programming 1 \n");
                    printf("\n\t\t\t\t\t Student Information Management System");
                    printf("\n\n\n\t\t\t\t\t\t     Modify Record");

                    cout << endl << endl << "\t\t\t\tEnter the Last Name of the Student: ";
                    cin >> xlast_name;


                    rewind (fp);
                    while (fread (&e, recsize, 1, fp) == 1)
                    {
                        if (strcmp(e.last_name,  xlast_name) == 0 )
                        {
                            cout << "\n\t\t\t\t\t Enter the New First Name: ";
                            cin >> e.first_name;
                            cout << "\t\t\t\t\t Enter the New Last Name: ";
                            cin >> e.last_name;
                            cout << "\t\t\t\t\t Enter the New Course: ";
                            cin >> e.course;
                            cout << "\t\t\t\t\t Enter the New Section: ";
                            cin >> e.section;
                            cout << "\t\t\t\t\t Enter the Prelim Grade: ";
                            cin >> e.prelim;
                            cout << "\t\t\t\t\t Enter the Midterm Grade: ";
                            cin >> e.midterm;
                            cout << "\t\t\t\t\t Enter the Final Grade: ";
                            cin >> e.final;

                            e.average = ((e.prelim + e.midterm + e.final) / 3);

                            cout << "\t\t\t\t\t Average: " << e.average << endl << endl;

                            fseek (fp, - recsize, SEEK_CUR);
                            fwrite (&e, recsize, 1, fp);
                            break;
                        }


                    }

                    cout << endl << "\t\t\t\t\t Modify Another Record (Y/N): ";
                    fflush (stdin);
                    another = getchar();
                }
                break;

            case 'D':
            case 'd':
                system ("cls");
                another = 'Y';

                while (another == 'Y' || another == 'y')
                {
                    printf("\n\t\t\t\t\t\t Computer Programming 1 \n");
                    cout << "\n\t\t\t\t\t Student Information Management System";
                    printf("\n\n\n\t\t\t\t\t\t\t Delete Record\n\n\n");

                    cout << endl << endl << "\t\t\t\t\t Enter the Last Name of the Student to Delete: ";
                    cin >> xlast_name;

                    ft = fopen ("temp.dat", "wb");

                    rewind (fp);
                    while (fread (&e, recsize, 1, fp) == 1)
                        if (strcmp (e.last_name, xlast_name) != 0)
                        {
                            fwrite (&e, recsize, 1, ft);
                        }

                    fclose (fp);
                    fclose (ft);
                    remove ("ITSTUDENT.txt");
                    rename ("temp.dat", "ITSTUDENT.txt");

                    fp = fopen ("ITSTUDENT.txt", "rb+");

                    fread (&e, recsize, 1, fp);
                    cout << endl << "\n\n\t\t\t\t\t Delete Another Record? (Y/N): ";
                    fflush (stdin);
                    another = getchar();
                }
                break;

            case 'X':
            case 'x':
                fclose (fp);
                system("cls");
                cout << endl << endl << "\n\n\t\t\t\t\t Author: Janith Comaling";
                cout << endl << "\t\t\t\t\t Thank You!";
                cout << "\n\n\t\t\t\t\t";
                for (int i=0 ; i < E[i]; i++)
                {
                    cout << E[i] ;
                    Sleep(10);
                }
                cout << "\n";
                Bar();
                getch();

                while (getch)
                {
                    system("cls");
                    return main();
                }
            }

        }
    };


}
