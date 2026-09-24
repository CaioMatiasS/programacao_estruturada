#include <stdio.h>
#include <string.h>

char * codifica(char *str){
    for(int i = 0; i <= strlen(str); i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = '?';
        }
    }
    return str;
}

int main(){
    char texto[100];
    
    printf("Digite o texto: \n");
    scanf("%s", &texto);

    printf("Texto original: %s\n", texto);
    char *texto2 = codifica(texto);
    printf("Texto codificado: %s\n", texto2);

    return 0;
}