//WAP to multiply reminder of num


#include<stdio.h>
void main(){
	int a;
	int rem;
	printf("enter a: ");
	scanf("%d",&a);
        

	while(a>0){
		rem=a%10;
		printf("%d\n",rem*5);
		a=a/10;
	}
}
