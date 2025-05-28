#include <stdio.h>

int main()
{   
    float peso, altura;
    printf("Ingrese su peso en kg:\n");
    scanf("%f",&peso);

    printf("Ingrese su altura en m:\n");
    scanf("%f",&altura);

    float a = altura*altura;
    float bmi= peso/a;

    printf("Su índice de masa corporal es: %.2f\n",  bmi);
    printf(" Índice| Condición\n <18.5 | Bajo peso\n 18.5 a 24.9 | Normal\n 25.0 a 29.9 | Sobrepeso\n >=30| Obesidad\n");

    return 0;
}
