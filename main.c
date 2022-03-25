#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int rows, cols;
    printf("Enter array size (rows and columns):");
    scanf("%d %d", &rows, &cols);
    int** array = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
        array[i] = (int*)malloc(cols * sizeof(int));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand();
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        free(array[i]);
    }
    return 0;
}