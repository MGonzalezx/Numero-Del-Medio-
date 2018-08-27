#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int maximo;
    int minimo;
    int numeroDelMedio;

    printf("Ingrese primer numero: ");
    scanf("%d", &numeroUno);
    maximo=numeroUno;
    minimo=numeroUno;

    printf("Ingrese segundo numero: ");
    scanf("%d", &numeroDos);
    if(numeroDos<minimo)
    {
        minimo=numeroDos;
    }else{
        if(numeroDos>maximo)
            {
                maximo=numeroDos;
            }
        }
        printf("Ingrese tercer numero: ");
        scanf("%d", &numeroTres);
    if(numeroTres<minimo)
    {
        minimo=numeroTres;
    }else{
        if(numeroTres>maximo)
            {
                maximo=numeroTres;
            }
        }
    printf("El numero maximo es: %d\n", maximo);
    printf("El numero minimo es: %d\n", minimo);

    return 0;
}
