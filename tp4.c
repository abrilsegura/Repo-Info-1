#include <stdio.h>
int main ()
{
    int nota;
    printf("Ingrese su calificación:\n");
    scanf("%d", &nota);

    if (nota>= 90){
    printf("Calificación A");
    }
    else if(nota>=80){
        printf("Calificación B");
    }
    else if(nota>=70){
        printf("Calificación C");
    }
    else if(nota>=60){
        printf("Calificación D");
    }
    else{
        printf("Calificación F");
    }

    return 0; 
}