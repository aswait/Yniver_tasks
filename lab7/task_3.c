#include <stdio.h>

int sorting_check(int array[], int size);
void array_input(int array[], int size);

int main() {
    int n;
    printf("Введите n - размер массива (n <= 10): \n");
    scanf("%d", &n);

    if (n <= 10) {
        int array_1[n], array_2[n];

        printf("Введите элементы первого массива: \n");
        array_input(array_1, n);

        printf("Введите элементы второго массива: \n");
        array_input(array_2, n);

        if (sorting_check(array_1, n)) {
            printf("Первый массив упорядочен по убыванию\n");
        } else {
            printf("Первый массив не упорядочен по убыванию\n");
        }

        if (sorting_check(array_2, n)) {
            printf("Второй массив уопрядочен по убыванию\n");
        } else {
            printf("Второй массив не упорядочен по убыванию\n");
        }

    } else {
        printf("error");
    }

    return 0;
}

int sorting_check(int array[], int size) {
    int flag;
    flag = 1;

    for (int i = 0; i < size - 1; i++) {
        if (array[i] < array[i + 1]) {
            flag = 0;
            break;
        }
    }
    return flag;
}

void array_input(int array[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}