//WAP to print divisor & count of divisore of the entered num
//i/p=15
//o/p
//the divisior are 1 3 5 15
//The count of divisor is 4
//Addition of divisor is 24



#include<stdio.h>
void main(){
	int x;
	int count=0;
        int sum=0;

	printf("Enter num: ");
	scanf("%d",&x);
        printf("the divisors are ");
	int i;
	for(i=1;i<=x;i++){
		if(x%i==0){
		
			printf("%d ",i);
			count=count+1;
			sum=sum+i;
		}
	}
	printf("\n the count of divisor is %d\n",count);
	printf("Addition of divisor is %d\n",sum);
}







