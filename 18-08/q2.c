/*
Implemente um programa que, infinitamente, leia dois números x e y e retorne o MDC entre eles. Esse programa para quando x,y ≤ 1;
*/

#include <stdio.h>

int main (void)
{

    while(1)
    {
    
        int x;
        int y;
        int menor;

        printf("Digite o valor de x e y:\n");
        scanf("%d%d", &x, &y);

        if ((x <= 1) && (y <= 1))
            {
                printf("Programa finalizado");
                break;
            }

        if (x>=y)
        {
            menor = y;
        }
        if (y>x)
        {
            menor = x;
        }

        int mdc = 1;

        for (int i = 2; i <= menor; i++)
        {
            if ((x%i == 0) && (y%i == 0))
            {
                mdc = i;
            }
        }

        printf("O mdc de x e y e %d\n", mdc);

    }

    return 0;

}