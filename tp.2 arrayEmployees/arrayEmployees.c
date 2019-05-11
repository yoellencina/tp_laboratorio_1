#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <conio.h>
#include <ctype.h>
#include "arrayEmployees.h"

#define EMP 1000

void initializeEmployees (Employees list[])
{
    int i;

    for (i = 0; i < EMP; i++)
        list[i].isEmpty = 0;
}

int findEmployeeById (Employees list[])
{
    int index = -1;
    int i;

    for (i = 0; i < EMP; i++)
    {
        if (list[i].isEmpty == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}

int asingId (Employees list[])
{
    int maximum = 0;
    int i;

    for (i = 0; i < EMP; i++)
    {
        if (list[i].ID > 0)
            maximum = list[i].ID;
    }
    return maximum + 1;
}

int addEmployees(Employees list[])
{
    int index = findEmployeeById(list);
    int result = 1;

    if (index < 0)
        printf ("there's no space in the system \n");
    else
    {
        printf ("---ADD EMPLOYEE---\n");

        list[index].ID = asingId(list);

        printf ("Enter name: ");
        fflush(stdin);
        gets(list[index].name);

        printf ("Enter last name: ");
        fflush(stdin);
        gets (list[index].lastName);

        printf ("Enter salary: ");
        fflush(stdin);
        scanf ("%f", &list[index].salary);

        printf ("Enter sector: ");
        fflush (stdin);
        scanf ("%d", &list[index].sector);

        list[index].isEmpty = 1;
        system ("cls");
        printf ("SUCCESS!! \n\n");
        result = 0;
    }
    return result;
}

void modifyEmployees (Employees list[])
{
    int i;
    int parameter_id;
    int result = 0;

    printf ("Enter ID: ");
    fflush(stdin);
    scanf ("%d", &parameter_id);

    for (i = 0; i < EMP; i++)
    {
        if (list[i].ID == parameter_id)
        {
            printf ("Enter a new name: ");
            fflush (stdin);
            gets(list[i].name);

            printf ("Enter a new last name: ");
            fflush (stdin);
            gets(list[i].lastName);
            list[i].ID = list[i].lastName;

            printf ("Enter a new salary: ");
            fflush (stdin);
            scanf ("%f", &list[i].salary);
            list[i].ID = list[i].salary;

            printf ("Enter a new sector: ");
            fflush (stdin);
            scanf ("%d", &list[i].sector);
            list[i].ID = list[i].sector;

            list[i].isEmpty == 0;
            result = 1;
            break;
        }
    }
    if (result == 0)
        printf ("ID doesn't exist! \n");
}

void deleteEmployees (Employees list[])
{
    int parameter_id;
    char answer;

    printf("\n Enter ID: ");
    fflush(stdin);
    scanf("%d", &parameter_id);

    if(x == -1 || list[x].isEmpty == 0)
        printf("ID doesn't exist! \n");
    else
    {
        printf("\n ID: %d\tNAME: %s\t LAST NAME: %s\t SALARY: %.2f\t SECTOR: %d", list[x].ID, list[x].name, list[x].lastName, list[x].salary, list[x].sector);
        printf("\n Do you wish to delet it? s/n: ");
        fflush(stdin);
        gets(answer);

        if(answer == 's')\n
        {
            list[x].isEmpty = 0;
            printf("Person deleted from the list \n");
        }
        else
            printf("Action canceled \n");
    }
}

void sortEmployees (Employees list[])
{
     int i;
     int j;
     Employees auxiliary;

     for (i = 0; i < EMP; i++)
     {
         for (j = i+1; j < EMP; j++)
         {
             if (list[i].sector > list[j].sector)
             {
                 auxiliary = list[i];
                 list[i] = list[j];
                 list[j] = auxiliary;
             }
         }
     }
     for (i = 0; i < EMP; i++)
     {
         for (j = i+1; i < EMP; i++)
         {
             if (list[i].sector == list[j].sector)
             {
                 if (strcmp(list[i].lastName, list[j].lastName) > 0)
                 {
                     auxiliary = list[i];
                     list[i] = list[j];
                     list[j] = auxiliary;
                 }
             }
         }
     }
}

float getTotalSalary (Employees list[])
{
    int i;
    float total = 0;

    for (i = 0; i < EMP; i++)
        total += list[i].salary;

    return total;
}

float getMediumSalary(float total, int quantity)
{
    return (float)total / quantity + 1;
}

float getMaximunSalary(Employees list[], float medium)
{
    int i;
    float maximum;

    for (i = 0; i < EMP; i++)
    {
        if(list[i].salary > medium)
            maximum++;
    }

    return maximum;
}

void printSalaryEmployees (Employees list[])
{
    float total = getTotalSalary(list);
    float medium = getMediumSalary(total, EMP);
    float maximum = getMaximunSalary(list, medium);

    printf("\n Total salary paid to all employees is: %.2f", total);
    printf("\n Total medium salary paid: %.2f", medium);
    printf("\n Maximum salary paid: %.2f", maximum);
}
