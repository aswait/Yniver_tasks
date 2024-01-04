#include <stdio.h>
#include <string.h>

#define DLWRD 80

int main() {
    char word[DLWRD];
    char c;
    int i, k;
    i = 0;
    k = 0;
    printf("Введите строку символов:\n");
    c = getchar();
    while (c != '\n') {
        if (c == ' ') {
            c = getchar();
        } else {
            ++k;
            do {
                word[i] = c;
                c = getchar();
                ++i;
            } while (c != ' ' && c != '\n');
            word[i] = '\0'; // Добавьте нулевой символ в конец строки
            if (strcmp(&word[i - 2], "а") == 0) { // Используйте strcmp для сравнения строк
                printf("%s\tпорядковый номер: %d\n", word, k);
            }
            for (int j = 0; j <= i; j++) {
                word[j] = ' ';
            }
            i = 0;
        }
    }
    return 0;
}
