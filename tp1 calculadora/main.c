#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

main ()
{
    float numeroA;
    float numeroB;
    int operacion;
    int flagA = 0;
    int flagB = 0;

    do
    {
        system ("cls");

        printf ("|---------------------------------| \n");
        printf ("|-------MENU DE CALCULADORA-------| \n");
        printf ("|---------------------------------| \n");

        if (flagA == 0)
            printf ("1_ Ingresar primer operando \n");
        else
            printf ("1_ Ingresar primer operando (A = %.2f) \n", numeroA);
        if (flagB == 0)
            printf ("2_ Ingresar segundo operando \n");
        else
            printf ("2_ Ingresar segundo operando (B = %.2f) \n", numeroB);

        printf ("3_ Calcular la suma (A+B) \n");
        printf ("4_ Calcular la resta (A-B) \n");
        printf ("5_ Calcular la division (A/B) \n");
        printf ("6_ Calcular la multiplicacion (A*B) \n");
        printf ("7_ Calcular el factorial (A!) \n");
        printf ("8_ Calcular todas las operaciones \n");
        printf ("9_ Salir\n");

        printf ("|---------------------------------| \n");
        printf ("|---------------------------------| \n");
        printf ("|---------------------------------| \n");

        printf ("Ingrese una opcion: ");
        scanf ("%d", &operacion);

        switch (operacion)
        {
        case 1:
            numeroA = IngresarA ();
            flagA = 1;
            break;
        case 2:
            numeroB = IngresarB ();
            flagB = 1;
            break;
        case 3:
            if(flagA == 0 || flagB == 0)
            {
                printf ("No se puede realizar ya que no hay valores cargados. Asignele un valor a 1 y 2: \n");
            }
            else
            {
                Sumar (numeroA, numeroB);
            }
            break;
        case 4:
            if (flagA == 0 || flagB == 0)
            {
                printf ("No se pueden sumar los numeros ya que no hay valores cargados. Asignele un valor a 1 y 2: \n");
            }
            else
            {
                Restar (numeroA, numeroB);
            }
            break;
        case 5:
            if (flagA == 0 || flagB == 0)
            {
                printf ("No se pueden restar los numeros ya que no hay valores cargados. Asignele un valor a 1 y 2: \n");
            }
            else
            {
                Dividir (numeroA, numeroB);
            }
            break;
        case 6:
            if (flagA == 0 || flagB == 0)
            {
                printf ("No se pueden multiplicar los numeros ya que no hay valores cargados. Asignele un valor a 1 y 2: \n");
            }
            else
            {
                Multiplicar (numeroA, numeroB);
            }
            break;
        case 7:
            if (flagA == 0)
            {
                printf ("No se puede realizar el factorial de A ya que no hay un valor cargado. Asignele un valor a 1: \n");
            }
            else
            {
                Factorial (numeroA);
            }
            break;
        case 8:
            if (flagA == 0 || flagB == 0)
            {
                printf ("No se puede realizar todo ya que no hay valores cargados. Asignele un valor a 1 y 2: \n");
            }
            else
            {
                realizarTodo (numeroA, numeroB);
            }
            break;
        case 9:
            printf ("El programa se cerrara \n");
            return;
        default:
            printf ("Ha ingresado una opcion incorrecta \n");
            break;
        }
        system ("pause");
    }
    while (operacion != 9);
}
