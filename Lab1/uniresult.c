#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	int i, n,mid[12],status[12];
	float ca[12], ep[12],total[12];
	printf("\nNumber of modules enrolled: ");
	scanf("%d",&n);
	while(n<0||n>12){
	printf("\nPlease input again, number of modules should be between 1-12\n");
	scanf("%d",&n);
	}
	for(i=0;i<n;i++){
		printf("\nPlease input Module Id:");
		scanf("%d",&mid[i]);
		printf("\nModule %d:\nContinuous Assessment Marks:",mid[i]);
		scanf("%f",&ca[i]);

		while(ca[i]<0||ca[i]>50){
		        printf("\nPlease input again, number should be +ve & <=50\n");
        	scanf("%f",&ca[i]);
        }

		ca[i] = (ca[i]*100)/50;
		printf("Exam Marks:");
        scanf("%f",&ep[i]);

		while(ep[i]<0||ep[i]>100){
            printf("\nPlease input again, number should be +ve & <=100\n");
            scanf("%f",&ep[i]);
        }

		total[i] = ((ca[i] + ep[i])/2);
		if (ca[i]>40.0&&ep[i]>40.0){
			status[i] = 0; //passed
		}
		else if (((ca[i] > 80.0)&&(ep[i]>=35.0)&&(ep[i]<41.0))||((ep[i]>80.0)&&(ca[i]>=35.0)&&(ca[i]<41.0))){
			status[i] = 1; //pushed up
		}
		else{
			status[i] =2;//fail
		}
	}
	printf("\nResult is:\n");
	for (i=0;i<n;i++){
		printf("\nModule id: %d\nMarks(%%): \nContinuous Assessment: %.1f%%\nExam: %.1lf%%",mid[i],ca[i],ep[i]);
		if(status[i]==0){
			printf("\nResult: Passed.\n");
		}
		else if (status[i]==1){
			printf("\nResult: Pushed up.\n");
		}
		else{
			printf("\nResult: Failed.\n");
		}
	}
}
