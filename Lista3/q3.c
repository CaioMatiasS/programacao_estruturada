#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[100], b[100];

    printf("Digite o valor A: \n");
    scanf("%s", &a);

    printf("Digite o valor B: \n");
    scanf("%s", &b);

    if (strlen(a) != strlen(b)){
        printf("A e B nao sao permutacoes.\n");
        return 0;
    }

    int freqA[10] = {0};
    int freqB[10] = {0};

    for(int i = 0; i < strlen(a); i++){
        int dig = a[i] - '0';
        freqA[dig]++;
    }
    for(int i = 0; i < strlen(b); i++){
        int dig = b[i] - '0';
        freqB[dig]++;
    }

    int permutaon = 1;
    for(int i = 0; i <= 10; i++){
        if(freqA[i] != freqB[i]){
            permutaon = 0;
        }
    }

    if(permutaon){
        printf("A e B sao pemutacoes.\n");
    } else {
        printf("A e B nao sao permutacoes.\n");
    }

    return 0;
}