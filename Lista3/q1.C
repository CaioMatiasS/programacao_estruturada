#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Definir o tamanho de n: \n");
    scanf("%d", &n);

    int *lista = (int*) malloc((n + 1) * sizeof(int));
    if (lista == NULL){
        printf("Erro: Memoria insuficiente");
        return 1;
    }

    lista[0] = 0;
    lista[1] = 0;
    for (int i = 2; i <= n; i++){
        lista[i] = 1;
    }

    for (int j = 2; j*j <= n; j++){
        if (lista[j] == 1){
            for (int i = j*j; i <= n; i += j){
                lista[i] = 0;
            }
        }
    }
    printf("\nNumeros primos até %d:\n", n);
    
    for (int i = 2; i <= n; i++) {
        if (lista[i] == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");

    free(lista);
    lista = NULL;

    return 0;
}