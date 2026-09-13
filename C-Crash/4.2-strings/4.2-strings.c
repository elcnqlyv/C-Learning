#include <stdio.h>
#include <string.h>

int main()
{
    printf("What is your name? ");
    char name[20]; // '\0' null terminator - end of string
    scanf("%19s", name); //decay to pointer so don't need '&'

    int letter = 0;
    while (name[letter] != '\0')
    {
        letter++;
    }
    
    printf("Size of name is %d\n", letter);

    printf("Size of name is %d\n", strlen(name));


    if (strcmp(name, "Elchin") == 0)
    {
        printf("You get access!\n");
    }
    
//    char copy[20] = name;
    char copy[20];
    strcpy(copy, name);

    printf("Copy of name is: %s\n", copy);

    char lastName[] = "Guliyev";
    strcat(copy, lastName);
    printf("Full name is: %s\n", copy);

    return 0;
}