#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <conio.h>
#include <ctype.h>
#include "arrayEmployees.h"

#define EMP 1000

int main()
{
    Employees list[EMP];
    initializeEmployees (list);

    int option;

    do
    {
        system ("cls");

        printf ("\t--- MENU EMPLOYEES --- \n\n");
        printf ("1 - Add employee \n\n");
        printf ("2 - Modify employee \n\n");
        printf ("3 - Delete employee \n\n");
        printf ("4 - Sort employee \n\n");
        printf ("5 - Print employees \n\n");
        printf ("6 - Exit \n\n");

        printf("\n Enter a option: ");
        fflush (stdin);
        scanf ("%d", &option);

        switch (option)
        {
            case 1:
                addEmployees (list);
                break;
            case 2:
                modifyEmployees (list);
                break;
            case 3:
                deleteEmployees (list);
                break;
            case 4:
                sortEmployees (list);
                break;
            case 5:
                printSalaryEmployees (list);
                break;
            case 6:
                printf ("\n the program will close \n");
                break;
            default:
                printf ("isn't a valid option \n");
                break;
        }
        system ("pause");
    } while (option != 6);
    return 0;
}
