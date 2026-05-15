#include <stdio.h>

int main() {
    char senha[9];
    int i;

    printf("Digite uma que contenha 8 digitos: ");
    scanf("%s", senha);
    
  
    for(i = 0; senha[i] != '\0'; i++);
    
   
    if(i == 8) {
        printf("Senha valida\n");
    } else {
        printf("Senha invalida! Tem %d digitos\n", i);
    }
    
    return 0;
}
