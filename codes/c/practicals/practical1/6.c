//WAP to get 10 num from user and find sum and avg


#include<stdio.h>
void main(){
	int x, sum=0;
	float avg=0;
	
	for(int i=1;i<=10;i++){
		
	        printf("Enter number: ");
		scanf("%d",&x);
		sum=sum+x;
	}
	avg=(float)sum/10;
	printf("sum is %d\n",sum);
	
	printf("avg is %f\n",avg);
}
	

