#include <stdio.h>
#include <stdbool.h>

int main()

{
    double balance = -5000;
    balance > 0 ? printf("You have money \n") : printf("No money yo \n");

    bool hasMoney;
    hasMoney = balance > 0 ? 1 : 0;

    printf("Has money? 1 is yes 0 is no: %d\n", hasMoney);

}