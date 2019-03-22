#include <stdio.h>
#include <stdlib.h>

int main()
{
maximoYminimo();
    return 0;
}
int maximoYminimo() {

int maximo;
int minimo;
int auxiliar;
int acumulador;
int i;

    printf("Ingrese un numero : ");
    scanf("%d",&auxiliar);
    acumulador = auxiliar;
    maximo = auxiliar;
    minimo = auxiliar;

    for(i=0;i<4;i++){

    printf("Ingrese un numero : ");
    scanf("%d",&auxiliar);
    acumulador = auxiliar + acumulador;

    if(auxiliar>maximo){
        maximo = auxiliar;
    }
    if (auxiliar<minimo){
        minimo = auxiliar;
    }

    }
    printf("El numero mayor es %i\n",maximo);
    printf("El numero menor es %i\n",minimo);
    printf("El promedio es %i\n", acumulador / 5);
    return 0;
}
