#include <stdio.h>
#include <math.h>
#define A 0.1
#define B 3.0
#define H 0.5

double f(double X);

int main(void)
{
    double X;
    int i;
    for(i = 1, X = A; X <= B; X += H, i++) 
        printf("%d %.4f %.4f\n", i, X, f(X));
    return 0;
}

double f(double X) {
    return sin(X)/X;
}
