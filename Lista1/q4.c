#include <stdio.h>

int main (void)
{
    int n;
    printf("Digite o valor de N:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int f1;
        int f2;

        printf("Digite o valor de F1 e F2.\n");
        scanf("%d %d", &f1, &f2);

        int menor;

        if (f1 >= f2)
        {
            menor = f2;
        }
        if (f2 > f1)
        {
            menor = f1;
        }
        int mdc = 1;
        for (int j = 1; j <= menor; j++)
        {
            if ((f1%j==0) && (f2%j==0))
            {
                mdc = j;
            }
        }
        printf("%d\n", mdc);
    }
    return 0;
}