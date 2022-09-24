//WAP to print reverse digits



#include<stdio.h>
void main(){
	int x;
	int rem;
	
	printf("Enter number :");
	scanf("%d",&x);

	while(x!=0){
		rem=x%10;
		printf("%d\t",rem);
		x=x/10;
	}
}
