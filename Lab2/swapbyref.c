#include <stdio.h>

void swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;

    *num1= *num2;

    *num2= temp;

    printf("After swapping in swap function: \n");
    printf("num1 = %d \n", *num1);
    printf("num2 = %d \n\n", *num2);
}

int main()
{
    int num1, num2;

    printf("\n\nEnter num 1: ");
    scanf("%d", &num1);

    printf("Enter num 2: ");
    scanf("%d", &num2);
    
    printf("\nBefore swapping in main: \n");
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n\n", num2);

    swap(&num1, &num2);

    printf("After swapping in main: \n");
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n\n", num2);

    return 0;
}


