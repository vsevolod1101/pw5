#include <stdio.h>
#define SIZE 8


int main(void)
{
    double arr[SIZE] = {1.0, 1,0};
    printf("[%.2f, %.2f", arr[0], arr[1]);
    for(int i = 2; i < SIZE; i++) {
        arr[i] = arr[i - 2] + arr[i - 1];
        printf(", %.2f", arr[i]);
    }
    printf("]\n");

    printf("[%.2f", arr[0]);
    for(int i = 1; i < SIZE; i++){
        arr[i] = arr[i - 1] + arr[i];
        printf(", %.2f", arr[i]);
    }
    printf("]\n");
    return 0;
}
