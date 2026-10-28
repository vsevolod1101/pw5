#include <stdio.h>

double f(int n);

int main(void)
{
    int n = 0;
    while (n <= 0) // "цикл завершается при вводе N≤0", возможно имеется в виду: "цикл завершается при вводе N > 0". 
        scanf("%d", &n);
    double sum = 0.0;
    for(int i = 1; i <= n; i++) {
        sum += f(i);
        printf("%.6f\n", f(i));
    }
    printf("%.6f\n", sum);
    return 0;
}

double f(int i) {
    return 1.0/(double)(i*i*i+1); // "SUM: 0.833333 при N = 5", возможно имеется в виду: "SUM: 0.670147 при N = 5"
}
