#include <stdio.h>
//
//int square(int input)
//{
//    return input * input;
//}
//
//int cube (int input)
//{
//    int x = input * input * input;
//    return x;
//}
//
//int power(int input, int exponent)
//{
//    int total = 1;
//    for (int i = 0; i < exponent; i++)
//    {
//        total *= input;
//    }
//             
//    return total;
//}
//
//int recursivePower(int input, int exponent)
//{
//    if (exponent<1)
//    {
//        return 1;
//    }
//    
//    return input * recursivePower(input, exponent-1);
//
//}
//
//void changeVal(int *input)
//{
//
//    *input = 900000;
//
//}
//

//int main()
//{
//    int x = 5;
//    int xSquared = square(x);
//    
//    printf("%d\n", xSquared);
//    int xTo5 = power(x, 5);
//    printf("%d\n", xTo5);
//
//    int recursive = recursivePower(5, 5);
//    printf("%d\n", recursive);
//
//    changeVal(&x);
//    printf("%d\n", x);
//    return 0;
//}

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

int main ()
{   
    int size = 7;
    int ages[] = {1, 4, 53, 23, 23, 9, 52};

    printf("%d\n", oldestValue(ages, size));
    return 0;
}