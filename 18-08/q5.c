/*
Implemente um programa que, infinitamente, receba como parâmetro de entrada um número n e retorne todos os primos menores ou iguais a n. Seu programa para quando n < 2.
*/

#include <stdio.h>

int main (void)
{
    while (1)
    {
        int n;
        printf("Digite um numero n:\n");
        scanf("%d", &n);

        if (n < 2)
        {
            printf("Programa finalizado.\n");
            break;
        }
        for (int i = 1; i <= n; i++)
        {
            int cont = 0;

            for(int j = 1; j <= i; j++)
            {
                if(i%j == 0)
                {
                    cont++;
                }
            }
            if(cont == 2)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}