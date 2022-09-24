//WAP to print countdown of days to sbmit assignments


#include<stdio.h>
void main(){
	int days;
	
	printf("Enter days: ");
	scanf("%d",&days);

	while(days>0){
		if (days==1){
			printf("%d day remaining\n",days);
		}else{
			printf("%d days remaining\n",days);
		}
		days--;
	}
	printf("%d due date\n",days);
}


