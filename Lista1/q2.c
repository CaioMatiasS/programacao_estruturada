#include <stdio.h>

int main (void)
{
    while (1)
    {
        int n;
        
        printf("Digite um numero n:\n");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Programa finalizado");
            break;
        }

        int contPrimo = 0;

        for (int i = n + 1; i > n; i++)
        {
            int cont = 0;

            for (int j = 1; j <= i; j++)
            {
                if (i%j == 0)
                {
                    cont++;
                }
            }

            if (cont == 2)
            {
                printf("%d\n", i);
                contPrimo++;
            }
            if (contPrimo == 2)
            {
                break;
            }
        }
    }
    return 0;
}