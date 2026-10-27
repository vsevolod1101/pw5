#include <stdio.h>
#define HEIGHT 5
#define SYM 'L'

int main(void)
{
    for(int height = HEIGHT; height > 0; height--) {

        int spaces = height - 1;
        int syms = HEIGHT - spaces;

        for(; spaces > 0; spaces--)
            putchar(' ');
        for(; syms > 0; syms--)
            putchar(SYM);
        putchar('\n');

    }

    return 0;
}
