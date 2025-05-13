//RM 563119 Lucas Ferrari Lima  
//RM 563462 Carlos Eduardo Pires Cervelli
#include <stdio.h>
#include <string.h>

void seqFibonacci();
void fatorial();
void verificarPalindromo();
void verificarSubstr();

int main() {
    int opcao;

    printf("===== MENU DE EXERCÍCIOS =====\n");
    printf("1 - Sequencia de Fibonacci\n");
    printf("2 - Fatoriais\n");
    printf("3 - Verificar um Palindromo\n");
    printf("4 - Verificar uma Substring\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            seqFibonacci();
            break;
        case 2:
            fatorial();
            break;
        case 3:
            verificarPalindromo();
            break;
        case 4:
            verificarSubstr();
            break;
        default:
            printf("Opção invalida!(Escolha uma de 1 a 4)\n");
    }

    return 0;
}
//Fibonnaci
void seqFibonacci() {
    int num;
    int fibonacci[50];

    printf("Digite a quantidade de numeros da sequencia de Fibonacci (1 a 50): ");
    scanf("%d", &num);

    if (num < 1 || num > 50) {
        printf("Valor invalido. (Escolha entre 1 e 50.)\n");
        return;
    }

    fibonacci[0] = 0;
    if (num > 1) fibonacci[1] = 1;

    for (int i = 2; i < num; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    printf("Sequencia de Fibonacci: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");
}

//Fatorial
void fatorial() {
    int num;
    unsigned long long fatorial[20];

    printf("Digite um numero inteiro de 1 a 20: ");
    scanf("%d", &num);

    if (num < 1 || num > 20) {
        printf("Valor invalido. (Escolha entre 1 e 20.)\n");
        return;
    }

    fatorial[0] = 1;
    for (int i = 1; i < num; i++) {
        fatorial[i] = fatorial[i-1] * (i + 1);
    }

    printf("Fatoriais:\n");
    for (int i = 0; i < num; i++) {
        printf("%d! = %llu\n", i + 1, fatorial[i]);
    }
}

//Palíndromo
void verificarPalindromo() {
    char palavra[101];
    int tam, sPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);

    for (int i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - 1 - i]) {
            sPalindromo = 0;
            break;
        }
    }

    if (sPalindromo) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra nao e um palindromo.\n");
    }
}

//Substring
void verificarSubstr() {
    char str1[101], str2[101];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2)) {
        printf("A segunda string esta contida na primeira.\n");
    } else {
        printf("A segunda string NAO esta contida na primeira.\n");
    }
}
