//WAP to print sum of digits



#include<stdio.h>
void main(){
	int x;
	int rem;
	int sum=0;

	printf("Enter number: ");
	scanf("%d",&x);

	while(x>0){
		rem=x%10;
		sum=sum+rem;
		x=x/10;
	}
	printf("%d",sum);
}
