// WAP to print reverse from 100-1


#include<stdio.h>
void main(){
	int x,y;
	
	printf("Enter 1st num: ");
	scanf("%d",&x);

	printf("Enter 2nd num: ");
	scanf("%d",&y);

	for (int i=x;i>=y;i--){
		printf("%d\n",i);
	}
}
