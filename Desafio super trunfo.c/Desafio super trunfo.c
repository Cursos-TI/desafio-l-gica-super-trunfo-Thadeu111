#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int populacao;
    int area;
    int pib;
    int super_trunfo;
} Carta;

int main() {
    Carta carta1 = {"São Paulo", 12300000, 1521, 699000, 0};
    Carta carta2 = {"Rio de Janeiro", 6775561, 1200, 364000, 0};
    char atributo[20];
    
    printf("Escolha um atributo (População, Área, PIB): ");
    scanf("%s", atributo);
    
    int valor1 = 0, valor2 = 0;
    if (strcmp(atributo, "População") == 0) {
        valor1 = carta1.populacao;
        valor2 = carta2.populacao;
    } else if (strcmp(atributo, "Área") == 0) {
        valor1 = carta1.area;
        valor2 = carta2.area;
    } else if (strcmp(atributo, "PIB") == 0) {
        valor1 = carta1.pib;
        valor2 = carta2.pib;
    } else {
        printf("Atributo inválido!\n");
        return 1;
    }
    
    if (valor1 > valor2) {
        printf("%s venceu!\n", carta1.nome);
    } else {
        printf("%s venceu!\n", carta2.nome);
    }
    
    return 0;

}