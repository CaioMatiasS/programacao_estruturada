/*
Implemente um programa que, infinitamente, leia um número n e retorne todos os seus divisores.
Esse programa para quando n < 2;
*/

#include <stdio.h>

int main(void)
{

    while (1) 
    {
        int n;

        printf("Digite um numero n: \n");
        scanf("%d", &n);

        if (n < 2)
        {
            printf("Programa finalizado");
            break;
        }

        for (int i = 1; i <= n; i++)
        {
            if (n%i == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}