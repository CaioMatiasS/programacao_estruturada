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
        int pali = 0;
        int cont = 0;

        for (int i = n; i > 0; i /= 10)
        {
            cont++;    
        }

        int nFor = n;
        for (int i = cont; i > 0; i--)
        {
            pali = (nFor % 10)+(pali*10);
            nFor /= 10;
        }

        if (pali == n)
        {
            printf("Verdadeiro.\n");
        }
        else
        {
            printf("Falso.\n");
        }
    }
    return 0;
}