#include <stdio.h>
#include "5.2-libraries.h"

int power(int input, int exponent)
{
    int total = 1;
    for (int i = 0; i < exponent; i++)
    {
        total *= input;
    }
             
    return total;
}

int recursivePower(int input, int exponent)
{
    if (exponent<1)
    {
        return 1;
    }
    
    return input * recursivePower(input, exponent-1);

}

void changeVal(int *input)
{

    *input = 900000;

}



int oldestValue(int ages[], int size)
{
    int largest = ages[0];
    for (int i = 1; i < size; i++)
    {
        if (ages[i]>largest)
        {
            largest = ages[i];
        }
        
    }
    return largest;

}

