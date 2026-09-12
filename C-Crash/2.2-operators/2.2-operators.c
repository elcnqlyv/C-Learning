#include <stdio.h>

int main()
{
    int c = 10 % 3; //modulus operator
    printf(" 10 %% 3 = %d\n", c);

    printf("Unary minus operator");
    int a = 10;

    int b = -a; //unary minus operator
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}