#include <stdio.h>

int main()
{
    //initialization
    //comparison
    //update

//
//    int size = 10;
//    int ages [] = {12, 43, 545, 3, 4, 54, 6, 7, 87, 12};
//    int calculatedSize = sizeof(ages) / sizeof(ages[0]);
//

//    for (int i = 0; i < calculatedSize; i++)
//    {
//        printf("ages[i] = %d\n ", ages[i]);
//    }
//    
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = i; j >= 0; j--)
//        {
//            printf("%d ", j);
//        }
//        printf("\n");
//    }
  
    int i = 0;
    while (i<10)
    {
        printf("%d ", i);

        i++;
    }
    

    int input;
    do
    {
        printf("Choose a number between 0 and 9: ");
        scanf("%d", &input);
    } while (input < 0 || input > 9);
    

    return 0;

}