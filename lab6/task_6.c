#include <stdio.h>

int main() {
    int n;
    printf("Введите N (размер матрицы NxN; n < 7):\n");
    scanf("%d", &n);
    
    if (n < 7 && n > 0) {
        int matrix[n][n];
        printf("Введите матрицу размером %dx%d:\n", n, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        int array[n];
        for (int i = 0; i < n; i++) {
            array[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] > 0) {
                    array[i]++;
                } 
            }
        }
        
        printf("Количество положительных элементов в каждой строке матрицы: \n");
        for (int i = 0; i < n; i++) {
            printf("%d - %d\n", i + 1, array[i]);
        }

    } else {
        printf("error\n");
    }
    return 0;
}