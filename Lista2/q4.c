#include <stdio.h>

int main (void) 
{
    while (1)
    {
        int n;
        
        printf("Digite a quantidade de suspeitos:\n");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("Programa finalizado");
            break;
        }

        int lista[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &lista[i]);
        }
        printf("\n");

        for (int i = 0; i < n; i++)
        {
            int contMaior = 0;
            int contMenor = 0;

            for (int j = 0; j < n; j++)
            {
                if (lista[i] > lista[j])
                {
                    contMaior += 1;
                }
                if (lista[i] < lista[j])
                {
                    contMenor += 1;
                }
            }
            if ((contMenor == 1) && (contMaior == (n-2)))
            {
                printf("%d\n", i+1);
                break;
            }
        }
    }
    return 0;
}