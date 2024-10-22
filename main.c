#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));
    if(ptr == 0)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter array elements\n");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Array elements are\n");
    for(int j = 0;j<5;j++)
    {
        printf("%d\n",ptr[j]);
    }
    free (ptr);

    return 0;
}
