#include <stdio.h>
#include <stdlib.h>
int ingresar_numero();
double calcular_factorial(int numero);
int main()
{
    system("@cls||clear");
    int numero = ingresar_numero();
    double factorial = calcular_factorial(numero);
    printf("%d! = %F",numero,factorial);
    return 0;
}

double calcular_factorial(int numero){
    double resultado = 1.0;
    while (numero > 1)
    {
        resultado = resultado * numero;
        numero--;
    }
    return resultado;
}
int ingresar_numero()
{
    int n;
    do
    {
        printf("Ingrese un  numero naturales positivos:");
        scanf("%d", &n);
        getchar();
        if (n < 0)
        {
            printf("Numero negativo");
        }

    } while (n < 0);
    return n;
}
