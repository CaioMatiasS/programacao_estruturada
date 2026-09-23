#include <stdio.h>

int main (void)
{
    while (1)
    {
        int n;
        printf("Digite um numero n:\n");
        scanf("%d", &n);

        if (n<0)
        {
            printf("Programa finalizado.\n");
            break;
        }

        int bin = 0;
        int multiplicador = 1;

        for (int i = n; i > 0; i /= 2)
        {
            int resto = i % 2;
            bin = bin + (resto * multiplicador);
            multiplicador *= 10;
        }
        
        printf("%d\n", bin);
    }
    return 0;
}