// WAP that takes num from 0 - 5 and print its spelling if num is greater than 5 then print enter no is greater than 5



#include<stdio.h>
void main(){
	int x;
	
	printf("Enter number: ");
	scanf("%d",&x);

	switch(x){
		case 1:
			printf("ONE\n");
			break;
		case 2:
			printf("TWO\n");
			break;
		case 3:
			printf("THREE\n");
			break;
		case 4:
			printf("FOUR\n");
			break;
		case 5:
			printf("FIVE\n");
			break;
		default:
			printf("%d is greater than 5\n",x);
	}
}
