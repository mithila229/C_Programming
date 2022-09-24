// WAP to take i/p num from user and print number in reverse
// i/p=120653
// o/p=356021


#include<stdio.h>
void main(){
	int x;
	int rem;
	printf("Enter num: ");
	scanf("%d",&x);

	while(x>0){
		rem=x%10;
		printf("%d",rem);
		x=x/10;
	}
}
