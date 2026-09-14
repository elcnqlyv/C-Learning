#include <stdio.h>
#include <stdlib.h> //required for the memory functions
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[30];
    int age;
    bool isVerified;
} user;

user *createUser(char name[], int age, bool isVerified)
{
    user *newUser = malloc(sizeof(user));
    strcpy(newUser->name, name);
    newUser->age = age;
    newUser->isVerified = isVerified;
    return newUser;
}

int main()
{
    int size;
    printf("How many int elements u need?: ");
    scanf("%d", &size);

    

    int *arr = malloc(size * sizeof(int));
    
    if (arr == 0)
    {
        printf("Invalid pointer. Error allocating memory\n");
        return -1;
    } else
    {
        printf("You are good to go\n");
    }

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Your array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] %d\n", i, arr[i]);
    }
    
    free(arr);
    user *me = createUser("Elchin Guliyev", 24, false);

    printf("Elchin is %d years old!\n", me->age);
    free(me);

    while (true)
    {
        malloc(300000000000);
    }
    
    return 0;
}