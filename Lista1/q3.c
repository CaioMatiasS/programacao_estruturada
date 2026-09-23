#include <stdio.h>

int main (void)
{
    while (1)
    {
        int h1;
        int m1;
        int h2;
        int m2;

        printf("Digite os horarios no formato: xx xx (hora que dormiu) xx xx (hora que acordou)\n");
        printf("Digite 0 0 0 0 para encerrar\n");
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        if ((h1 == 0) && (m1 == 0) && (h2 == 0) && (m2 == 0))
        {
            printf("Programa finalizado\n");
            break;
        }
        
        int hora1 = ((h1*60) + m1);
        int hora2 = ((h2*60) + m2);
        int min;

        if(hora2 >= hora1)
        {
            min = hora2 - hora1;
            printf("%d\n", min);
        }
        else
        {
            min = (24*60) - hora1 + hora2;
            printf("%d\n", min);
        }
    }
    return 0;
}