#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    
    while (1){
        scanf("%d %d", &n, &m);

        if(n == 0 && m == 0){
            break;
        }

        int lista[m]; 
        int convite[n] = {0};

        for (int i = 0; i < m; i++){
            scanf("%d", &lista[i]);
        }
        printf("\n");

        for (int i = 0; i < m; i++){
            int aux = lista[i];
            convite[aux-1]++;
        }

        int cont = 0;
        for (int i = 0; i < n; i++){
            if (convite[i] > 1){
                cont += convite[i] - 1;
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}