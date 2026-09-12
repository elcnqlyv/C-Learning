#include <stdio.h>

int main() {

    printf("Hello, World!\n");
    int x = 50; //declaration
    int y; //initialization
    y = 10;

    printf("%s World\n", "Hello");
    printf("The value of x is %d\n", x);
    printf("X: %d, Y: %d\n", x, y);

    printf("Enter the value of radius: ");
    int radius;
    scanf("%d", &radius); //address of operator (pointer)
    printf("The value of radius is %d\n", radius);
    
    char name[20]; //character array of 20 characters. '\0' takes one spot
    printf("Enter your name: ");
    scanf("%19s", name); //no need for & operator for character arrays
    printf("The name is %s\n", name);
    return 0;
}