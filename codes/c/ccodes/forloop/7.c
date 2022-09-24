#include<stdio.h>
void main(){
	int x,y;
	printf("Enter 1st num: \n");
	scanf("%d",&x);
	printf("Enter 2nd num: \n");
	scanf("%d",&y);
	for (int i = x ; i > = y ; i--){
		printf("%d" , i);
	}
}
