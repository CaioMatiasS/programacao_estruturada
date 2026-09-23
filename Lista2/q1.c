#include <stdio.h>

int teste (int n)
{
    int ultimoDois = n % 100;
    int primeiroDois = n;
    
    while (primeiroDois >= 100)
    {
        primeiroDois /= 10;
    }
    int soma = primeiroDois + ultimoDois;
    int somaQuadrado = soma * soma;

    int somaConcatenada = (primeiroDois*100) + ultimoDois;

    if (somaConcatenada == somaQuadrado)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main (void)
{
    while (1)
    {
        int n;
        printf("Digite um numero N:\n");
        scanf("%d", &n);

        if (n<0)
        {
            printf("Programa finalizado.\n");
            break;
        }
        printf("%d\n", teste(n));
    }    
    return 0;
}