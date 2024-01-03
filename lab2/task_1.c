#include <stdio.h>
#include <math.h>
#define E 1e-5


int main() {
    float x, y, a;
    int n;

    printf("x = ");
    scanf("%f", &x);

    if (fabs(x) <= 1) {
        y = 0;
        a = x;
        n = 1;

        while (fabs(a) >= E) {
            y += a;
            n += 2;
            a = -a * x * x * (n - 2) / n;
        }

        printf("y = %f\n", y);
        printf("arctg = %f\n", atan(x));

    } else {
        printf("error\n");
    }
    return 0;
}
