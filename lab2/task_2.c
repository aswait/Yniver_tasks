#include <stdio.h>

int main() {
    int n, i, sum, exp;
    printf("n = ");
    scanf("%d", &n);

    if (n > 0) {
        i = 1;
        sum = 0;
        while (i <= n) {
            sum += i * i;
            i++;
        }

        exp = n * (n + 1) * (n * 2 + 1) / 6;

        printf("%d\n", sum);
        printf("%d\n", exp);
        printf("result: ");
        if (sum == exp) {
            printf("equal\n");
        } else {
            printf("unequal");
        }
    } else {
        printf("error\n");
    }
    return 0;
}