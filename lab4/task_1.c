#include <stdio.h>

int main() {
    int n, a, i, k;
    
    printf("n = ");
    scanf("%d", &n);

    if (n > 0) {
        i = 1;
        k = 0;
        while(i <= n) {
            scanf("%d", &a);
            if (a > 0 && (a % 2) != 0 && i % 2 == 0)
                k++;
            i++;
        }
        printf("result: %d\n", k);
    } else {
        printf("error\n");
    }

    return 0;
}