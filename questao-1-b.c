#include <stdio.h>


void constante(int v[]) {
    printf("O(1): %d\n", v[0]);
}


int buscaBinaria(int v[], int n, int chave) {
    int inicio = 0, fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (v[meio] == chave)
            return meio;
        else if (v[meio] < chave)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1;
}


void linear(int v[], int n) {
    printf("O(n): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}


void quadratica(int v[], int n) {
    printf("O(n²):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("(%d,%d) ", v[i], v[j]);
        }
        printf("\n");
    }
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;

    constante(v);

    int pos = buscaBinaria(v, n, 5);
    printf("O(log n): elemento 5 encontrado na posição %d\n", pos);

    linear(v, n);

    quadratica(v, n);

    return 0;
}
