#include <stdio.h>

int somaVetor(int v[], int n) {

   
    if (n == 0) {
        return 0;
    }

    
    return v[0] + somaVetor(v + 1, n - 1);
}

int main() {

    int vetor[] = {2, 4, 6, 8};

    int resultado = somaVetor(vetor, 4);

    printf("Soma = %d", resultado);

    return 0;
}







o caso-base é quando n == 0, ou seja, quando não existem mais elementos no vetor. 
  nesse momento a função retorna 0 e a recursão termina.
