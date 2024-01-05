#include <stdio.h>
#define N 4
#define M 5

int main() {
    int array[N][M] = {0};
    printf("Введите матрицу 4x5:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int sum, max_sum, max_index;
    max_sum = -99999;
    for (int i = 0; i < N; i++) {
        sum = 0;
        for (int j = 0; j < M; j++) {
            sum += array[i][j];
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_index = i + 1;
        }
    }

    printf("Номер строки с максимальной суммой - %d\n", max_index);

    return 0;
}