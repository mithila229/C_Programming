//WAP to check whether triangle is valid or invalid


#include <stdio.h>
void main(){
	int x,y,z;
	printf("Enter angle 1 ");
	scanf("%d",&x);
	printf("Enter angle 2 ");
	scanf("%d",&y);
	printf("Enter angle 3 ");
	scanf("%d",&z);

	if(x+y+z==180){
		printf("The triangle with angle %d %d & %d is valid\n",x,y,z);
	}else{
		printf("The triangle with angle %d %d & %d is invalid\n",x,y,z);
	}
}
