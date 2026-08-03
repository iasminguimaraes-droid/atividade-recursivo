#include <stdio.h>

int buscaBinariaRec(int v[], int ini, int fim, int alvo) {
    
    if (ini > fim) {
        return -1;
    }

    
    int meio = ini + (fim - ini) / 2;

    
    if (v[meio] == alvo) {
        return meio;
    }

    
    if (v[meio] > alvo) {
        return buscaBinariaRec(v, ini, meio - 1, alvo);
    }

    
    return buscaBinariaRec(v, meio + 1, fim, alvo);
}

int main() {
    int v[] = {1, 3, 5, 7, 9};
    int n = 5;
    int alvo = 5;

   
    int resultado = buscaBinariaRec(v, 0, n - 1, alvo);

    if (resultado != -1) {
        printf("Elemento %d encontrado no índice: %d\n", alvo, resultado);
    } else {
        printf("Elemento %d não encontrado no vetor.\n", alvo);
    }

    return 0;
}
