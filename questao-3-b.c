#include <stdio.h>

int contarChar(char s[], int i, char c) {
    if (s[i] == '\0') {
        return 0;
    }

    if (s[i] == c) {
        return 1 + contarChar(s, i + 1, c);
    }
    else {
        return contarChar(s, i + 1, c);
    }
}

int main() {
    printf("%d\n", contarChar("banana", 0, 'a')); // 3
    return 0;
}
