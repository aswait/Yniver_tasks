#include <stdio.h>

int main() {
    int n, a, i, sum;

    printf("n = ");
    scanf("%d", &n);

    if (n > 0) {
        i = 1;
        sum = 0;
        while (i <= n) {
            scanf("%d", &a);
            if (a > 0)
                sum += a; 
            i++;
        }

        printf("doubled sum = %d\n", 2* sum);
    } else {
        printf("error\n");
    }

    return 0;
}