/*
Implemente um programa que, infinitamente, leia um número n e retorne o n-ésimo termo da sequência de Fibonacci,
sabendo-se que fib(0) = 1 e fib(1) = 1. Esse programa para quando n < 0;
*/

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
            printf("Programa finalizado\n");
            break;
        }

        int a = 0;
        int b = 1;
        int fib = a + b;

        for (int i = 2; i < n; i++)
        {
        
            a = b;
            b = fib;
            fib = a + b;

        }

        printf("O %d-esimo termo de fibonacci: %d\n", n, fib);

    }


    return 0;

}