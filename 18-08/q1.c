/*
(1) Implemente um programa que, infinitamente, leia um número n e a sequência de n elementos e
retorne o número de vezes em que essa sequência deixou de ser estritamente crescente.
Esse programa para quando n ≤ 0;
*/

#include <stdio.h>

int main(void)
{
    while (1)
    {
        int n;

        printf("Digite o tamanho da sequencia: \n");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("Programa finalizado.")
            break;
        }
        
        int cont = 0;
        int x;
        int xAnt;

        for (int i = 0; i < n; i++)
        {
            
            printf("Digite um valor x: ");
            scanf("%d", &x); 
            
            if (i > 0)
            {
                if (x <= xAnt)
                {
                    cont++;
                }
            }
            
            xAnt = x;
        }

        printf("A sequencia deixou de ser estritamente crescente %d vezes.\n", cont);
    }

    return 0;
}