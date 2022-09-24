//fabonacci series


#include<stdio.h>
void main(){
	int end;
	printf("Enter end: ");
	scanf("%d",&end);
	int num1=0,num2=1,num3=0;

	while(num3<end){
		printf("%d ",num3);
		num1=num2;
		num2=num1;
		num3=num1+num2;
	}
}
