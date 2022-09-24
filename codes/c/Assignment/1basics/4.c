//WAP to print even numbers 1-100

#include<stdio.h>
void main(){
	int x,y;
	printf("Enter 1st num: ");
	scanf("%d",&x);
	printf("Enter 2nd num: ");
	scanf("%d",&y);

	for(int i=x;i<=y;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}







