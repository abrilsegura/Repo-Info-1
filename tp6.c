#include <stdio.h>
#include <math.h>
#define PI 3.1416

float calcularAreaRectangulo (float,float);
float calcularPerimetroRectangulo (float,float);
float calcularDiagonalRectangulo (float,float);
float calcularAreaCirculo (float);
float calcularPerimetroCirculo (float);

int main()
{
    int figura=0;
    float alturarec,baserec,radio;
    do{
    printf("Ingrese la figura que desea calcular (1: Rectangulo, 2: Circulo):\n");
    scanf("%d",&figura);
   
    if(figura==1){
        printf("Opcion Rectangulo seleccionada\n");
        printf("Ingrese la altura del rectangulo:\n");
        scanf("%f",&alturarec);
        printf("Ingrese la base del rectangulo:\n");
        scanf("%f",&baserec);
    }
    if(figura==2){
        printf("Opcion Circulo seleccionada\n");
        printf("Ingrese el radio del circulo:\n");
        scanf("%f",&radio);
    }
    if(figura!=1 && figura!=2){
        printf("Error\n");
    }

    }while (figura!=1 && figura!=2);

    if(figura==1){
        printf("El area del rectangulo es: %.2f\n",calcularAreaRectangulo(alturarec,baserec));
        printf("El perimetro del rectangulo es: %.2f\n",calcularPerimetroRectangulo(alturarec,baserec));
        printf("La diagonal del rectangulo es: %.2f\n" ,calcularDiagonalRectangulo(alturarec,baserec));
    }

    if(figura==2){
        printf("El area del circulo es: %.2f\n",calcularAreaCirculo(radio));
        printf("El perimetro del circulo es: %.2f\n",calcularPerimetroCirculo(radio));
    }
    return 0;
}

float calcularAreaRectangulo (float base ,float altura)
{
    float area; 
    area= base*altura;
    return area;
}

float calcularPerimetroRectangulo (float base ,float altura)
{
    float perimetro;
    perimetro= 2*(base+altura);
    return perimetro;
}
float calcularDiagonalRectangulo (float base ,float altura)
{
    float diagonal;
    diagonal=sqrt((altura*altura)+(base*base));
    return diagonal;
}
float calcularAreaCirculo (float radio)
{
    float areacirculo;
    areacirculo= PI*(radio*radio);
    return areacirculo;
}
float calcularPerimetroCirculo (float radio)
{
    float percirculo;
    percirculo=2*PI*radio;
    return percirculo;
}
