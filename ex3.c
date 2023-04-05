/******************************************************************************

Ryan dos Santos - AED2 - 2AN

*******************************************************************************/
#include <stdio.h>
#include <math.h>

double calcRaio(double raio)
{
    double pi = 3.14;
    return (pi * pow(raio, 2));
}


void main()
{
    double raio;
    printf("Digite o raio do circulo: \n");
    do {
        scanf("%lf", &raio);
    } while(raio < 0);
    printf("A area do circulo e: %lf", calcRaio(raio));

}


