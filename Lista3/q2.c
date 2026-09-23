#include <stdio.h>
#include <stdlib.h>

int main(){
    while (1){
        int g;
        printf("Digite g o maior grau do polinomio: \n");
        scanf("%d", &g);

        if (g <= 0){
            printf("Programa finalizado.\n");
            break;
        }
        int v[g+1];

        for (int i = 0; i <= (g); i++){
            int x;
            printf("Digite o valor de x^%d: ", i);
            scanf("%d", &x);
            v[i] = x;
        }
        // Derivada
        int d[g];
        for (int i = 1; i <= g; i++){
            d[i-1] = v[i]*i;
        }
        // Integral 
        int integ[g+2];
        integ[0] = 0;
        for (int j = 0; j <= g; j++){
            integ[j+1] = v[j]/(j+1);
        }
        // Impressão da Derivada
        printf("\nDerivada D: { ");
        for (int i = 0; i < g; i++) {
            printf("%d", d[i]);
            if (i < g - 1) printf(", ");
        }
        printf(" }\n");

        // Impressão da Integral
        printf("Integral I: { ");
        for (int i = 0; i <= g + 1; i++) {
            printf("%d", integ[i]);
            if (i < g + 1) printf(", ");
        }
        printf(" }\n");
    }
    return 0;
}