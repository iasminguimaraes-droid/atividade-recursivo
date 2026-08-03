#include <stdio.h>
#include <string.h>

int ehPalindromo(char s[], int ini, int fim) {
    if (ini >= fim) {
        return 1;
    }

    if (s[ini] != s[fim]) {
        return 0;
    }

    return ehPalindromo(s, ini + 1, fim - 1);
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (ehPalindromo(palavra, 0, strlen(palavra) - 1))
        printf("A palavra e um palindromo\n");
    else
        printf("A palavra nao e um palindromo\n");

    return 0;
}
