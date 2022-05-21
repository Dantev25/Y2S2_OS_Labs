#include <stdio.h>

void main() 
{
  int n,num,max,i=1;
  printf("\nInput the number of values to find max from: ");
  scanf("%d",&n);
  while (n<0){
    printf("Error: Number should be greater than 0, input again: ");
    scanf("%d",&n);
  }
  printf("Input Numbers:\n%d. ",i);
  scanf("%d",&num);
  max = num;
  for(i=2;i<=n;i++){
    printf("%d. ",i);
    scanf("%d",&num);
    if (num>max){
      max = num;
    }
  }
  printf("\nLargest value out of n=%d numbers = %d\n",n,max);
}