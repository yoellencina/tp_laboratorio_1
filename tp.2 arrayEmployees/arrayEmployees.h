#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int ID;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
} Employees;

void initializeEmployees (Employees[]);
int findEmployeeById (Employees[]);
int asingId (Employees[]);
int addEmployees(Employees[]);
void modifyEmployees (Employees[]);
void deleteEmployees (Employees[]);
void sortEmployees (Employees[]);
float getTotalSalary (Employees[]);
float getMediumSalary(float, int);
float getMaximunSalary(Employees[], float);
void printSalaryEmployees (Employees[]);

#endif // FUNCIONES_H_INCLUDED

