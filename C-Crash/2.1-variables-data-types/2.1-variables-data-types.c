#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int a = 10;
    double b = 10.5;
    printf("%lu\n", sizeof(b)); //size of double is 8 bytes
    float c = 10.5;
    printf("%lu\n", sizeof(2)); //size of float is 4 bytes
    char d = 'a';
    char e[] = "char array"; //aka string
    bool f = false; //boolean data type

    int zero = .9999999;
    printf("%d\n", zero); //prints 0 because .9999999 is less than 1

    int slices = 17;
    int people = 2;

    double slicerPerPerson = (double)  slices / people; //integer division, result is 8.0
    printf("%lf\n", slicerPerPerson);


    double test1 = 25 / 2 * 2;
    double test2 = 25 / 2 * 2.0;
 
    double test3 = 25.0 / 2 * 2;
    double test4 = (double) 25 / 2 * 2.0;

    printf("%lf\n", test1); //prints 24.000000 because 25 / 2 is 12, then 12 * 2 is 24
    printf("%lf\n", test2); //prints 24.000000 because 25 / 2 is 12, then 12 * 2.0 is 24.0
    printf("%lf\n", test3); //prints 25.000000 because 25.0 / 2 is 12.5, then 12.5 * 2 is 25.0
    printf("%lf\n", test4); //prints 25.000000 because (double) 25 / 2 is 12.5, then 12.5 * 2.0 is 25.0

    return 0;

}