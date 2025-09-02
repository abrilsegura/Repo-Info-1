#include <stdio.h>
#define TAM 4

int main ()
{
    int codigobarra[TAM];
    float precio[TAM];
    float preciomayor=0,preciomenor=0;

    printf("Ingrese %d productos, se solicitara el codigo y precio\n", TAM);

        for(int i=0;i<TAM;i++){
            do{
                printf("Ingrese el codigo de barras(1-999999999): ");
                scanf("%d",&codigobarra[i]);

                if(codigobarra[i]<=0 || codigobarra[i]>999999999)
                    printf("Error, fuera de rango\n");
            } while (codigobarra[i]<=0 || codigobarra[i]>999999999);
           
            do{
                printf("Ingrese el precio: ");
                scanf("%f",&precio[i]);
                preciomayor=(precio[i]>preciomayor) ? precio[i]:preciomayor;
                if(precio[i]<0)
                    printf("Error, el precio no puede ser negativo\n");
            } while (precio[i]<0);
            }

    printf("Codigo\tPrecio\n");        
    for (int i=0;i<TAM;i++){
        printf("%d\t%.2f\n",codigobarra[i],precio[i]);
    }
    preciomenor=preciomayor;
    for(int i=0;i<TAM;i++){
        preciomenor=(precio[i]<preciomenor) ? precio[i]:preciomenor;
    }
    
    printf("El precio mas caro es:%.2f\n",preciomayor);
    printf("El precio mas barato es:%.2f\n",preciomenor);
    return 0;  
}

//Link al repositorio: https://github.com/abrilsegura/Repo-Info-1