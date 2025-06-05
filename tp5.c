#include <stdio.h>
int main ()
{
int cantnotas, i, nota, notas;
int notamax=0;
int notamin=100;
float promedio;

do{
    printf("Ingrese la cantidad de notas:\n");
    scanf("%d", &cantnotas);
    if(cantnotas<0){
        printf("No se permiten numeros negativos, ingrese nuevamente");
    }
} while (cantnotas<0);


notas=0;
i= 0;
while (i<cantnotas){
    do{
        printf("Ingrese la calificación Numero(%d):\n",cantnotas-i);
        scanf("%d", &nota);
        if(nota<0 || nota>100){
            printf("Error ");
        } 
    } while (nota<0 || nota>100);

    notas+=nota;
    if(nota>notamax){
        notamax=nota;
    }
    if(nota<notamin){
        notamin=nota;
    }
    i++;
}

promedio= (float)notas/cantnotas;
printf("El promedio de las notas es: %.2f\n",promedio);
printf("La nota maxima es:%d\n", notamax);
printf("La nota minima es:%d\n", notamin);

return 0;
}


