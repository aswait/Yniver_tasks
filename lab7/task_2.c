#include <stdio.h>
#define ARRAY_SIZE 12

int max_value(int array[], int index_1, int index_2);

int main() {
    int x[ARRAY_SIZE] = {0};

    printf("Введите массив X[12]: \n");

    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &x[i]);
    }

    printf("Результат выражения: %d\n",
           max_value(x, 0, 5) - max_value(x, 6, 11));
}

int max_value(int array[], int index_1, int index_2) {
    int max;
    max = -999999;
    for (int i = index_1; i <= index_2; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}