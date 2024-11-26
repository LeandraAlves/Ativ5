/*Leia uma string e converta todas as letras para maiúsculas ou minúsculas.*/

#include <stdio.h>
#include <ctype.h> // com essa funcao consigo vereficar se o caracter é maiusculo ou minusculo 
#include <string.h>

void converterMaiusculas(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = toupper(string[i]);
    }
}

void converterMinusculas(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = tolower(string[i]);
    }
}

int main() {
    char string[100];
    char opcao;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0'; 

    printf("A conversao da string sera para maiusculas ou minusculas? (M/m para maiusculas, N/n para minusculas): ");
    scanf(" %c", &opcao);  
    
    if (opcao == 'M' || opcao == 'm') {
        converterMaiusculas(string);
        printf("String em maiusculas: %s\n", string);
    } else if (opcao == 'N' || opcao == 'n') {
        converterMinusculas(string);
        printf("String em minusculas: %s\n", string);
    } else {
        printf("Opcao invalida!\n");
    }
}
