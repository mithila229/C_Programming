//WAP to print nums in a given range and their multiplicatives



#include<stdio.h>
void main(){
	int x,y;

	printf("Enter start: ");
	scanf("%d",&x);

	printf("Enter end: ");
	scanf("%d",&y);

	for(float i=x;i<=y;i++){
		float f=1/i;
		printf("%f=%f\n",i,f);
	}
}
