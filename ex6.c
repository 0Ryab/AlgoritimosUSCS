/******************************************************************************

Ryan dos Santos - AED2 - 2AN

*******************************************************************************/
#include <stdio.h>

int num;

void drawStars()
{
    int i;
    for (i=0; i<num; i++)
    {
        printf("* ");
    }

}

void main()
{
    printf("Digite o numero de estrelas: ");
    scanf("%d", &num);
    drawStars(num);
}


