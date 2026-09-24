#include <stdio.h>
#include <string.h>

int cic(char *str1, char *str2){
    int lenstr1 = strlen(str1);
    int lenstr2 = strlen(str2);

    // transformar tudo em minusculo
    for(int i = 0; i < lenstr1; i++){
        if (str1[i] >= 'A' && str1[i] <= 'Z'){
            str1[i] = str1[i] + 32;
        }
    }
    for(int i = 0; i < lenstr2; i++){
        if (str2[i] >= 'A' && str2[i] <= 'Z'){
            str2[i] = str2[i] + 32;
        }
    }
    // conferir
    
    for(int i = 0; i < (lenstr1 - lenstr2); i++){
        int cont = 0;
        for (int j = i; j < lenstr2; j++){
            if (str1[i+j] == str2[j]){
                cont++;
            }
        }
        if (cont == lenstr2){
            return 1;
        }
    }
    return 0;
}

int main(){
    char texto1[100];
    char texto2[100];

    printf("Digite a palavra 1 e 2:\n");
    scanf("%s %s", texto1, texto2);

    if(cic(texto1, texto2)){
        printf("True");
    } else{
        printf("False");
    }
}