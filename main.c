#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);


int main()
{
 pedirNumero();
 return 0;
}

int pedirNumero(void)
{
   int numero;
   int maximo;
   int contador=0;

    do{
      printf("Ingrese un numero : ");
      scanf("%d",&numero);
    if (contador==0){
      maximo=numero;
    }
    else if (numero>maximo){
      maximo=numero;
    }
      contador++;
    }
    while (numero!=-1);
    printf("El maximo es : %d\n",maximo);
    return 0;
    }


