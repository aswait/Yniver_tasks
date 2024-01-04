#include <stdio.h>
#include <wchar.h>

#define DLWRD 80

int main() {
    wchar_t word[DLWRD];
    wchar_t c;
    int i, k;
    i = 0;
    k = 0;
    printf("Введите строку символов:\n");
    c = getwchar();
    while (c != L'\n') {
        if (c == L' ') {
            c = getwchar();
        } else {
            ++k;
            do {
                word[i] = c;
                c = getwchar();
                ++i;
            } while (c != L' ' && c != L'\n');
            if (word[i - 1] == L'а') {
                printf("%ls\tпорядковый номер: %d\n", word, k);
            }
            for (int j = 0; j <= i; j++) {
                word[j] = ' ';
            }
            i = 0;
        }
    }
    return 0;
}
