#include <stdio.h>

int main() {
    int n, sum;
    printf("n = ");
    scanf("%d", &n);

    if (n > 0) {
        sum = 0;
        while (n > 0) {
            sum += n % 10;
            n = n / 10;
        }
        printf("sum = %d\n", sum);
    } else {
        printf("error\n");
    }
}