#include <stdio.h>

#define ROWS 3
#define COLUMNS 4

int main()
{
    //int size = 8; 
    //int ages[] = {1, 4, 60, 43, 54, 3, 90, 21}; //staticly sized array
//
    //for (int i = 0; i < size; i++)
    //{
    //    printf("%d ", ages[i]);
    //}
    //
    //ages[4] = 65; //assignment for every single index
    //first element - index 0
    //0-9

//    int const rows = 3;
//    int const columns = 4; 

    int studentGrades[ROWS][COLUMNS] = {
                                    {1,3,4,6},     
                                    {3,2,4,5},
                                    {32,2,4,9},
    };

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }
    

    return 0;   
}