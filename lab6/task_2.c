#include <stdio.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);

    if (n <= 10 && n >= 0) {
        int array[n];
        int i;

        for (i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }

        int j, max, tmp;
        for (i = 0; i < n; i++) {
            max = i;
            for (j = i; j < n; j++) {
                if (array[j] > array[max]) {
                    max = j;
                }
            }
            tmp = array[i];
            array[i] = array[max];
            array[max] = tmp;
        }

        for (i = 0; i < n; i++) {
            printf("%d", array[i]);
            if (i != n - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    } else {
        printf("error\n");
    }
    return 0;
}