#include <stdio.h>

void main()
{
	int n;
	printf("\nInput number of patients attending doctor's office: ");
	scanf("%d",&n);
	while(n<0){
		printf("Error: Number of patients should be +ve, Input again: ");
		scanf("%d",&n);
	}
	int i, id;
	double wt,fbs, max[6];
	for (i=0;i<6;i++){
		max[i]=-1;
	}
	printf("\nPlease input patient id, weight(kg), and Fasted Blood Sugar(mmol/L) for each patient: \n\n");
	
	for(i=0;i<n;i++){
		printf("\nPatient %d- \n",i+1);
		printf("Patient Id: ");
		scanf("%d",&id);
		while(id<0){
			printf("Error:Patient id should be +ve, Input again: ");
			scanf("%d",&id);
		}

		printf("Weight(kg): ");
		scanf("%lf",&wt);
		while(wt<0){
			printf("Error:Patient weight should be +ve, Input again: ");
			scanf("%lf",&wt);
		}

		printf("FBS: ");
		scanf("%lf",&fbs);
		while(fbs<0){
			printf("\nError:Patient FBS should be +ve, Input again: ");
			scanf("%lf",&fbs);
		}

		if(wt>max[2]){
			max[1]=(float)id;
			max[2]=wt;
			max[3]=fbs;
			
		}
		if(fbs>max[6]){
			max[4]=(float)id;
			max[5]=wt;
			max[6]=fbs;
		}
	}
	if (max[1]==max[4]){
		printf("\nPatient with highest weight and FBS:\nID: %g\nWeight: %g kg\nFBS: %g mmol/g\n",max[1],max[2],max[3]);
	}
	else{
		printf("\nPatient with highest weight:\nID: %g\nWeight: %g kg\nFBS: %g mmol/g\n",max[1],max[2],max[3]);
		printf("\n\nPatient with highest FBS:\nID: %g\nWeight: %g kg\nFBS: %g mmol/g\n",max[4],max[5],max[6]);
	}
}