#include <stdio.h>
#include <math.h>
int main() {
    float m = 10;
    for (float x = 1; x <= 3; x += 1.3) {
        for (float y = 2; y <= 4; y += 1.5) {
            float res;
            res = fmax(2.72 * cos(3.14 * pow(x, 2)) - y, tan(cbrtf(x * pow(y, 2)) - 1 / cbrtf(x)));
            if (m > res) {
                m = res;
            }
            printf("x=%f, ", x);
            printf("y=%f, ", y);
            printf("u(x, y)=%f\n", res);
        }
    }
    printf("min=%f", m);
}