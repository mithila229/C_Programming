//WAP to print even nums in reverse of diff 1 and odd of diff 2. take i/p from user



#include<stdio.h>
void main(){
	int x;
	printf("Enter number: ");
	scanf("%d",&x);

	if(x%2==0){
		while(x>0){
			printf("%d\t",x);
			x--;
		}
	}else{
		while(x>0){
			printf("%d\t",x);
			x=x-2;
		}
	}
}




