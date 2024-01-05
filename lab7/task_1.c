#include <stdio.h>
#define DLSTR 80

void input_string(char string[]);
int repetition_rate_determination(char sym, char string[]);

int main() {
    char string_1[DLSTR];
    char string_2[DLSTR];

    printf("Введите строку №1: \n");
    input_string(string_1);

    printf("Введите строку №2: \n");
    input_string(string_2);

    char sym;
    printf("Введите символ, который нужно найти:\n");
    scanf("%c", &sym);

    printf("Число вхождений символа \"%c\" в первой строке - %d\n", sym,
           repetition_rate_determination(sym, string_1));

    printf("Число вхождений символа \"%c\" во второй строке - %d\n", sym,
           repetition_rate_determination(sym, string_2));

    return 0;
}

void input_string(char string[]) {
    int i;
    char c;

    i = 0;
    c = getchar();
    while (i <= DLSTR && c != '\n') {
        string[i] = c;
        c = getchar();
        i++;
    }
    string[i] = '\0';
}

int repetition_rate_determination(char sym, char string[]) {
    int i, counter;
    char c;

    i = 0;
    counter = 0;
    c = string[i];

    while (c != '\0') {
        if (c == sym)
            counter++;
        i++;
        c = string[i];
    }

    return counter;
}