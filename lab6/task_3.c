#include <stdio.h>
#include <string.h>
#define DLSTR 80

int main() {
    char string[DLSTR];
    char c;
    int i, j, flag;
    printf("Введите строку символов, длинной не более 80 символов\n");

    i = 0;
    j = 0;
    flag = 1;
    c = getchar();
    while (flag) {
        while (c != '\n') {
            string[i] = c;
            c = getchar();
            if (c == '.') {
                flag = 0;
                break;
            }
            i++;
        }
        i++;

        while (j < i) {
            c = string[j];
            if (c == 'e' || c == 'y' || c == 'u' || c == 'a' || c == 'o' ||
                c == 'i' || strcmp(&string[j], "а") == 0 ||
                strcmp(&string[j], "у") == 0 || strcmp(&string[i], "о") == 0 ||
                strcmp(&string[j], "е") == 0 || strcmp(&string[j], "ю") == 0 ||
                strcmp(&string[j], "и") == 0 || strcmp(&string[j], "ё") == 0 ||
                strcmp(&string[j], "ы") == 0 || strcmp(&string[j], "э") == 0 ||
                strcmp(&string[j], "я") == 0) {
                printf("¯");
            } else {
                printf(" ");
            }
            j++;
        }
        j++;
        printf("\n");
    }
}
