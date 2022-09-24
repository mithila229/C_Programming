//WAP to see given num is multiple of 3




#include<stdio.h>
void main(){
	int x;

	printf("Enter number: ");
	scanf("%d",&x);

	if(x%3==0){
		printf("%d is multiple of 3 ",x);
	}
	else{
		printf("%d is not multiple of 3\n ",x);
	}
}
