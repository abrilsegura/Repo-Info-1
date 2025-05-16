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

    if(bmi<18.5){
        printf("Bajo peso");
    }
    if(bmi>=18.5 && bmi<=24.9){
        printf("Normal");
    }
    if(bmi>=25.0 && bmi<=29.9){
        printf("Sobrepeso");
    }
    if (bmi>=30){
        printf("Obesidad");
    }

    return 0;
}