#include <stdio.h>
#include <math.h>

double calc(double a, double b);

int main(void)
{
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2)
        printf("sin(%.4f) + cos(%.4f) = %.4f\n", a, b, calc(a, b));
    return 0;
}

double calc(double a, double b) {
    return sin(a) + cos(b); // неправильный вывод для примера при a = 4.0; b = 2.0: -0.3463
}