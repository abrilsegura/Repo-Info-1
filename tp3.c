#include <stdio.h>

int main()
{   
    float peso, altura,bmi;
   
    do{
        printf("Ingrese su peso en kg:\n");
        scanf("%f",&peso);
        if (peso<0){
            printf("Error\n");
        }
    } while (peso<0);

    do{
        printf("Ingrese su altura en m:\n");
        scanf("%f",&altura);
        if (altura<0){
            printf("Error\n");
        }
    } while (altura<0);

    bmi= peso/(altura*altura);

     printf("Su índice de masa corporal es: %.2f\n", bmi);

    if(bmi<18.5){
        printf(" Índice| Condición\n <18.5 | Bajo peso\t#\n 18.5 a 24.9 | Normal\n 25.0 a 29.9 | Sobrepeso\n >=30| Obesidad\n");    
    }
    else if(bmi==18.5 || bmi<=24.9){
        printf(" Índice| Condición\n <18.5 | Bajo peso\n 18.5 a 24.9 | Normal\t#\n 25.0 a 29.9 | Sobrepeso\n >=30| Obesidad\n");
    }
    else if(bmi==25 || bmi<=29.9){
        printf(" Índice| Condición\n <18.5 | Bajo peso\n 18.5 a 24.9 | Normal\n 25.0 a 29.9 | Sobrepeso\t#\n >=30| Obesidad\n");
    }
    else {
        printf(" Índice| Condición\n <18.5 | Bajo peso\n 18.5 a 24.9 | Normal\n 25.0 a 29.9 | Sobrepeso\n >=30| Obesidad\t#\n");
    }

    return 0;
}
