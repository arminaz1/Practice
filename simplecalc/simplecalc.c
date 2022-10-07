#include <stdio.h>

int main()
{
    char input;
    printf("what operation : ");
    scanf("%c", &input);

    int a = 0, b = 0, d = 0;

    printf("number 1 ");
    scanf("%d", &a);
    printf("number 2 ");
    scanf("%d", &b);
    
    switch (input)
    {
    case '+':
        d = a + b;
        printf("%d %c %d = %d", a, input, b, d);
        break;
    case '*':
        d = a * b;
        printf("%d %c %d = %d", a, input, b, d);
        break;

    default:
        break;
    }
    return 0;
}
// int main()
// {
//     int number;
//     scanf("input number:  %d", &number);
//     switch(number)
//     {
//     case 1:
//         printf("Monday");
//         break;
    
//     case 2:
//         printf("Tuesday");
//         break;

//     default:
//         break;
//     }
//     return 0;
// }