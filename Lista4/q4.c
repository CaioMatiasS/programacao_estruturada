#include <stdio.h>
#include <string.h>

void retira_fim_n(char *str, int n){
    int len = strlen(str);
    if (n > len){
        printf("Erro");
        return;
    }
    int i = 0;
    while (i < (len - n)){
        i++;
    }
    str[i] = '\0';
}

int main(){
        char texto[100];
    int n; 

    printf("Digite o texto: \n");
    scanf("%s %d", &texto, &n);

    printf("Texto original: %s\n", texto);
    retira_fim_n(texto, n);
    printf("Texto alterado: %s\n", texto);

    return 0;
}