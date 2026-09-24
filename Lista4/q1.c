#include <stdio.h>

void shift_troca_string(char *str){
    int i = 0;
    while (str[i] != '\0'){
        char aux = str[i];

        if(aux >= 'a' && aux <= 'z'){
            if(aux == 'a'){
                str[i] = 'Z';
            }else{
                str[i] = (aux - 1) - 32;
            }

        } else if(aux >= 'A' && aux <= 'Z'){
                if(aux == 'A'){
                str[i] = 'z';
            }else{
                str[i] = (aux - 1) + 32;
            }
        } else {
            str[i] = '!';
        }
    
        i++;
    }
}

int main(){
    char texto[100];
    printf("Digite uma palavara: \n");
    scanf("%s", &texto);

    printf("Texto original: %s\n", texto);

    shift_troca_string(texto);

    printf("Texto alterado: %s\n", texto);
    return 0;
}