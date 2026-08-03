#include <stdio.h>

int buscaBinaria(int v[], int n, int alvo) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
       
        int meio = inicio + (fim - inicio) / 2;

        if (v[meio] == alvo) {
            return meio; 
        }
        
        if (v[meio] < alvo) {
            inicio = meio + 1; 
        } else {
            fim = meio - 1;    
        }
    }

    return -1;
}

int main() {
    int v[] = {1, 3, 5, 7, 9};
    int n = 5;
    int alvo = 5;

    int resultado = buscaBinaria(v, n, alvo);

    if (resultado != -1) {
        printf("Elemento %d encontrado no índice: %d\n", alvo, resultado);
    } else {
        printf("Elemento %d não encontrado no vetor.\n", alvo);
    }

    return 0;
}
