#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 0, d = 0; // initilalize
    c = a - b; // -2
    printf("a = %d, b = %d, c = %d , d = %d\n", a, b, c, d);
    c = b - a; // 2
    printf("a = %d, b = %d, c = %d , d = %d\n", a, b, c, d);
    c = a / b ; d = b / a; // 0, 1
    printf("a = %d, b = %d, c = %d , d = %d\n", a, b, c, d);
    c = a % b ; d = b % a; // 5, 2
    printf("a = %d, b = %d, c = %d , d = %d\n", a, b, c, d);
    c = -a - b ; d = -b -a; // -12, -12
    printf("a = %d, b = %d, c = %d , d = %d\n", a, b, c, d);
    c = ++a + b++ ; d +=5; //c = 11, a = 6, b = 7 d = 5
    printf("a = %d, b = %d, c = %d , d = %d\n", a, b, c, d);
    return 0;
}