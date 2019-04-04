float IngresarA ()
{
    float A;
    printf ("Ingrese el primer operando: ");
    scanf ("%f", &A);
    return A;
}
float IngresarB ()
{
    float B;
    printf ("Ingrese el segundo operando: ");
    scanf ("%f", &B);
    return B;
}
void Sumar (float A, float B)
{
    float suma;
    suma = A + B;
    printf ("El resultado de la suma es: %.2f \n", suma);
}
void Restar (float A, float B)
{
    float resta = A - B;

    printf ("El resultado de la resta es: %.2f \n", resta);
}
void Dividir (float A, float B)
{
    if (B == 0)
        printf ("Error. el numero dividendo nunca puede ser 0 \n");

    else
    {
        float division = A / B;
        printf ("El resultado de la division es: %.2f \n", division);
    }
}
void Multiplicar (float A, float B)
{
    float multiplicacion = A * B;
    printf ("El resultado de la multiplicacion es: %.2f \n", multiplicacion);
}
void Factorial (float A)
{
    float factor = 1;
    int i;

    if (A < 0)
    {
        printf ("No se puede ingresar un numero negativo. Reingrese: \n");
    }
    else
    {
        for (i = 1; i <= A; i++)
        {
            factor = factor * i;
        }
        printf ("El resultado del factorial es: %.2f\n", factor);
    }
}
void realizarTodo (float A, float B)
{
    Sumar (A, B);
    Restar (A, B);
    Dividir (A, B);
    Multiplicar (A, B);
    Factorial (A);
}
