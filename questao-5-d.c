#include <stdio.h>

void hanoi(int n, char ori, char dest, char aux) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", ori, dest);
        return;
    }

    hanoi(n - 1, ori, aux, dest);

    printf("Mover disco %d de %c para %c\n", n, ori, dest);

    hanoi(n - 1, aux, dest, ori);
}

int main() {
    int n = 3;

    hanoi(n, 'A', 'C', 'B');

    return 0;
}
