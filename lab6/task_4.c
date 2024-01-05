#include <stdio.h>
#define DLSTR 80

int main() {
    int array[10] = {0};
    char c;

    printf("Введите строку символов, длинной не более 80 символов\n");

    c = getchar();
    while (c != '.') {
        if (c == '0') {
            array[0]++;
        } else if (c == '1') {
            array[1]++;
        } else if (c == '2') {
            array[2]++;
        } else if (c == '3') {
            array[3]++;
        } else if (c == '4') {
            array[4]++;
        } else if (c == '5') {
            array[5]++;
        } else if (c == '6') {
            array[6]++;
        } else if (c == '7') {
            array[7]++;
        } else if (c == '8') {
            array[8]++;
        } else if (c == '9') {
            array[9]++;
        }
        c = getchar();
    }

    for (int i = 0; i < 10; i++) {
        printf("%d - %d\n", i, array[i]);
    }
}