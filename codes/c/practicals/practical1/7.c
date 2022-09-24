//WAP to chech whether given input is pythagorus triplet or not


#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter 1st value: ");
	scanf("%d",&x);
	printf("Enter 2nd value: ");
	scanf("%d",&y);
	printf("Enter 3rd value: ");
	scanf("%d",&z);
	
	if(x*x + y*y == z*z){
		printf("Pythagorus triplet\n");
	}else{
		printf("not pythagorus triplet\n");
	}
}
